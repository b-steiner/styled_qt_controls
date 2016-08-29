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

/*! \brief Stores data about a folder. Used in the styled_path_widget
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_path_widget_item : public QObject
{
	Q_OBJECT;

	//! Stores the text to be displayed
	PROPERTY1(QString, text, GET_CONST_REF);
	//! Stores additional data for this item
	PROPERTY1(QVariant, data, GET_CONST_REF);
	//! Stores child elements for the current element
	PROPERTY1(QList<styled_path_widget_item*>, menu_items, GET_REF);

public:
	/*! \brief Initializes a new instance of the styled_path_widget_item class
		*
		* \param text The text that should be displayed
		* \param data A additional data item
		*/
	styled_path_widget_item(const QString& text, const QVariant& data = QVariant());
	/*! \brief Releases all data associated with an instance of the styled_path_widget_item class
		*/
	~styled_path_widget_item();

	/*! \brief Clones this item.
		*
		* This method only clones text and data, not the child elements
		*
		* \returns A pointer to the cloned item
		*/
	styled_path_widget_item* clone();
};

END_BDL_SQTC