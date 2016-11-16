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
#include "base_editor_group.q.hpp"
#include "../styled_controls/vertical_scroll_area.q.hpp"
#include "../util/settings/i_settings_provider.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Widget for displaying and editing items
 *
 * \author bdl
 *
 * Groups and items can either be derived from existing ones or newly implemented. See base_editor_group, item_editor_group, base_item_editor_item
 */
class BDL_SQTC_EXPORT styled_item_editor : public vertical_scroll_area
{
	Q_OBJECT;

	PROPERTY0(QList<base_editor_group*>, groups);
	PROPERTY0(QGridLayout*, layout);
	PROPERTY0(bool, editing);

	PROPERTY0(util::settings_group*, settings);

public:
	/*! \brief Initializes a new instance of the styled_item_editor class
	 */
	styled_item_editor();
	/*! \brief Releases all data associated with an instance of the styled_item_editor class
	 */
	virtual ~styled_item_editor();

	/*! \brief Adds a editing group to the widget
	 *
	 * \param group The group to add
	 */
	void add_group(base_editor_group* group);
	/*! \brief Removes a editing group to the widget
	*
	* \param group The group to remove
	*/
	void remove_group(base_editor_group* group);
	/*! \brief Removes a editing group to the widget
	*
	* \param idx The index of the item to remove
	*/
	void remove_group(int idx);

	/*! \brief Removes all groups from the widget
	 */
	void clear();

	/*! \brief Starts an editing operation. Delays all visual updates until the end of the operation. 
	 */
	void start_edit();
	/*! \brief Ends an editing operation and performs the visual update for all changes in this operation.mo
	*/
	void end_edit();

	/*! \brief Saves the internal state of the displayed groups
	 *
	 * These settings can be restored by the restore_settings method.
	 */
	void save_settings();
	/*! \brief Restores the internal state of the displayed groups previousely stored by save_settings
	*/
	void restore_settings();

private:
	void groups_changed();
};

END_BDL_SQTC