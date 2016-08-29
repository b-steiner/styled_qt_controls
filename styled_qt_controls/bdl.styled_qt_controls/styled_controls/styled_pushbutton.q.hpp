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

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief A QPushButton with an additional line on top of it. Supports additional properties for states
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_pushbutton : public QPushButton
{
	Q_OBJECT;

	//! True when the cursor is over the widget, false otherwise
	Q_PROPERTY(bool hover READ hover WRITE hover);
	//! True when the cursor is over the parent widget, false otherwise. Has to be set manually
	Q_PROPERTY(bool parent_hover READ parent_hover WRITE parent_hover);
	//! True when the button is selected. Has to be set manually
	Q_PROPERTY(bool selected READ selected WRITE selected);
	//! True when the button is pressed
	Q_PROPERTY(bool pressed READ pressed WRITE pressed);
	//! Color for the topline. Set this to transparent to prevent the line from beeing shown
	Q_PROPERTY(QColor topline_color READ topline_color WRITE topline_color);
	//! Color for an additional border directly inside the normal border. Set this to transparent to prevent the lines from beeing shown
	Q_PROPERTY(QColor inner_border_color READ inner_border_color WRITE inner_border_color);
	//! Additional data field (can be used for whatever needed)
	Q_PROPERTY(bool custom_data_1 READ custom_data_1 WRITE custom_data_1);
			
			
	//! The offset of the topline to the left side
	PROPERTY2(int, topline_offset_left, GET, SET);
	//! The offset of the topline to the left side
	Q_PROPERTY(int topline_offset_left READ topline_offset_left WRITE topline_offset_left);
	//! The offset of the topline to the right side
	PROPERTY2(int, topline_offset_right, GET, SET);
	//! The offset of the topline to the right side
	Q_PROPERTY(int topline_offset_right READ topline_offset_right WRITE topline_offset_right);
	//! The offset of the topline to the top
	PROPERTY2(int, topline_offset_top, GET, SET);
	//! The offset of the topline to the top
	Q_PROPERTY(int topline_offset_top READ topline_offset_top WRITE topline_offset_top);
	//! The offset of the topline to the bottom
	PROPERTY2(int, topline_offset_bottom, GET, SET);
	//! The offset of the topline to the bottom
	Q_PROPERTY(int topline_offset_bottom READ topline_offset_bottom WRITE topline_offset_bottom);


	//! Stores the selection state
	PROPERTY2(bool, selected, GET, SET_STYLE);
	//! Stores the hover state
	PROPERTY2(bool, hover, GET, private: SET_STYLE);
	//! Stores whether the parent of this object is hovered or not (has to be set)
	PROPERTY2(bool, parent_hover, GET, SET_STYLE);
	//! Stores whether the pushbutton is pressed or not
	PROPERTY2(bool, pressed, GET, private: SET_STYLE);

			
	//! Stores a boolean for custom use
	PROPERTY2(bool, custom_data_1, GET, SET_PT);
	//! Stores a pointer to additional data
	PROPERTY2(void*, data, GET, SET);


public:
	/*! \brief Initializes a new instance of the styled_pushbutton class. See QPushButton for details
		*
		* \param parent See QPushButton
		*/
	styled_pushbutton(QWidget* parent = 0);
	/*! \brief Initializes a new instance of the styled_pushbutton class. See QPushButton for details
		*
		* \param text See QPushButton
		* \param parent See QPushButton
		*/
	styled_pushbutton(const QString& text, QWidget* parent = 0);
	/*! \brief Initializes a new instance of the styled_pushbutton class. See QPushButton for details
		*
		* \param icon See QPushButton
		* \param text See QPushButton
		* \param parent See QPushButton
		*/
	styled_pushbutton(const QIcon& icon, const QString& text, QWidget* parent = 0);
	/*! \brief Releases all data associated with an instance of the styled_pushbutton class
		*/
	virtual ~styled_pushbutton();
			
protected:
	//! See QPushButton
	virtual void paintEvent(QPaintEvent *pe);
	//! See QPushButton
	virtual void enterEvent(QEvent * event);
	//! See QPushButton
	virtual void leaveEvent(QEvent * event);

private slots:
	void this_pressed();
	void this_released();
	void this_toggled(bool checked);
	void menu_aboutToHide();

private:
	void init();

	QColor topline_color();
	void topline_color(QColor value);
	QColor inner_border_color();
	void inner_border_color(QColor value);

	QColor m_topline_color, m_inner_border_color;
};

END_BDL_SQTC