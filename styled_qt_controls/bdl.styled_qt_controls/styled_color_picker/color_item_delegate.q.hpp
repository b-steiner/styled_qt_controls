#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class color_item_delegate : public QStyledItemDelegate
{
	Q_OBJECT;

	PROPERTY0(QListView*, view);

public:
	color_item_delegate(QListView* view);
	virtual ~color_item_delegate();

	//! See QStyledItemDelegate
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const;
	//! See QStyledItemDelegate
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;
};

END_BDL_SQTC