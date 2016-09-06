#include "item_editor_item.q.hpp"
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

#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "item_editor_item.q.hpp"

#include "../styled_controls/styled_label.q.hpp"
#include "../styled_controls/styled_pushbutton.q.hpp"
#include "../styled_color_picker/styled_color_picker.q.hpp"

using namespace bdl::styled_qt_controls;

base_item_editor_item::base_item_editor_item(bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func)
	: m_show_binding_button(show_binding_button), m_binding_changed_func(binding_changed_func), m_is_bound(is_bound), m_binding_button(nullptr)
{ }
base_item_editor_item::~base_item_editor_item() { }

void base_item_editor_item::notify_widget_deleted()
{
	m_binding_button = nullptr;
}

void base_item_editor_item::add_binding_button(QGridLayout* layout, int row)
{
	if (m_show_binding_button)
	{
		m_binding_button = new QPushButton();
		m_binding_button->setCheckable(true);
		m_binding_button->setChecked(m_is_bound);
		m_binding_button->setFixedSize(20, 20);
		m_binding_button->setObjectName("part_biei_connect_button");
		QObject::connect(m_binding_button, SIGNAL(toggled(bool)), this, SLOT(binding_button_toggled(bool)));
		layout->addWidget(m_binding_button, row, 2, Qt::AlignCenter);
	}
}
void base_item_editor_item::set_binding(bool is_bound)
{
	if (m_binding_button != nullptr)
		m_binding_button->setChecked(is_bound);
}
void base_item_editor_item::binding_button_toggled(bool value)
{
	m_binding_changed_func(value);
}


//String

string_item_editor_item::string_item_editor_item(const QString& title, const QString& initial_value, std::function<void(const QString&)> value_changed_func,
						bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func)
	: base_item_editor_item(show_binding_button, is_bound, binding_changed_func),
	  m_edit(nullptr), m_title(title), m_value(initial_value), m_value_changed_func(value_changed_func)
{ }
string_item_editor_item::~string_item_editor_item() { }

int string_item_editor_item::widgets(QGridLayout* layout, int row)
{
	layout->addWidget(new styled_label(m_title), row, 0);
	m_edit = new QLineEdit(m_value);
	QObject::connect(m_edit, SIGNAL(textEdited(const QString&)), this, SLOT(textEdited(const QString&)));
	layout->addWidget(m_edit, row, 1);
	add_binding_button(layout, row);

	return 1; //1 row
}
void string_item_editor_item::notify_widget_deleted()
{
	m_edit = nullptr;
	base_item_editor_item::notify_widget_deleted();
}
void string_item_editor_item::set_value(const QString& value)
{
	m_value = value;
	if (m_edit != nullptr)
		m_edit->setText(m_value);
}
void string_item_editor_item::textEdited(const QString &text)
{
	m_value = text;
	m_value_changed_func(text);
}


//Float

float_item_editor_item::float_item_editor_item(const QString& title, float initial_value, std::function<void(float)> value_changed_func,
											   bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func,
											   unsigned int digits, float ticks, float min_value, float max_value
											   )
	: base_item_editor_item(show_binding_button, is_bound, binding_changed_func),
	m_title(title), m_value(initial_value), m_value_changed_func(value_changed_func), m_digits(digits), m_ticks(ticks), m_min_value(min_value), m_max_value(max_value),
	m_edit(nullptr)
{ }
float_item_editor_item::~float_item_editor_item() { }

int float_item_editor_item::widgets(QGridLayout* layout, int row)
{
	m_edit = new numeric_line_edit(m_value, m_digits);
	m_edit->minimum(m_min_value);
	m_edit->maximum(m_max_value);
	m_edit->tick(m_ticks);
	QObject::connect(m_edit, SIGNAL(textEdited(const QString&)), this, SLOT(edit_textEdited(const QString&)));

	layout->addWidget(new QLabel(m_title), row, 0);
	layout->addWidget(m_edit, row, 1);
	this->add_binding_button(layout, row);

	return 1;
}
void float_item_editor_item::notify_widget_deleted()
{
	m_edit = nullptr;
	base_item_editor_item::notify_widget_deleted();
}
void float_item_editor_item::set_value(float value)
{
	if (m_edit != nullptr)
		m_edit->value(value);
}
void float_item_editor_item::edit_textEdited(const QString& text)
{
	m_value = text.toFloat();
	m_value_changed_func(m_value);
}


//Vector3

vector3_item_editor_item::vector3_item_editor_item(const QString& title, float initial_x, float initial_y, float initial_z, std::function<void(float, float, float)> value_changed_func,
												   bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func,
												   unsigned int digits, float ticks, float min_value, float max_value)
	: base_item_editor_item(show_binding_button, is_bound, binding_changed_func),
	m_title(title), m_value_x(initial_x), m_value_y(initial_y), m_value_z(initial_z), m_value_changed_func(value_changed_func), m_digits(digits), m_ticks(ticks),
	m_min_value(min_value), m_max_value(max_value), m_x_edit(nullptr), m_y_edit(nullptr), m_z_edit(nullptr)
{ }
vector3_item_editor_item::~vector3_item_editor_item() { }

int vector3_item_editor_item::widgets(QGridLayout* layout, int row)
{
	m_x_edit = new numeric_line_edit(m_value_x, m_digits);
	m_x_edit->minimum(m_min_value);
	m_x_edit->maximum(m_max_value);
	m_x_edit->tick(m_ticks);
	QObject::connect(m_x_edit, SIGNAL(textEdited(const QString&)), this, SLOT(x_textEdited(const QString&)));

	m_y_edit = new numeric_line_edit(m_value_y, m_digits);
	m_y_edit->minimum(m_min_value);
	m_y_edit->maximum(m_max_value);
	m_y_edit->tick(m_ticks);
	QObject::connect(m_y_edit, SIGNAL(textEdited(const QString&)), this, SLOT(y_textEdited(const QString&)));

	m_z_edit = new numeric_line_edit(m_value_z, m_digits);
	m_z_edit->minimum(m_min_value);
	m_z_edit->maximum(m_max_value);
	m_z_edit->tick(m_ticks);
	QObject::connect(m_z_edit, SIGNAL(textEdited(const QString&)), this, SLOT(z_textEdited(const QString&)));

	QGridLayout* vec_layout = new QGridLayout();
	vec_layout->setContentsMargins(0, 0, 0, 0);
	vec_layout->setSpacing(4);

	vec_layout->addWidget(new QLabel("X:"), 0, 0);
	vec_layout->addWidget(m_x_edit, 0, 1);
	vec_layout->addWidget(new QLabel("Y:"), 0, 2);
	vec_layout->addWidget(m_y_edit, 0, 3);
	vec_layout->addWidget(new QLabel("Z:"), 0, 4);
	vec_layout->addWidget(m_z_edit, 0, 5);
	vec_layout->setColumnStretch(1, 1);
	vec_layout->setColumnStretch(3, 1);
	vec_layout->setColumnStretch(5, 1);

	layout->addWidget(new QLabel(m_title), row, 0, 1, 3);
	layout->addLayout(vec_layout, row + 1, 0, 1, 2);
	this->add_binding_button(layout, row + 1);

	return 2;
}
void vector3_item_editor_item::notify_widget_deleted()
{
	m_x_edit = nullptr;
	m_y_edit = nullptr;
	m_z_edit = nullptr;
}
void vector3_item_editor_item::set_value(float x, float y, float z)
{
	if (m_x_edit != nullptr)
		m_x_edit->value(x);
	if (m_y_edit != nullptr)
		m_y_edit->value(y);
	if (m_z_edit != nullptr)
		m_z_edit->value(z);
}
void vector3_item_editor_item::x_textEdited(const QString& text)
{
	m_value_x = text.toFloat();
	m_value_changed_func(m_value_x, m_value_y, m_value_z);
}
void vector3_item_editor_item::y_textEdited(const QString& text)
{
	m_value_y = text.toFloat();
	m_value_changed_func(m_value_x, m_value_y, m_value_z);
}
void vector3_item_editor_item::z_textEdited(const QString& text)
{
	m_value_z = text.toFloat();
	m_value_changed_func(m_value_x, m_value_y, m_value_z);
}


//Color

color_item_editor_item::color_item_editor_item(const QString& title, QColor initial_value, std::function<void(QColor)> value_changed_func,
					   /*bool show_binding_button,*/ bool is_bound, std::function<void(bool)> binding_changed_func)
	: base_item_editor_item(false, is_bound, binding_changed_func),
	m_title(title), m_value(initial_value), m_value_changed_func(value_changed_func), m_picker(nullptr)
{ }
color_item_editor_item::~color_item_editor_item() { }

int color_item_editor_item::widgets(QGridLayout* layout, int row)
{
	m_picker = new styled_color_picker(m_title);
	QObject::connect(m_picker, SIGNAL(color_changed(const QColor&)), this, SLOT(color_changed(const QColor&)));
	QObject::connect(m_picker, SIGNAL(binding_changed(bool)), this, SLOT(binding_button_toggled(bool)));

	layout->addWidget(m_picker, row, 0, 1, 3);

	return 1;
}
void color_item_editor_item::notify_widget_deleted()
{
	m_picker = nullptr;
}
void color_item_editor_item::set_value(QColor color)
{
	if (m_picker != nullptr)
	{
		m_picker->color(color);
	}
}
void color_item_editor_item::color_changed(const QColor& color)
{
	m_value = color;
	m_value_changed_func(m_value);
}