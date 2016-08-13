#pragma once

#include "..\styled_qt_controls.hpp"
#include "styled_dock_layout.q.hpp"
#include "styled_dock_item.q.hpp"
#include "styled_dock_overlay.q.hpp"
#include "styled_dock_splitter.q.hpp"
#include "../styled_controls/styled_widget.q.hpp"
#include "../styled_controls/styled_pushbutton.q.hpp"
#include "../styled_controls/styled_frame.q.hpp"
#include "../styled_controls/styled_label.q.hpp"
#include "../styled_window/styled_window.q.hpp"
#include "../util/settings/settings_group.hpp"

BEGIN_BDL_SQTC

//! Orientation of tabs in the widget
enum class styled_dock_orientation { top, bottom };

/*! \brief A customized dock widget
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_dock_widget : public styled_widget
{
	Q_OBJECT;

	//Parts
	PROPERTY0(styled_dock_layout*, part_tabbar_layout);
	PROPERTY0(QGridLayout*, layout);
	PROPERTY0(styled_pushbutton*, part_overflow_button);
	PROPERTY0(QMenu*, overflow_menu);
	PROPERTY0(styled_frame*, part_tabbar);
	PROPERTY0(styled_frame*, part_titleframe);
	PROPERTY0(QGridLayout*, content_layout);
	PROPERTY0(styled_label*, part_titlebar_label);

	//! Stores the orientation of the tabbar
	PROPERTY1(styled_dock_orientation, orientation, GET);

	typedef QHash<styled_dock_item*, styled_frame*> item_frame_hashtable;
	typedef QHash<styled_frame*, styled_dock_item*> frame_item_hashtable;
	PROPERTY0(QList<styled_dock_item*>, items);
	PROPERTY0(item_frame_hashtable, tabbar_widgets);
	PROPERTY0(frame_item_hashtable, widget_to_item);

	PROPERTY0(styled_dock_item*, selected_item);

	PROPERTY0(styled_dock_item*, drag_item);
	PROPERTY0(styled_dock_overlay*, overlay);
	PROPERTY0(int, drag_reference_x);
	PROPERTY0(bool, title_mousedown);

	//! Stores a userdefined tag
	PROPERTY2(QString, tag, GET, SET);

	PROPERTY0(bool, remove_on_empty);
	PROPERTY0(bool, has_focus);

	PROPERTY0(bool, ignore_overflow_changed);

public:
	/*! \brief Initializes a new instance of the styled_dock_widget class
		*
		* \param orientation Orientation of the tabs in the widget
		* \param tag Tag that can be used to store user data
		* \param remove_on_empty Sets whether or not the widget should be removed from its parent when there are no items left
		*/
	styled_dock_widget(styled_dock_orientation orientation, const QString& tag = "", bool remove_on_empty = false);
	/*! \brief Releases all data associated with an instance of the styled_dock_widget class
		*/
	~styled_dock_widget();

	/*! \brief Adds an item to the dock_widget
		*
		* \param item The item to add
		*/
	void add_item(styled_dock_item* item);
	/*! \brief Inserts an item at a specific index into the dock_widget
		*
		* \param item The item to add
		* \param idx Index where the item should be added
		*/
	void insert_item(styled_dock_item* item, int idx);
	/*! \brief Removes an item from the widget
		*
		* \param item The item that should be removed
		*/
	void remove_item(styled_dock_item* item);
	/*! \brief Removes an item from the widget
		*
		* \param idx The index on which the item should be removed
		*/
	void remove_item(int idx);

	/*! \brief Selects an item and brings it to front
		*
		* \param item The item to select
		*/
	void select(styled_dock_item* item);
	/*! \brief Selects an item and brings it to front
		*
		* \param idx The index to select
		*/
	void select(int idx);

	/*! \brief Saves the settings of this widget
		*
		* \returns The settings that should be saved
		*/
	util::settings_group* save_settings();
	/*! \brief Loads settings from a settings_group
		*
		* \param group The settings_group from which the settings should be loaded
		*/
	void load_settings(util::settings_group* group);

	/*! \brief Returns a list of all styled_dock_widgets currently present in the application
		*
		* \returns A list of all styled_dock_widgets currently present in the application
		*/
	static QList<styled_dock_widget*>& all_dock_widgets();

	//! See QWidget
	virtual QSize minimumSizeHint() const;

protected:
	//! See QWidget
	virtual void paintEvent(QPaintEvent *pe);
	//! See QWidget
	virtual void resizeEvent(QResizeEvent * event);

private slots:
	void tabbar_widget_mousePressed(QMouseEvent* event);
	void tabbar_widget_mouseReleased(QMouseEvent* event);
	void tabbar_widget_mouseMove(QMouseEvent* event);
	void tabbar_widget_hover_changed(bool value);
	void tabbar_close_button_clicked(bool is_checked);
	void tabbar_overflowChanged(bool is_overflow);
	void tabbar_overflow_action_triggered(bool is_checked);
	void title_close_button_clicked(bool is_checked);
	void title_mousePressed(QMouseEvent* event);
	void title_mouseReleased(QMouseEvent* event);
	void title_mouseMove(QMouseEvent* event);

	void application_focus_changed(QWidget* old_widget, QWidget* new_widget);

	void dragwindow_frameless_changed(bool is_frameless);
	void dragwindow_moved();
	void dragwindow_move_started();
	void dragwindow_move_ended();

	void item_title_changed(bdl::styled_qt_controls::styled_dock_item*);

private:
	void items_changed();
	styled_frame* tabbar_widget(styled_dock_item* item);
	styled_window* drag_window(QList<styled_dock_item*> items, styled_dock_widget** dock_widget);
	void swap(styled_dock_item* first, styled_dock_item* second);
	void show_overlay(bool show, const QPoint& pos);
	void drop_item(const QList<styled_dock_item*>& items, styled_dock_orientation preferred_orientation);
	void set_focus(bool focused);

	void remove_item_internal(int idx, bool signal_closed);
	void remove_item_internal(styled_dock_item* item, bool signal_closed);

	styled_window* window();
	styled_dock_splitter* splitter(int& idx);
	static QVector<styled_dock_widget*> front_to_back_widgets();
	static styled_dock_widget* front_widget_at(const QPoint& p);

	static QList<styled_dock_widget*> m_all_dock_widgets;
};

END_BDL_SQTC