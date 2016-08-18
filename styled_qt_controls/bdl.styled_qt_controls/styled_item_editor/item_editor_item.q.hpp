#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class base_item_editor_item : public QObject
{
	Q_OBJECT;

	PROPERTY0(bool, show_binding_button);
	PROPERTY0(std::function<void(bool)>, binding_changed_func);
	PROPERTY0(bool, is_bound);

public:
	base_item_editor_item(bool show_binding_button, bool is_bound, std::function<void(bool)> binding_changed_func) : m_show_binding_button(show_binding_button), m_binding_changed_func(binding_changed_func) { }
	virtual ~base_item_editor_item() { }
	
	virtual int widgets(QGridLayout* layout, int row) = 0;

	void add_binding_button(QGridLayout* layout, int row);

protected slots:
	void binding_button_toggled(bool value);
};

class string_item_editor_item : public base_item_editor_item
{
	Q_OBJECT;

	PROPERTY0(QLineEdit*, label);
	PROPERTY0(std::function<void(const QString&)>, value_changed_func);
	PROPERTY0(QString, value, GET_CONST_REF);
	PROPERTY0(QString, title, GET_CONST_REF);

public:
	string_item_editor_item(const QString& title, const QString& initial_value, std::function<void(const QString&)> value_changed_func,
							bool show_binding_button = false, bool is_bound = false, std::function<void(bool)> binding_changed_func = [](bool) {});
	virtual ~string_item_editor_item();

	virtual int widgets(QGridLayout* layout, int row);

private slots:
	void textEdited(const QString &text);
};

END_BDL_SQTC