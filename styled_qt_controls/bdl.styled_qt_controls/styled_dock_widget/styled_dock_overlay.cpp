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
#include "styled_dock_overlay.q.hpp"

#include "styled_dock_widget.q.hpp"
#include "../util/theme_colors.hpp"
#include "../styled_controls/styled_frame.q.hpp"

#define BORDER_THICKNESS 6

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_dock_overlay::styled_dock_overlay(styled_dock_widget* widget) : QWidget(widget), m_mode(styled_overlay_mode::none), m_tab(nullptr), m_widget(widget)
{
	setAttribute(Qt::WA_TransparentForMouseEvents);
}
styled_dock_overlay::~styled_dock_overlay()
{ }

void styled_dock_overlay::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);

	QColor overlay_color = QColor(theme_colors::light_highlight);
	overlay_color.setAlpha(127);
	QColor border_color = QColor(0, 0, 255);
	QPen border_pen(border_color, BORDER_THICKNESS, Qt::SolidLine, Qt::SquareCap, Qt::MiterJoin);

	auto content_frame = m_widget->findChild<styled_frame*>("part_sdw_contentframe");
	auto tabbar_frame = m_widget->findChild<styled_frame*>("part_sdw_tabbar");

#pragma region Tab Drawing
	switch (m_mode)
	{
	case styled_overlay_mode::tab:
	{
		if (m_widget->orientation() == styled_dock_orientation::top)
		{
			//Tab area
			auto mapped_tabbar_rect = map(tabbar_frame->rect(), tabbar_frame);
			mapped_tabbar_rect = QRect(mapped_tabbar_rect.x(), mapped_tabbar_rect.y(), mapped_tabbar_rect.width(), mapped_tabbar_rect.height());
			QRect tab_rect = QRect(QPoint(1, mapped_tabbar_rect.height() - 20), QPoint(1, mapped_tabbar_rect.height() - 20) + QPoint(150, 20));

			if (m_tab != nullptr)
			{
				tab_rect = map(m_tab->rect(), m_tab);
				tab_rect.setHeight(tab_rect.height() + 1);
				tab_rect.setWidth(tab_rect.width() - 1);
				tab_rect.setTopLeft(tab_rect.topLeft() - QPoint(1, 0));
			}

			//Background
			p.setBrush(overlay_color);
			p.setPen(QPen(QColor(0, 0, 0, 0), 0, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin));
			auto mapped_content_rect = map(content_frame->rect(), content_frame);
			p.drawRect(mapped_content_rect);
			if (m_tab != nullptr)
				p.drawRect(tab_rect);

			mapped_content_rect = QRect(mapped_content_rect.x(), mapped_content_rect.y(), mapped_content_rect.width() + 1, mapped_content_rect.height() + 1);
			tab_rect.setWidth(tab_rect.width() + 1);


			//Border
			p.setPen(border_pen);
			p.drawLine(mapped_content_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
				mapped_content_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
			p.drawLine(mapped_content_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
				mapped_content_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
			p.drawLine(mapped_content_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
				mapped_content_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));

			if (m_tab != nullptr)
			{
				if (tab_rect.bottomLeft().x() - mapped_content_rect.topLeft().x() > 2)
				{
					p.drawLine(mapped_content_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
						tab_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
				}

				p.drawLine(tab_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
					tab_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
					tab_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
					tab_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
					mapped_content_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
			}
			else
			{
				p.drawLine(mapped_content_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
					mapped_content_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
			}
		}
		else if (m_widget->orientation() == styled_dock_orientation::bottom)
		{
			//Tab area
			auto mapped_tabbar_rect = map(tabbar_frame->rect(), tabbar_frame);
			mapped_tabbar_rect = QRect(QPoint(0, 0), mapped_tabbar_rect.bottomLeft());
			QRect tab_rect = QRect(QPoint(1, mapped_tabbar_rect.height() - 20), QPoint(1, mapped_tabbar_rect.height() - 20) + QPoint(150, 20));

			if (m_tab != nullptr)
			{
				tab_rect = map(m_tab->rect(), m_tab);
				tab_rect.setHeight(tab_rect.height() + 2);
				tab_rect.setWidth(tab_rect.width() - 1);
				tab_rect.setTopLeft(tab_rect.topLeft() - QPoint(1, 0));
			}

			//Background
			p.setBrush(overlay_color);
			p.setPen(QPen(QColor(0, 0, 0, 0), 0, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin));
			auto mapped_content_rect = map(content_frame->rect(), content_frame);
			mapped_content_rect = QRect(QPoint(0, 0), mapped_content_rect.bottomRight());
			p.drawRect(mapped_content_rect);
			if (m_tab != nullptr)
				p.drawRect(tab_rect);

			mapped_content_rect = QRect(mapped_content_rect.x(), mapped_content_rect.y(), mapped_content_rect.width() + 1, mapped_content_rect.height() + 1);
			tab_rect.setWidth(tab_rect.width() + 1);
			tab_rect.setHeight(tab_rect.height() + 1);

			//Border
			p.setPen(border_pen);
			p.drawLine(mapped_content_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
				mapped_content_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
			p.drawLine(mapped_content_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
				mapped_content_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
			p.drawLine(mapped_content_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
				mapped_content_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));

			if (m_tab != nullptr)
			{
				if (tab_rect.topLeft().x() - mapped_content_rect.bottomLeft().x() > 2)
				{
					p.drawLine(mapped_content_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
						tab_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
				}

				p.drawLine(tab_rect.topLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
					tab_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
					tab_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
					tab_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
				p.drawLine(tab_rect.topRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
					mapped_content_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
			}
			else
			{
				p.drawLine(mapped_content_rect.bottomLeft() + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
					mapped_content_rect.bottomRight() + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
			}
		}
	}
	break;
#pragma endregion

#pragma region Tab Drawing

	case styled_overlay_mode::right:
	case styled_overlay_mode::left:
	case styled_overlay_mode::bottom:
	case styled_overlay_mode::top:
	{
		QPoint top_left(0, 0);
		int w = m_widget->width();
		int h = m_widget->height();

		if (m_mode == styled_overlay_mode::right)
			top_left.setX(w / 2);
		else if (m_mode == styled_overlay_mode::bottom)
			top_left.setY(h / 2);

		if (m_mode == styled_overlay_mode::right || m_mode == styled_overlay_mode::left)
			w = w / 2;
		else if (m_mode == styled_overlay_mode::top || m_mode == styled_overlay_mode::bottom)
			h = h / 2;

		p.setBrush(overlay_color);
		p.setPen(QPen(QColor(0, 0, 0, 0), 0, Qt::SolidLine, Qt::FlatCap, Qt::MiterJoin));
		p.drawRect(QRect(top_left, top_left + QPoint(w - 1, h - 1)));

		p.setPen(border_pen);
		p.drawLine(top_left + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
			top_left + QPoint(w, 0) + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));
		p.drawLine(top_left + QPoint(w, 0) + QPoint(-BORDER_THICKNESS / 2, BORDER_THICKNESS / 2),
			top_left + QPoint(w, h) + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
		p.drawLine(top_left + QPoint(w, h) + QPoint(-BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
			top_left + QPoint(0, h) + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2));
		p.drawLine(top_left + QPoint(0, h) + QPoint(BORDER_THICKNESS / 2, -BORDER_THICKNESS / 2),
			top_left + QPoint(BORDER_THICKNESS / 2, BORDER_THICKNESS / 2));

	}
	break;
	}

#pragma endregion

}

QRect styled_dock_overlay::map(QRect r, QWidget* from)
{
	return QRect(map(r.topLeft(), from), map(r.bottomRight(), from));
}
QPoint styled_dock_overlay::map(QPoint p, QWidget* from)
{
	return this->mapFromGlobal(from->mapToGlobal(p));
}

void styled_dock_overlay::mode(const styled_overlay_mode& value)
{
	m_mode = value;
	this->repaint();
}
void styled_dock_overlay::tab(QWidget* const & value)
{
	m_tab = value;
	this->repaint();
}