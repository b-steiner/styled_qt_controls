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