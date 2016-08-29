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
#include "styled_label.q.hpp"

using namespace bdl::styled_qt_controls;

styled_label::styled_label(const QString& text) : QLabel(text), m_selected(false) { }
styled_label::~styled_label() { }

void styled_label::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QLabel::paintEvent(pe);
}
void styled_label::mousePressEvent(QMouseEvent* event)
{
	emit mousePressed(event);
	QLabel::mousePressEvent(event);
}
void styled_label::mouseReleaseEvent(QMouseEvent* event)
{
	emit mouseReleased(event);
	QLabel::mouseReleaseEvent(event);
}