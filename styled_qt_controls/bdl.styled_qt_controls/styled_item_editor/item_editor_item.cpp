#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "item_editor_item.q.hpp"

#include "../styled_controls/styled_label.q.hpp"
#include "../styled_controls/styled_pushbutton.q.hpp"

using namespace bdl::styled_qt_controls;

base_item_editor_item::base_item_editor_item(bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func)
	: m_show_binding_button(show_binding_button), m_binding_changed_func(binding_changed_func), m_is_bound(is_bound)
{ }
base_item_editor_item::~base_item_editor_item() { }

void base_item_editor_item::add_binding_button(QGridLayout* layout, int row)
{
	styled_pushbutton* binding_button = new styled_pushbutton();
	binding_button->setCheckable(true);
	binding_button->setChecked(m_is_bound);
	binding_button->setFixedSize(20, 20);
	binding_button->setObjectName("part_biei_connect_button");
	QObject::connect(binding_button, SIGNAL(toggled(bool)), this, SLOT(binding_button_toggled(bool)));
	layout->addWidget(binding_button, row, 2, Qt::AlignCenter);
}
void base_item_editor_item::binding_button_toggled(bool value)
{
	m_binding_changed_func(value);
}



string_item_editor_item::string_item_editor_item(const QString& title, const QString& initial_value, std::function<void(const QString&)> value_changed_func,
						bool show_binding_button, bool is_bound = false, std::function<void(bool)> binding_changed_func)
	: base_item_editor_item(show_binding_button, is_bound, binding_changed_func), m_title(title), m_value(initial_value), m_value_changed_func(value_changed_func)
{ }
string_item_editor_item::~string_item_editor_item() { }

int string_item_editor_item::widgets(QGridLayout* layout, int row)
{
	layout->addWidget(new styled_label(m_title), row, 0);
	QLineEdit* line_edit = new QLineEdit(m_value);
	QObject::connect(line_edit, SIGNAL(textEdited(const QString&)), this, SLOT(textEdited(const QString&)));
	layout->addWidget(line_edit, row, 1);
	add_binding_button(layout, row);

	return 1; //1 row
}
void string_item_editor_item::textEdited(const QString &text)
{
	m_value = text;
	m_value_changed_func(text);
}