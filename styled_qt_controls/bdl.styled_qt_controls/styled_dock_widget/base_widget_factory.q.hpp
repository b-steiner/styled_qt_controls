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

class styled_dock_widget;

/*! \brief Factory for creating widgets in a styled_dock_widget
 *
 * \author bdl
 *
 * This factory is used when the load_settings method is called to restore items in the styled_dock_widget
 */
class BDL_SQTC_EXPORT base_widget_factory : public QObject
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new widget and adds it to the dock_widget
	 *
	 * The default implementation does nothing.
	 *
	 * \param parent The styled_dock_widget
	 * \param group The settings group from which the item should be constructed
	 */
	virtual void load(styled_dock_widget* parent, util::settings_group* group);
};

END_BDL_SQTC