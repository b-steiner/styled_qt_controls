#pragma once

#include "..\..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Loads file icons from the operating system
		*
		* \author bdl
		* 
		* In contrast to the qt default icon loader, this loader supresses overlays (e.g. from TortoiseGIT, etc.)
		*/
	class BDL_SQTC_EXPORT file_icon_loader
	{
	public:
		/*! \brief Loads an icon for a specific file
			*
			* \param info QFileInfo of the file
			* \returns The loaded icon
			*/
		static QIcon load(const QFileInfo& info);
	};
}

END_BDL_SQTC