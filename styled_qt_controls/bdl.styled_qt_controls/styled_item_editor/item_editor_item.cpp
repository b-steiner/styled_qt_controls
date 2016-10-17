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
		layout->addWidget(m_binding_button, row, 3, Qt::AlignCenter);

		children().push_back(m_binding_button);
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

void base_item_editor_item::visible(const bool& value)
{
	m_visible = value;

	for (auto w : m_children)
		w->setVisible(value);
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
	children().clear();

	auto lbl = new styled_label(m_title);
	layout->addWidget(lbl, row, 1);
	m_edit = new QLineEdit(m_value);
	QObject::connect(m_edit, SIGNAL(textEdited(const QString&)), this, SLOT(textEdited(const QString&)));
	layout->addWidget(m_edit, row, 2);
	add_binding_button(layout, row);

	children().push_back(lbl);
	children().push_back(m_edit);

	visible(visible());

	return 1; //1 row
}
void string_item_editor_item::notify_widget_deleted()
{
	m_edit = nullptr;
	base_item_editor_item::notify_widget_deleted();
}
void string_item_editor_item::value(const QString& value)
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
	children().clear();

	m_edit = new numeric_line_edit(m_value, m_digits);
	m_edit->minimum(m_min_value);
	m_edit->maximum(m_max_value);
	m_edit->tick(m_ticks);
	QObject::connect(m_edit, SIGNAL(textEdited(const QString&)), this, SLOT(edit_textEdited(const QString&)));

	auto lbl = new QLabel(m_title);
	layout->addWidget(lbl, row, 1);
	layout->addWidget(m_edit, row, 2);
	this->add_binding_button(layout, row);
	
	children().push_back(lbl);
	children().push_back(m_edit);
	visible(visible());

	return 1;
}
void float_item_editor_item::notify_widget_deleted()
{
	m_edit = nullptr;
	base_item_editor_item::notify_widget_deleted();
}
void float_item_editor_item::value(const float& value)
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
	children().clear();

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

	auto lbl_x = new QLabel("X:");
	vec_layout->addWidget(lbl_x, 0, 0);
	vec_layout->addWidget(m_x_edit, 0, 1);
	auto lbl_y = new QLabel("Y:");
	vec_layout->addWidget(lbl_y, 0, 2);
	vec_layout->addWidget(m_y_edit, 0, 3);
	auto lbl_z = new QLabel("Z:");
	vec_layout->addWidget(lbl_z, 0, 4);
	vec_layout->addWidget(m_z_edit, 0, 5);
	vec_layout->setColumnStretch(1, 1);
	vec_layout->setColumnStretch(3, 1);
	vec_layout->setColumnStretch(5, 1);

	layout->addWidget(new QLabel(m_title), row, 1, 1, 3);
	layout->addLayout(vec_layout, row + 1, 1, 1, 2);
	this->add_binding_button(layout, row + 1);

	children().push_back(m_x_edit);
	children().push_back(m_y_edit);
	children().push_back(m_z_edit);
	children().push_back(lbl_x);
	children().push_back(lbl_y);
	children().push_back(lbl_z);
	visible(visible());

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
	children().clear();

	m_picker = new styled_color_picker(m_title);
	m_picker->color(m_value);
	QObject::connect(m_picker, SIGNAL(color_changed(const QColor&)), this, SLOT(color_changed(const QColor&)));
	QObject::connect(m_picker, SIGNAL(binding_changed(bool)), this, SLOT(binding_button_toggled(bool)));

	layout->addWidget(m_picker, row, 1, 1, 3);

	children().push_back(m_picker);
	visible(visible());

	return 1;
}
void color_item_editor_item::notify_widget_deleted()
{
	m_picker = nullptr;
}
void color_item_editor_item::value(const QColor& color)
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


//Enum

enum_item_editor_item::enum_item_editor_item(int initial_value, std::function<void(int)> value_changed_func, items_list_type items)
	: base_item_editor_item(false, false, [](bool) {}), m_value(initial_value), m_items(items), m_group(nullptr), m_value_changed_func(value_changed_func)
{ }
enum_item_editor_item::~enum_item_editor_item() { }

int enum_item_editor_item::widgets(QGridLayout * layout, int row)
{
	children().clear();

	m_group = new QButtonGroup();
	QHBoxLayout* grp_layout = new QHBoxLayout();
	grp_layout->setContentsMargins(0, 0, 0, 0);
	grp_layout->setSpacing(0);

	bool first = true;

	for (auto& i : m_items)
	{
		auto btn = new styled_pushbutton(i.second);
		btn->setCheckable(true);
		m_group->addButton(btn, i.first);
		grp_layout->addWidget(btn);
		
		if (first)
			btn->setObjectName("part_eiei_firstbutton");
		else
			btn->setObjectName("part_eiei_notfirstbutton");

		first = false;
		children().push_back(btn);
	}

	m_group->button(m_value)->setChecked(true);

	layout->addLayout(grp_layout, row, 1, 1, 2);
	QObject::connect(m_group, SIGNAL(buttonToggled(int, bool)), this, SLOT(group_buttonToggled(int, bool)));

	visible(visible());

	return 1;
}
void enum_item_editor_item::notify_widget_deleted()
{
	m_group = nullptr;
}
void enum_item_editor_item::value(const int& value)
{
	if (m_group != nullptr)
		m_group->button(value)->setChecked(true);
}

void enum_item_editor_item::group_buttonToggled(int id, bool checked)
{
	if (checked)
	{
		m_value = id;
		m_value_changed_func(m_value);
	}
}