#pragma once

#include "..\..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Stores settings as key-value tupples and allows for sub groups
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT settings_group
	{
		//! Type of the value collection
		typedef QHash<QString, QString> value_hash_map;
		//! Type of the subgroup collection
		typedef QHash<QString, settings_group*> group_hash_map;

		//! The key of this group
		PROPERTY2(QString, key, GET_CONST_REF, SET);
		//! A collection of setting tupples
		PROPERTY1(value_hash_map, values, GET_REF);
		//! A collection of child groups
		PROPERTY1(group_hash_map, groups, GET_CONST_REF);

	public:
		/*! \brief Initializes a new instance of the settings_group class
			*
			* \param key The key of this group. Used to retriev it from its parent
			*/
		settings_group(const QString& key);
		/*! \brief Initializes a new instance of the settings_group class
		*
		* \param key The key of this group. Used to retriev it from its parent
		* \param values A key-value initializer list with values for the group
		*/
		settings_group(const QString& key, std::initializer_list<std::pair<QString, QString>> values);
		/*! \brief Releases all data associated with an instance of the settings_group class
			*/
		~settings_group();
			
		/*! \brief Adds a child group
			*
			* \param group The group to add
			*/
		void add_group(settings_group* group);
		/*! \brief Removes all entries from the group
			*/
		void clear_groups();
	};
}

END_BDL_SQTC