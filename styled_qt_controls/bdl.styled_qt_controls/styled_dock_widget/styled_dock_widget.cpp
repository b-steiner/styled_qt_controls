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

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dock_widget.q.hpp"
#include "styled_dock_item.q.hpp"
#include "styled_dock_layout.q.hpp"
#include "styled_dock_overlay.q.hpp"
#include "styled_dock_splitter.q.hpp"
#include "../styled_controls/styled_frame.q.hpp"
#include "../styled_controls/styled_label.q.hpp"
#include "../styled_controls/styled_pushbutton.q.hpp"
#include "../styled_window/styled_window.q.hpp"
#include "../util/style_loader.hpp"
#include "../util/qt_helper_functions.hpp"
#include "../util/settings/settings_group.hpp"
#include "../util/settings/i_settings_provider.q.hpp"

#define DRAG_BORDER_MAX_AREA 200

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

QList<styled_dock_widget*> styled_dock_widget::m_all_dock_widgets;

styled_dock_widget::styled_dock_widget(styled_dock_orientation orientation, base_widget_factory* factory, const QString& tag, bool remove_on_empty) : m_orientation(orientation), m_selected_item(nullptr),
	m_remove_on_empty(remove_on_empty), m_title_mousedown(false), m_has_focus(false), m_drag_item(nullptr), m_ignore_overflow_changed(false), m_tag(tag), m_factory(factory)
{
	QObject::connect(qApp, SIGNAL(focusChanged(QWidget*, QWidget*)), this, SLOT(application_focus_changed(QWidget*, QWidget*)));

	styled_frame* part_background = new styled_frame();
	part_background->setObjectName("part_sdw_background");

	style_loader loader(":/styled_dock_widget/styled_dock_widget.qss");

	if (orientation == styled_dock_orientation::top)
		loader.append_file(":/styled_dock_widget/styled_dock_widget_top.qss");
	else if (orientation == styled_dock_orientation::bottom)
		loader.append_file(":/styled_dock_widget/styled_dock_widget_bottom.qss");

	part_background->setStyleSheet(loader.style_string());

	m_part_tabbar = new styled_frame();
	m_part_tabbar->setObjectName("part_sdw_tabbar");

	m_part_tabbar_layout = new styled_dock_layout();
	m_part_tabbar_layout->setSpacing(0);
	m_part_tabbar_layout->setContentsMargins(1, 2, 0, 0);
	QObject::connect(m_part_tabbar_layout, SIGNAL(overflowChanged(bool)), this, SLOT(tabbar_overflowChanged(bool)));

	m_part_overflow_button = new styled_pushbutton();
	m_part_overflow_button->setObjectName("part_sdw_overflow_button");
	m_part_overflow_button->setFixedSize(16, 17);
	m_part_overflow_button->setFocusPolicy(Qt::ClickFocus);

	m_overflow_menu = new QMenu(part_background);
	m_overflow_menu->setObjectName("part_sdw_overflow_menu");
	m_overflow_menu->setMinimumWidth(200);
	m_part_overflow_button->setMenu(m_overflow_menu);

	QGridLayout* tabbar_grid = new QGridLayout();
	tabbar_grid->setContentsMargins(0, 0, 4, 0);
	tabbar_grid->setSpacing(2);
	tabbar_grid->setRowStretch(0, 1);
	tabbar_grid->addLayout(m_part_tabbar_layout, 0, 0);
	tabbar_grid->addWidget(m_part_overflow_button, 0, 1);
	m_part_tabbar->setLayout(tabbar_grid);

	styled_frame* content_frame = new styled_frame();
	content_frame->setObjectName("part_sdw_contentframe");
	m_content_layout = new QGridLayout();
	m_content_layout->setContentsMargins(0, 0, 0, 0);
	m_content_layout->setSpacing(0);
	content_frame->setLayout(m_content_layout);

	m_part_titleframe = new styled_frame();
	m_part_titleframe->setObjectName("part_sdw_titlebar_frame");
	m_part_titleframe->setFocusProxy(this);
	m_part_titleframe->setFocusPolicy(Qt::ClickFocus);
	QObject::connect(m_part_titleframe, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(title_mousePressed(QMouseEvent*)));
	QObject::connect(m_part_titleframe, SIGNAL(mouseReleased(QMouseEvent*)), this, SLOT(title_mouseReleased(QMouseEvent*)));
	QObject::connect(m_part_titleframe, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(title_mouseMove(QMouseEvent*)));

	QGridLayout* titlebar_layout = new QGridLayout();
	titlebar_layout->setContentsMargins(0, 0, 3, 0);
	titlebar_layout->setSpacing(0);
	titlebar_layout->setColumnStretch(1, 1);

	m_part_titlebar_label = new styled_label("Placeholder");
	m_part_titlebar_label->setObjectName("part_sdw_titlebar_text");
	styled_pushbutton* title_close_button = new styled_pushbutton();
	title_close_button->setObjectName("part_sdw_title_closebutton");
	title_close_button->setFixedSize(16, 14);
	title_close_button->setObjectName("part_sdw_title_closebutton");
	title_close_button->setFocusPolicy(Qt::NoFocus);
	QObject::connect(title_close_button, SIGNAL(clicked(bool)), this, SLOT(title_close_button_clicked(bool)));

	titlebar_layout->addWidget(m_part_titlebar_label, 0, 0);
	titlebar_layout->addWidget(title_close_button, 0, 2);
	m_part_titleframe->setLayout(titlebar_layout);

	m_layout = new QGridLayout();
	m_layout->setContentsMargins(0,0,0,0);
	m_layout->setSpacing(0);

	if (orientation == styled_dock_orientation::top)
	{
		m_layout->setRowStretch(2, 1);
		m_layout->addWidget(m_part_titleframe, 0, 0);
		m_layout->addWidget(m_part_tabbar, 1, 0);
		m_layout->addWidget(content_frame, 2, 0);
		m_part_tabbar_layout->setContentsMargins(1, 2, 0, 0);
	}
	else if (orientation == styled_dock_orientation::bottom)
	{
		m_layout->setRowStretch(1, 1);
		m_layout->addWidget(m_part_titleframe, 0, 0);
		m_layout->addWidget(content_frame, 1, 0);
		m_layout->addWidget(m_part_tabbar, 2, 0);
		m_part_tabbar_layout->setContentsMargins(1, 0, 0, 2);
	}

	part_background->setLayout(m_layout);

	QGridLayout* this_layout = new QGridLayout();
	this_layout->setContentsMargins(0, 0, 0, 0);
	this_layout->addWidget(part_background, 0, 0);
	this->setLayout(this_layout);

	this->setObjectName("styled_dock_widget");
	m_all_dock_widgets.push_back(this);

	m_overlay = new styled_dock_overlay(this);
	m_overlay->setVisible(false);
	m_part_titleframe->setVisible(false);
	m_part_tabbar->setVisible(false);
	m_part_overflow_button->setVisible(orientation == styled_dock_orientation::top);
}
styled_dock_widget::~styled_dock_widget()
{
	for (auto it : m_items)
	{

		bool is_deleted = false;
		emit it->closed(is_deleted);
		if (!is_deleted)
			delete it;
	}

	m_all_dock_widgets.removeAt(m_all_dock_widgets.indexOf(this));

	delete m_overlay;
}

QList<styled_dock_widget*>& styled_dock_widget::all_dock_widgets()
{
	return m_all_dock_widgets;
}

void styled_dock_widget::add_item(styled_dock_item* item)
{
	m_items.push_back(item);
	QObject::connect(item, SIGNAL(title_changed(bdl::styled_qt_controls::styled_dock_item*)), this, SLOT(item_title_changed(bdl::styled_qt_controls::styled_dock_item*)));

	items_changed();

	if (m_selected_item == nullptr)
		select(item);

	item->parent(this);
}
void styled_dock_widget::insert_item(styled_dock_item* item, int idx)
{
	m_items.insert(idx, item);
	QObject::connect(item, SIGNAL(title_changed(bdl::styled_qt_controls::styled_dock_item*)), this, SLOT(item_title_changed(bdl::styled_qt_controls::styled_dock_item*)));

	items_changed();

	if (m_selected_item == nullptr)
		select(item);

	item->setParent(this);
}
void styled_dock_widget::remove_item(styled_dock_item* item)
{
	remove_item_internal(item, true);
}
void styled_dock_widget::remove_item(int idx)
{
	remove_item_internal(idx, true);
}
void styled_dock_widget::remove_item_internal(int idx, bool signal_closed)
{
	auto item = m_items[idx];

	bool can_close = true;
	if (signal_closed)
	{
		emit item->closing(can_close);
	}

	if (can_close)
	{
		QObject::disconnect(item, SIGNAL(title_changed(bdl::styled_qt_controls::styled_dock_item*)), this, SLOT(item_title_changed(bdl::styled_qt_controls::styled_dock_item*)));

		m_items.removeAt(idx);
		item->parent(nullptr);

		if (item == m_selected_item)
			select(nullptr);

		if (m_items.count() == 0 && m_remove_on_empty)
			this->setParent(nullptr);
		else
			items_changed();

		if (m_selected_item == nullptr && m_items.count() > 0)
			select(0);

		if (signal_closed)
		{
			bool is_deleted = false;
			emit item->closed(is_deleted);
		}
	}
}
void styled_dock_widget::remove_item_internal(styled_dock_item* item, bool signal_closed)
{
	int idx = 0;
	while (m_items[idx] != item)
		idx++;
	remove_item_internal(idx, signal_closed);
}
void styled_dock_widget::select(styled_dock_item* item)
{
	if (item == nullptr)
		select(-1);
	else
	{
		int idx = 0;
		while (m_items[idx] != item)
			idx++;
		select(idx);
	}
}
void styled_dock_widget::select(int idx)
{
	styled_dock_item* item = nullptr;
	if (idx != -1)
		item = m_items[idx];

	if (m_selected_item != nullptr)
	{
		m_tabbar_widgets[m_selected_item]->selected(false);
		m_tabbar_widgets[m_selected_item]->findChild<styled_label*>("part_sdw_tabtext")->selected(false);
		m_tabbar_widgets[m_selected_item]->findChild<styled_pushbutton*>("part_sdw_tab_closebutton")->selected(false);
	}

	if (m_selected_item != nullptr)
		m_selected_item->content()->setVisible(false);

	m_selected_item = item;

	if (item != nullptr)
	{
		item->content()->setVisible(true);
		m_part_titlebar_label->setText(item->title());

		if (!m_part_tabbar_layout->isVisible(m_tabbar_widgets[item]))
		{
			m_items.removeAt(idx);
			m_items.push_front(item);
			items_changed();
		}

		emit item->selected();
	}

	if (m_selected_item != nullptr)
	{
		m_tabbar_widgets[m_selected_item]->selected(true);
		m_tabbar_widgets[m_selected_item]->findChild<styled_label*>("part_sdw_tabtext")->selected(true);
		m_tabbar_widgets[m_selected_item]->findChild<styled_pushbutton*>("part_sdw_tab_closebutton")->selected(true);
		this->setFocusProxy(m_selected_item->content());		
	}
	else
		this->setFocusProxy(nullptr);
}
void styled_dock_widget::swap(styled_dock_item* first, styled_dock_item* second)
{
	int idx_first, idx_second;
	for (int i = 0; i < m_items.count(); i++)
	{
		if (m_items[i] == first)
			idx_first = i;
		else if (m_items[i] == second)
			idx_second = i;
	}

	m_items.swap(idx_first, idx_second);
	m_part_tabbar_layout->swap(idx_first, idx_second);
}
void styled_dock_widget::show_overlay(bool show, const QPoint& pos)
{
	if (m_selected_item != nullptr)
		emit m_selected_item->overlay_changed(show);

	this->m_overlay->setVisible(show);

	if (show)
	{
		int drag_border_area = min((min(this->width(), this->height()) / 4), DRAG_BORDER_MAX_AREA);

		auto content_frame = this->findChild<styled_frame*>("part_sdw_contentframe");
		auto content_pt = content_frame->mapFromGlobal(QCursor::pos());

		int content_border_x = min(content_pt.x(), content_frame->width() - content_pt.x());
		int content_border_y = min(content_pt.y(), content_frame->height() - content_pt.y());

		if (m_part_tabbar->isVisible() && m_part_tabbar->rect().contains(m_part_tabbar->mapFromGlobal(pos)))
		{
			m_overlay->mode(styled_overlay_mode::tab);
			bool already_set = false;

			//Check which tab we are over
			for (auto tw : m_tabbar_widgets)
			{
				if (tw->rect().contains(tw->mapFromGlobal(pos)))
				{
					m_overlay->tab(tw);
					already_set = true;
					break;
				}
			}

			if (!already_set)
			{
				if (m_items.count() > 0)
					m_overlay->tab(m_tabbar_widgets[m_items.last()]);
				else
					m_overlay->tab(nullptr);
			}
		}
		else if (content_pt.x() > drag_border_area && content_pt.x() < content_frame->width() - drag_border_area &&
			content_pt.y() > drag_border_area && content_pt.y() < content_frame->height() - drag_border_area)
		{
			m_overlay->mode(styled_overlay_mode::tab);
			if (this->m_items.count() > 0)
				m_overlay->tab(m_tabbar_widgets[this->m_items.first()]);
			else
				m_overlay->tab(nullptr);
		}
		else if (content_pt.x() < drag_border_area && content_border_x < content_border_y) //left
		{
			m_overlay->mode(styled_overlay_mode::left);
		}
		else if (content_border_x < drag_border_area && content_border_x < content_border_y) //right
		{
			m_overlay->mode(styled_overlay_mode::right);
		}
		else if (content_pt.y() < drag_border_area) //top
		{
			m_overlay->mode(styled_overlay_mode::top);
		}
		else if (content_border_y < drag_border_area) //bottom
		{
			m_overlay->mode(styled_overlay_mode::bottom);
		}
	}
	else
	{
		m_overlay->mode(styled_overlay_mode::none);
		m_overlay->tab(nullptr);
	}
}
void styled_dock_widget::drop_item(const QList<styled_dock_item*>& items, styled_dock_orientation preferred_orientation)
{
	auto mode = m_overlay->mode();
	m_overlay->mode(styled_overlay_mode::none);

	switch (mode)
	{
	case styled_overlay_mode::tab:
		{
			int idx = 0;
			if (m_overlay->tab() != nullptr)
				idx = m_items.indexOf(m_widget_to_item[(styled_frame*)m_overlay->tab()]);

			for (auto item : items)
			{
				insert_item(item, idx);
				idx++;
			}
			items_changed();
			select(items.first());
		}
		break;
	case styled_overlay_mode::left:
	case styled_overlay_mode::right:
		{
			int insert_idx = 0;
			styled_dock_splitter* split = splitter(insert_idx);

			if (split != nullptr)
			{		
				if (split->orientation() != Qt::Horizontal)
				{
					auto sizes = split->sizes();
					styled_dock_splitter* new_splitter = new styled_dock_splitter(Qt::Horizontal, m_factory);
					split->insertWidget(insert_idx, new_splitter);
					new_splitter->addWidget(this);
					insert_idx = 0;
					split->setSizes(sizes);
					split = new_splitter;
				}

				auto old_idx = insert_idx;
				if (mode == styled_overlay_mode::right)
					insert_idx++;

				auto sizes = split->sizes();
				sizes[old_idx] = sizes[old_idx] / 2;
				sizes.insert(old_idx, sizes[old_idx]);
				styled_dock_widget* new_widget = new styled_dock_widget(preferred_orientation, m_factory, "", true);
				split->insertWidget(insert_idx, new_widget);
				split->setSizes(sizes);

				for (auto item : items)
					new_widget->add_item(item);

				new_widget->items_changed();
				new_widget->select(items.first());
			}
			else
				qWarning() << "Unable to find styled_dock_splitter. styled_dock_widgets always have to be a parent of styled_dock_splitter";
		}
		break;
	case styled_overlay_mode::top:
	case styled_overlay_mode::bottom:
	{
		int insert_idx = 0;
		styled_dock_splitter* split = splitter(insert_idx);

		if (split != nullptr)
		{
			if (split->orientation() != Qt::Vertical)
			{
				auto sizes = split->sizes();
				styled_dock_splitter* new_splitter = new styled_dock_splitter(Qt::Vertical, m_factory);
				split->insertWidget(insert_idx, new_splitter);
				new_splitter->addWidget(this);
				insert_idx = 0;
				split->setSizes(sizes);
				split = new_splitter;
			}

			auto old_idx = insert_idx;
			if (mode == styled_overlay_mode::bottom)
				insert_idx++;

			auto sizes = split->sizes();
			sizes[old_idx] = sizes[old_idx] / 2;
			sizes.insert(old_idx, sizes[old_idx]);
			styled_dock_widget* new_widget = new styled_dock_widget(preferred_orientation, m_factory, "", true);
			split->insertWidget(insert_idx, new_widget);
			split->setSizes(sizes);

			for (auto item : items)
				new_widget->add_item(item);

			new_widget->items_changed();
			new_widget->select(items.first());
		}
		else
			qWarning() << "Unable to find styled_dock_splitter. styled_dock_widgets always have to be a parent of styled_dock_splitter";
	}
	break;
	}
}

void styled_dock_widget::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}
void styled_dock_widget::resizeEvent(QResizeEvent * event)
{
	styled_widget::resizeEvent(event);
	m_overlay->resize(this->size());
}

void styled_dock_widget::items_changed()
{
	m_ignore_overflow_changed = true;

	m_part_tabbar_layout->clear();
	m_tabbar_widgets.clear();
	m_widget_to_item.clear();
	m_overflow_menu->clear();

	if (m_items.count() > 0)
	{
		m_part_titleframe->setVisible(m_orientation == styled_dock_orientation::bottom);
		m_part_tabbar->setVisible(true);
	}
	else
	{
		m_part_titleframe->setVisible(false);
		m_part_tabbar->setVisible(false);
	}

	int row = 0;
	for (auto item : m_items)
	{
		auto widget = tabbar_widget(item);
		m_tabbar_widgets.insert(item, widget);
		m_widget_to_item.insert(widget, item);
		m_part_tabbar_layout->addWidget(widget);

		m_content_layout->addWidget(item->content(), row, 0);
		row++;
		item->content()->setVisible(false);

		auto action = m_overflow_menu->addAction(item->title());
		action->setData(qVariantFromValue((void*)item));
		QObject::connect(action, SIGNAL(triggered(bool)), this, SLOT(tabbar_overflow_action_triggered(bool)));
	}

	if (m_items.size() > 0)
	{
		select(m_selected_item);

		if (m_selected_item != nullptr && !m_part_tabbar_layout->isVisible(m_tabbar_widgets[m_selected_item]) && m_items[0] != m_selected_item)
		{
			auto item = m_selected_item;
			m_items.removeAt(m_items.indexOf(item));
			m_items.insert(0, item);
			select(0);
			items_changed();
		}
	}
	else
		select(nullptr);

	m_ignore_overflow_changed = false;
}
styled_frame* styled_dock_widget::tabbar_widget(styled_dock_item* item)
{
	styled_frame* tab = new styled_frame();
	tab->setObjectName("part_sdw_tab");
	QObject::connect(tab, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(tabbar_widget_mousePressed(QMouseEvent*)));
	QObject::connect(tab, SIGNAL(mouseReleased(QMouseEvent*)), this, SLOT(tabbar_widget_mouseReleased(QMouseEvent*)));
	QObject::connect(tab, SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(tabbar_widget_mouseMove(QMouseEvent*)));
	QObject::connect(tab, SIGNAL(hover_changed(bool)), this, SLOT(tabbar_widget_hover_changed(bool)));

	styled_label* tab_label = new styled_label(item->title());
	tab_label->setObjectName("part_sdw_tabtext");

	QGridLayout* tab_layout = new QGridLayout();
	tab_layout->setContentsMargins(0, 0, 0, 0);
	tab_layout->addWidget(tab_label, 0, 0, Qt::AlignVCenter | Qt::AlignLeft);

	styled_pushbutton* tab_close_button = new styled_pushbutton();
	tab_close_button->setObjectName("part_sdw_tab_closebutton");
	tab_close_button->setFocusPolicy(Qt::NoFocus);
	tab_close_button->setFixedSize(16, 14);
	tab_close_button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
	QObject::connect(tab_close_button, SIGNAL(clicked(bool)), this, SLOT(tabbar_close_button_clicked(bool)));

	QVBoxLayout* close_button_layout = new QVBoxLayout();
	close_button_layout->setContentsMargins(0, 1, 0, 0);
	close_button_layout->addWidget(tab_close_button);
	tab_layout->addLayout(close_button_layout, 0, 1, Qt::AlignVCenter | Qt::AlignRight);

	tab->setLayout(tab_layout);

	tab_close_button->setVisible(m_orientation == styled_dock_orientation::top);

	tab->custom_data_1(m_has_focus);
	tab_close_button->custom_data_1(m_has_focus);

	return tab;
}
styled_window* styled_dock_widget::drag_window(QList<styled_dock_item*> items, styled_dock_widget** dock_widget)
{
	styled_window* window = new styled_window("tpengine::editor");
	window->flags(window->flags() | styled_window::window_flags::delete_on_close);

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	window->client_widget()->setLayout(layout);

	styled_dock_splitter* splitter = new styled_dock_splitter(Qt::Horizontal, m_factory, true);
	layout->addWidget(splitter, 0, 0);

	*dock_widget = new styled_dock_widget(this->m_orientation, m_factory, "", true);
	splitter->addWidget(*dock_widget);
	

	(*dock_widget)->setObjectName("part_dragwindow_dockwidget");

	for (auto item : items)
		(*dock_widget)->add_item(item);

	QObject::connect(window, SIGNAL(frameless_changed(bool)), *dock_widget, SLOT(dragwindow_frameless_changed(bool)));
	QObject::connect(window, SIGNAL(moved()), *dock_widget, SLOT(dragwindow_moved()));
	QObject::connect(window, SIGNAL(move_started()), *dock_widget, SLOT(dragwindow_move_started()));
	QObject::connect(window, SIGNAL(move_ended()), *dock_widget, SLOT(dragwindow_move_ended()));

	return window;
}
void styled_dock_widget::set_focus(bool focused)
{
	this->findChild<styled_frame*>("part_sdw_contentframe")->custom_data_1(focused);
	m_part_titleframe->custom_data_1(focused);
	m_part_titleframe->findChild<styled_pushbutton*>("part_sdw_title_closebutton")->custom_data_1(focused);
	m_part_overflow_button->custom_data_1(focused);

	for (auto w : m_tabbar_widgets)
	{
		w->custom_data_1(focused);
		w->findChild<styled_pushbutton*>("part_sdw_tab_closebutton")->custom_data_1(focused);
	}
}

void styled_dock_widget::tabbar_widget_mousePressed(QMouseEvent* event)
{
	styled_frame* s = (styled_frame*)sender();
	auto* item = m_widget_to_item[s];
	select(item);
	item->content()->setFocus(Qt::FocusReason::MouseFocusReason);
	m_drag_item = item;
	m_drag_reference_x = (s->mapToGlobal(QPoint(0, 0)).x() + s->mapToGlobal(QPoint(s->width(), s->height())).x()) / 2;
}
void styled_dock_widget::tabbar_widget_mouseReleased(QMouseEvent* event)
{
	m_drag_item = nullptr;
}
void styled_dock_widget::tabbar_widget_mouseMove(QMouseEvent* event)
{
	styled_frame* s = (styled_frame*)sender();

	QPoint p = event->globalPos();
	QPoint top_left = s->mapToGlobal(QPoint(0, 0));
	QPoint bottom_right = s->mapToGlobal(QPoint(s->width(), s->height()));

	if (m_drag_item != nullptr)
	{
		//Check if user pulled downwards out of widget
		if (p.y() > bottom_right.y() || p.y() < top_left.y())
		{
			remove_item_internal(m_drag_item, false);
			
			styled_dock_widget* dock_widget;
			QList<styled_dock_item*> items = { m_drag_item };
			auto window = drag_window(items, &dock_widget);
			window->flags(window->flags() | styled_window::window_flags::frameless | styled_window::window_flags::frame_on_stop_move);
			(dock_widget)->m_part_overflow_button->setVisible(false);
			(dock_widget)->m_part_tabbar->selected(true);
			(dock_widget)->findChild<styled_frame*>("part_sdw_background")->selected(true);
			(dock_widget)->findChild<styled_frame*>("part_sdw_contentframe")->selected(true);
			releaseMouse();
			window->show();

			//Set window position
			auto item_widget = dock_widget->m_tabbar_widgets[m_drag_item];
			auto offset = window->client_widget()->mapFromGlobal(item_widget->mapToGlobal(QPoint(item_widget->width() / 2, item_widget->height() / 2)));

			auto window_geom = window->geometry();
			window->geometry(p.x() - offset.x(), p.y() - offset.y(), window_geom.width(), window_geom.height());
			m_drag_item = nullptr;

			window->start_move();
		}
		//Check if swap necessary (on correct side of reference_x and outside of current widget)
		else if (p.x() < top_left.x() && p.x() < m_drag_reference_x) //drag left
		{
			m_drag_reference_x = top_left.x();
			auto other_widget = qwidget_child_at(m_part_tabbar, m_part_tabbar->mapFromGlobal(p), false);
			if (other_widget != nullptr)
			{
				swap(m_drag_item, m_widget_to_item[(styled_frame*)other_widget]);
			}
		}
		else if (p.x() > bottom_right.x() && p.x() > m_drag_reference_x) //drag right
		{
			m_drag_reference_x = bottom_right.x();
			auto other_widget = qwidget_child_at(m_part_tabbar, m_part_tabbar->mapFromGlobal(p), false);
			if (other_widget != nullptr)
			{
				swap(m_drag_item, m_widget_to_item[(styled_frame*)other_widget]);				
			}
		}
		else if (p.x() > top_left.x() && p.x() < bottom_right.x()) //over item
		{
			m_drag_reference_x = (top_left.x() + bottom_right.x()) / 2;
		}
	}
}
void styled_dock_widget::tabbar_widget_hover_changed(bool value)
{
	styled_frame* s = (styled_frame*)sender();
	auto close_button = s->findChild<styled_pushbutton*>("part_sdw_tab_closebutton");
	close_button->parent_hover(value);
}
void styled_dock_widget::tabbar_close_button_clicked(bool is_checked)
{
	auto item_widget = (styled_frame*)sender()->parent();
	auto item = this->m_widget_to_item[item_widget];
	remove_item(item);
}
void styled_dock_widget::tabbar_overflowChanged(bool is_overflow)
{
	m_part_overflow_button->selected(is_overflow);

	if (!m_ignore_overflow_changed)
	{
		if (m_selected_item != nullptr && !m_part_tabbar_layout->isVisible(m_tabbar_widgets[m_selected_item]) && m_items[0] != m_selected_item)
		{
			auto item = m_selected_item;
			m_items.removeAt(m_items.indexOf(item));
			m_items.insert(0, item);
			select(0);
			items_changed();
		}
	}
}
void styled_dock_widget::tabbar_overflow_action_triggered(bool is_checked)
{
	auto action = (QAction*)sender();
	auto item = (styled_dock_item*)qvariant_cast<void*>(action->data());

	select(item);
	item->content()->setFocus(Qt::FocusReason::MouseFocusReason);
}
void styled_dock_widget::dragwindow_frameless_changed(bool is_frameless)
{
	if (is_frameless == false)
	{
		auto window = (styled_window*)sender();
		auto dock_widget = window->client_widget()->findChild<styled_dock_widget*>("part_dragwindow_dockwidget");

		dock_widget->m_part_overflow_button->setVisible(true);
		dock_widget->m_part_tabbar->selected(false);
		dock_widget->findChild<styled_frame*>("part_sdw_background")->selected(false);
		dock_widget->findChild<styled_frame*>("part_sdw_contentframe")->selected(false);

		QObject::disconnect(sender(), SIGNAL(frameless_changed(bool)), this, SLOT(dragwindow_frameless_changed(bool)));
	}
}
void styled_dock_widget::dragwindow_moved()
{
	auto w = (styled_window*)sender();

	auto cp = QCursor::pos();

	auto top_drag_widget = front_widget_at(cp);

	for (auto w : m_all_dock_widgets)
		if (w != top_drag_widget)
			w->show_overlay(false, cp);

	if (top_drag_widget != nullptr && !flag_contains(w->flags(), styled_window::window_flags::hittest_visible))
	{
		top_drag_widget->show_overlay(true, cp);
	}
}
void styled_dock_widget::dragwindow_move_started()
{
	auto w = (styled_window*)sender();

	int c = 0;
	for (auto dw : m_all_dock_widgets)
		if (dw->window() == w)
			c++;

	if (c <= 1)
		w->flags(w->flags() & ~styled_window::window_flags::hittest_visible);
}
void styled_dock_widget::dragwindow_move_ended()
{
	auto w = (styled_window*)sender();

	if (!flag_contains(w->flags(), styled_window::window_flags::hittest_visible))
	{
		auto top_drag_widget = front_widget_at(QCursor::pos());
		if (top_drag_widget != nullptr)
		{
			for (auto dwidget : m_all_dock_widgets)
			{
				if (dwidget->window() == w)
				{
					dwidget->select(nullptr);
					top_drag_widget->drop_item(dwidget->m_items, dwidget->m_orientation);
					dwidget->m_items.clear();
				}
			}

			w->close();
		}
		else
		{
			w->flags(w->flags() | styled_window::window_flags::hittest_visible);
		}
	}

	for (auto dw : m_all_dock_widgets)
		dw->show_overlay(false, QCursor::pos());
}
void styled_dock_widget::title_close_button_clicked(bool is_checked)
{
	remove_item(m_selected_item);
}
void styled_dock_widget::title_mousePressed(QMouseEvent* event)
{
	this->m_selected_item->content()->setFocus(Qt::FocusReason::MouseFocusReason);
	m_title_mousedown = true;
}
void styled_dock_widget::title_mouseReleased(QMouseEvent* event)
{
	m_title_mousedown = false;
}
void styled_dock_widget::title_mouseMove(QMouseEvent* event)
{
	QPoint p = event->globalPos();

	if (m_title_mousedown && !m_part_titleframe->rect().contains(m_part_titleframe->mapFromGlobal(p))) //Drag out
	{
		QList<styled_dock_item*> items = m_items;
		select(nullptr);
		while (m_items.size() > 0)
			remove_item(m_items.size() - 1);

		styled_dock_widget* dock_widget;
		auto window = drag_window(items, &dock_widget);
		releaseMouse();
		window->show();

		//Set window position

		auto window_geom = window->geometry();
		window->geometry(p.x() - 10, p.y() - 10, window_geom.width(), window_geom.height());
		m_drag_item = nullptr;

		m_title_mousedown = false;
		window->start_move();
	}
}
void styled_dock_widget::application_focus_changed(QWidget* old_widget, QWidget* new_widget)
{
	bool me_focus = false;

	QObject* o = new_widget;
	while (o != nullptr)
	{
		if (o == this)
		{
			me_focus = true;
			break;
		}
		o = o->parent();
	}

	this->set_focus(me_focus);

	/*if (new_widget != nullptr)
		qDebug() << "Focus: " << new_widget->metaObject()->className() << ", " << new_widget->objectName();
	else
		qDebug() << "Focus: none";*/
}

void styled_dock_widget::item_title_changed(bdl::styled_qt_controls::styled_dock_item*)
{
	items_changed();
}


styled_window* styled_dock_widget::window()
{
	QWidget* widget = this;
	while (widget->parent() != nullptr)
	{
		widget = (QWidget*)widget->parent();
	}

	return styled_window::widget_to_window(widget);
}
styled_dock_splitter* styled_dock_widget::splitter(int& idx)
{
	QObject* p = this;
	while (p->parent() != nullptr && !ISQTYPE(p->parent(), styled_dock_splitter))
		p = p->parent();

	auto sp = (styled_dock_splitter*)p->parent();
	idx = sp->indexOf((QWidget*)p);
	return sp;
}
QVector<styled_dock_widget*> styled_dock_widget::front_to_back_widgets()
{
	QVector<styled_dock_widget*> result;
	
	QMultiHash<styled_window*, styled_dock_widget*> widget_to_window;
	for (auto dwidget : m_all_dock_widgets)
	{
		auto win = dwidget->window();
		widget_to_window.insert(win, dwidget);
	}

	auto all_windows = styled_window::front_to_back_windows();
	for (auto win : all_windows)
	{
		auto widgets = widget_to_window.values(win);
		for (auto wid : widgets)
			result.push_back(wid);
	}

	return result;
}
styled_dock_widget* styled_dock_widget::front_widget_at(const QPoint& p)
{
	auto ftb_widgets = front_to_back_widgets();

	for (auto dwidget : ftb_widgets)
	{
		auto r = dwidget->rect();
		auto mp = dwidget->mapFromGlobal(p);

		if (dwidget->rect().contains(dwidget->mapFromGlobal(p)))
			return dwidget;
	}

	return nullptr;
}

settings_group* styled_dock_widget::save_settings()
{
	settings_group* sgroup = new settings_group("styled_dock_widget");
	sgroup->values()["type"] = "styled_dock_widget";
	sgroup->values()["selected_idx"] = QString::number(m_items.indexOf(m_selected_item));
	sgroup->values()["tag"] = m_tag;

	if (m_remove_on_empty)
		sgroup->values()["remove_on_empty"] = "True";
	else
		sgroup->values()["remove_on_empty"] = "False";
	
	if (m_orientation == styled_dock_orientation::top)
		sgroup->values()["orientation"] = "top";
	else
		sgroup->values()["orientation"] = "bottom";

	int idx = 0;

	for (auto item : m_items)
	{
		if (ISQTYPE(item->content(), i_settings_provider))
		{
			auto item_group = ((i_settings_provider*)item->content())->save_settings();
			item_group->key("item[" + QString::number(idx) + "]");
			item_group->values()["idx"] = QString::number(idx);
			sgroup->add_group(item_group);
		}
		//else
		//	qDebug() << "styled_dock_widget: Item not derived from i_settings_provider, no settings saved";

		idx++;
	}
	
	return sgroup;
}
void styled_dock_widget::load_settings(settings_group* group)
{
	this->m_tag = group->values()["tag"];
	this->m_remove_on_empty = group->values()["remove_on_empty"] == "True";

	int done = 0;
	int idx = 0;
	while (done < group->groups().count())
	{
		QString key = "item[" + QString::number(idx) + "]";

		if (group->groups().contains(key))
		{
			m_factory->load(this, group->groups()[key]);
			done++;
		}

		idx++;
	}

	int selected_idx = group->values()["selected_idx"].toInt();
	if (m_items.count() > selected_idx)
		this->select(selected_idx);



	/*QHash<int, i_plugin*> children;
	QHash<int, settings_group*> groups;

	for (auto grp : group->groups())
	{
		if (grp->values()["type"] == "plugin")
		{
			hash_string h(grp->values()["plugin_name"].toUtf8().data());
			auto* plugin = app::application::instance()->plugin_host()->get_plugin(h);
			children.insert(grp->values()["idx"].toInt(), plugin);
			groups.insert(grp->values()["idx"].toInt(), grp);
		}
	}

	int done = 0;
	int idx = 0;
	int select_idx = -1;

	while (done < children.count())
	{
		if (children.contains(idx))
		{
			if (idx == group->values()["selected_idx"].toInt())
				select_idx = done;

			children[idx]->open(this, groups[idx]);
			done++;
		}

		idx++;
	}

	if (select_idx != -1)
		this->select(select_idx);*/
}

QSize styled_dock_widget::minimumSizeHint() const
{
	QSize originalHint = styled_widget::minimumSizeHint();

	QSize currentTabSize(0,0);
	if (m_selected_item != nullptr)
		currentTabSize = m_selected_item->content()->minimumSizeHint();

	int max_tab_height = 0;
	int max_tab_width = 0;

	for (auto c : this->m_items)
	{
		auto csize = c->content()->minimumSizeHint();
		max_tab_height = max(max_tab_height, csize.height());
		max_tab_width = max(max_tab_width, csize.width());
	}

	//The max(..., 0) are necessary when a widget hasn't set the minimum size hint (value == -1 in that case)
	QSize result(
		max(max(max_tab_width + 2, 0), originalHint.width()), // 2 seems to be the border
		originalHint.height() - max(currentTabSize.height(), 0) + max(max_tab_height, 0)
		);

	return result;
}