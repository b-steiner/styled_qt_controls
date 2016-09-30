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
#include "hs_frame.q.hpp"

using namespace bdl::styled_qt_controls;

hs_frame::hs_frame() : m_color(QColor::fromHsl(0, 255, 128)), m_mouse_down(false)
{ }
hs_frame::~hs_frame()
{ }

void hs_frame::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	styled_frame::paintEvent(pe);

	QPainter pa(this);

	QLinearGradient gradient(0, 0, 0, pe->rect().height() - 2);

	float fact = 360.0f / (float)(pe->rect().width() - 2);

	for (int i = 0; i < pe->rect().width()-2; i++)
	{
		gradient.setColorAt(0, QColor::fromHsl((int)(i * fact), 255, 128));
		gradient.setColorAt(1, QColor::fromHsl((int)(i * fact), 0, 128));

		pa.fillRect(pe->rect().x() + 1 + i, pe->rect().y() + 1, 1, pe->rect().height() - 2, QBrush(gradient));
	}

	//Draw marker
	QPoint selection_center((float)m_color.hslHue() / 360.0f * (pe->rect().width() - 2) + 1, (1.0f - ((float)m_color.hslSaturation() / 255.0f)) * (pe->rect().height() - 2) + 1);
	pa.setPen(QColor(0, 0, 0));
	pa.drawEllipse(selection_center, 6, 6);
	pa.setPen(QColor(255, 255, 255));
	pa.drawEllipse(selection_center, 5, 5);
}

void hs_frame::mouseMoveEvent(QMouseEvent *e)
{
	if (m_mouse_down)
		set_from_coord(e->pos());
}
void hs_frame::mousePressEvent(QMouseEvent *e)
{
	this->setFocus();
	m_mouse_down = true;
	set_from_coord(e->pos());
}
void hs_frame::mouseReleaseEvent(QMouseEvent *e)
{
	m_mouse_down = false;
}

void hs_frame::set_from_coord(QPoint p)
{
	int x = p.x() - 1;
	int w = this->width() - 2;
	int y = p.y() - 1;
	int h = this->height() - 2;

	int hue = (int)((float)x / (float)w * 360.0f);
	int s = (int)((float)(h - y) / (float)h * 255.0f);

	hue = min(max(hue, 0), 359);
	s = min(max(s, 0), 255);

	m_color = QColor::fromHsl(hue, s, 0);
	emit color_changed(m_color);

	this->repaint();
}

void hs_frame::color(const QColor& value)
{
	m_color = value;
	this->repaint();
}