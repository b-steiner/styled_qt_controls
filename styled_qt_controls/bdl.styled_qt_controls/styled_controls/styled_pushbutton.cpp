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
#include "styled_pushbutton.q.hpp"

#include <QtWidgets\QStyleOptionButton>
#include <QtWidgets\qdrawutil.h>
#include <QtWidgets\qproxystyle.h>

using namespace bdl::styled_qt_controls;

styled_pushbutton::styled_pushbutton(QWidget* parent) : QPushButton(parent), m_hover(false), m_parent_hover(false), m_selected(false), m_topline_color(0, 0, 0, 0), m_inner_border_color(0, 0, 0, 0), m_pressed(false), m_custom_data_1(false) { init(); }
styled_pushbutton::styled_pushbutton(const QString& text, QWidget* parent) : QPushButton(text, parent), m_hover(false), m_parent_hover(false), m_selected(false), m_topline_color(0, 0, 0, 0), m_inner_border_color(0, 0, 0, 0), m_pressed(false), m_custom_data_1(false) { init(); }
styled_pushbutton::styled_pushbutton(const QIcon& icon, const QString& text, QWidget* parent) : QPushButton(icon, text, parent), m_hover(false), m_parent_hover(false), m_selected(false), m_topline_color(0, 0, 0, 0), m_inner_border_color(0, 0, 0, 0), m_pressed(false), m_custom_data_1(false) { init(); }
styled_pushbutton::~styled_pushbutton() { }
void styled_pushbutton::init()
{
	m_topline_offset_left = 1;
	m_topline_offset_right = 1;
	m_topline_offset_top = 1;
	m_topline_offset_bottom = 1;

	QObject::connect(this, SIGNAL(pressed()), this, SLOT(this_pressed()));
	QObject::connect(this, SIGNAL(released()), this, SLOT(this_released()));
	QObject::connect(this, SIGNAL(toggled(bool)), this, SLOT(this_toggled(bool)));
}

void styled_pushbutton::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QPushButton::paintEvent(pe);

	QStyleOptionButton btn;
	initStyleOption(&btn);

	if (m_inner_border_color.alpha() > 0)
	{
		QPainter p2(this);
		QPen pen(m_inner_border_color);
		p2.setPen(pen);
		p2.drawRect(1, 1, width() - 3, height() - 3);
	}
	if (m_topline_color.alpha() > 0)
	{
		QPainter p2(this);
		QPen topLinePen(m_topline_color);
		p2.setPen(topLinePen);
		p2.drawLine(m_topline_offset_left, m_topline_offset_top, width() - m_topline_offset_right - 1, m_topline_offset_top);
	}
}

void styled_pushbutton::enterEvent(QEvent * event)
{
	QPushButton::enterEvent(event);
	this->setProperty("hover", true);
}
void styled_pushbutton::leaveEvent(QEvent * event)
{
	QPushButton::leaveEvent(event);
	this->setProperty("hover", false);
}
void styled_pushbutton::this_pressed()
{
	this->setProperty("pressed", true);

	if (menu() != nullptr)
	{
		QObject::connect(menu(), SIGNAL(aboutToHide()), this, SLOT(menu_aboutToHide()));
	}
}
void styled_pushbutton::this_released()
{
	this->setProperty("pressed", false);
}
void styled_pushbutton::this_toggled(bool checked)
{
	style()->unpolish(this);
	style()->polish(this);
}
void styled_pushbutton::menu_aboutToHide()
{
	QObject::disconnect(menu(), SIGNAL(aboutToHide()), this, SLOT(menu_aboutToHide()));
	emit released();
}


QColor styled_pushbutton::topline_color()
{
	return m_topline_color;
}
void styled_pushbutton::topline_color(QColor value)
{
	m_topline_color = value;
}
QColor styled_pushbutton::inner_border_color()
{
	return m_inner_border_color;
}
void styled_pushbutton::inner_border_color(QColor value)
{
	m_inner_border_color = value;
}

void styled_pushbutton::custom_data_1(const bool& value)
{
	m_custom_data_1 = value;
	style()->unpolish(this);
	style()->polish(this);
}