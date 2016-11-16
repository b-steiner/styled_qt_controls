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

#include "..\..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	enum class default_icon_type { error, warning, info, question };
	enum class icon_size_type { size16, size32, size48, size128 };

	/*! \brief Loads file icons from the operating system
		*
		* \author bdl
		* 
		* In contrast to the qt default icon loader, this loader supresses overlays (e.g. from TortoiseGIT, etc.)
		*/
	class BDL_SQTC_EXPORT icon_loader
	{
	public:
		/*! \brief Loads an icon for a specific file
			*
			* \param info QFileInfo of the file
			* \param sizes A list of sizes that should be loaded into the icon
			* \returns The loaded icon
			*/
		static QIcon load_fileicon(const QFileInfo& info, QList<icon_size_type> sizes = { icon_size_type::size16, icon_size_type::size32, icon_size_type::size48, icon_size_type::size128 });

		/*! \brief Converts a qt icon into a win32 icon
		 *
		 * Note, that the application has to delete the created icon.
		 *
		 * \param icon The qt icon
		 * \param size The size of the icon
		 * \param mode The qt icon mode
		 * \param state The qt icon state
		 *
		 * \returns A win32 icon.
		 */
		static HICON QIcon_to_HICON(const QIcon& icon, unsigned int size, QIcon::Mode mode = QIcon::Mode::Normal, QIcon::State state = QIcon::State::Off);
		/*! \brief Creates a win32 icon from a qt icon that has the appropriate size for the taskbar
		 *
		 * This method queries the SM_CXICON system metric to determine the size
		 *
		 * \param icon The qt icon
		 *
		 * \returns The win32 icon
		 */
		static HICON taskbar_icon(const QIcon& icon);

		/*! \brief Loads a default icon from the operating system
		 *
		 * \param icon The type of icon which should be loaded
		 * \param size The size of the loaded icon
		 *
		 * \returns A pixmap containing the loaded icon
		 */
		static QPixmap default_os_icon(default_icon_type icon, int size);
	};
}

END_BDL_SQTC