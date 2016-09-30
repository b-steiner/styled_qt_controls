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

/*! \brief A text control that handles numbers. The value can be adjusted by dragging.
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT numeric_line_edit : public QLineEdit
{
	Q_OBJECT;

	//! Stores the number of digits that should be displayed after the decimal point
	PROPERTY1(int, visible_decimal_places, GET);
	//! Stores whether the control just received focus. The next click event will then select the whole text
	PROPERTY0(bool, select_on_click);
	//! Stores whether the mouse is pressed
	PROPERTY0(bool, mouse_down);
	//! Stores the start point of the drag operation
	PROPERTY0(QPoint, mouse_reference_point);
	//! Stores the initial value before the drag operation
	PROPERTY0(double, drag_reference_value);
	//! Stores the amount of change in value per pixel during a drag operation
	PROPERTY2(double, tick, GET, SET);
	//! Stores the amout of change in value per pixel during a drag operation when the shift-key is pressed (usually small than tick). When set to a negative number, the value is assumed ticks / 10.0. The default value is -1.
	PROPERTY2(double, small_tick, GET, SET);
	//! Stores the minimum value. Keyboard input is clamped to this range
	PROPERTY2(double, minimum, GET, SET);
	//! Stores the maximum value. Keyboard input is clamped to this range
	PROPERTY2(double, maximum, GET, SET);

	PROPERTY0(bool, slow_mode);

public:
	/*! \brief Initializes a new instance of the numeric_line_edit class
		*
		* \param value The initial value
		* \param visible_decimal_places The number of digits that is displayed after the decimal point
		*/
	numeric_line_edit(double value, int visible_decimal_places = 0);
	/*! \brief Releases all data associated with an instance of the numeric_line_edit class
		*/
	virtual ~numeric_line_edit();

	/*! \brief Gets or sets the value in the numeric_line_edit
		*
		* \returns The value of the numeric_line_edit
		*/
	double value() const;
	/*! \brief Gets or sets the value in the numeric_line_edit
	*
	* \param val The new value of the numeric_line_edit
	*/
	void value(double val);

protected:
	//! See QLineEdit
	virtual void focusOutEvent(QFocusEvent* event);
	//! See QLineEdit
	virtual void focusInEvent(QFocusEvent* event);
	//! See QLineEdit
	virtual void mousePressEvent(QMouseEvent* event);
	//! See QLineEdit
	virtual void mouseMoveEvent(QMouseEvent* event);
	//! See QLineEdit
	virtual void mouseReleaseEvent(QMouseEvent* event);
	//! See QLineEdit
	virtual void keyPressEvent(QKeyEvent *event);
	//! See QLineEdit
	virtual void keyReleaseEvent(QKeyEvent *event);
	//! See QLineEdit
	virtual void wheelEvent(QWheelEvent *event);

private slots:
	void this_returnPressed();
};

END_BDL_SQTC