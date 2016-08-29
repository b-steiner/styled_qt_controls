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

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief List view item delegate for rendering a colored square
 *
 * \author bdl
 */
class color_item_delegate : public QStyledItemDelegate
{
	Q_OBJECT;

	PROPERTY0(QListView*, view);

public:
	/*! \brief Initializes a new instance of the color_item_delegate class
	 *
	 * \param view The listview this delegate should operate on
	 */
	color_item_delegate(QListView* view);
	/*! \brief Releases all data associated with an instance of the color_item_delegate class
	 */
	virtual ~color_item_delegate();

	//! See QStyledItemDelegate
	virtual QSize sizeHint(const QStyleOptionViewItem& option, const QModelIndex& index) const;
	//! See QStyledItemDelegate
	virtual void paint(QPainter* painter, const QStyleOptionViewItem& option, const QModelIndex& index) const;
};

END_BDL_SQTC