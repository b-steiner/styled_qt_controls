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

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief Searches for a child widget at a specific position
 *
 * \param w The parent widget
 * \param p The position
 * \param all_children When set to False only direct children of w are returned, when set to True also other descendants are returned
 *
 * \returns A pointer to a child widget or nullptr if there is non
 */
BDL_SQTC_EXPORT QWidget* qwidget_child_at(QWidget* w, const QPoint& p, bool all_children = true);

/*! \brief Returns the selected items from a QAbstractItemView
 *
 * \param view The QAbstractItemView
 *
 * \returns A QModelIndexList containing all selected items
 */
BDL_SQTC_EXPORT QModelIndexList selected_items(QAbstractItemView* view);
/*! \brief Searches the selected items from a QAbstractItemView
*
* \param view The QAbstractItemView
* \param root Root index at which the search starts
* \param list The result list
*/
BDL_SQTC_EXPORT void selected_items(QAbstractItemView* view, const QModelIndex& root, QModelIndexList& list);

END_BDL_SQTC