#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_item_editor.q.hpp"
#include "../util/style_loader.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_item_editor::styled_item_editor()
{
	style_loader loader(":/styled_item_editor/styled_item_editor.qss");

	QWidget* content_widget = new QWidget();
	content_widget->setStyleSheet(loader.style_string());
	content_widget->setMinimumSize(100, 100);
	content_widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);

	m_layout = new QGridLayout();
	m_layout->setContentsMargins(0, 0, 0, 0);
	m_layout->setSpacing(0);
	content_widget->setLayout(m_layout);

	this->setWidget(content_widget);
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
	while (m_layout->count() > 0)
	{
		auto item = m_layout->takeAt(0);
		delete item->widget();
		delete item;
	}

	int row = 0;
	for (auto g : m_groups)
	{
		m_layout->addWidget(g->widget(), row, 0);
		m_layout->setRowStretch(row, 0);
		row++;
	}

	m_layout->setRowStretch(row, 1);
}