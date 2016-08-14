#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class color_list_item_model : public QAbstractItemModel
{
	Q_OBJECT;
	PROPERTY0(QList<QColor>, colors)

public:
	color_list_item_model();
	~color_list_item_model();

	void add_color(QColor color);
	void remove_color(const QModelIndex& index);

	QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
	QModelIndex parent(const QModelIndex &index) const;
	int rowCount(const QModelIndex &parent = QModelIndex()) const;
	int columnCount(const QModelIndex &parent = QModelIndex()) const;
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

END_BDL_SQTC