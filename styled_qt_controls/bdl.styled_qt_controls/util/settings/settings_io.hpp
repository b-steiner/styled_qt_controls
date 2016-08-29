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