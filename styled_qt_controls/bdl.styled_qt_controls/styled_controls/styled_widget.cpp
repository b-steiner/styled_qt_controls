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
#include "styled_widget.q.hpp"

using namespace bdl::styled_qt_controls;

styled_widget::styled_widget(QWidget* parent, Qt::WindowFlags f) : QWidget(parent, f), m_topline_color(0, 0, 0, 0), m_hover(false) { }
styled_widget::~styled_widget() { }

void styled_widget::keyPressEvent(QKeyEvent * event)
{
	emit keyPressed(event);
	QWidget::keyPressEvent(event);
}

void styled_widget::mousePressEvent(QMouseEvent* event)
{
	emit mousePressed(event);
	QWidget::mousePressEvent(event);
}
void styled_widget::mouseReleaseEvent(QMouseEvent* event)
{
	emit mouseReleased(event);
	QWidget::mouseReleaseEvent(event);
}
void styled_widget::mouseDoubleClickEvent(QMouseEvent * event)
{
	emit mouseDoubleClick(event);
	QWidget::mouseDoubleClickEvent(event);
}
void styled_widget::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QPen topLinePen(m_topline_color);
	p.setPen(topLinePen);
	p.drawLine(1, 1, width() - 2, 1);
}
void styled_widget::enterEvent(QEvent * event)
{
	QWidget::enterEvent(event);
	this->setProperty("hover", true);
	style()->unpolish(this);
	style()->polish(this);
}
void styled_widget::leaveEvent(QEvent * event)
{
	QWidget::leaveEvent(event);
	this->setProperty("hover", false);
	style()->unpolish(this);
	style()->polish(this);
}