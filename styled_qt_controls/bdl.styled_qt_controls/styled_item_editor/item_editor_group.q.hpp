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

#include "base_editor_group.q.hpp"
#include "item_editor_item.q.hpp"
#include "item_editor_group_widget.q.hpp"
#include "../styled_controls/styled_collapse_widget.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Editor group that supports editing of primitive types
 *
 * \author bdl
 *
 * This group contains a number of item_editor_items that arranged in a grid. The widget can be collapse and supports a drop-down menu and enabling/disabling
 */
class BDL_SQTC_EXPORT item_editor_group : public base_editor_group
{
	Q_OBJECT

	PROPERTY0(QString, title);
	PROPERTY0(bool, show_enable_button);
	PROPERTY0(bool, is_expanded);
	PROPERTY0(QList<base_item_editor_item*>, items);
	PROPERTY0(item_editor_group_widget*, widget);
	PROPERTY0(styled_collapse_widget*, collapse_widget);
	PROPERTY0(QCheckBox*, enabled_box);
	PROPERTY2(QMenu*, additional_options, protected: GET_REF, protected: SET_PT);

	PROPERTY2(bool, enabled_state, GET, SET_PT);
	PROPERTY1(std::function<void(bool)>, enabled_changed_func, SET);

public:
	/*! \brief Initializes a new instance of the item_editor_group class
	 *
	 * \param title The title of the group
	 * \param show_enable_button When set to true a checkbox is displayed
	 * \param additional_options A menu containing additional option actions
	 */
	item_editor_group(const QString& title, bool show_enable_button = false, bool enabled_state = false, std::function<void(bool)> enabled_changed_func = [](bool) {}, QMenu* additional_options = nullptr);
	/*! \brief Releases all data associated with an instance of the item_editor_group class
	 */
	virtual ~item_editor_group();

	/*! \brief Constructs the group widget
	*
	* This method creates a widget and hands it over to the editor. The widget gets deleted by the editor
	*
	* \returns A pointer to a new group widget
	*/
	virtual util::i_settings_provider* widget();

	/*! \brief Adds an item to the group
	 *
	 * \param item The item to add
	 */
	void add_item(base_item_editor_item* item);
	/*! \brief Removes an item to the group
	*
	* \param item The item to remove
	*/
	void remove_item(base_item_editor_item* item);
	/*! \brief Adds a item to the group
	*
	* \param idx Index of the item
	*/
	void remove_item(int idx);

protected:
	virtual item_editor_group_widget* top_level_widget();

private:
	void items_changed();

private slots:
	void widget_deleted();
	void enabled_stateChanged(int state);
};

END_BDL_SQTC