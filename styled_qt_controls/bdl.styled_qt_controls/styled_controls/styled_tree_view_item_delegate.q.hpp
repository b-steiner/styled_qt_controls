#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief Item delegate for tree views that allows to render icons after the text
	*
	* This delegate expects a QList<QIcon> stored at the item data location styled_tree_view::styled_tree_view_role::icon_list
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_tree_view_item_delegate : public QStyledItemDelegate
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new instance of the styled_tree_view_item_delegate class
		*/
	styled_tree_view_item_delegate();
	/*! \brief Releases all data associated with an instance of the styled_tree_view_item_delegate class
	*/
	virtual ~styled_tree_view_item_delegate();

	/*! \brief See QStyledItemDelegate
		*
		* \param option See QStyledItemDelegate
		* \param index See QStyledItemDelegate
		*
		* \returns QStyledItemDelegate
		*/
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const;
	/*! \brief See QStyledItemDelegate
	*
	* \param painter See QStyledItemDelegate
	* \param option See QStyledItemDelegate
	* \param index See QStyledItemDelegate
	*/
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;
};

END_BDL_SQTC