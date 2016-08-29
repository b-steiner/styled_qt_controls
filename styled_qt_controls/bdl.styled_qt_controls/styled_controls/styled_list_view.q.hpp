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

typedef QPair<QRect, QModelIndex> QItemViewPaintPair;
typedef QList<QItemViewPaintPair> QItemViewPaintPairs;

BEGIN_BDL_SQTC

/*! \brief A QListview that fixes some problems with drag and drop
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_list_view : public QListView
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new instance of the styled_list_view class. See QListView for details
		*/
	styled_list_view();
	/*! \brief Releases all data associated with an instance of the styled_list_view class
		*/
	virtual ~styled_list_view();

protected:
	//! See QListView
	virtual void dragMoveEvent(QDragMoveEvent* event);
	//! See QListView
	virtual void dragEnterEvent(QDragEnterEvent *event);
	//! See QListView
	virtual void startDrag(Qt::DropActions supportedActions);
	//! See QListView
	virtual void dropEvent(QDropEvent* event);

private:
	QPixmap renderToPixmap(const QModelIndexList &indexes, QRect *r) const;
	QItemViewPaintPairs draggablePaintPairs(const QModelIndexList &indexes, QRect *r) const;
	QStyleOptionViewItem viewOptions() const;
};

END_BDL_SQTC