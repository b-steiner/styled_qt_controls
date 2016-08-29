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
#include "color_list_item_model.q.hpp"

using namespace bdl::styled_qt_controls;

color_list_item_model::color_list_item_model() { }
color_list_item_model::~color_list_item_model() { }

void color_list_item_model::add_color(QColor color)
{
	this->beginInsertRows(QModelIndex(), 0, 0);
	m_colors.push_front(color.toRgb());
	this->endInsertRows();
}
void color_list_item_model::remove_color(const QModelIndex& index)
{
	this->beginRemoveRows(QModelIndex(), index.row(), index.row());
	m_colors.removeAt(index.row());
	this->endRemoveRows();
}

QModelIndex color_list_item_model::index(int row, int column, const QModelIndex &parent) const
{
	if (row >= m_colors.size() || column != 0 || parent != QModelIndex())
		return QModelIndex();

	return this->createIndex(row, column);
}
QModelIndex color_list_item_model::parent(const QModelIndex &index) const
{
	return QModelIndex();
}
int color_list_item_model::rowCount(const QModelIndex &parent) const
{
	return m_colors.size();
}
int color_list_item_model::columnCount(const QModelIndex &parent) const
{
	return 1;
}
QVariant color_list_item_model::data(const QModelIndex &index, int role) const
{
	if (index.isValid() && index.row() < m_colors.size() && index.column() == 0)
	{
		switch (role)
		{
		case Qt::DisplayRole:
			return qVariantFromValue(m_colors[index.row()]);
			break;
		}
	}

	return QVariant();
}