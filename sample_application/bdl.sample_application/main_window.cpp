#include "main_window.q.hpp"

#include "resources.hpp"

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include <bdl.styled_qt_controls\styled_dock_widget\styled_dock_widget.q.hpp>
#include <bdl.styled_qt_controls/util/style_loader.hpp>

using namespace bdl::sample_application;
using namespace bdl::styled_qt_controls;

main_window::main_window() : styled_window("bdl::styled_qt_controls::sample_app")
{
	util::style_loader loader(":/main_window.qss");

	styled_dock_splitter* main_splitter = new styled_dock_splitter(Qt::Orientation::Horizontal, false);
	styled_dock_widget* dw1 = new styled_dock_widget(styled_dock_orientation::top, "dw1", false);

	//Simple controls
	{
		QWidget* simple_controls_widget = new QWidget();
		simple_controls_widget->setObjectName("simple_controls_widget");
		simple_controls_widget->setStyleSheet(loader.style_string());
		dw1->add_item(new styled_dock_item("Simple Controls", simple_controls_widget));

		int row = 0;
		QGridLayout* scw_layout = new QGridLayout();

		auto l = new styled_label("Frame");
		auto frame = new styled_frame();
		frame->setObjectName("simple_frame");
		frame->setMinimumSize(20, 20);
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(frame, row, 1);
		row++;

		l = new styled_label("Label");
		auto label = new styled_label("Yes, really a label!");
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(label, row, 1);
		row++;

		l = new styled_label("Pushbutton");
		auto button = new styled_pushbutton("styled_pushbutton");
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(button, row, 1);
		row++;

		l = new styled_label("Widget");
		auto widget = new styled_widget();
		widget->setObjectName("simple_widget");
		widget->setMinimumSize(20, 20);
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(widget, row, 1);
		row++;

		scw_layout->setColumnStretch(1, 1);
		scw_layout->setRowStretch(row, 1);
		simple_controls_widget->setLayout(scw_layout);
	}

	//Dummy widgets
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
	this->client_widget()->setLayout(client_widget_layout);
}

main_window::~main_window() { }