#include "main_window.q.hpp"

#include "resources.hpp"

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include <bdl.styled_qt_controls\styled_dock_widget\styled_dock_widget.q.hpp>
#include <bdl.styled_qt_controls/util/style_loader.hpp>
#include <bdl.styled_qt_controls\styled_controls\clearable_line_edit.q.hpp>
#include <bdl.styled_qt_controls\styled_controls\numeric_line_edit.q.hpp>
#include <bdl.styled_qt_controls\styled_controls\styled_tree_view.q.hpp>
#include <bdl.styled_qt_controls\util\os\file_icon_loader.hpp>

#include <QtWidgets\QButtongroup>

using namespace bdl::sample_application;
using namespace bdl::styled_qt_controls;

main_window::main_window() : styled_window("bdl::styled_qt_controls::sample_app")
{
	util::style_loader loader(":/main_window.qss");

	styled_dock_splitter* main_splitter = new styled_dock_splitter(Qt::Orientation::Horizontal, false);
	styled_dock_widget* dw1 = new styled_dock_widget(styled_dock_orientation::top, "dw1", false);
	styled_dock_widget* dw2 = new styled_dock_widget(styled_dock_orientation::bottom, "dw2", true);

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

		l = new styled_label("Button Group");
		auto button1 = new styled_pushbutton("button1");
		button1->setObjectName("grp_button1");
		button1->setCheckable(true);
		button1->setChecked(true);
		auto button2 = new styled_pushbutton("button2");
		button2->setObjectName("grp_button2");
		button2->setCheckable(true);
		auto button3 = new styled_pushbutton("button3");
		button3->setObjectName("grp_button3");
		button3->setCheckable(true);
		auto button4 = new styled_pushbutton("button4");
		button4->setObjectName("grp_button4");
		button4->setCheckable(true);
		QButtonGroup* group = new QButtonGroup();
		group->addButton(button1, 1);
		group->addButton(button2, 2);
		group->addButton(button3, 3);
		group->addButton(button4, 4);
		scw_layout->addWidget(l, row, 0);
		QHBoxLayout* btg_layout = new QHBoxLayout();
		btg_layout->setSpacing(0);
		btg_layout->setContentsMargins(0, 0, 0, 0);
		btg_layout->addWidget(button1);
		btg_layout->addWidget(button2);
		btg_layout->addWidget(button3);
		btg_layout->addWidget(button4);
		scw_layout->addLayout(btg_layout, row, 1);
		row++;

		l = new styled_label("Widget");
		auto widget = new styled_widget();
		widget->setObjectName("simple_widget");
		widget->setMinimumSize(20, 20);
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(widget, row, 1);
		row++;

		l = new styled_label("Lineedit");
		auto le = new QLineEdit("Editable Text");
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(le, row, 1);
		row++;

		l = new styled_label("Clearable Lineedit");
		auto cle = new clearable_line_edit("Editable Text");
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(cle, row, 1);
		row++;

		l = new styled_label("Numeric Lineedit");
		auto nle = new numeric_line_edit(17.345, 2);
		nle->tick(0.05);
		nle->minimum(-2);
		nle->maximum(25);
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(nle, row, 1);
		row++;

		scw_layout->setColumnStretch(1, 1);
		scw_layout->setRowStretch(row, 1);
		simple_controls_widget->setLayout(scw_layout);
	}

	//Item Controls
	{
		load_fs_model();
		auto tree_widget = new styled_tree_view();

		tree_widget->setModel(m_model);
		tree_widget->setExpanded(m_model->index(0, 0), true);

		dw2->add_item(new styled_dock_item("TreeView", tree_widget));
	}

	//Dummy widgets
	QWidget* content_widget_2 = new QWidget();
	content_widget_2->setStyleSheet("background: solid green;");
	dw1->add_item(new styled_dock_item("Content2", content_widget_2));

	//Dummy widgets
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

main_window::~main_window()
{ 
	if (m_model != nullptr)
		delete m_model;
}



void main_window::load_fs_model()
{
	m_model = new QStandardItemModel();

	QFileInfo f("C:\\");
	m_model->invisibleRootItem()->appendRow(load_fs_item(f));
}

QStandardItem* main_window::load_fs_item(QFileInfo file, int depth)
{
	QStandardItem* item = new QStandardItem(file.fileName());

	if (depth > 0)
		item->setIcon(util::file_icon_loader::load(file));

	if (file.isDir())
	{
		QList<QIcon> iconList = { QIcon(":/images/pink_smiley") };
		item->setData(qVariantFromValue(iconList), styled_tree_view::styled_tree_view_role::icon_list);

		if (depth < 2)
		{
			QDir dir(file.canonicalFilePath());
			auto list = dir.entryInfoList(QDir::AllEntries | QDir::NoDot | QDir::NoDotDot, QDir::DirsFirst | QDir::Name);
			for (auto d : list)
				item->appendRow(load_fs_item(d, depth+1));
		}
	}
	else
	{
		QList<QIcon> iconList = { QIcon(":/images/green_smiley"), QIcon(":/images/pink_smiley") };
		item->setData(qVariantFromValue(iconList), styled_tree_view::styled_tree_view_role::icon_list);
	}

	return item;
}