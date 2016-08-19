#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_controls/numeric_line_edit.q.hpp"

BEGIN_BDL_SQTC

class BDL_SQTC_EXPORT base_item_editor_item : public QObject
{
	Q_OBJECT;

	PROPERTY0(bool, show_binding_button);
	PROPERTY0(std::function<void(bool)>, binding_changed_func);
	PROPERTY0(bool, is_bound);

public:
	base_item_editor_item(bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func);
	virtual ~base_item_editor_item();
	
	virtual int widgets(QGridLayout* layout, int row) = 0;

	void add_binding_button(QGridLayout* layout, int row);

protected slots:
	void binding_button_toggled(bool value);
};


class BDL_SQTC_EXPORT string_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(const QString&)>, value_changed_func);
	PROPERTY1(QString, value, GET_CONST_REF);
	PROPERTY1(QString, title, GET_CONST_REF);

public:
	string_item_editor_item(const QString& title, const QString& initial_value, std::function<void(const QString&)> value_changed_func,
							bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	virtual ~string_item_editor_item();

	virtual int widgets(QGridLayout* layout, int row);

private slots:
	void textEdited(const QString& text);
};


class BDL_SQTC_EXPORT float_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(float)>, value_changed_func);
	PROPERTY1(float, value, GET_CONST_REF);
	PROPERTY1(QString, title, GET_CONST_REF);
	PROPERTY0(unsigned int, digits);
	PROPERTY0(float, ticks);
	PROPERTY0(float, min_value);
	PROPERTY0(float, max_value);

public:
	float_item_editor_item(const QString& title, float initial_value, std::function<void(float)> value_changed_func,
						   unsigned int digits = 2, float ticks = 0.01, float min_value = -std::numeric_limits<double>::infinity(), float max_value = std::numeric_limits<double>::infinity(),
						   bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	virtual ~float_item_editor_item();

	virtual int widgets(QGridLayout* layout, int row);

private slots:
	void edit_textEdited(const QString& text);
};


class BDL_SQTC_EXPORT vector3_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(float, float, float)>, value_changed_func);
	PROPERTY1(float, value_x, GET_CONST_REF);
	PROPERTY1(float, value_y, GET_CONST_REF);
	PROPERTY1(float, value_z, GET_CONST_REF);
	PROPERTY1(QString, title, GET_CONST_REF);
	PROPERTY0(unsigned int, digits);
	PROPERTY0(float, ticks);
	PROPERTY0(float, min_value);
	PROPERTY0(float, max_value);

public:
	vector3_item_editor_item(const QString& title, float initial_x, float initial_y, float initial_z, std::function<void(float,float,float)> value_changed_func,
						   unsigned int digits = 2, float ticks = 0.01, float min_value = -std::numeric_limits<double>::infinity(), float max_value = std::numeric_limits<double>::infinity(),
						   bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	virtual ~vector3_item_editor_item();

	virtual int widgets(QGridLayout* layout, int row);

private slots:
	void x_textEdited(const QString& text);
	void y_textEdited(const QString& text);
	void z_textEdited(const QString& text);
};


class BDL_SQTC_EXPORT color_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(std::function<void(QColor)>, value_changed_func);
	PROPERTY1(QColor, value, GET_CONST_REF);
	PROPERTY1(QString, title, GET_CONST_REF);

public:
	color_item_editor_item(const QString& title, QColor initial_value, std::function<void(QColor)> value_changed_func,
						   /*bool show_binding_button = false,*/ bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	virtual ~color_item_editor_item();

	virtual int widgets(QGridLayout* layout, int row);

private slots:
	void color_changed(const QColor& color);
};

END_BDL_SQTC