#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_color_picker.q.hpp"

#include "../util/qt_helper_functions.hpp"
#include "../util/style_loader.hpp"
#include "../util/theme_colors.hpp"
#include "hs_frame.q.hpp"
#include "l_frame.q.hpp"
#include "../styled_controls/styled_pushbutton.q.hpp"
#include "../styled_controls/numeric_line_edit.q.hpp"
#include "../styled_controls/styled_label.q.hpp"
#include "../styled_controls/styled_frame.q.hpp"
#include "../styled_controls/styled_widget.q.hpp"
#include "color_item_delegate.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

std::unique_ptr<color_list_item_model> styled_color_picker::m_recent_model(nullptr);

enum class color_pick_mode { rgb = 0, hsl = 1, hex = 2 };

styled_color_picker::styled_color_picker(const QString& title, QWidget* pick_widget) : m_pick_widget(pick_widget), m_record_color(false)
{
	if (!m_recent_model)
	{
		m_recent_model = std::make_unique<color_list_item_model>();
	}

	this->is_button_visible(false);

	//Title Bar
	styled_widget* title_widget = new styled_widget();
	title_widget->setObjectName("part_scp_titlewidget");

	QGridLayout* title_layout = new QGridLayout();
	title_layout->setContentsMargins(0, 0, 0, 0);
	title_layout->setSpacing(4);
	title_layout->setColumnStretch(1, 1);
	title_layout->setColumnMinimumWidth(2, 24);
	title_widget->setLayout(title_layout);

	styled_label* title_label = new styled_label(title);
	title_layout->addWidget(title_label, 0, 0);
	
	style_loader loader(":/styled_color_picker/styled_color_picker.qss");
	this->setStyleSheet(loader.style_string());

	QGridLayout* color_box_layout = new QGridLayout();
	color_box_layout->setSpacing(0);
	color_box_layout->setContentsMargins(0,0,0,0);
	color_box_layout->setColumnStretch(0, 1);

	m_color_display_frame = new styled_frame();
	m_color_display_frame->setStyleSheet("background: solid red; border: 1px solid " + style_loader::color_to_text(theme_colors::border) + ";");
	m_color_display_frame->setFixedHeight(18);
	color_box_layout->addWidget(m_color_display_frame, 0, 0);

	if (m_pick_widget != nullptr)
	{
		m_pick_button = new QPushButton();
		m_pick_button->setObjectName("part_scp_pick_button");
		m_pick_button->setFixedSize(18, 18);
		m_pick_button->setCheckable(true);
		m_pick_button->setChecked(false);
		color_box_layout->addWidget(m_pick_button, 0, 1);
		QObject::connect(m_pick_button, SIGNAL(toggled(bool)), this, SLOT(pick_button_toggled(bool)));
	}

	title_layout->addLayout(color_box_layout, 0, 1);

	m_connect_button = new QPushButton();
	m_connect_button->setObjectName("part_scp_connect_button");
	m_connect_button->setFixedSize(20, 20);
	m_connect_button->setCheckable(true);
	m_connect_button->setChecked(false);
	QObject::connect(m_connect_button, SIGNAL(toggled(bool)), this, SLOT(binding_button_toggled(bool)));
	title_layout->addWidget(m_connect_button, 0, 2, Qt::AlignCenter);

	this->title_widget(title_widget);

	//Color Selection

	styled_widget* content_widget = new styled_widget();
	this->content_widget(content_widget);

	QGridLayout* collapse_layout = new QGridLayout();
	collapse_layout->setContentsMargins(0, 0, 0, 0);
	collapse_layout->setSpacing(4);
	collapse_layout->setColumnMinimumWidth(1, 100);
	collapse_layout->setColumnStretch(0, 1);
	content_widget->setLayout(collapse_layout);

	QGridLayout* collapse_left_layout = new QGridLayout();
	collapse_left_layout->setContentsMargins(0, 0, 0, 0);
	collapse_left_layout->setSpacing(6);

	QFrame* hs_picker_container = new QFrame();
	hs_picker_container->setObjectName("part_scp_hs_container");
	QGridLayout* hs_picker_container_layout = new QGridLayout();
	hs_picker_container_layout->setContentsMargins(0, 0, 0, 0);
	hs_picker_container_layout->setSpacing(0);
	hs_picker_container->setLayout(hs_picker_container_layout);

	m_hs_picker = new hs_frame();
	m_hs_picker->setFixedHeight(130);
	m_hs_picker->setObjectName("part_scp_hs_picker");

	m_l_picker = new l_frame();
	m_l_picker->setObjectName("part_scp_l_picker");
	
	hs_picker_container_layout->addWidget(m_hs_picker, 0, 0);
	collapse_left_layout->addWidget(hs_picker_container, 0, 0, 1, 1, Qt::AlignBottom);
	collapse_left_layout->addWidget(m_l_picker, 1, 0, 1, 1, Qt::AlignBottom);
	collapse_layout->addLayout(collapse_left_layout, 0, 0);

	QObject::connect(m_hs_picker, SIGNAL(color_changed(const QColor&)), this, SLOT(picker_color_changed(const QColor&)));
	QObject::connect(m_l_picker, SIGNAL(color_changed(const QColor&)), this, SLOT(picker_color_changed(const QColor&)));

	// Recently used colors and 

	QWidget* collapse_right_widget = new QWidget();
	collapse_right_widget->setFixedWidth(150);

	QGridLayout* collapse_right_layout = new QGridLayout();
	collapse_right_layout->setContentsMargins(0, 0, 0, 0);
	collapse_right_layout->setSpacing(9);
	collapse_right_widget->setLayout(collapse_right_layout);
	collapse_layout->addWidget(collapse_right_widget, 0, 1);

	QGridLayout* recent_layout = new QGridLayout();
	recent_layout->setSpacing(0);
	recent_layout->setContentsMargins(0, 0, 0, 0);
	recent_layout->setRowStretch(2, 1);

	styled_pushbutton* add_recent_button = new styled_pushbutton();
	add_recent_button->setFixedSize(19, 20);
	add_recent_button->setObjectName("part_scp_add_recent_button");
	recent_layout->addWidget(add_recent_button, 0, 0);
	QObject::connect(add_recent_button, SIGNAL(clicked(bool)), this, SLOT(add_recent_button_clicked(bool)));

	styled_pushbutton* remove_recent_button = new styled_pushbutton();
	remove_recent_button->setFixedSize(19, 19);
	remove_recent_button->setObjectName("part_scp_remove_recent_button");
	recent_layout->addWidget(remove_recent_button, 1, 0);
	QObject::connect(remove_recent_button, SIGNAL(clicked(bool)), this, SLOT(remove_recent_button_clicked(bool)));

	m_recent_list = new styled_list_view();
	m_recent_list->setFixedHeight(60);
	m_recent_list->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
	m_recent_list->setItemDelegate(new color_item_delegate(m_recent_list));
	m_recent_list->setModel(m_recent_model.get());
	recent_layout->addWidget(m_recent_list, 0, 1, 3, 1);
	collapse_right_layout->addLayout(recent_layout, 0, 0);
	QObject::connect(m_recent_list, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(recent_list_double_clicked(const QModelIndex&)));
	

	//RGB - HSL - HEX textboxes

	styled_pushbutton* rgb_toggle_button = new styled_pushbutton("RGB");
	rgb_toggle_button->setCheckable(true);
	styled_pushbutton* hsl_toggle_button = new styled_pushbutton("HSL");
	hsl_toggle_button->setObjectName("part_scp_hsl_mode_button");
	hsl_toggle_button->setCheckable(true);
	hsl_toggle_button->setChecked(true);
	styled_pushbutton* hex_toggle_button = new styled_pushbutton("Hex");
	hex_toggle_button->setCheckable(true);

	m_color_mode_group = new QButtonGroup();
	m_color_mode_group->addButton(rgb_toggle_button, (int)color_pick_mode::rgb);
	m_color_mode_group->addButton(hsl_toggle_button, (int)color_pick_mode::hsl);
	m_color_mode_group->addButton(hex_toggle_button, (int)color_pick_mode::hex);

	QObject::connect(m_color_mode_group, SIGNAL(buttonToggled(int, bool)), this, SLOT(mode_buttonToggled(int, bool)));

	QGridLayout* mode_selection_layout = new QGridLayout();
	mode_selection_layout->setContentsMargins(0, 0, 0, 0);
	mode_selection_layout->setSpacing(0);
	mode_selection_layout->addWidget(rgb_toggle_button, 0, 0);
	mode_selection_layout->addWidget(hsl_toggle_button, 0, 1);
	mode_selection_layout->addWidget(hex_toggle_button, 0, 2);

	collapse_right_layout->addLayout(mode_selection_layout, 3, 0);

	m_channel1_label = new QLabel("1");
	m_channel2_label = new QLabel("2");
	m_channel3_label = new QLabel("3");
	
	m_channel1_lineedit = new numeric_line_edit(0, 0);
	m_channel1_lineedit->minimum(0);
	m_channel1_lineedit->maximum(255);
	m_channel1_lineedit->tick(1);
	m_channel2_lineedit = new numeric_line_edit(0, 0);
	m_channel2_lineedit->minimum(0);
	m_channel2_lineedit->maximum(255);
	m_channel2_lineedit->tick(1);
	m_channel3_lineedit = new numeric_line_edit(0, 0);
	m_channel3_lineedit->minimum(0);
	m_channel3_lineedit->maximum(255);
	m_channel3_lineedit->tick(1);

	m_hex_lineedit = new QLineEdit();
	m_hex_lineedit->setVisible(false);

	QGridLayout* lineedit_layout = new QGridLayout();
	lineedit_layout->setContentsMargins(0, 0, 0, 0);
	lineedit_layout->setHorizontalSpacing(6);
	lineedit_layout->setVerticalSpacing(4);
	lineedit_layout->addWidget(m_channel1_label, 0, 0);
	lineedit_layout->addWidget(m_channel2_label, 1, 0);
	lineedit_layout->addWidget(m_channel3_label, 2, 0);
	lineedit_layout->addWidget(m_hex_lineedit, 0, 1);
	lineedit_layout->addWidget(m_channel1_lineedit, 0, 1);
	lineedit_layout->addWidget(m_channel2_lineedit, 1, 1);
	lineedit_layout->addWidget(m_channel3_lineedit, 2, 1);

	QObject::connect(m_channel1_lineedit, SIGNAL(textEdited(const QString&)), this, SLOT(channel_textEdited(const QString&)));
	QObject::connect(m_channel2_lineedit, SIGNAL(textEdited(const QString&)), this, SLOT(channel_textEdited(const QString&)));
	QObject::connect(m_channel3_lineedit, SIGNAL(textEdited(const QString&)), this, SLOT(channel_textEdited(const QString&)));
	QObject::connect(m_hex_lineedit, SIGNAL(textEdited(const QString&)), this, SLOT(channel_textEdited(const QString&)));

	collapse_right_layout->addLayout(lineedit_layout, 4, 0);

	color(QColor::fromHsl(0, 255, 128));
}

styled_color_picker::~styled_color_picker() { }

const QColor& styled_color_picker::color() const
{
	return m_color;
}
void styled_color_picker::color(QColor const & value)
{
	color_changed_internal(value);
}

bool styled_color_picker::is_bound() const
{
	return m_connect_button->isChecked();
}
void styled_color_picker::is_bound(bool value)
{
	m_connect_button->setChecked(value);
}


void styled_color_picker::picker_color_changed(const QColor& color)
{
	QColor c = QColor::fromHsl(m_hs_picker->color().hslHue(), m_hs_picker->color().hslSaturation(), m_l_picker->color().lightness());
	color_changed_internal(c);

	emit color_changed(m_color);
}
void styled_color_picker::mode_buttonToggled(int id, bool checked)
{
	QColor c = QColor::fromHsl(m_hs_picker->color().hslHue(), m_hs_picker->color().hslSaturation(), m_l_picker->color().lightness());
	color_changed_internal(c);
}
void styled_color_picker::channel_textEdited(const QString &text)
{
	switch ((color_pick_mode)m_color_mode_group->checkedId())
	{
	case color_pick_mode::rgb:
		color_changed_internal(QColor::fromRgb((int)m_channel1_lineedit->value(), (int)m_channel2_lineedit->value(), (int)m_channel3_lineedit->value()));
		break;
	case color_pick_mode::hsl:
		color_changed_internal(QColor::fromHsl((int)m_channel1_lineedit->value(), (int)m_channel2_lineedit->value(), (int)m_channel3_lineedit->value()));
		break;
	case color_pick_mode::hex:
		QColor hexColor;
		hexColor.setNamedColor(m_hex_lineedit->text());
		color_changed_internal(hexColor);
		break;
	}

	emit color_changed(m_color);
}


void styled_color_picker::color_changed_internal(const QColor& color)
{
	m_color = color.toHsl();

	m_hs_picker->color(color);
	m_l_picker->color(color);
	m_color_display_frame->setStyleSheet("background: solid " + style_loader::color_to_text(color) + "; border: 1px solid " + style_loader::color_to_text(theme_colors::border) + ";");

	switch ((color_pick_mode)m_color_mode_group->checkedId())
	{
	case color_pick_mode::rgb:
		m_channel1_label->setVisible(true);
		m_channel2_label->setVisible(true);
		m_channel3_label->setVisible(true);
		m_channel1_label->setText("R:");
		m_channel2_label->setText("G:");
		m_channel3_label->setText("B:");
		m_hex_lineedit->setVisible(false);

		m_channel1_lineedit->setVisible(true);
		m_channel2_lineedit->setVisible(true);
		m_channel3_lineedit->setVisible(true);
		m_channel1_lineedit->maximum(255);
		m_channel1_lineedit->value(color.toRgb().red());
		m_channel2_lineedit->value(color.toRgb().green());
		m_channel3_lineedit->value(color.toRgb().blue());
		break;
	case color_pick_mode::hsl:
		m_channel1_label->setVisible(true);
		m_channel2_label->setVisible(true);
		m_channel3_label->setVisible(true);
		m_channel1_label->setText("H:");
		m_channel2_label->setText("S:");
		m_channel3_label->setText("L:");
		m_hex_lineedit->setVisible(false);

		m_channel1_lineedit->setVisible(true);
		m_channel2_lineedit->setVisible(true);
		m_channel3_lineedit->setVisible(true);
		m_channel1_lineedit->maximum(359);
		m_channel1_lineedit->value(color.toHsl().hslHue());
		m_channel2_lineedit->value(color.toHsl().hslSaturation());
		m_channel3_lineedit->value(color.toHsl().lightness());
		break;
	case color_pick_mode::hex:
		m_channel1_label->setVisible(true);
		m_channel2_label->setVisible(false);
		m_channel3_label->setVisible(false);
		m_channel1_label->setText("Hex:");

		m_channel1_lineedit->setVisible(false);
		m_channel2_lineedit->setVisible(false);
		m_channel3_lineedit->setVisible(false);
		m_hex_lineedit->setVisible(true);

		QColor hexColor;
		hexColor.setNamedColor(m_hex_lineedit->text());
		hexColor = hexColor.toRgb();
		QColor c = color.toRgb();

		int r1 = hexColor.red();
		int r2 = c.red();
		bool ba = r1 != r2;
		bool bb = hexColor.green() != c.green();
		bool bc = hexColor.blue() != c.blue();
		bool bd = hexColor.alpha() != c.alpha();

		if (hexColor.red() != c.red() || hexColor.green() != c.green() || hexColor.blue() != c.blue() || hexColor.alpha() != c.alpha())
		{
			m_hex_lineedit->setText(color.name().toUpper());
		}
		break;
	}
}
void styled_color_picker::binding_button_toggled(bool value)
{
	emit binding_changed(value);
}
void styled_color_picker::pick_button_toggled(bool value)
{
	if (m_pick_widget != nullptr)
	{
		if (value)
		{
			m_pick_restore_cursor = m_pick_widget->cursor();
			m_pick_widget->setCursor(QCursor(QPixmap(":/images/cursor_pick_color.png"), 1, 14));
			m_pick_widget->installEventFilter(this);
		}
		else
		{
			m_pick_widget->setCursor(m_pick_restore_cursor);
			m_pick_widget->removeEventFilter(this);
		}
	}
}

bool styled_color_picker::eventFilter(QObject *obj, QEvent *event)
{
	if (event->type() == QEvent::MouseButtonPress)
	{
		QMouseEvent* me = (QMouseEvent*)event;
		if (me->button() == Qt::MouseButton::LeftButton)
		{
			color(color_from_pos(me->globalPos()));
			m_record_color = true;
			return true;
		}
	}
	else if (event->type() == QEvent::MouseButtonRelease)
	{
		QMouseEvent* me = (QMouseEvent*)event;
		if (me->button() == Qt::MouseButton::LeftButton)
		{
			color(color_from_pos(me->globalPos()));
			m_pick_button->setChecked(false);
			m_record_color = false;
			return true;
		}
	}
	else if (event->type() == QEvent::MouseMove)
	{
		if (m_record_color)
		{
			QMouseEvent* me = (QMouseEvent*)event;
			color(color_from_pos(me->globalPos()));
			return true;
		}
	}

	return false;
}

QColor styled_color_picker::color_from_pos(QPoint point)
{
	auto img = m_pick_widget->grab().toImage();
	return img.pixelColor(m_pick_widget->mapFromGlobal(point));
}

void styled_color_picker::add_recent_button_clicked(bool value)
{
	m_recent_model->add_color(this->color());
}
void styled_color_picker::remove_recent_button_clicked(bool value)
{
	for (int i = 0; i < m_recent_model->rowCount(); ++i)
	{
		if (m_recent_list->selectionModel()->isSelected(m_recent_model->index(i, 0)))
		{
			m_recent_model->remove_color(m_recent_model->index(i, 0));
			i--;
		}
	}
}
void styled_color_picker::recent_list_double_clicked(const QModelIndex& index)
{
	if (index.isValid())
	{
		this->color_changed_internal(qvariant_cast<QColor>(m_recent_model->data(index, Qt::DisplayRole)));
	}
}