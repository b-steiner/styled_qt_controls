#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dialog.q.hpp"

#include "../styled_controls/styled_pushbutton.q.hpp"

using namespace bdl::styled_qt_controls;

styled_dialog::styled_dialog(const QString& title, styled_window* parent, int exit_result, window_flags initial_flags)
	: styled_window(title, parent, window_type::dialog, initial_flags), m_result(exit_result), m_msg_loop(nullptr)
{ 
	styled_window::client_widget()->setAttribute(Qt::WA_ShowModal, true);

	m_button_layout = new QHBoxLayout();
	m_button_layout->setContentsMargins(0, 0, 0, 0);
	m_button_layout->setSpacing(4);

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	layout->setSpacing(4);
	layout->setRowStretch(0, 1);
	styled_window::client_widget()->setLayout(layout);

	m_dialog_client_widget = new styled_widget();
	m_dialog_client_widget->setObjectName("part_client_widget");
	layout->addWidget(m_dialog_client_widget, 0, 0);
	layout->addLayout(m_button_layout, 1, 0, Qt::AlignRight);

	QObject::connect(this, SIGNAL(closed()), this, SLOT(this_closed()));
	QObject::connect(this->part_window_widget(), SIGNAL(keyPressed(QKeyEvent*)), this, SLOT(this_keyPressed(QKeyEvent*)));
}
styled_dialog::~styled_dialog()
{ }

void styled_dialog::show()
{
	QLayoutItem *item;
	while ((item = m_button_layout->takeAt(0)))
		delete item;

	styled_pushbutton* focus_btn = nullptr;

	for (auto& btn : m_buttons)
	{
		styled_pushbutton* button = new styled_pushbutton(btn.text);
		button->setAutoDefault(true);
		button->setMinimumWidth(70);
		button->setObjectName("part_sdiag_button");
		m_button_result_lookup.insert(button, btn.role);
		m_button_layout->addWidget(button);
		QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(dialog_button_clicked(bool)));
		
		if (flag_contains(btn.flags, button_flags::default_button) || flag_contains(btn.flags, button_flags::accept_button))
		{
			focus_btn = button;
		}
	}

	styled_window::show();

	if (focus_btn != nullptr)
		focus_btn->setFocus(Qt::FocusReason::TabFocusReason);
}

int styled_dialog::exec()
{
	QEventLoop loop;
	m_msg_loop = &loop;

	this->show();

	auto windows = styled_window::front_to_back_windows();
	for (auto w : windows)
		if (w != this)
			w->disable();

	loop.exec(QEventLoop::DialogExec);
	m_msg_loop = nullptr;

	for (auto w : windows)
		if (w != this)
			w->enable();
	if (m_parent != nullptr)
		m_parent->focus();

	return m_result;
}

styled_widget* styled_dialog::client_widget() const
{
	return m_dialog_client_widget;
}
void styled_dialog::add_button(const QString& text, int result, button_flags flags)
{
	m_buttons.push_back({ text, result, flags });
}

void styled_dialog::add_button(const styled_dialog_button & button)
{
	m_buttons.push_back(button);
}

void styled_dialog::dialog_button_clicked(bool checked)
{
	QPushButton* s = (QPushButton*)sender();
	m_result = m_button_result_lookup[s];
	this->close();
}

void styled_dialog::this_closed()
{
	if (m_msg_loop != nullptr)
		m_msg_loop->exit(m_result);
}
void styled_dialog::this_keyPressed(QKeyEvent* event)
{
	switch (event->key())
	{
	case Qt::Key_Escape:
	{
		//Check whether there is a abort button
		for (auto& btn : m_buttons)
		{
			if (flag_contains(btn.flags, button_flags::abort_button))
			{
				m_result = btn.role;
				this->close();
				return;
			}
		}
		break;
	}
	case Qt::Key_Enter:
	{
		//Check whether there is a accept button
		for (auto& btn : m_buttons)
		{
			if (flag_contains(btn.flags, button_flags::accept_button))
			{
				m_result = btn.role;
				this->close();
				return;
			}
		}
		break;
	}
	}
}