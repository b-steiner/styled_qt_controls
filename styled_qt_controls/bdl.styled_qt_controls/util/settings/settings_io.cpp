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
#include "settings_io.hpp"
#include "settings_group.hpp"

using namespace bdl::styled_qt_controls::util;

settings_group* settings_io::load(QString path)
{
	QFile settingFile(path);
	if (!settingFile.open(QIODevice::ReadOnly))
	{
		qWarning() << "Unable to open setting file: " << path.toUtf8().data();
		return nullptr;
	}

	QDomDocument document("");
	document.setContent(&settingFile);
	auto topValueElement = document.firstChildElement().firstChildElement();

	if (topValueElement.isNull())
	{
		qFatal("Unable to find top level node");
		return nullptr;
	}

	return load_group(&topValueElement);
}
void settings_io::save(QString path, settings_group* group)
{
	QDir dir(path + "/..");
	bool done = dir.mkpath(dir.absolutePath());

	qDebug() << "Writing settings to " << path.toUtf8().data();

	QFile settingFile(path);
	if (!settingFile.open(QIODevice::WriteOnly))
	{
		qFatal("Failed to write to settings file");
		return;
	}

	QTextStream stream(&settingFile);

	stream << "<settings_store>\n";

	save_group(stream, group, "\t");

	stream << "</settings_store>\n";
	settingFile.close();
}

void settings_io::save_group(QTextStream& stream, settings_group* group, QString intent)
{
	stream << intent << "<settings_group key=\"" << group->key() << "\">\n";
	stream << intent << "\t<values>\n";

	for (auto it = group->values().begin(); it != group->values().end(); ++it)
		stream << intent << "\t\t<value key=\"" << it.key() << "\" value=\"" << it.value() << "\" />\n";

	stream << intent << "\t</values>\n";
	stream << intent << "\t<groups>\n";

	for (auto it = group->groups().begin(); it != group->groups().end(); ++it)
		save_group(stream, it.value(), intent + "\t\t");

	stream << intent << "\t</groups>\n";
	stream << intent << "</settings_group>\n";
}
settings_group* settings_io::load_group(QDomElement* element)
{
	QString key = element->attribute("key");
	settings_group* group = new settings_group(key);

	auto values_element = element->firstChildElement("values");
	auto value_element = values_element.firstChildElement();
	while (!value_element.isNull())
	{
		group->values()[value_element.attribute("key")] = value_element.attribute("value");

		value_element = value_element.nextSiblingElement();
	}

	auto groups_element = element->firstChildElement("groups");
	auto group_element = groups_element.firstChildElement();
	while (!group_element.isNull())
	{
		settings_group* child_group = load_group(&group_element);
		group->add_group(child_group);
		group_element = group_element.nextSiblingElement();
	}

	return group;
}