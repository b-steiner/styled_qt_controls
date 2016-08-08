#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include <bdl.styled_qt_controls\styled_window\styled_window.q.hpp>
#include <bdl.styled_qt_controls\styled_dock_widget\styled_dock_widget.q.hpp>

#include <QtWidgets\QApplication>

using namespace bdl::styled_qt_controls;

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int iCmdShow)
{
	QApplication app(__argc, __argv);
	app.setAttribute(Qt::AA_DontCreateNativeWidgetSiblings, true);

	styled_window* window = new styled_window("bdl::styled_qt_controls::sample_app");

	styled_dock_splitter* main_splitter = new styled_dock_splitter(Qt::Orientation::Horizontal, false);

	styled_dock_widget* dw1 = new styled_dock_widget(styled_dock_orientation::top, "dw1", false);
	QWidget* content_widget_1 = new QWidget();
	content_widget_1->setStyleSheet("background: solid purple;");
	dw1->add_item(new styled_dock_item("Content1", content_widget_1));
	QWidget* content_widget_2 = new QWidget();
	content_widget_2->setStyleSheet("background: solid green;");
	dw1->add_item(new styled_dock_item("Content2", content_widget_2));

	styled_dock_widget* dw2 = new styled_dock_widget(styled_dock_orientation::bottom, "dw2", true);
	QWidget* content_widget_3 = new QWidget();
	content_widget_3->setStyleSheet("background: solid blue;");
	dw2->add_item(new styled_dock_item("Tool1", content_widget_3));
	QWidget* content_widget_4 = new QWidget();
	content_widget_4->setStyleSheet("background: solid yellow;");
	dw2->add_item(new styled_dock_item("Tool2", content_widget_4));

	main_splitter->addWidget(dw1);
	main_splitter->addWidget(dw2);

	QGridLayout* client_widget_layout = new QGridLayout();
	client_widget_layout->setContentsMargins(0, 0, 0, 0);
	client_widget_layout->setSpacing(0);
	client_widget_layout->addWidget(main_splitter);
	window->client_widget()->setLayout(client_widget_layout);

	window->show();
	auto exit_code = app.exec();

	delete window;

	return exit_code;
}