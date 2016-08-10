#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_tree_view_item_delegate.q.hpp"

#include "styled_tree_view.q.hpp"
#include "..\util\theme_colors.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_tree_view_item_delegate::styled_tree_view_item_delegate()
{
}
styled_tree_view_item_delegate::~styled_tree_view_item_delegate()
{
}

QSize styled_tree_view_item_delegate::sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	auto size = QStyledItemDelegate::sizeHint(option, index);
	size.setHeight(20);

	QList<QIcon> icon_list = qvariant_cast<QList<QIcon>>(index.data(styled_tree_view::styled_tree_view_role::icon_list));
	auto l = icon_list.length();
	size.setWidth(size.width() + (5 + 16) * icon_list.length());

	return size;
}
void styled_tree_view_item_delegate::paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const
{
	QStyledItemDelegate::paint(painter, option, index);

	int icon_offset = option.rect.x() + option.fontMetrics.width(index.data(Qt::DisplayRole).toString()) + 5;

	auto deco_role = index.data(Qt::DecorationRole);
	if (deco_role.isValid())
	{
		icon_offset += 16 + 10;
	}

	QList<QIcon> icon_list = qvariant_cast<QList<QIcon>>(index.data(styled_tree_view::styled_tree_view_role::icon_list));

	for (auto icon : icon_list)
	{
		painter->drawPixmap(icon_offset, option.rect.y() + 2, icon.pixmap(16));
		icon_offset += (16 + 5);
	}
}