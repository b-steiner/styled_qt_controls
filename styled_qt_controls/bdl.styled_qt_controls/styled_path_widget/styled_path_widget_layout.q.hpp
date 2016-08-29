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

/*! \brief Layout used for the styled_path_widget
	*
	* \author bdl
	* 
	* This layout displays an overflow as first element.
	*/
class BDL_SQTC_EXPORT styled_path_widget_layout : public QLayout
{
	Q_OBJECT;

	PROPERTY0(QList<QLayoutItem*>, items);
	PROPERTY0(QList<QLayoutItem*>, visible_items);

public:
	/*! \brief Initializes a new instance of the styled_path_widget_layout class.
		*/
	styled_path_widget_layout();
	/*! \brief Releases all data associated with an instance of the styled_path_widget_layout class
		*/
	~styled_path_widget_layout();

	//! See QLayout
	void addItem(QLayoutItem *item);
	//! See QLayout
	QSize sizeHint() const;
	//! See QLayout
	QSize minimumSize() const;
	//! See QLayout
	int count() const;
	//! See QLayout
	QLayoutItem* itemAt(int idx) const;
	//! See QLayout
	QLayoutItem* takeAt(int idx);
	//! See QLayout
	void setGeometry(const QRect& rect);

	/*! \brief Returns whether or not a widget is visible in the layout
		*
		* \param widget The widget to test
		* \returns True when the widget is visible, False otherwise
		*/
	bool is_visible(QWidget* widget);

signals:
	/*! \brief Emitted when the overflow state has changed
		*
		* \param has_overflow Is set to True when the layout has some elements in the overflow section.
		*/
	void overflow_changed(bool has_overflow);
};

END_BDL_SQTC