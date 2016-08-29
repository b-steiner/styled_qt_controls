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
#include "styled_frame.q.hpp"

using namespace bdl::styled_qt_controls;

styled_frame::styled_frame(QWidget* parent, Qt::WindowFlags f) : QFrame(parent, f), m_topline_color(0, 0, 0, 0), m_hover(false), m_selected(false), m_inner_padding_top(1),
	m_inner_padding_side(1), m_custom_data_1(false)
{
	this->setMouseTracking(true);
}
styled_frame::~styled_frame() { }

void styled_frame::mousePressEvent(QMouseEvent* event)
{
	emit mousePressed(event);
	QFrame::mousePressEvent(event);
}
void styled_frame::mouseReleaseEvent(QMouseEvent* event)
{
	emit mouseReleased(event);
	QFrame::mouseReleaseEvent(event);
}
void styled_frame::mouseMoveEvent(QMouseEvent* event)
{
	emit mouseMove(event);
	QFrame::mouseMoveEvent(event);
}
void styled_frame::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QPen topLinePen(m_topline_color);
	p.setPen(topLinePen);
	p.drawLine(m_inner_padding_side, m_inner_padding_top, width() - 2 * m_inner_padding_side, m_inner_padding_top);
}
void styled_frame::keyPressEvent(QKeyEvent * event)
{
	emit keyPressed(event);
	QFrame::keyPressEvent(event);
}
void styled_frame::enterEvent(QEvent * event)
{
	QFrame::enterEvent(event);

	emit enter(event);

	this->setProperty("hover", true);
}
void styled_frame::leaveEvent(QEvent * event)
{
	QFrame::leaveEvent(event);
	emit leave(event);

	this->setProperty("hover", false);
}