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

#include "main_window.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::sample_application;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iCmdShow)
{
	QApplication app(__argc, __argv);
	QApplication::setEffectEnabled(Qt::UI_AnimateCombo, false);
	app.setAttribute(Qt::AA_DontCreateNativeWidgetSiblings, true);

	auto* window = new main_window();
	window->show();

	auto exit_code = app.exec();

	delete window;

	return exit_code;
}