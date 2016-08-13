#include "main_window.q.hpp"

#include "resources.hpp"

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include <bdl.styled_qt_controls\styled_dock_widget\styled_dock_widget.q.hpp>
#include <bdl.styled_qt_controls/util/style_loader.hpp>
#include <bdl.styled_qt_controls\styled_controls\clearable_line_edit.q.hpp>
#include <bdl.styled_qt_controls\styled_controls\numeric_line_edit.q.hpp>
#include <bdl.styled_qt_controls\styled_controls\styled_tree_view.q.hpp>
#include <bdl.styled_qt_controls\util\os\file_icon_loader.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_list_view.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_list_view_item_delegate.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_collapse_widget.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/styled_gradient_frame.q.hpp>
#include <bdl.styled_qt_controls/styled_controls/tree_combobox.q.hpp>
#include <bdl.styled_qt_controls/styled_path_widget/styled_path_widget.q.hpp>
#include <bdl.styled_qt_controls/styled_color_picker/styled_color_picker.q.hpp>

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

		l = new styled_label("Gradient Frame");
		auto gf = new styled_gradient_frame();
		gf->setObjectName("simple_gf_1");
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(gf, row, 1);
		row++;

		l = new styled_label("Collapse Widget");
		m_scw = new styled_collapse_widget();
		m_scw->state(styled_collapse_widget::state_t::no_state);
		scw_layout->addWidget(l, row, 0);
		scw_layout->addWidget(m_scw, row, 1);
		row++;
		
		m_scw->title_widget(new QLabel(" Open to change state"));
		QWidget* cw_content_widget = new QWidget();
		cw_content_widget->setObjectName("simple_cw_content");
		m_scw->content_widget(cw_content_widget);

		QButtonGroup* state_group = new QButtonGroup();
		styled_pushbutton* state_btn_1 = new styled_pushbutton("No State");
		styled_pushbutton* state_btn_2 = new styled_pushbutton("Good");
		styled_pushbutton* state_btn_3 = new styled_pushbutton("Warn");
		styled_pushbutton* state_btn_4 = new styled_pushbutton("Error");
		state_btn_1->setObjectName("state_btn_1");
		state_btn_1->setObjectName("state_btn_2");
		state_btn_1->setObjectName("state_btn_3");
		state_btn_1->setObjectName("state_btn_4");
		QObject::connect(state_btn_1, SIGNAL(clicked(bool)), this, SLOT(state_btn_1_clicked(bool)));
		QObject::connect(state_btn_2, SIGNAL(clicked(bool)), this, SLOT(state_btn_2_clicked(bool)));
		QObject::connect(state_btn_3, SIGNAL(clicked(bool)), this, SLOT(state_btn_3_clicked(bool)));
		QObject::connect(state_btn_4, SIGNAL(clicked(bool)), this, SLOT(state_btn_4_clicked(bool)));
		state_group->addButton(state_btn_1);
		state_group->addButton(state_btn_2);
		state_group->addButton(state_btn_3);
		state_group->addButton(state_btn_4);
		QHBoxLayout* state_layout = new QHBoxLayout();
		state_layout->setContentsMargins(20, 50, 20, 50);
		state_layout->setSpacing(0);
		state_layout->addWidget(state_btn_1);
		state_layout->addWidget(state_btn_2);
		state_layout->addWidget(state_btn_3);
		state_layout->addWidget(state_btn_4);
		cw_content_widget->setLayout(state_layout);



		scw_layout->setColumnStretch(1, 1);
		scw_layout->setRowStretch(row, 1);
		simple_controls_widget->setLayout(scw_layout);

		
	}

	//Item Controls
	{
		load_fs_model();

		QVBoxLayout* layout = new QVBoxLayout();
		QWidget* ic_widget = new QWidget();
		ic_widget->setLayout(layout);
		dw2->add_item(new styled_dock_item("Item Views", ic_widget));

		auto tree_widget = new styled_tree_view();
		tree_widget->setModel(m_model);
		tree_widget->setExpanded(m_model->index(0, 0), true);
		layout->addWidget(tree_widget);


		QButtonGroup* size_group = new QButtonGroup();
		styled_pushbutton* size_btn_1 = new styled_pushbutton("Detail");
		styled_pushbutton* size_btn_2 = new styled_pushbutton("Small");
		styled_pushbutton* size_btn_3 = new styled_pushbutton("Medium");
		styled_pushbutton* size_btn_4 = new styled_pushbutton("Large");
		size_btn_1->setObjectName("size_btn_1");
		size_btn_1->setObjectName("size_btn_2");
		size_btn_1->setObjectName("size_btn_3");
		size_btn_1->setObjectName("size_btn_4");
		QObject::connect(size_btn_1, SIGNAL(clicked(bool)), this, SLOT(size_btn_1_clicked(bool)));
		QObject::connect(size_btn_2, SIGNAL(clicked(bool)), this, SLOT(size_btn_2_clicked(bool)));
		QObject::connect(size_btn_3, SIGNAL(clicked(bool)), this, SLOT(size_btn_3_clicked(bool)));
		QObject::connect(size_btn_4, SIGNAL(clicked(bool)), this, SLOT(size_btn_4_clicked(bool)));
		size_group->addButton(size_btn_1);
		size_group->addButton(size_btn_2);
		size_group->addButton(size_btn_3);
		size_group->addButton(size_btn_4);
		QHBoxLayout* size_layout = new QHBoxLayout();
		size_layout->setSpacing(0);
		size_layout->addWidget(size_btn_1);
		size_layout->addWidget(size_btn_2);
		size_layout->addWidget(size_btn_3);
		size_layout->addWidget(size_btn_4);
		layout->addLayout(size_layout);


		m_list_view = new styled_list_view();
		m_list_view->setModel(m_model);
		m_list_view->setRootIndex(m_model->index(0, 0));
		layout->addWidget(m_list_view);
	}

	//Combinded Controls
	{
		int row = 0;

		QWidget* content_widget_2 = new QWidget();
		dw1->add_item(new styled_dock_item("More complex controls", content_widget_2));

		QGridLayout* layout = new QGridLayout();
		content_widget_2->setLayout(layout);

		tree_combobox* tcb = new tree_combobox();
		tcb->model(m_model);
		tcb->setExpanded(m_model->index(0, 0), true);
		layout->addWidget(new QLabel("Tree Combobox"), row, 0);
		layout->addWidget(tcb, row, 1);
		row++;

		styled_path_widget* spw = new styled_path_widget();
		QList<styled_path_widget_item*> item_lst;
		auto item = new styled_path_widget_item("C:\\");
		item->menu_items().push_back(new styled_path_widget_item("Folder 1"));
		item->menu_items().push_back(new styled_path_widget_item("Folder 2"));
		item->menu_items().push_back(new styled_path_widget_item("Folder 3"));
		item->menu_items().push_back(new styled_path_widget_item("Folder 4"));
		item_lst.push_back(item);
		item = new styled_path_widget_item("Folder 1");
		item->menu_items().push_back(new styled_path_widget_item("SubFolder 1"));
		item->menu_items().push_back(new styled_path_widget_item("SubFolder 2"));
		item->menu_items().push_back(new styled_path_widget_item("SubFolder 3"));
		item->menu_items().push_back(new styled_path_widget_item("SubFolder 4"));
		item_lst.push_back(item);
		spw->items(item_lst);
		
		layout->addWidget(new QLabel("Path Widget"), row, 0);
		layout->addWidget(spw, row, 1);
		row++;

		styled_color_picker* picker = new styled_color_picker("Color Picker");
		layout->addWidget(picker, row, 0, 1, 2);
		row++;

		layout->setColumnStretch(1, 1);
		layout->setRowStretch(row, 1);

		//Dummy widgets
		QWidget* color_picker_widget = new QWidget();
		dw2->add_item(new styled_dock_item("Dummy", color_picker_widget));
	}

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
	QStandardItem* item;
	
	if (depth == 0)
		item = new QStandardItem("C:\\");
	else
		item = new QStandardItem(file.fileName());

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

void main_window::size_btn_1_clicked(bool checked)
{
	m_list_view->setIconSize(QSize(16, 16));
	m_list_view->setViewMode(QListView::ViewMode::ListMode);
	((styled_list_view_item_delegate*)m_list_view->itemDelegate())->preferred_size(0);
}
void main_window::size_btn_2_clicked(bool checked)
{
	m_list_view->setIconSize(QSize(32, 32));
	m_list_view->setViewMode(QListView::ViewMode::IconMode);
	((styled_list_view_item_delegate*)m_list_view->itemDelegate())->preferred_size(96);
}
void main_window::size_btn_3_clicked(bool checked)
{
	m_list_view->setIconSize(QSize(48, 48));
	m_list_view->setViewMode(QListView::ViewMode::IconMode);
	((styled_list_view_item_delegate*)m_list_view->itemDelegate())->preferred_size(96);
}
void main_window::size_btn_4_clicked(bool checked)
{
	m_list_view->setIconSize(QSize(128, 128));
	m_list_view->setViewMode(QListView::ViewMode::IconMode);
	((styled_list_view_item_delegate*)m_list_view->itemDelegate())->preferred_size(148);
}

void main_window::state_btn_1_clicked(bool checked)
{
	m_scw->state(styled_collapse_widget::state_t::no_state);
}
void main_window::state_btn_2_clicked(bool checked)
{
	m_scw->state(styled_collapse_widget::state_t::good);
}
void main_window::state_btn_3_clicked(bool checked)
{
	m_scw->state(styled_collapse_widget::state_t::warn);
}
void main_window::state_btn_4_clicked(bool checked)
{
	m_scw->state(styled_collapse_widget::state_t::error);
}