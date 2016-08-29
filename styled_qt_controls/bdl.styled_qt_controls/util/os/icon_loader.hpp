#pragma once

#include "..\..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	enum class default_icon_type { error, warning, info, question };

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
			* \returns The loaded icon
			*/
		static QIcon load_fileicon(const QFileInfo& info);

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