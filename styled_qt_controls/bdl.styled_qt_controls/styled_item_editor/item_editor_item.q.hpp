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
#include "../styled_controls/numeric_line_edit.q.hpp"
#include "../styled_color_picker/styled_color_picker.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Base class for items in a item_editor_group
 *
 * \author bdl
 */
class BDL_SQTC_EXPORT base_item_editor_item : public QObject
{
	Q_OBJECT;

	PROPERTY0(bool, show_binding_button);
	PROPERTY0(std::function<void(bool)>, binding_changed_func);
	PROPERTY0(bool, is_bound);
	PROPERTY0(QPushButton*, binding_button);

public:
	/*! \brief Initializes a new instance of the base_item_editor_item class
	 *
	 * \param show_binding_button When set to true, a binding button is displayed after the element
	 * \param is_bound Sets the binding state of the binding button
	 * \param binding_changed_func Function that should be called when the binding is toggled
	 */
	base_item_editor_item(bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func);
	/*! \brief Releases all data associated with an instance of the base_item_editor_item class
	 */
	virtual ~base_item_editor_item();
	
	/*! \brief Creates the widgets for this editor item
	 *
	 * \param layout The layout to which the widgets should be added
	 * \param row the row in which the items should be added
	 * 
	 * \returns The number of rows this item consumes
	 */
	virtual int widgets(QGridLayout* layout, int row) = 0;
	virtual void notify_widget_deleted();

	/*! \brief Adds the binding button
	 *
	 * \param layout The layout
	 * \param row The row in the layout where the button should be added
	 */
	void add_binding_button(QGridLayout* layout, int row);

	void set_binding(bool is_bound);

private slots:
	void binding_button_toggled(bool value);
};






/*! \brief A editor item for strings
 *
 * \author bdl
 *
 * Displays a QLineEdit for text editing.
 */
class BDL_SQTC_EXPORT string_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(const QString&)>, value_changed_func);
	//! Stores the current value of the item
	PROPERTY1(QString, value, GET_CONST_REF);
	//! Stores the title of the item
	PROPERTY1(QString, title, GET_CONST_REF);

	PROPERTY0(QLineEdit*, edit);

public:
	/*! \brief Initializes a new instance of the string_item_editor_item class
	 *
	 * \param title The title for the item
	 * \param initial_value The value when the widget gets displayed
	 * \param value_changed_func A function that is called when the value changes
	 * \param show_binding_button When set to true, a binding button is displayed after the element
	 * \param is_bound Sets the binding state of the binding button
	 * \param binding_changed_func Function that should be called when the binding is toggled
	 */
	string_item_editor_item(const QString& title, const QString& initial_value, std::function<void(const QString&)> value_changed_func,
							bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	/*! \brief Releases all data associated with an instance of the string_item_editor_item class
	*/
	virtual ~string_item_editor_item();

	/*! \brief Creates the widgets for this editor item
	*
	* \param layout The layout to which the widgets should be added
	* \param row the row in which the items should be added
	*
	* \returns The number of rows this item consumes
	*/
	virtual int widgets(QGridLayout* layout, int row);
	virtual void notify_widget_deleted();

	void set_value(const QString& value);

private slots:
	void textEdited(const QString& text);
};


/*! \brief A editor item for floats
*
* \author bdl
*
* Displays a numeric_line_edit.
*/
class BDL_SQTC_EXPORT float_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(float)>, value_changed_func);
	//! Stores the current value of the item
	PROPERTY1(float, value, GET_CONST_REF);
	//! Stores the title of the item
	PROPERTY1(QString, title, GET_CONST_REF);
	PROPERTY0(unsigned int, digits);
	PROPERTY0(float, ticks);
	PROPERTY0(float, min_value);
	PROPERTY0(float, max_value);

	PROPERTY0(numeric_line_edit*, edit);

public:
	/*! \brief Initializes a new instance of the float_item_editor_item class
	 *
	 * \param title The title for the item
	 * \param initial_value The value when the widget gets displayed
	 * \param value_changed_func A function that is called when the value changes
	 * \param digits Number of digits that should be displayed after the decimal point
	 * \param ticks Value change per pixel when dragging
	 * \param min_value Minimum value
	 * \param max_value Maximum value
	 * \param show_binding_button When set to true, a binding button is displayed after the element
	 * \param is_bound Sets the binding state of the binding button
	 * \param binding_changed_func Function that should be called when the binding is toggled
	 */
	float_item_editor_item(const QString& title, float initial_value, std::function<void(float)> value_changed_func,
						   bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {},
						   unsigned int digits = 2, float ticks = 0.01, float min_value = -std::numeric_limits<double>::infinity(), float max_value = std::numeric_limits<double>::infinity()
						   );
	/*! \brief Releases all data associated with an instance of the float_item_editor_item class
	*/
	virtual ~float_item_editor_item();

	/*! \brief Creates the widgets for this editor item
	*
	* \param layout The layout to which the widgets should be added
	* \param row the row in which the items should be added
	*
	* \returns The number of rows this item consumes
	*/
	virtual int widgets(QGridLayout* layout, int row);
	virtual void notify_widget_deleted();

	void set_value(float value);

private slots:
	void edit_textEdited(const QString& text);
};


/*! \brief A editor item for 3d vectors
*
* \author bdl
*
* Displays a three numeric_line_edit widgets for the components
*/
class BDL_SQTC_EXPORT vector3_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(float, float, float)>, value_changed_func);
	//! Stores the current value of the x component
	PROPERTY1(float, value_x, GET_CONST_REF);
	//! Stores the current value of the y component
	PROPERTY1(float, value_y, GET_CONST_REF);
	//! Stores the current value of the z component
	PROPERTY1(float, value_z, GET_CONST_REF);
	//! Stores the title of the item
	PROPERTY1(QString, title, GET_CONST_REF);
	PROPERTY0(unsigned int, digits);
	PROPERTY0(float, ticks);
	PROPERTY0(float, min_value);
	PROPERTY0(float, max_value);

	PROPERTY0(numeric_line_edit*, x_edit);
	PROPERTY0(numeric_line_edit*, y_edit);
	PROPERTY0(numeric_line_edit*, z_edit);

public:
	/*! \brief Initializes a new instance of the vector3_item_editor_item class
	 *
	 * \param title The title for the item
	 * \param initial_x The value for x when the widget gets displayed
	 * \param initial_y The value for y when the widget gets displayed
	 * \param initial_z The value for z when the widget gets displayed
	 * \param value_changed_func A function that is called when the value changes
	 * \param digits Number of digits that should be displayed after the decimal point
	 * \param ticks Value change per pixel when dragging
	 * \param min_value Minimum value
	 * \param max_value Maximum value
	 * \param show_binding_button When set to true, a binding button is displayed after the element
	 * \param is_bound Sets the binding state of the binding button
	 * \param binding_changed_func Function that should be called when the binding is toggled
	 */
	vector3_item_editor_item(const QString& title, float initial_x, float initial_y, float initial_z, std::function<void(float,float,float)> value_changed_func,
							 bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {},
						     unsigned int digits = 2, float ticks = 0.01, float min_value = -std::numeric_limits<float>::infinity(), float max_value = std::numeric_limits<float>::infinity()
						     );
	/*! \brief Releases all data associated with an instance of the vector3_item_editor_item class
	*/
	virtual ~vector3_item_editor_item();

	/*! \brief Creates the widgets for this editor item
	*
	* \param layout The layout to which the widgets should be added
	* \param row the row in which the items should be added
	*
	* \returns The number of rows this item consumes
	*/
	virtual int widgets(QGridLayout* layout, int row);
	virtual void notify_widget_deleted();

	void set_value(float x, float y, float z);

private slots:
	void x_textEdited(const QString& text);
	void y_textEdited(const QString& text);
	void z_textEdited(const QString& text);
};


/*! \brief A editor item for colors
*
* \author bdl
*
* Displays a styled_color_picker
*/
class BDL_SQTC_EXPORT color_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(QColor)>, value_changed_func);
	//! Stores the current value of the item
	PROPERTY1(QColor, value, GET_CONST_REF);
	//! Stores the title of the item
	PROPERTY1(QString, title, GET_CONST_REF);

	PROPERTY0(styled_color_picker*, picker);

public:
	/*! \brief Initializes a new instance of the color_item_editor_item class
	 *
	 * \param title The title for the item
	 * \param initial_value The value when the widget gets displayed
	 * \param value_changed_func A function that is called when the value changes
	 * \param is_bound Sets the binding state of the binding button
	 * \param binding_changed_func Function that should be called when the binding is toggled
	 */
	color_item_editor_item(const QString& title, QColor initial_value, std::function<void(QColor)> value_changed_func,
						   bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	/*! \brief Releases all data associated with an instance of the color_item_editor_item class
	 */
	virtual ~color_item_editor_item();

	/*! \brief Creates the widgets for this editor item
	*
	* \param layout The layout to which the widgets should be added
	* \param row the row in which the items should be added
	*
	* \returns The number of rows this item consumes
	*/
	virtual int widgets(QGridLayout* layout, int row);
	virtual void notify_widget_deleted();

	void set_value(QColor color);

private slots:
	void color_changed(const QColor& color);
};

END_BDL_SQTC