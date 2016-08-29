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