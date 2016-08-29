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

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

namespace bdl
{
	namespace sample_application
	{
		/*! \brief A dialog window that show license infos
		 *
		 * \author bdl
		 */
		class about_dialog : public styled_qt_controls::styled_dialog
		{
			Q_OBJECT;

		public:
			/*! \brief Initializes a new instance of the about_dialog class
			 *
			 * \param parent A handle to the parent window that should be locked while the dialog is open.
			*/
			about_dialog(styled_qt_controls::styled_window* parent);
			/*! \brief Releases all data associated with an instance of the about_dialog class
			*/
			~about_dialog();
		};
	}
}