#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_list_view.q.hpp"

#include "styled_list_view_item_delegate.q.hpp"
#include "..\util\qt_helper_functions.hpp"

using namespace bdl::styled_qt_controls;

styled_list_view::styled_list_view()
{
	this->setEditTriggers(QAbstractItemView::EditKeyPressed | QAbstractItemView::SelectedClicked);
	this->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
	this->setItemDelegate(new styled_list_view_item_delegate(this, 96));
	this->setIconSize(QSize(48, 48));
	this->setViewMode(QListView::ViewMode::IconMode);
	this->setResizeMode(QListView::ResizeMode::Adjust);
}
styled_list_view::~styled_list_view() { }

void styled_list_view::startDrag(Qt::DropActions supportedActions)
{
	QModelIndexList indexes = selected_items(this);
	if (indexes.count() > 0) {
		QMimeData *data = model()->mimeData(indexes);
		if (!data)
			return;
		QRect rect;
		QPixmap pixmap = renderToPixmap(indexes, &rect);
		rect = pixmap.rect();
		rect.adjust(horizontalOffset(), verticalOffset(), 0, 0);
		QDrag *drag = new QDrag(this);
		drag->setPixmap(pixmap);
		drag->setMimeData(data);
		drag->setHotSpot(QPoint(-3, -3));
		Qt::DropAction defaultDropAction2 = Qt::IgnoreAction;
		if (defaultDropAction() != Qt::IgnoreAction && (supportedActions & defaultDropAction()))
			defaultDropAction2 = defaultDropAction();
		else if (supportedActions & Qt::CopyAction && dragDropMode() != QAbstractItemView::InternalMove)
			defaultDropAction2 = Qt::CopyAction;

		drag->exec(supportedActions, defaultDropAction2);
	}
}
void styled_list_view::dragMoveEvent(QDragMoveEvent* event)
{
	QListView::dragMoveEvent(event);

	bool acceptFormat = false;
	auto formats = model()->mimeTypes();
	for (auto f : formats)
		acceptFormat |= event->mimeData()->hasFormat(f);

	auto idx = this->indexAt(event->pos());
	if (acceptFormat && (model()->flags(idx) & Qt::ItemFlag::ItemIsDropEnabled) != 0)
	{
		event->accept();
	}
	else
		event->ignore();
}
void styled_list_view::dragEnterEvent(QDragEnterEvent* event)
{
	QListView::dragEnterEvent(event);
	event->acceptProposedAction();
}
void styled_list_view::dropEvent(QDropEvent* event)
{
	auto idx = this->indexAt(event->pos());

	if (!idx.isValid())
		idx = this->rootIndex();

	if (model()->canDropMimeData(event->mimeData(), event->dropAction(), -1, -1, idx))
	{
		model()->dropMimeData(event->mimeData(), event->dropAction(), -1, -1, idx);
		event->accept();
	}
	else
		event->ignore();
}
QPixmap styled_list_view::renderToPixmap(const QModelIndexList &indexes, QRect *r) const
{
	QItemViewPaintPairs paintPairs = draggablePaintPairs(indexes, r);
	if (paintPairs.isEmpty())
		return QPixmap();
	QPixmap pixmap(r->size());
	pixmap.fill(Qt::transparent);
	QPainter painter(&pixmap);
	QStyleOptionViewItem option = viewOptions();
	option.state |= QStyle::State_Selected;
	for (int j = 0; j < paintPairs.count(); ++j) {
		option.rect = paintPairs.at(j).first.translated(-r->topLeft());
		const QModelIndex &current = paintPairs.at(j).second;
		itemDelegate(current)->paint(&painter, option, current);

	}
	return pixmap;
}
QItemViewPaintPairs styled_list_view::draggablePaintPairs(const QModelIndexList &indexes, QRect *r) const
{
	QRect &rect = *r;
	const QRect viewportRect = viewport()->rect();
	QItemViewPaintPairs ret;
	for (int i = 0; i < indexes.count(); ++i) {
		const QModelIndex &index = indexes.at(i);
		const QRect current = visualRect(index);
		if (current.intersects(viewportRect)) {
			ret += qMakePair(current, index);
			rect |= current;
		}
	}
	rect &= viewportRect;
	return ret;
}
QStyleOptionViewItem styled_list_view::viewOptions() const
{
	QStyleOptionViewItem option = QListView::viewOptions();
	option.locale = locale();
	option.locale.setNumberOptions(QLocale::OmitGroupSeparator);
	option.widget = this;
	return option;
}