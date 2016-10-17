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

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "settings_group.hpp"

using namespace bdl::styled_qt_controls::util;

settings_group::settings_group(const QString& key) : m_key(key) { }
settings_group::settings_group(const QString& key, std::initializer_list<std::pair<QString, QString>> values) : m_key(key), m_values(values) { }
settings_group::~settings_group()
{
	for (auto it = m_groups.begin(); it != m_groups.end(); ++it)
		delete it.value();
}

void settings_group::add_group(settings_group* group)
{
	if (group != nullptr)
	{
		if (m_groups.contains(group->key()))
			delete m_groups[group->key()];

		m_groups[group->key()] = group;
	}
}

void settings_group::clear_groups()
{
	for (auto g : m_groups)
		delete g;

	m_groups.clear();
}