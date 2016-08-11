#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_path_widget_item.q.hpp"

using namespace bdl::styled_qt_controls;

styled_path_widget_item::styled_path_widget_item(const QString& text, const QVariant& data) : m_text(text), m_data(data)
{ }
styled_path_widget_item::~styled_path_widget_item() { }


styled_path_widget_item* styled_path_widget_item::clone()
{
	auto result = new styled_path_widget_item(m_text, m_data);
	return result;
}