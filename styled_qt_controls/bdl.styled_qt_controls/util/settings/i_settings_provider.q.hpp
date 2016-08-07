#pragma once

#include "..\..\styled_qt_controls.hpp"
#include "settings_group.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Interface for a widget that provides settings
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT i_settings_provider : public QWidget
	{
		Q_OBJECT;

	public:
		/*! \brief Initializes a new instance of the i_settings_provider class
			*/
		i_settings_provider() : QWidget() { }
		/*! \brief Releases all data associated with an instance of the i_settings_provider class
			*/
		virtual ~i_settings_provider() { }

		/*! \brief Implement this method to return a group with settings to be saved
			*/
		virtual settings_group* save_settings() = 0;
		/*! \brief Implement this to restore settings from a settings_group
			*/
		virtual void load_settings(settings_group* group) = 0;
	};
}

END_BDL_SQTC