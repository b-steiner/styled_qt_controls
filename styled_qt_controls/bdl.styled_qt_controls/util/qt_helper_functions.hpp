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