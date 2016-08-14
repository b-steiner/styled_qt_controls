#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "color_list_item_model.q.hpp"

using namespace bdl::styled_qt_controls;

color_list_item_model::color_list_item_model() { }
color_list_item_model::~color_list_item_model() { }

void color_list_item_model::add_color(QColor color)
{
	m_colors.push_back(color);
}
void color_list_item_model::remove_color(const QModelIndex& index)
{
	
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