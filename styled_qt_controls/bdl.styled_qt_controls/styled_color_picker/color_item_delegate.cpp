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