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
#include "color_item_delegate.q.hpp"
#include "../util/theme_colors.hpp"

using namespace bdl::styled_qt_controls;

color_item_delegate::color_item_delegate(QListView* view) : m_view(view) { }
color_item_delegate::~color_item_delegate() { }

QSize color_item_delegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	return QSize(27, 27);
}

void color_item_delegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	if (option.state & QStyle::State_Selected)
	{
		if (m_view->hasFocus())
		{
			painter->setBrush(QBrush(util::theme_colors::selection));
			painter->setPen(QPen(util::theme_colors::selection_border));
		}
		else
		{
			painter->setBrush(QBrush(util::theme_colors::light));
			painter->setPen(QPen(util::theme_colors::border));
		}
		painter->drawRect(QRect(option.rect.topLeft(), option.rect.bottomRight() - QPoint(1,1)));
	}

	painter->setBrush(QBrush(qvariant_cast<QColor>(index.data(Qt::DisplayRole))));
	painter->setPen(QPen(util::theme_colors::border));
	painter->drawRect(
		QRect(option.rect.topLeft() + QPoint(2, 2), option.rect.bottomRight() - QPoint(3, 3)));
	//painter->fillRect(
	//	QRect(option.rect.topLeft() + QPoint(3, 3), option.rect.bottomRight() - QPoint(3, 3)),
	//	QBrush(qvariant_cast<QColor>(index.data(Qt::DisplayRole))));
}