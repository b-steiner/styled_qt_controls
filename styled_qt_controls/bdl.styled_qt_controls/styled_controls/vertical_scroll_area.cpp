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
#include "vertical_scroll_area.q.hpp"

using namespace bdl::styled_qt_controls;

vertical_scroll_area::vertical_scroll_area(QWidget *parent) :
QScrollArea(parent)
{
	setWidgetResizable(true);
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
}

bool vertical_scroll_area::eventFilter(QObject *o, QEvent *e)
{
	// This works because QScrollArea::setWidget installs an eventFilter on the widget
	if (o && o == widget() && e->type() == QEvent::Resize)
	{
		widget()->setMinimumHeight(widget()->minimumSizeHint().height());
		setMinimumWidth(widget()->minimumSizeHint().width() + verticalScrollBar()->width());
	}

	return QScrollArea::eventFilter(o, e);
}