#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

#include "main_window.q.hpp"

#include <QtWidgets\QApplication>

using namespace bdl::styled_qt_controls;
using namespace bdl::sample_application;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iCmdShow)
{
	QApplication app(__argc, __argv);
	app.setAttribute(Qt::AA_DontCreateNativeWidgetSiblings, true);

	auto* window = new main_window();
	window->show();

	auto exit_code = app.exec();

	delete window;

	return exit_code;
}