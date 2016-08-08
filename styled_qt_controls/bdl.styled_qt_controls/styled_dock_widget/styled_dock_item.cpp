#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dock_item.q.hpp"
#include "styled_dock_widget.q.hpp"

using namespace bdl::styled_qt_controls;

styled_dock_item::styled_dock_item(const QString& title, QWidget* content) : m_title(title), m_content(content), m_parent(nullptr)
{ }
styled_dock_item::~styled_dock_item()
{ 
	if (m_content != nullptr)
		delete m_content;
}

void styled_dock_item::select()
{
	if (m_parent != nullptr)
		m_parent->select(this);
}

void styled_dock_item::title(const QString& value)
{
	m_title = value;
	emit title_changed(this);
}

void styled_dock_item::close()
{
	if (m_parent != nullptr)
		m_parent->remove_item(this);
}