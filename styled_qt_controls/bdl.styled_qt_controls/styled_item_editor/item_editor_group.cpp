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
#include "item_editor_group.q.hpp"
#include "item_editor_group_widget.q.hpp"
#include "../styled_controls/styled_collapse_widget.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

item_editor_group::item_editor_group(const QString& title, const QString& storage_key, bool show_enable_button, bool enabled_state, std::function<void(bool)> enabled_changed_func, QMenu* additional_options)
	: m_title(title), m_show_enable_button(show_enable_button), m_is_expanded(false), m_widget(nullptr), m_additional_options(additional_options),
	m_enabled_changed_func(enabled_changed_func), m_enabled_state(enabled_state), m_enabled_box(nullptr), m_storage_key(storage_key)
{ }
item_editor_group::~item_editor_group()
{
	for (auto i : m_items)
		delete i;
}

i_settings_provider* item_editor_group::widget()
{
	m_widget = top_level_widget();
		
	m_collapse_widget = new styled_collapse_widget();
	m_collapse_widget->is_collapsed(true);

	//Title
	QWidget* title_widget = new QWidget();
	title_widget->setFixedHeight(20);

	QGridLayout* title_layout = new QGridLayout();
	title_layout->setContentsMargins(2, 0, 7, 0);
	title_layout->setSpacing(2);
	title_layout->setColumnStretch(1, 1);
	title_widget->setLayout(title_layout);
	m_collapse_widget->title_widget(title_widget);

	if (m_show_enable_button)
	{
		m_enabled_box = new QCheckBox();
		m_enabled_box->setChecked(m_enabled_state);
		QObject::connect(m_enabled_box, SIGNAL(stateChanged(int)), this, SLOT(enabled_stateChanged(int)));
		title_layout->addWidget(m_enabled_box, 0, 0, Qt::AlignVCenter);
	}
	else
		m_enabled_box = nullptr;
		
	QLabel* title_label = new QLabel(m_title);
	title_label->setObjectName("part_ieg_title_label");
	title_label->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
	title_layout->addWidget(title_label, 0, 1, Qt::AlignVCenter);

	if (m_additional_options != nullptr)
	{
		QPushButton* add_opt_button = new QPushButton();
		add_opt_button->setObjectName("part_ieg_additional_options_button");
		add_opt_button->setFixedSize(10, 16);
		add_opt_button->setMenu(m_additional_options);
		title_layout->addWidget(add_opt_button, 0, 2, Qt::AlignVCenter);
	}

	//Content
	QWidget* body_widget = new QWidget();
	body_widget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
	body_widget->setObjectName("part_ieg_body_widget");
	QGridLayout* body_layout = new QGridLayout();
	body_layout->setContentsMargins(0, 2, 0, 6);
	body_layout->setSpacing(4);
	body_layout->setColumnMinimumWidth(0, 11);
	body_layout->setColumnMinimumWidth(3, 24);
	body_layout->setColumnStretch(2, 1);
	body_widget->setLayout(body_layout);
	m_collapse_widget->content_widget(body_widget);

	QGridLayout* widget_layout = new QGridLayout();
	widget_layout->setContentsMargins(0, 0, 0, 0);
	widget_layout->setSpacing(0);
	widget_layout->addWidget(m_collapse_widget, 0, 0);
	m_widget->setLayout(widget_layout);

	items_changed();
	return m_widget;
}

void item_editor_group::add_item(base_item_editor_item* item)
{
	m_items.push_back(item);
	items_changed();
}
void item_editor_group::remove_item(base_item_editor_item* item)
{
	int idx = 0;
	while (m_items[idx] != item && idx < m_items.count())
		idx++;

	if (idx < m_items.count())
		remove_item(idx);
}
void item_editor_group::remove_item(int idx)
{
	m_items.removeAt(idx);
	items_changed();
}

item_editor_group_widget * item_editor_group::top_level_widget()
{
	return new item_editor_group_widget();
}

void item_editor_group::items_changed()
{
	for (auto it : m_items)
		it->notify_widget_deleted();

	if (m_widget != nullptr)
	{
		QGridLayout* layout = (QGridLayout*)m_collapse_widget->content_widget()->layout();

		QLayoutItem *wItem;
		while ((wItem = layout->takeAt(0)) != nullptr)
		{
			delete wItem->widget();
			delete wItem;
		}

		int row = 0;
		for (auto& item : m_items)
		{
			row += item->widgets(layout, row);
		}

		layout->setRowStretch(row, 1);
	}
}

void item_editor_group::widget_deleted()
{
	for (auto it : m_items)
		it->notify_widget_deleted();

	m_widget = nullptr;
	m_enabled_box = nullptr;
}

void item_editor_group::enabled_stateChanged(int state)
{
	switch ((Qt::CheckState)state)
	{
	case Qt::CheckState::Checked:
		m_enabled_changed_func(true);
		break;
	case Qt::CheckState::Unchecked:
		m_enabled_changed_func(false);
		break;
	}
}
void item_editor_group::enabled_state(const bool& value)
{
	m_enabled_state = value;
	if (m_enabled_box != nullptr)
		m_enabled_box->setChecked(m_enabled_state);
}

void item_editor_group::additional_options(QMenu* const & value)
{
	m_additional_options = value;
}

settings_group* item_editor_group::save_settings()
{
	if (m_storage_key != "")
	{
		auto group = new settings_group(m_storage_key);

		if (m_collapse_widget != nullptr)
			group->values()["is_collapsed"] = m_collapse_widget->is_collapsed() ? "True" : "False";
		return group;
	}

	return nullptr;
}
void item_editor_group::load_settings(settings_group* group)
{
	if (m_storage_key != "")
	{
		auto grp = group->groups().find(m_storage_key);
		if (grp != group->groups().end())
		{
			//Restore values
			if (m_collapse_widget != nullptr && grp.value()->values().contains("is_collapsed"))
				m_collapse_widget->is_collapsed(grp.value()->values()["is_collapsed"] == "True");
		}
	}
}