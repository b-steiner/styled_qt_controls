/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the styled_qt_controls library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_window.q.hpp"

#include "../util/os/icon_loader.hpp"
#include "../util/style_loader.hpp"
#include <WinUser.h>

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

QHash<HWND, styled_window*> styled_window::m_all_windows;
QHash<QWidget*, styled_window*> styled_window::m_widget_to_window;

styled_window::styled_window(QString title, styled_window* parent, window_type type, window_flags initial_flags) : m_hInstance(GetModuleHandle(NULL)), m_hwnd(0),
	m_flags(initial_flags), m_type(type), m_title(title), m_parent(parent), m_part_window_widget(nullptr), m_internal_flags(internal_flags::none)
{
	WNDCLASSEX wc = { 0 };
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;

	if (type == window_type::dialog)
		wc.style |= CS_DROPSHADOW;

	wc.hInstance = m_hInstance;
	wc.lpfnWndProc = wnd_prc;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	if (type == window_type::dialog)
		wc.lpszClassName = L"WndDlgCls";
	else
		wc.lpszClassName = L"WndCls";
	wc.hbrBackground = CreateSolidBrush(RGB(255, 250, 255));
	wc.hCursor = LoadCursor(m_hInstance, IDC_ARROW);
	RegisterClassEx(&wc);

	if (FAILED(RegisterClassEx(&wc)))
	{
		qFatal("Failed to register window class");
		exit(-1);
	}

	DWORD style = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_MAXIMIZEBOX | WS_THICKFRAME | WS_CLIPCHILDREN;

	DWORD exstyle = WS_EX_LAYERED;

	if (flag_contains(m_flags, window_flags::show_on_taskbar))
		exstyle |= WS_EX_APPWINDOW;
	else
		exstyle |= WS_EX_TOOLWINDOW;

	wchar_t* ctitle = new wchar_t[title.length() + 1];
	title.toWCharArray(ctitle);
	ctitle[title.length()] = '\0';

	if (type == window_type::dialog)
		m_hwnd = CreateWindowEx(exstyle, L"WndDlgCls", ctitle, style, CW_USEDEFAULT, CW_USEDEFAULT, 1280, 768, 0, 0, m_hInstance, nullptr);
	else
		m_hwnd = CreateWindowEx(exstyle, L"WndCls", ctitle, style, CW_USEDEFAULT, CW_USEDEFAULT, 1280, 768, 0, 0, m_hInstance, nullptr);
	SetLayeredWindowAttributes(m_hwnd, RGB(255, 250, 255), 255, LWA_COLORKEY);

	delete[] ctitle;

	if (!m_hwnd)
	{
		qFatal("couldn't create window because of reasons");
		exit(-1);
	}

	SetWindowLongPtr(m_hwnd, GWLP_USERDATA, reinterpret_cast<LONG_PTR>(this));

	if (parent != nullptr)
		SetWindowLongPtr(m_hwnd, GWLP_HWNDPARENT, reinterpret_cast<LONG_PTR>(parent->m_hwnd));

	//Create overlaying widget
	initialize_widget();
	
	SetWindowPos(m_hwnd, 0, 0, 0, 0, 0, SWP_FRAMECHANGED | SWP_NOMOVE | SWP_NOSIZE);

	m_all_windows.insert(m_hwnd, this);
	m_widget_to_window.insert(m_part_window_widget, this);
}
styled_window::~styled_window()
{
	m_widget_to_window.remove(m_part_window_widget);
	m_all_windows.remove(m_hwnd);
	SetWindowLongPtr(this->m_hwnd, GWLP_USERDATA, 0);
}

LRESULT CALLBACK styled_window::wnd_prc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	styled_window* window = (styled_window*)GetWindowLongPtr(hWnd, GWLP_USERDATA);

	if (window != nullptr)
	{
		switch (message)
		{
		case WM_DESTROY:
			emit window->closed();
			delete window->m_part_window_widget;

			if (flag_contains(window->flags(), window_flags::exit_on_close))
			{
				PostQuitMessage(0);
			}
			else if (flag_contains(window->flags(), window_flags::delete_on_close))
			{				
				delete window;
			}

			break;
		case WM_CLOSE:
		{
			bool can_close = true;
			emit window->closing(can_close);
			if (can_close)
			{
				if (window->m_parent != nullptr)
					SetFocus(window->m_parent->m_hwnd);
			}
			else
			{
				return 0;
			}
			break;
		}
		case WM_SHOWWINDOW:
		{
			if (wParam == TRUE)
			{
				window->geometry(window->geometry());
			}
			return 0;
		}
		case WM_NCCALCSIZE:
		{
			return 0;
		}
		case WM_EXITSIZEMOVE:
			if (flag_contains(window->flags(), window_flags::frame_on_stop_move))
			{
				auto before_pos = window->m_client_widget->mapToGlobal(QPoint(0, 0));

				window->flags(window->flags() & (~window_flags::frameless) & (~window_flags::frame_on_stop_move));
				//Correct position
				auto geom = window->geometry();
				auto offset = window->m_client_widget->mapToGlobal(QPoint(0, 0)) - before_pos;
				window->geometry(geom.x() - offset.x(), geom.y() - offset.y(), geom.width(), geom.height());
			}
			emit window->move_ended();
			break;
		case WM_MOVE:
		{
			emit window->moved();
		}
			break;
		case WM_SIZE:
		{
				RECT rect;
				GetClientRect(window->m_hwnd, &rect);

				WINDOWPLACEMENT wp;
				wp.length = sizeof(WINDOWPLACEMENT);
				GetWindowPlacement(hWnd, &wp);

				if (window->m_part_window_widget != nullptr)
				{
					if (wp.showCmd == SW_MAXIMIZE)
					{
						window->m_part_window_widget->setGeometry(8, 8, rect.right - 16, rect.bottom - 16);

						if (window->m_type == window_type::normal && flag_contains(window->flags(), window_flags::show_maximize))
						{
							window->m_part_maximize_button->setVisible(false);
							window->m_part_restore_button->setVisible(true);
							window->m_part_maximize_button->setAttribute(Qt::WA_UnderMouse, false);
						}

						for (auto w : window->m_border_widgets)
							w->setVisible(false);
					}
					else
					{
						window->m_part_window_widget->setGeometry(0, 0, rect.right, rect.bottom);

						if (window->m_type == window_type::normal && flag_contains(window->flags(), window_flags::show_maximize))
						{
							window->m_part_maximize_button->setVisible(true);
							window->m_part_restore_button->setVisible(false);
							window->m_part_restore_button->setAttribute(Qt::WA_UnderMouse, false);
						}

						for (auto w : window->m_border_widgets)
							w->setVisible(!flag_contains(window->flags(), window_flags::frameless));
					}
				}
			
			break;
		}
		case WM_GETMINMAXINFO:
		{
			MINMAXINFO* mmi = (MINMAXINFO*)lParam;
			mmi->ptMinTrackSize.x = window->m_part_window_widget->minimumSizeHint().width();
			mmi->ptMinTrackSize.y = window->m_part_window_widget->minimumSizeHint().height();
			mmi->ptMaxTrackSize.x = window->m_part_window_widget->maximumSize().width();
			mmi->ptMaxTrackSize.y = window->m_part_window_widget->maximumSize().height();
			return 0;
		}
		case WM_SYSCOMMAND:
		{
			qDebug() << "Here" << (wParam & 0xFFF0);
		}

		}
	}

	auto result = DefWindowProc(hWnd, message, wParam, lParam);
	return result;
}


void styled_window::initialize_widget()
{
	m_part_window_widget = new styled_frame();
	m_part_window_widget->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
	m_part_window_widget->installEventFilter(this);
	m_part_window_widget->setObjectName("part_window_widget");
	style_loader loader(":/styled_window/styled_window.qss");
	loader.append_file(":/styled_window/default_menu_style.qss");
	loader.append_file(":/styled_window/default_styles.qss");
	loader.append_file(":/styled_window/default_view_style.qss");
	loader.append_file(":/styled_controls/styled_collapse_widget.qss");
	loader.append_file(":/styled_controls/clearable_line_edit.qss");
	m_part_window_widget->setStyleSheet(loader.style_string());

	SetWindowLong((HWND)m_part_window_widget->winId(), GWL_STYLE, WS_CHILD | WS_CLIPCHILDREN | WS_CLIPSIBLINGS);
	QWindow* thisWindow = m_part_window_widget->windowHandle();
	thisWindow->setProperty("_q_embedded_native_parent_handle", (WId)m_hwnd);
	HWND h = static_cast<HWND>(QGuiApplication::platformNativeInterface()->nativeResourceForWindow("handle", thisWindow));
	SetParent(h, m_hwnd);
	thisWindow->setFlags(Qt::FramelessWindowHint);

	QEvent e(QEvent::EmbeddingControl);
	QApplication::sendEvent(this, &e);

	//Overal layout
	styled_widget* part_titlebar_widget = new styled_widget();
	part_titlebar_widget->setObjectName("part_titlebar_widget");
	part_titlebar_widget->setFixedHeight(32);
	QObject::connect(part_titlebar_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(titlebar_mouse_pressed(QMouseEvent*)), Qt::QueuedConnection);
	QObject::connect(part_titlebar_widget, SIGNAL(mouseDoubleClick(QMouseEvent*)), this, SLOT(titlebar_mouse_doubleclick(QMouseEvent*)));

	styled_widget* part_nw_widget = new styled_widget();
	part_nw_widget->setFixedWidth(4);
	part_nw_widget->setFixedHeight(4);
	part_nw_widget->setStyleSheet("background: solid transparent");
	styled_widget* part_w_widget = new styled_widget();
	part_w_widget->setFixedWidth(4);
	part_w_widget->setStyleSheet("background: solid transparent");
	styled_widget* part_sw_widget = new styled_widget();
	part_sw_widget->setFixedWidth(4);
	part_sw_widget->setFixedHeight(4);
	part_sw_widget->setStyleSheet("background: solid transparent");
	
	styled_widget* part_s_widget = new styled_widget();
	part_s_widget->setFixedHeight(4);
	part_s_widget->setStyleSheet("background: solid transparent");

	styled_widget* part_ne_widget = new styled_widget();
	part_ne_widget->setFixedWidth(4);
	part_ne_widget->setFixedHeight(4);
	part_ne_widget->setStyleSheet("background: solid transparent");
	styled_widget* part_e_widget = new styled_widget();
	part_e_widget->setFixedWidth(4);
	part_e_widget->setStyleSheet("background: solid transparent");
	styled_widget* part_se_widget = new styled_widget();
	part_se_widget->setFixedWidth(4);
	part_se_widget->setFixedHeight(4);
	part_se_widget->setStyleSheet("background: solid transparent");
	

	if (flag_contains(flags(), window_flags::resizable))
	{
		part_nw_widget->setCursor(Qt::SizeFDiagCursor);
		QObject::connect(part_nw_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_nw_mouse_pressed(QMouseEvent*)));
		part_w_widget->setCursor(Qt::SizeHorCursor);
		QObject::connect(part_w_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_w_mouse_pressed(QMouseEvent*)));
		part_sw_widget->setCursor(Qt::SizeBDiagCursor);
		QObject::connect(part_sw_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_sw_mouse_pressed(QMouseEvent*)));
		part_s_widget->setCursor(Qt::SizeVerCursor);
		QObject::connect(part_s_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_s_mouse_pressed(QMouseEvent*)));
		part_ne_widget->setCursor(Qt::SizeBDiagCursor);
		QObject::connect(part_ne_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_ne_mouse_pressed(QMouseEvent*)));
		part_e_widget->setCursor(Qt::SizeHorCursor);
		QObject::connect(part_e_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_e_mouse_pressed(QMouseEvent*)));
		part_se_widget->setCursor(Qt::SizeFDiagCursor);
		QObject::connect(part_se_widget, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(border_se_mouse_pressed(QMouseEvent*)));
	}

	m_client_widget = new styled_widget();
	m_client_widget->setObjectName("part_client_widget");

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	layout->setSpacing(0);
	layout->setColumnStretch(1, 1);
	layout->setRowStretch(2, 1);

	layout->addWidget(m_client_widget, 2, 1);

	layout->addWidget(part_nw_widget, 0, 0);
	layout->addWidget(part_titlebar_widget, 0, 1, 2, 1);
	layout->addWidget(part_ne_widget, 0, 2);

	layout->addWidget(part_w_widget, 1, 0, 2, 1);
	layout->addWidget(part_e_widget, 1, 2, 2, 1);

	layout->addWidget(part_sw_widget, 3, 0);
	layout->addWidget(part_s_widget, 3, 1);
	layout->addWidget(part_se_widget, 3, 2);

	m_part_window_widget->setLayout(layout);

	m_border_widgets.push_back(part_nw_widget);
	m_border_widgets.push_back(part_sw_widget);
	m_border_widgets.push_back(part_w_widget);
	m_border_widgets.push_back(part_ne_widget);
	m_border_widgets.push_back(part_se_widget);
	m_border_widgets.push_back(part_e_widget);
	m_border_widgets.push_back(part_s_widget);

	//Titlebar layout

	m_titlebar_layout = new QGridLayout();
	m_titlebar_layout->setContentsMargins(0, 0, 0, 0);
	m_titlebar_layout->setSpacing(0);
	m_titlebar_layout->setColumnStretch(4, 1);

	m_part_icon = new styled_label("Title");
	m_part_icon->setObjectName("part_icon");
	m_part_icon->setFixedSize(20, 20);
	m_part_icon->setVisible(false);
	QObject::connect(m_part_icon, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(icon_mousePressed(QMouseEvent*)), Qt::QueuedConnection);
		
	if (m_type == window_type::normal)
	{
		QPushButton* part_minimize_button = new QPushButton();
		part_minimize_button->setObjectName("part_minimize_button");
		part_minimize_button->setFixedSize(27, 20);
		part_minimize_button->setFocusPolicy(Qt::NoFocus);
		QObject::connect(part_minimize_button, SIGNAL(clicked()), this, SLOT(minimize_button_clicked()));
		m_titlebar_layout->addWidget(part_minimize_button, 0, 5, Qt::AlignTop);

		if (flag_contains(flags(), window_flags::show_maximize))
		{
			m_part_maximize_button = new QPushButton();
			m_part_maximize_button->setObjectName("part_maximize_button");
			m_part_maximize_button->setFixedSize(28, 20);
			m_part_maximize_button->setFocusPolicy(Qt::NoFocus);
			QObject::connect(m_part_maximize_button, SIGNAL(clicked()), this, SLOT(maximize_button_clicked()));
			m_titlebar_layout->addWidget(m_part_maximize_button, 0, 6, Qt::AlignTop);

			m_part_restore_button = new QPushButton();
			m_part_restore_button->setObjectName("part_restore_button");
			m_part_restore_button->setFixedSize(28, 20);
			m_part_restore_button->setFocusPolicy(Qt::NoFocus);
			m_part_restore_button->setVisible(false);
			QObject::connect(m_part_restore_button, SIGNAL(clicked()), this, SLOT(restore_button_clicked()));
			m_titlebar_layout->addWidget(m_part_restore_button, 0, 6, Qt::AlignTop);
		}

		QPushButton* part_close_button = new QPushButton();
		part_close_button->setObjectName("part_close_button");
		part_close_button->setFixedSize(27, 20);
		part_close_button->setFocusPolicy(Qt::NoFocus);
		QObject::connect(part_close_button, SIGNAL(clicked()), this, SLOT(close_button_clicked()));
		m_titlebar_layout->addWidget(part_close_button, 0, 7, Qt::AlignTop);
	}
	else if (m_type == window_type::dialog)
	{
		QPushButton* part_close_button = new QPushButton();
		part_close_button->setObjectName("part_dialog_close_button");
		part_close_button->setFixedSize(28, 20);
		part_close_button->setFocusPolicy(Qt::NoFocus);
		QObject::connect(part_close_button, SIGNAL(clicked()), this, SLOT(close_button_clicked()));
		m_titlebar_layout->addWidget(part_close_button, 0, 7, Qt::AlignTop);

		QLabel* part_title_label = new QLabel(m_title);
		part_title_label->setObjectName("part_title_label");
		m_titlebar_layout->addWidget(part_title_label, 0, 4, Qt::AlignVCenter | Qt::AlignHCenter);
	}

	m_menubar = new QMenuBar();

	m_titlebar_layout->addWidget(m_part_icon, 0, 0, Qt::AlignVCenter);
	m_titlebar_layout->setColumnMinimumWidth(1, 0);
	m_titlebar_layout->addWidget(m_menubar, 0, 2, Qt::AlignVCenter);
	part_titlebar_widget->setLayout(m_titlebar_layout);
}

void styled_window::show()
{
	ShowWindow(m_hwnd, SW_SHOW);
	m_part_window_widget->show();
	this->focus();
}
void styled_window::hide()
{
	ShowWindow(m_hwnd, SW_HIDE);
}
void styled_window::close()
{
	PostMessage(m_hwnd, WM_CLOSE, 0, 0);
}

void styled_window::enable()
{
	EnableWindow(m_hwnd, TRUE);
}
void styled_window::disable()
{
	EnableWindow(m_hwnd, FALSE);
}
void styled_window::focus()
{
	SetFocus(m_hwnd);
	this->m_part_window_widget->setFocus();
}

styled_widget* styled_window::client_widget() const
{
	return m_client_widget;
}

settings_group* styled_window::save_settings()
{
	settings_group* group = new settings_group("styled_window");

	auto rect = geometry();
	group->values().insert("xpos", QString::number(rect.x()));
	group->values().insert("ypos", QString::number(rect.y()));
	group->values().insert("width", QString::number(rect.width()));
	group->values().insert("height", QString::number(rect.height()));

	WINDOWPLACEMENT wp;
	wp.length = sizeof(WINDOWPLACEMENT);
	GetWindowPlacement(m_hwnd, &wp);

	if (wp.showCmd == SW_MAXIMIZE)
		group->values().insert("is_maximized", "true");
	else
		group->values().insert("is_maximized", "false");

	return group;
}
void styled_window::load_settings(settings_group* group)
{
	int x = 0, y = 0, w = 1280, h = 768;

	if (group->values().contains("xpos"))
		x = group->values()["xpos"].toInt();
	if (group->values().contains("ypos"))
		y = group->values()["ypos"].toInt();
	if (group->values().contains("width"))
		w = group->values()["width"].toInt();
	if (group->values().contains("height"))
		h = group->values()["height"].toInt();

	geometry(x, y, w, h);

	if (group->values().contains("is_maximized"))
		if (group->values()["is_maximized"] == "true")
			ShowWindow(m_hwnd, SW_MAXIMIZE);

}

void styled_window::flags(const styled_window::window_flags& value)
{
	auto had_frame = (m_flags & window_flags::frameless);
	auto gets_a_frame = (value & window_flags::frameless);

	if (had_frame != gets_a_frame)
	{
		bool v = !flag_contains(value, window_flags::frameless);

		for (auto w : m_border_widgets)
			w->setVisible(v);
		m_part_window_widget->findChild<styled_widget*>("part_titlebar_widget")->setVisible(v);
		m_part_window_widget->selected(!v);

		emit frameless_changed(!v);
	}

	m_flags = value;
}
void styled_window::start_move()
{
	ReleaseCapture();
	emit move_started();
	SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTCAPTION, 0);
}


QRect styled_window::geometry()
{
	RECT rect;
	GetWindowRect(m_hwnd, &rect);
	return QRect(rect.left, rect.top, rect.right - rect.left, rect.bottom - rect.top);
}
void styled_window::geometry(int x, int y, int width, int height)
{
	geometry(QRect(x, y, width, height));
}
void styled_window::geometry(const QRect& rect)
{
	MoveWindow(m_hwnd, rect.x(), rect.y(), rect.width(), rect.height(), true);
}
void styled_window::minimum_size(const QSize& size)
{
	m_part_window_widget->setMinimumSize(size);
	geometry(geometry());
}
void styled_window::maximum_size(const QSize& size)
{
	m_part_window_widget->setMaximumSize(size);
	geometry(geometry());
}
void styled_window::resize(const QSize& size)
{
	auto geom = geometry();
	geometry(geom.x(), geom.y(), size.width(), size.height());
	m_internal_flags &= (~internal_flags::adjust_size);
}
void styled_window::adjust_size()
{
	/*QWidget* measure_widget = new QWidget();
	QGridLayout* l = new QGridLayout();
	l->setSpacing(0);
	l->setContentsMargins(0, 0, 0, 0);
	measure_widget->setLayout(l);
	l->addWidget(m_part_window_widget, 0, 0);
	measure_widget->show();*/
	
	//qDebug() << measure_widget->adju;

	//qDebug() << m_part_window_widget->sizeHint();
	//resize(m_part_window_widget->minimumSizeHint());
	m_internal_flags |= internal_flags::adjust_size;
}
void styled_window::fixed_size(const QSize& size)
{
	minimum_size(size);
	maximum_size(size);
	m_internal_flags &= ~internal_flags::adjust_size;
}
void styled_window::toggle_maximized()
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		WINDOWPLACEMENT placement;
		GetWindowPlacement(m_hwnd, &placement);
		if (placement.showCmd == SW_MAXIMIZE)
		{
			ShowWindow(m_hwnd, SW_RESTORE);
		}
		else
		{
			ShowWindow(m_hwnd, SW_MAXIMIZE);
		}
	}
}

bool styled_window::eventFilter(QObject *obj, QEvent *ev)
{
	if (obj == m_part_window_widget)
	{
		//qDebug() << "Event: " << ev->type();

		if (ev->type() == QEvent::Resize && flag_contains(m_internal_flags, internal_flags::adjust_size))
		{
			m_internal_flags &= ~internal_flags::adjust_size;
			auto s = m_part_window_widget->sizeHint();
			if (s.isValid())
			{
				//qDebug() << "Adjust: " << m_part_window_widget->sizeHint();
				resize(s);
			}
		}
	}

	return QObject::eventFilter(obj, ev);
}

void styled_window::close_button_clicked()
{
	this->close();
}
void styled_window::minimize_button_clicked()
{
	ShowWindow(m_hwnd, SW_MINIMIZE);
}
void styled_window::maximize_button_clicked()
{
	toggle_maximized();
}
void styled_window::restore_button_clicked()
{
	toggle_maximized();
}

void styled_window::titlebar_mouse_pressed(QMouseEvent* event)
{
	if (event->button() == Qt::LeftButton)
	{
		start_move();
	}
	else if (event->button() == Qt::RightButton)
	{
		show_system_menu(true);
	}
}
void styled_window::titlebar_mouse_doubleclick(QMouseEvent* event)
{
	toggle_maximized();	
}
void styled_window::border_ne_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTTOPRIGHT, 0);
	}
}
void styled_window::border_nw_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTTOPLEFT, 0);
	}
}
void styled_window::border_e_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTRIGHT, 0);
	}
}
void styled_window::border_w_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTLEFT, 0);
	}
}
void styled_window::border_s_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTBOTTOM, 0);
	}
}
void styled_window::border_se_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTBOTTOMRIGHT, 0);
	}
}
void styled_window::border_sw_mouse_pressed(QMouseEvent* event)
{
	if (flag_contains(flags(), window_flags::resizable))
	{
		ReleaseCapture();
		SendMessage(m_hwnd, WM_NCLBUTTONDOWN, HTBOTTOMLEFT, 0);
	}
}
void styled_window::icon_mousePressed(QMouseEvent * event)
{
	show_system_menu(false);
}

QVector<styled_window*> styled_window::front_to_back_windows()
{
	QVector<styled_window*> result;

	HWND current = GetTopWindow(NULL);

	while (current != NULL)
	{
		auto it = m_all_windows.find(current);

		if (it != m_all_windows.end())
		{
			if (flag_contains(it.value()->flags(), window_flags::hittest_visible))
				result.push_back(it.value());
		}

		current = GetNextWindow(current, GW_HWNDNEXT);
	}

	return result;
}
styled_window* styled_window::widget_to_window(QWidget* w)
{
	auto it = m_widget_to_window.find(w);

	if (it == m_widget_to_window.end())
		return nullptr;
	return it.value();
}

void styled_window::icon(const QPixmap& icon)
{
	m_part_icon->setVisible(true);
	m_part_icon->setPixmap(icon);
	m_part_icon->setFixedSize((int)(20.0 * ((float)icon.width() / (float)icon.height())), 20);
	m_titlebar_layout->setColumnMinimumWidth(1, 10);
}
void styled_window::taskbar_icon(const QIcon& icon)
{
	HICON hicon = icon_loader::taskbar_icon(icon);
	SetClassLongPtr(m_hwnd, GCLP_HICON, (LONG_PTR)hicon);
}

void styled_window::show_system_menu(bool show_at_cursor)
{
	POINT  pt;
	if (show_at_cursor)
		GetCursorPos(&pt);
	else
	{
		auto client_p = this->client_widget()->mapToGlobal(QPoint(0, 0));
		pt.x = client_p.x();
		pt.y = client_p.y();
	}

	auto menu = GetSystemMenu(m_hwnd, FALSE);
	int flag = TrackPopupMenu(menu, TPM_LEFTALIGN | TPM_TOPALIGN | TPM_LEFTBUTTON | TPM_RETURNCMD, pt.x, pt.y, 0, m_hwnd, NULL);
	if (flag > 0)
		SendMessage(m_hwnd, WM_SYSCOMMAND, flag, 0);
}