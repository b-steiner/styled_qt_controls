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
#include "style_loader.hpp"
#include "theme_colors.hpp"

using namespace bdl::styled_qt_controls::util;

style_loader::style_loader(QString path) : m_original_text("")
{
	set_replacement("@normal_highlight", theme_colors::normal_highlight);
	set_replacement("@normal", theme_colors::normal);
	set_replacement("@dark_highlight", theme_colors::dark_highlight);
	set_replacement("@dark", theme_colors::dark);
	set_replacement("@light_highlight", theme_colors::light_highlight);
	set_replacement("@light", theme_colors::light);
	set_replacement("@selection_highlight", theme_colors::selection_highlight);
	set_replacement("@selection_dark", theme_colors::selection_dark);
	set_replacement("@selection_border", theme_colors::selection_border);
	set_replacement("@selection", theme_colors::selection);
	set_replacement("@content_control", theme_colors::content_control);


	set_replacement("@border", theme_colors::border);
	set_replacement("@font_inactive", theme_colors::font_inactive);
	set_replacement("@font", theme_colors::font);
	set_replacement("@transparency_key", theme_colors::transparency_key);

	append_file(path);
}
style_loader::~style_loader()
{
}

void style_loader::append_file(QString path)
{
	QFile file(path);
	if (!file.open(QIODevice::ReadOnly))
	{
		qFatal("Unable to load stylesheet file at %s", path.toUtf8().data());
	}
	else
		m_original_text += file.readAll();
}
QString style_loader::style_string() const
{
	QString style = m_original_text;

	for (auto it = m_replacements.cbegin(); it != m_replacements.cend(); ++it)
		style.replace(it->first, it->second);

	int idx = style.indexOf("@");
	if (idx != -1)
		qWarning() << "Found symbol @, have you misstyped a color name? ( text is \"" << style.mid(idx, min(20, style.length() - idx)) << "\"";

	return style;
}
void style_loader::set_replacement(QString key, QColor color)
{	
	m_replacements.push_back(QPair<QString, QString>(key, color_to_text(color)));
}

QString style_loader::color_to_text(QColor color)
{
	std::stringstream ss;
	ss << "rgba(" << color.red() << ", " << color.green() << ", " << color.blue() << ", " << color.alpha() << ")";
	return QString(ss.str().c_str());
}