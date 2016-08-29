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

/*! \brief A QStyledItemDelegate that arranges elements in a dynamic grid
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_list_view_item_delegate : public QStyledItemDelegate
{
	Q_OBJECT;

	//! Stores the preferred size
	PROPERTY2(int, preferred_size, GET, SET_PT);
	PROPERTY0(QListView*, view);

public:
	/*! \brief Initializes a new instance of the styled_list_view_item_delegate class
		*
		* \param view the QListView to operate on
		* \param prefered_width The width that the item should have (can be larger to spread the items equally spaced over the list view)
		*/
	styled_list_view_item_delegate(QListView* view, int prefered_width);
	/*! \brief Releases all data associated with an instance of the styled_list_view_item_delegate class
		*/
	virtual ~styled_list_view_item_delegate();

	//! See QStyledItemDelegate
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const;
	//! See QStyledItemDelegate
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;
};

END_BDL_SQTC