#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief Qt Model for displaying a color list
 *
 * \author bdl
 *
 * This model can be used in conjunction with the color_item_delegate
 */
class color_list_item_model : public QAbstractItemModel
{
	Q_OBJECT;
	PROPERTY0(QList<QColor>, colors)

public:
	/*! \brief Initializes a new instance of the color_list_item_model class
	*/
	color_list_item_model();
	/*! \brief Releases all data associated with an instance of the color_list_item_model class
	*/
	~color_list_item_model();

	/*! \brief Adds a color to the beginning of the model
	 *
	 * \param color The color to add
	 */
	void add_color(QColor color);
	/*! \brief Removes a color from the model
	 *
	 * \param index The index of the color
	 */
	void remove_color(const QModelIndex& index);

	//! See QAbstractItemModel
	QModelIndex index(int row, int column, const QModelIndex &parent = QModelIndex()) const;
	//! See QAbstractItemModel
	QModelIndex parent(const QModelIndex &index) const;
	//! See QAbstractItemModel
	int rowCount(const QModelIndex &parent = QModelIndex()) const;
	//! See QAbstractItemModel
	int columnCount(const QModelIndex &parent = QModelIndex()) const;
	//! See QAbstractItemModel
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
};

END_BDL_SQTC