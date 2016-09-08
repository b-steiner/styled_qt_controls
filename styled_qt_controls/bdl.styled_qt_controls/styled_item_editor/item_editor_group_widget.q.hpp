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

#include "../util/settings/i_settings_provider.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Base widget for item_editor_groups
 *
 * \author bdl
 */
class item_editor_group_widget : public util::i_settings_provider
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new instance of the item_editor_group_widget class
	 */
	item_editor_group_widget();
	/*! \brief Releases all data associated with an instance of the item_editor_group_widget class
	*/
	virtual ~item_editor_group_widget();

	/*! \brief Implement this method to return a group with settings to be saved
	 *
	 * \returns A settings_group containing the settings for this class
	 */
	virtual util::settings_group* save_settings();
	/*! \brief Implement this to restore settings from a settings_group
	 *
	 * \param group The settings for this class
	 */
	virtual void load_settings(util::settings_group* group);

};

END_BDL_SQTC