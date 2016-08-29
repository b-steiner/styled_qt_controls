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
#include "../styled_controls/styled_widget.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Layout used by the tablist of the styled_dock_widget. Items are placed horizontally next to each other. Items that would overflow the layout are hidden
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_dock_layout : public QLayout
{
	Q_OBJECT;

	PROPERTY0(QList<QLayoutItem*>, list);
	PROPERTY0(QList<QLayoutItem*>, visibleItems);

public:
	/*! \brief Initializes a new instance of the styled_dock_widget class
		*/
	styled_dock_layout();
	/*! \brief Releases all data associated with an instance of the styled_dock_widget class
		*/
	~styled_dock_layout();

	//! See QLayout
	void addItem(QLayoutItem *item);
	//! See QLayout
	QSize sizeHint() const;
	//! See QLayout
	QSize minimumSize() const;
	//! See QLayout
	int count() const;
	//! See QLayout
	QLayoutItem* itemAt(int idx) const;
	//! See QLayout
	QLayoutItem* itemAt(QPoint p) const;
	//! See QLayout
	QLayoutItem* takeAt(int idx);
	//! See QLayout
	void setGeometry(const QRect& rect);
	//! See QLayout
	bool isVisible(QWidget* widget);
	//! See QLayout
	void clear();

	/*! \brief Swaps the item at index i with the one at index j
		*
		* \param i First index
		* \param j Second index
		*/
	void swap(int i, int j);

signals:
	/*! \brief Emitted when the overflow state changes (when items are overflowing or when items are no longer overflowing)
		*
		* \param is_overflow True when the items are overflowing now, False otherwise
		*/
	void overflowChanged(bool is_overflow);
};

END_BDL_SQTC