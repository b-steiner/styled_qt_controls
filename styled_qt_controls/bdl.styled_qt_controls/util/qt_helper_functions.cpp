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
#include "qt_helper_functions.hpp"

QWidget* bdl::styled_qt_controls::qwidget_child_at(QWidget* w, const QPoint& p, bool all_children)
{
	auto* c = w->childAt(p);

	if (all_children)
		return c;

	while (c != nullptr && c->parent() != w)
		c = (QWidget*)c->parent();

	return c;
}

void bdl::styled_qt_controls::selected_items(QAbstractItemView* _view, const QModelIndex& _root, QModelIndexList& _list)
{
	for (int r = 0; r < _view->model()->rowCount(_root); r++)
	{
		for (int c = 0; c < _view->model()->columnCount(_root); c++)
		{
			auto idx = _view->model()->index(r, c, _root);

			if (_view->selectionModel()->isSelected(idx))
				_list.push_back(idx);

			selected_items(_view, idx, _list);
		}
	}
}
QModelIndexList bdl::styled_qt_controls::selected_items(QAbstractItemView* _view)
{
	QModelIndexList list;
	selected_items(_view, _view->rootIndex(), list);
	return list;
}