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