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
#include "styled_path_widget.q.hpp"

#include "styled_path_widget_item.q.hpp"
#include "styled_path_widget_layout.q.hpp"
#include "..\util\style_loader.hpp"
#include "..\styled_controls\styled_pushbutton.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_path_widget::styled_path_widget() : m_is_undo_redo(false)
{
	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	layout->setSpacing(0);

	m_layout = new styled_path_widget_layout();
	m_layout->setContentsMargins(0, 0, 0, 0);
	m_layout->setSpacing(0);
	QObject::connect(m_layout, SIGNAL(overflow_changed(bool)), this, SLOT(layout_overflow_changed(bool)));

	m_overflow_button = new QPushButton();
	m_overflow_button->setFixedWidth(20);
	m_overflow_button->setVisible(false);
	m_overflow_button->setMenu(new QMenu(this));
	m_overflow_button->setObjectName("part_spw_overflowbutton");
	m_overflow_button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);

	QPushButton* back_button = new QPushButton();
	back_button->setFixedWidth(20);
	back_button->setEnabled(false);
	back_button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
	back_button->setObjectName("part_spw_backbutton");
	QObject::connect(back_button, SIGNAL(clicked(bool)), this, SLOT(back_button_clicked(bool)));

	QPushButton* forward_button = new QPushButton();
	forward_button->setFixedWidth(20);
	forward_button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
	forward_button->setObjectName("part_spw_forwardbutton");
	forward_button->setEnabled(false);
	QObject::connect(forward_button, SIGNAL(clicked(bool)), this, SLOT(forward_button_clicked(bool)));

	QWidget* separator = new QWidget();
	separator->setObjectName("part_spw_separatorwidget");
	separator->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);

	layout->addWidget(back_button, 0, 0);
	layout->addWidget(forward_button, 0, 1);
	layout->addWidget(separator, 0, 2);
	layout->addWidget(m_overflow_button, 0, 3);
	layout->addLayout(m_layout, 0, 4);
	layout->setColumnStretch(4, 1);
	this->setLayout(layout);

	QObject::connect(&m_undo_stack, SIGNAL(canRedoChanged(bool)), this, SLOT(stack_canredochanged(bool)));
	QObject::connect(&m_undo_stack, SIGNAL(canUndoChanged(bool)), this, SLOT(stack_canundochanged(bool)));



	style_loader loader(":/styled_path_widget/styled_path_widget.qss");
	this->setStyleSheet(loader.style_string());
}
styled_path_widget::~styled_path_widget()
{
	for (auto i : m_items)
		delete i;
}

void styled_path_widget::items(const QList<styled_path_widget_item*>& items)
{
	if (m_items.count() != 0 && !m_is_undo_redo)
	{
		m_undo_stack.push(new path_undo_command(m_items.last()->clone(), items.last()->clone(), this));
	}

	for (auto item : m_items)
	{
		if (!items.contains(item))
			delete item;
	}
	m_items.clear();

	for (auto add : items)
	{
		m_items.push_back(add);
	}

	update_ui();
}

void styled_path_widget::update_ui()
{
	auto layout = m_layout;

	//Clear
	QLayoutItem* item;
	while ((item = layout->takeAt(0)) != NULL)
	{
		delete item->widget();
		delete item;
	}
	m_item_to_widget.clear();

	//Create new items
	for (auto item : m_items)
	{
		QWidget* itemWidget = new QWidget();

		QGridLayout* itemLayout = new QGridLayout();
		itemLayout->setContentsMargins(0, 0, 0, 0);
		itemLayout->setSpacing(0);
		itemWidget->setLayout(itemLayout);

		styled_pushbutton* textButton = new styled_pushbutton(item->text());
		textButton->data(item);
		textButton->setObjectName("part_spw_textbutton");
		QObject::connect(textButton, SIGNAL(clicked(bool)), this, SLOT(text_button_clicked(bool)));
		itemLayout->addWidget(textButton, 0, 0);

		if (item->menu_items().count() > 0)
		{
			QPushButton* menuButton = new QPushButton();
			menuButton->setObjectName("part_spw_menubutton");
			menuButton->setFixedWidth(13);
			menuButton->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
			itemLayout->addWidget(menuButton, 0, 1);

			QMenu* menu = new QMenu(this);
			for (auto menuEntry : item->menu_items())
			{
				auto action = menu->addAction(menuEntry->text());
				action->setData(qVariantFromValue(menuEntry));
				QObject::connect(action, SIGNAL(triggered(bool)), this, SLOT(action_triggered(bool)));
			}
			menuButton->setMenu(menu);
		}

		layout->addWidget(itemWidget);

		m_item_to_widget.insert(item, itemWidget);
	}
}

void styled_path_widget::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}

void styled_path_widget::layout_overflow_changed(bool overflow)
{
	m_overflow_button->setVisible(overflow);

	if (overflow)
	{
		m_overflow_button->menu()->clear();

		auto it = m_items.end();
		while (it != m_items.begin())
		{
			--it;

			auto item = *it;

			if (!m_layout->is_visible(m_item_to_widget[item]))
			{
				auto action = m_overflow_button->menu()->addAction(item->text());
				action->setData(qVariantFromValue(item));
				QObject::connect(action, SIGNAL(triggered(bool)), this, SLOT(action_triggered(bool)));
			}
		}
	}
}
void styled_path_widget::text_button_clicked(bool _checked)
{
	styled_pushbutton* s = (styled_pushbutton*)sender();
	auto newItem = (styled_path_widget_item*)s->data();

	auto oldItem = m_items.last();
	if (newItem != oldItem)
	{
		m_undo_stack.push(new path_undo_command(oldItem->clone(), newItem->clone(), this));
	}
}
void styled_path_widget::action_triggered(bool _checked)
{
	QAction* s = (QAction*)sender();
	auto newItem = qvariant_cast<styled_path_widget_item*>(s->data());
	auto oldItem = m_items.last();
	if (newItem != oldItem)
	{
		m_undo_stack.push(new path_undo_command(oldItem->clone(), newItem->clone(), this));
	}
}

void styled_path_widget::stack_canredochanged(bool _canRedo)
{
	auto button = this->findChild<QPushButton*>("part_spw_forwardbutton");
	button->setEnabled(_canRedo);
}
void styled_path_widget::stack_canundochanged(bool _canUndo)
{
	auto button = this->findChild<QPushButton*>("part_spw_backbutton");
	button->setEnabled(_canUndo);
}

void styled_path_widget::forward_button_clicked(bool _checked)
{
	m_is_undo_redo = true;
	m_undo_stack.redo();
	m_is_undo_redo = false;
}
void styled_path_widget::back_button_clicked(bool _checked)
{
	m_is_undo_redo = true;
	m_undo_stack.undo();
	m_is_undo_redo = false;
}



styled_path_widget::path_undo_command::path_undo_command(styled_path_widget_item* old_item, styled_path_widget_item* new_item, styled_path_widget* widget)
	: m_old_item(old_item), m_new_item(new_item), m_widget(widget)
{ }
styled_path_widget::path_undo_command::~path_undo_command()
{
	delete m_old_item;
	delete m_new_item;
}

void styled_path_widget::path_undo_command::redo()
{
	m_widget->m_is_undo_redo = true;
	emit m_widget->item_selected(m_new_item);
	m_widget->m_is_undo_redo = false;
}
void styled_path_widget::path_undo_command::undo()
{
	m_widget->m_is_undo_redo = true;
	emit m_widget->item_selected(m_old_item);
	m_widget->m_is_undo_redo = false;
}