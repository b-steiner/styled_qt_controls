#pragma once

#include "..\..\styled_qt_controls.hpp"
#include "settings_group.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Handles IO for settings
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT settings_io
	{
	public:
		/*! \brief Loads a settings file
			*
			* \param path Path to the file
			* \returns A settings_group containing the loaded data
			*/
		static settings_group* load(QString path);
		/*! \brief Stores a settings file
			*
			* \param path Path to the file
			* \param group Root group to store
			*/
		static void save(QString path, settings_group* group);

		/*! \brief Writes a group to a QTextStream
			*
			* \param stream The target stream
			* \param group The group that should be written to the string
			* \param intent A string that is appended before each line
			*/
		static void save_group(QTextStream& stream, settings_group* group, QString intent);
		/*! \brief Parses a XML node into a settings_group
			*
			* \param element The XML element
			* \returns The settings_group
			*/
		static settings_group* load_group(QDomElement* element);
	};
}

END_BDL_SQTC