#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_item_editor.q.hpp"

using namespace bdl::styled_qt_controls;

styled_item_editor::styled_item_editor()
{

}
styled_item_editor::~styled_item_editor()
{
	for (auto g : m_groups)
		delete g;
}

void styled_item_editor::add_group(base_editor_group* group)
{
	m_groups.push_back(group);
	groups_changed();
}
void styled_item_editor::remove_group(base_editor_group* group)
{
	int idx = 0;
	while (m_groups[idx] != group && idx < m_groups.count())
		idx++;

	if (idx < m_groups.count())
		remove_group(idx);
}
void styled_item_editor::remove_group(int idx)
{
	m_groups.removeAt(idx);
	groups_changed();
}

void styled_item_editor::groups_changed()
{

}