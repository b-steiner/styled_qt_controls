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

		static HICON QIcon_to_HICON(const QIcon& icon, unsigned int size, QIcon::Mode mode = QIcon::Mode::Normal, QIcon::State state = QIcon::State::Off);
		static HICON taskbar_icon(const QIcon& icon);

		static QPixmap default_os_icon(default_icon_type icon, int size);
	};
}

END_BDL_SQTC