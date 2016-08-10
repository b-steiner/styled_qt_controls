#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_tree_view.q.hpp"

#include "styled_tree_view_item_delegate.q.hpp"

using namespace bdl::styled_qt_controls;

styled_tree_view::styled_tree_view(QWidget* parent) : QTreeView(parent), m_update_expansion(true), m_selected_background(0, 0, 0, 0), m_selected_background_nofocus(0, 0, 0, 0),
	m_selected_border(0, 0, 0, 0), m_selected_border_nofocus(0, 0, 0, 0), m_selection_changed(false)
{
	QObject::connect(this, SIGNAL(expanded(const QModelIndex&)), this, SLOT(this_expanded(const QModelIndex&)));
	QObject::connect(this, SIGNAL(collapsed(const QModelIndex&)), this, SLOT(this_collapsed(const QModelIndex&)));

	this->header()->hide();
	this->setRootIsDecorated(false);
	this->setSelectionBehavior(QAbstractItemView::SelectRows);
	this->setSelectionMode(QAbstractItemView::SelectionMode::ExtendedSelection);
	this->setSortingEnabled(true);
	this->sortByColumn(0, Qt::AscendingOrder);
	this->setEditTriggers(QAbstractItemView::EditKeyPressed | QAbstractItemView::SelectedClicked);
	this->setIndentation(10);

	this->setItemDelegate(new styled_tree_view_item_delegate());
}
styled_tree_view::~styled_tree_view() { }

void styled_tree_view::this_expanded(const QModelIndex& index)
{
	if (m_update_expansion)
		this->model()->setData(index, qVariantFromValue(true), styled_tree_view_role::is_expanded);

	this->resizeColumnToContents(0);
}
void styled_tree_view::this_collapsed(const QModelIndex& index)
{
	auto always_expanded = model()->data(index, styled_tree_view_role::always_expanded);

	if (always_expanded.isValid() && always_expanded.toBool())
	{
		this->setExpanded(index, true);
		if (m_update_expansion)
			this->model()->setData(index, qVariantFromValue(true), styled_tree_view_role::is_expanded);
	}
	else if (m_update_expansion)
		this->model()->setData(index, qVariantFromValue(false), styled_tree_view_role::is_expanded);

	this->resizeColumnToContents(0);
}

void styled_tree_view::restore_expansion()
{
	restore_expansion(model()->index(0, 0));
}
void styled_tree_view::restore_expansion(const QModelIndex& index)
{
	auto is_expanded = model()->data(index, styled_tree_view_role::is_expanded);

	if (is_expanded.isValid())
	{
		this->setExpanded(index, is_expanded.toBool());
	}

	for (int row = 0; row < model()->rowCount(index); ++row)
	{
		restore_expansion(model()->index(row, 0, index));
	}
}
void styled_tree_view::update_expansion(bool value)
{
	m_update_expansion = value;
}

void styled_tree_view::drawRow(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	if (this->selectionModel()->isSelected(index))
	{
		QBrush defaultBrush = painter->brush();
		QPen defaultPen = painter->pen();

		if (this->hasFocus())
		{
			QPen pen(m_selected_border, 1, Qt::SolidLine);
			painter->setBrush(QBrush(m_selected_background));
			painter->setPen(pen);
		}
		else
		{
			QPen pen(m_selected_border_nofocus, 1, Qt::SolidLine);
			painter->setBrush(QBrush(m_selected_background_nofocus));
			painter->setPen(pen);
		}
		painter->drawRect(QRect(option.rect.topLeft() - QPoint(1, 0), option.rect.bottomRight() - QPoint(0, 0)));

		painter->setPen(defaultPen);
		painter->setBrush(defaultBrush);
	}

	QTreeView::drawRow(painter, option, index);
}

void styled_tree_view::mousePressEvent(QMouseEvent* event)
{
	m_selection_changed = false;

	if (event->button() == Qt::RightButton && this->contextMenuPolicy() == Qt::CustomContextMenu)
	{
		if (this->selectionModel()->isSelected(this->indexAt(event->pos())))
			event->accept();
		else
			QTreeView::mousePressEvent(event);
	}
	else
	{
		m_down_index = this->indexAt(event->pos());
		if (m_down_index.isValid())
			QTreeView::mousePressEvent(event);
	}
}
void styled_tree_view::mouseReleaseEvent(QMouseEvent* event)
{
	QTreeView::mouseReleaseEvent(event);

	auto upIndex = this->indexAt(event->pos());

	if (upIndex.isValid() && upIndex == m_down_index && m_selection_changed)
		emit current_changed(upIndex);
}
void styled_tree_view::selectionmodel_currentchanged(const QModelIndex& current, const QModelIndex& previous)
{
	m_selection_changed = true;
}
void styled_tree_view::showEvent(QShowEvent* event)
{
	this->resizeColumnToContents(0);
}
void styled_tree_view::setSelectionModel(QItemSelectionModel* selection_model)
{
	QTreeView::setSelectionModel(selection_model);
	QObject::disconnect(this, SLOT(currentChanged(const QModelIndex&, const QModelIndex&)));
	QObject::connect(selection_model, SIGNAL(currentChanged(const QModelIndex&, const QModelIndex&)), this, SLOT(selectionmodel_currentchanged(const QModelIndex&, const QModelIndex&)));
}