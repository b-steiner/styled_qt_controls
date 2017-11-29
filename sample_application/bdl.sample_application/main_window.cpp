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

#include "main_window.q.hpp"
#include "resources.hpp"
#include "about_dialog.q.hpp"

using namespace bdl::sample_application;
using namespace bdl::styled_qt_controls;

main_window::main_window() : styled_window("bdl::styled_qt_controls::sample_app")
{
	styled_dock_splitter* main_splitter = new styled_dock_splitter(Qt::Orientation::Horizontal, false);
	styled_dock_widget* dw1 = new styled_dock_widget(styled_dock_orientation::top, new base_widget_factory(), "dw1", false);
	styled_dock_widget* dw2 = new styled_dock_widget(styled_dock_orientation::bottom, new base_widget_factory(), "dw2", true);

	dw2->add_item(new styled_dock_item("Item editor", create_item_editor_widget()));
	dw2->add_item(new styled_dock_item("Item Views", create_item_control_widget()));

	dw1->add_item(new styled_dock_item("Simple Controls", create_simple_control_widget()));
	auto cw2_item = new styled_dock_item("More complex controls", create_combined_control_widget());
	dw1->add_item(cw2_item);
	//dw1->select(cw2_item);

	main_splitter->addWidget(dw1);
	main_splitter->addWidget(dw2);

	QGridLayout* client_widget_layout = new QGridLayout();
	client_widget_layout->setContentsMargins(0, 0, 0, 0);
	client_widget_layout->setSpacing(0);
	client_widget_layout->addWidget(main_splitter);
	this->client_widget()->setLayout(client_widget_layout);

	auto file_menu = menubar()->addMenu("File");
	file_menu->addAction("Dummy Action 1");
	file_menu->addAction("Dummy Action 2");
	file_menu->addAction("Dummy Action 3");
	file_menu->addSeparator();
	auto exit_action = file_menu->addAction("Exit");
	QObject::connect(exit_action, &QAction::triggered, this, &main_window::exit_action_triggered);
	
	auto msgbox_menu = menubar()->addMenu("Message Box");
	auto info_msg_action = msgbox_menu->addAction("Information");
	QObject::connect(info_msg_action, &QAction::triggered, this, &main_window::info_msg_action_triggered);
	auto warning_msg_action = msgbox_menu->addAction("Warning");
	QObject::connect(warning_msg_action, &QAction::triggered, this, &main_window::warning_msg_action_triggered);
	auto critical_msg_action = msgbox_menu->addAction("Critical");
	QObject::connect(critical_msg_action, &QAction::triggered, this, &main_window::critical_msg_action_triggered);
	auto question_msg_action = msgbox_menu->addAction("Question");
	QObject::connect(question_msg_action, &QAction::triggered, this, &main_window::question_msg_action_triggered);
	auto custom_msg_action = msgbox_menu->addAction("Custom");
	QObject::connect(custom_msg_action, &QAction::triggered, this, &main_window::custom_msg_action_triggered);

	auto help_menu = menubar()->addMenu("Help");
	auto about_action = help_menu->addAction("About");
	QObject::connect(about_action, &QAction::triggered, this, &main_window::about_action_triggered);

	QToolBar* toolbar = this->main_window_widget()->addToolBar("TEST");
	toolbar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
	toolbar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
	toolbar->addAction("Action 1");
	auto act2 = toolbar->addAction("Action 2");
	act2->setEnabled(false);
	toolbar->addSeparator();
	toolbar->addAction("Action 3");
	
	auto menu_button = new QToolButton();
	menu_button->setText("InstantPopup");
	menu_button->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
	QMenu* toolbar_menu = new QMenu(this->part_window_widget());
	toolbar_menu->addAction("TB Menu Action 1");
	toolbar_menu->addAction("TB Menu Action 2");
	toolbar_menu->addSeparator();
	toolbar_menu->addAction("TB Menu Action 3");
	menu_button->setMenu(toolbar_menu);
	menu_button->setPopupMode(QToolButton::ToolButtonPopupMode::InstantPopup);
	toolbar->addWidget(menu_button);

	auto menu_button2 = new QToolButton();
	menu_button2->setText("MenuButtonPopup");
	menu_button2->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
	QMenu* toolbar_menu2 = new QMenu(this->part_window_widget());
	toolbar_menu2->addAction("TB Menu Action 1");
	toolbar_menu2->addAction("TB Menu Action 2");
	toolbar_menu2->addSeparator();
	toolbar_menu2->addAction("TB Menu Action 3");
	menu_button2->setMenu(toolbar_menu2);
	menu_button2->setPopupMode(QToolButton::ToolButtonPopupMode::MenuButtonPopup);
	toolbar->addWidget(menu_button2);

	auto menu_button3 = new QToolButton();
	menu_button3->setText("DelayedPopup");
	menu_button3->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
	QMenu* toolbar_menu3 = new QMenu(this->part_window_widget());
	toolbar_menu3->addAction("TB Menu Action 1");
	toolbar_menu3->addAction("TB Menu Action 2");
	toolbar_menu3->addSeparator();
	toolbar_menu3->addAction("TB Menu Action 3");
	menu_button3->setMenu(toolbar_menu3);
	menu_button3->setPopupMode(QToolButton::ToolButtonPopupMode::DelayedPopup);
	toolbar->addWidget(menu_button3);

	auto toolbar_textbox = new QLineEdit("default text");
	toolbar_textbox->setFixedWidth(100);
	toolbar->addWidget(toolbar_textbox);

	toolbar->addSeparator();
	auto ch_action1 = toolbar->addAction("Check 1");
	auto ch_action2 = toolbar->addAction("Check 2");
	auto ch_action3 = toolbar->addAction("Check 3");
	ch_action1->setCheckable(true);
	ch_action1->setChecked(true);
	ch_action2->setCheckable(true);
	ch_action3->setCheckable(true);

	auto img_toolbar = m_main_window_widget->addToolBar("image toolbar");
	img_toolbar->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonIconOnly);
	img_toolbar->addAction(QIcon(":/images/green_smiley.png"), "");

	this->icon(QPixmap(":/images/sqtc_icon_titlebar.png"));
	this->taskbar_icon(QIcon(":/images/sqtc_icon.ico"));
	this->resize(QSize(1280, 768));
}

main_window::~main_window()
{ 
	if (m_model != nullptr)
		delete m_model;
}


QWidget* main_window::create_simple_control_widget()
{
	util::style_loader loader(":/main_window.qss");

	QWidget* simple_controls_widget = new QWidget();
	simple_controls_widget->setObjectName("simple_controls_widget");
	simple_controls_widget->setStyleSheet(loader.style_string());

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

	l = new styled_label("Slider");
	auto sli = new QSlider();
	sli->setOrientation(Qt::Horizontal);
	sli->setMinimum(0);
	sli->setValue(4);
	sli->setMaximum(10);
	scw_layout->addWidget(l, row, 0);
	scw_layout->addWidget(sli, row, 1);
	row++;

	l = new styled_label("Collapse Widget");
	m_scw = new styled_collapse_widget();
	m_scw->state(styled_collapse_widget::state_t::no_state);
	scw_layout->addWidget(l, row, 0);
	scw_layout->addWidget(m_scw, row, 1);
	row++;

	l = new styled_label("ComboBox");
	auto cbx = new QComboBox();
	cbx->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Minimum);
	cbx->addItem("One");
	cbx->addItem("Two");
	cbx->addItem("Three");
	scw_layout->addWidget(l, row, 0);
	scw_layout->addWidget(cbx, row, 1);
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
	
	return simple_controls_widget;
}
QWidget* main_window::create_item_control_widget()
{
	util::style_loader loader(":/main_window.qss");

	load_fs_model();

	QVBoxLayout* layout = new QVBoxLayout();
	QWidget* ic_widget = new QWidget();
	ic_widget->setLayout(layout);

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

	return ic_widget;
}
QWidget* main_window::create_item_editor_widget()
{
	util::style_loader loader(":/main_window.qss");

	QMenu* add_opt_menu = new QMenu(this->client_widget());
	add_opt_menu->addAction("Action 1");
	add_opt_menu->addAction("Action 2");
	add_opt_menu->addAction("Action 3");

	styled_item_editor* editor = new styled_item_editor();
	auto group1 = new item_editor_group("Group 1", "", true, add_opt_menu);
	group1->add_item(new string_item_editor_item("String", "Initial Value", [](const QString&) { qDebug() << "Text changed"; }, true, true, [](bool) { qDebug() << "Binding changed"; }));
	group1->add_item(new float_item_editor_item("Float", 0.5, [](float) { qDebug() << "Float changed"; }, true, false, [](bool) { qDebug() << "Binding changed"; }, 4, 0.1f, -10.0f, 10.0f));
	editor->add_group(group1);

	auto group2 = new item_editor_group("Group 2");
	group2->add_item(new vector3_item_editor_item("Vector3", 1, 2, 3, [](float, float, float) { qDebug() << "Vector3 changed"; }));
	group2->add_item(new color_item_editor_item("Color", QColor::fromRgb(255, 128, 0), [](QColor) { qDebug() << "Color changed"; }, true, [](bool) { qDebug() << "Binding changed"; }));
	group2->add_item(new enum_item_editor_item(1, [](int) { qDebug() << "Enum changed"; }, { {0, "First"}, {1, "Second"}, {2, "Third"} }));
	group2->add_item(new combobox_editor_item("Combobox", 2, [](int value) { qDebug() << "Combobox selection = " << value; }, { {1, "One"}, { 2, "Two"}, {3, "Three"} },
											  true, false, [](bool) { qDebug() << "Binding changed"; }));
	editor->add_group(group2);

	auto group3 = new item_editor_group("Group 3");
	for (int i = 0; i < 20; i++)
		group3->add_item(new float_item_editor_item("Float " + QString::number(i), 0.5, [](float) { qDebug() << "Float changed"; }, true, false, [](bool) { qDebug() << "Binding changed"; }, 4, 0.1f, -10.0f, 10.0f));
	editor->add_group(group3);


	return editor;
}
QWidget* main_window::create_combined_control_widget()
{
	util::style_loader loader(":/main_window.qss");
	int row = 0;

	QWidget* content_widget_2 = new QWidget();

	QGridLayout* layout = new QGridLayout();
	content_widget_2->setLayout(layout);
	content_widget_2->setStyleSheet(loader.style_string());

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

	styled_gradient_frame* pick_test_frame = new styled_gradient_frame();
	pick_test_frame->setObjectName("pick_test_frame");
	pick_test_frame->setMinimumSize(100, 100);

	styled_color_picker* picker = new styled_color_picker("Color Picker", pick_test_frame);
	layout->addWidget(picker, row, 0, 1, 2);
	row++;

	layout->addWidget(new QLabel("Click here for color pick"), row, 0);
	layout->addWidget(pick_test_frame, row, 1);
	row++;

	styled_color_picker* picker2 = new styled_color_picker("Color Picker 2", pick_test_frame);
	layout->addWidget(picker2, row, 0, 1, 2);
	row++;

	layout->setColumnStretch(1, 1);
	layout->setRowStretch(row, 1);

	return content_widget_2;
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
		item->setIcon(util::icon_loader::load_fileicon(file));

	if (file.isDir())
	{
		QList<QIcon> iconList = { QIcon(":/images/pink_smiley") };
		item->setData(qVariantFromValue(iconList), styled_tree_view::styled_tree_view_role::icon_list);

		if (depth < 2)
		{
			QDir dir(file.canonicalFilePath());
			auto list = dir.entryInfoList(QDir::AllEntries | QDir::NoDot | QDir::NoDotDot, QDir::DirsFirst | QDir::Name);
			//for (auto d : list)
			for (int i = 0; i < min(5, list.size()); i++)
				item->appendRow(load_fs_item(list[i], depth+1));
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

void main_window::exit_action_triggered(bool checked)
{
	auto wlist = styled_window::front_to_back_windows();
	for (auto w : wlist)
		w->close();
}
void main_window::about_action_triggered(bool checked)
{
	about_dialog* diag = new about_dialog(this);
	qDebug() << "Dialog result: " << diag->exec();
}

void main_window::info_msg_action_triggered(bool checked)
{
	styled_messagebox::information(this, "Info", "This is a info messagebox.");
}
void main_window::warning_msg_action_triggered(bool checked)
{
	styled_messagebox::warning(this, "Warning", "This is a warning messagebox.");
}
void main_window::critical_msg_action_triggered(bool checked)
{
	styled_messagebox::critical(this, "Critical", "A critical error happend. Press Ok to solve it.");
}
void main_window::question_msg_action_triggered(bool checked)
{
	auto result = messagebox_result::yes;

	while (result == messagebox_result::yes)
		result = styled_messagebox::question(this, "Question", "Do you want to see another question box?");
}
void main_window::custom_msg_action_triggered(bool checked)
{
	styled_messagebox::show(this, "Title", "<b>A more complicated text</b><p>It has multiple lines</p><font color='#00FF00'>and colors</font>", QIcon(":/sqtc_icon.ico").pixmap(32),
	{ { "Yes to all", 1}, { "No to nothing", 2}, { "Do what you want", 3} });
}