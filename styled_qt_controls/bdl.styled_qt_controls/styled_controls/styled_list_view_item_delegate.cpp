#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_list_view_item_delegate.q.hpp"

#include "..\util\theme_colors.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

#define TOP_BORDER 5
#define MIDDLE_BORDER 5
#define BOTTOM_BORDER 5
#define RIGHT_BORDER 5
#define LEFT_BORDER 5

styled_list_view_item_delegate::styled_list_view_item_delegate(QListView* view, int prefered_width) : m_view(view), m_preferred_size(prefered_width)
{ }
styled_list_view_item_delegate::~styled_list_view_item_delegate()
{ }

QSize styled_list_view_item_delegate::sizeHint(const QStyleOptionViewItem& _option, const QModelIndex& _index) const
{
	if (m_view->viewMode() == QListView::ListMode)
		return QStyledItemDelegate::sizeHint(_option, _index);


	int height = TOP_BORDER + MIDDLE_BORDER + BOTTOM_BORDER;

	int availableWidth = m_view->contentsRect().width() - 22;
	int itemsPerRow = max(1, availableWidth / m_preferred_size);
	int width = availableWidth / itemsPerRow - LEFT_BORDER - RIGHT_BORDER;
	int availableTextWidth = m_preferred_size - LEFT_BORDER - RIGHT_BORDER;

	//Icon
	height += m_view->iconSize().height();

	//Text
	int rows = 1;
	QString text = _index.data(Qt::DisplayRole).toString();
	int textw = _option.fontMetrics.leftBearing(text[0]);

	for (int i = 0; i < text.length(); i++)
	{
		QChar c = text[i];
		int cw = _option.fontMetrics.width(c);

		if (textw + cw + _option.fontMetrics.rightBearing(c) + 10 > availableTextWidth)
		{
			rows++;
			textw = _option.fontMetrics.leftBearing(c);
		}

		textw += cw;
	}

	int textHeight = _option.fontMetrics.ascent() + _option.fontMetrics.lineSpacing() * (rows - 1) + _option.fontMetrics.descent();

	//qDebug() << text << ", " << availableWidth << ", " << width << ", " << height + textHeight;

	return QSize(width + LEFT_BORDER + RIGHT_BORDER, height + textHeight);
}
void styled_list_view_item_delegate::paint(QPainter* _painter, const QStyleOptionViewItem& _option, const QModelIndex& _index) const
{
	if (m_view->viewMode() == QListView::ListMode)
		return QStyledItemDelegate::paint(_painter, _option, _index);

	QRect rect = _option.rect;

	auto defBrush = _painter->brush();
	auto defPen = _painter->pen();

	//Selection
	if ((_option.state & QStyle::State_Selected))
	{
		QRect selectionRect(rect.x(), rect.y(), rect.width() - 1, rect.height() - 1);

		if (m_view->hasFocus())
		{
			_painter->setBrush(theme_colors::selection);
			_painter->setPen(theme_colors::selection_border);
		}
		else
		{
			_painter->setBrush(theme_colors::light);
			_painter->setPen(theme_colors::border);
		}

		_painter->drawRect(selectionRect);
	}

	_painter->setBrush(defBrush);
	_painter->setPen(defPen);

	//Icon
	QPixmap icon = qvariant_cast<QIcon>(_index.data(Qt::DecorationRole)).pixmap(m_view->iconSize());
	_painter->drawPixmap(rect.x() + (rect.width() / 2) - (icon.width() / 2), rect.y() + RIGHT_BORDER, icon);

	//Text
	int width = rect.width() - LEFT_BORDER - RIGHT_BORDER;
	int availableTextWidth = m_preferred_size - LEFT_BORDER - RIGHT_BORDER;

	QString text = _index.data(Qt::DisplayRole).toString();
	int rows = 1;
	QString finalText;
	int textw = _option.fontMetrics.leftBearing(text[0]);

	for (int i = 0; i < text.length(); i++)
	{
		QChar c = text[i];
		int cw = _option.fontMetrics.width(c);

		if (textw + cw + _option.fontMetrics.rightBearing(c) + 10 > availableTextWidth)
		{
			finalText += "\n";
			rows++;
			textw = _option.fontMetrics.leftBearing(c);
		}

		finalText += c;
		textw += cw;
	}

	int textHeight = _option.fontMetrics.ascent() + _option.fontMetrics.lineSpacing() * (rows - 1) + _option.fontMetrics.descent();

	_painter->drawText(QRect(rect.x() + (rect.width() / 2) - (availableTextWidth / 2),
		rect.y() + TOP_BORDER + MIDDLE_BORDER + m_view->iconSize().height(), availableTextWidth, textHeight), finalText, Qt::AlignTop | Qt::AlignHCenter);
}

void styled_list_view_item_delegate::preferred_size(const int& _value)
{
	m_preferred_size = _value;
	m_view->repaint();
}