#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "tree_combobox.q.hpp"

#include "../util/style_loader.hpp"
#include "styled_pushbutton.q.hpp"
#include "styled_tree_view.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

tree_combobox::tree_combobox(QWidget* parent) : QFrame(parent)
{
	style_loader loader(":/styled_controls/tree_combobox.qss");
	this->setStyleSheet(loader.style_string());
	this->setMouseTracking(true);

	m_tree_view = new styled_tree_view();
	m_tree_view->setExpandsOnDoubleClick(false);
	m_tree_view->setSelectionMode(QAbstractItemView::SingleSelection);
	m_tree_view->setEditTriggers(QAbstractItemView::NoEditTriggers);
	QObject::connect(m_tree_view, SIGNAL(doubleClicked(const QModelIndex&)), this, SLOT(tree_doubleclicked(const QModelIndex&)));

	m_selected_text_label = new QLabel("");
	m_selected_icon_label = new QLabel();
	m_selected_icon_label->setFixedWidth(21);

	m_menu_button = new styled_pushbutton();
	m_menu_button->setFixedWidth(21);
	m_menu = new QMenu(this);
	m_menu->installEventFilter(this);
	m_menu_button->setMenu(m_menu);

	auto* tree_action = new QWidgetAction(m_menu);
	m_menu->setMinimumHeight(150);
	QGridLayout* menu_layout = new QGridLayout();
	menu_layout->setContentsMargins(1, 1, 1, 1);
	menu_layout->addWidget(m_tree_view, 0, 0);
	m_menu->setLayout(menu_layout);

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	layout->setSpacing(0);
	layout->setColumnStretch(1, 1);

	layout->addWidget(m_selected_icon_label, 0, 0);
	layout->addWidget(m_selected_text_label, 0, 1);
	layout->addWidget(m_menu_button, 0, 2);
	this->setLayout(layout);
}
tree_combobox::~tree_combobox() { }

bool tree_combobox::eventFilter(QObject * obj, QEvent *event)
{
	if (!ISQTYPE(obj, QMenu))
		return false;
	
	QMenu* currentMenu = (QMenu*)obj;

	if (event->type() == QEvent::Show && currentMenu == m_menu)
	{
		m_menu->setGeometry(QRect(this->mapToGlobal(QPoint(0, this->height()-1)), QSize(this->width(), m_menu->minimumHeight())));
	}

	return false;
}
void tree_combobox::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QFrame::paintEvent(pe);
}
void tree_combobox::mousePressEvent(QMouseEvent* event)
{
	this->m_menu_button->click();
	QFrame::mousePressEvent(event);
}

void tree_combobox::model(QAbstractItemModel* value)
{
	m_tree_view->setModel(value);

	auto expand_toplevel = value->index(0, 0).data(styled_tree_view::styled_tree_view_role::always_expanded);

	if (expand_toplevel.isValid() && expand_toplevel.toBool())
		m_tree_view->setExpanded(value->index(0, 0), true);
}
QAbstractItemModel* tree_combobox::model() const
{
	return m_tree_view->model();
}

void tree_combobox::selected_index(const QModelIndex& index)
{
	if (index.isValid())
	{
		m_selected_text_label->setText(index.data(Qt::DisplayRole).toString());
		QPixmap icon = qvariant_cast<QIcon>(index.data(Qt::DecorationRole)).pixmap(16);
		m_selected_icon_label->setPixmap(icon);

		m_tree_view->selectionModel()->select(index, QItemSelectionModel::ClearAndSelect);
	}
	else
	{
		m_selected_text_label->setText("");
		m_selected_icon_label->setPixmap(QPixmap());
	}

	m_selected_index = index;
	emit selected_index_changed(index);
}
const QModelIndex& tree_combobox::selected_index() const
{
	return m_selected_index;
}

void tree_combobox::tree_doubleclicked(const QModelIndex& index)
{
	selected_index(index);
	this->m_menu->close();
}

void tree_combobox::setExpanded(const QModelIndex& index, bool expand)
{
	m_tree_view->setExpanded(index, expand);
}