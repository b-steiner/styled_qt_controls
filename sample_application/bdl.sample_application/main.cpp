#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include <bdl.styled_qt_controls\styled_window\styled_window.q.hpp>

#include <QtWidgets\QApplication>

using namespace bdl::styled_qt_controls;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iCmdShow)
{
	QApplication app(__argc, __argv);
	app.setAttribute(Qt::AA_DontCreateNativeWidgetSiblings, true);

	styled_window* window = new styled_window("bdl::styled_qt_controls::sample_app");
	window->show();

	auto exit_code = app.exec();

	delete window;

	return exit_code;
}