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
	if (m_groups.contains(group->key()))
		delete m_groups[group->key()];

	m_groups[group->key()] = group;
}

void settings_group::clear_groups()
{
	for (auto g : m_groups)
		delete g;

	m_groups.clear();
}