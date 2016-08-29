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
#include "l_frame.q.hpp"

#include "../util/theme_colors.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

QPixmap* l_frame::m_slider = nullptr;

l_frame::l_frame() : m_color(QColor::fromHsl(0, 255, 255)), m_mouse_down(false)
{ 
	if (m_slider == nullptr)
		m_slider = new QPixmap(":/images/color_picker_slider.png");

	this->setFixedHeight(22);
}
l_frame::~l_frame()
{ }

void l_frame::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	styled_frame::paintEvent(pe);

	QPainter pa(this);
	pa.setPen(theme_colors::border);

	pa.drawRect(2, 2, this->width() - 5, this->height() - 5);

	QLinearGradient gradient(0, 0, pe->rect().width() - 6, 0);
	
	gradient.setColorAt(0, QColor::fromHsl(m_color.hslHue(), m_color.hslSaturation(), 255));
	gradient.setColorAt(0.5, QColor::fromHsl(m_color.hslHue(), m_color.hslSaturation(), 128));
	gradient.setColorAt(1, QColor::fromHsl(m_color.hslHue(), m_color.hslSaturation(), 0));

	pa.fillRect(QRect(3,3,pe->rect().width() - 6, pe->rect().height() - 6), QBrush(gradient));


	int x = 3 + (int)((float)(255.0 - m_color.lightness()) / 255.0f * (float)(pe->rect().width() - 7));
	pa.drawPixmap(x - 3, 0, *m_slider);
}

void l_frame::color(const QColor& color)
{
	m_color = color;
	this->repaint();
}


void l_frame::mouseMoveEvent(QMouseEvent *e)
{
	if (m_mouse_down)
		set_from_coord(e->pos());
}
void l_frame::mousePressEvent(QMouseEvent *e)
{
	m_mouse_down = true;
	set_from_coord(e->pos());
}
void l_frame::mouseReleaseEvent(QMouseEvent *e)
{
	m_mouse_down = false;
}

void l_frame::set_from_coord(QPoint p)
{
	int l = 255 - (int)((float)(p.x() - 2) / (float)(this->width() - 7) * 255.0f);
	l = min(max(l, 0), 255);
	color(QColor::fromHsl(m_color.hslHue(), m_color.hslSaturation(), l));

	emit color_changed(m_color);
}