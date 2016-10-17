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
#include "../util/settings/settings_group.hpp"
#include "../util/settings/i_settings_provider.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Base class for groups in the styled_item_editor_widget
 *
 * \author bdl
 *
 * Implement this interface if you want to add a custom widget to the item editor
 */
class BDL_SQTC_EXPORT base_editor_group : public util::i_settings_provider
{
	Q_OBJECT;

public:
	/*! \brief Releases all data associated with an instance of the base_editor_group class
	*/
	virtual ~base_editor_group() { }

	/*! \brief Constructs the group widget
	 *
	 * This method creates a widget and hands it over to the editor. The widget gets deleted by the editor
	 *
	 * \returns A pointer to a new group widget
	 */
	virtual util::i_settings_provider* widget() = 0;

	virtual util::settings_group* save_settings() { return nullptr; }
	virtual void load_settings(util::settings_group* group) { }
};

END_BDL_SQTC