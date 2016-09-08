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
#include "..\styled_controls\styled_frame.q.hpp"
#include "..\styled_controls\styled_widget.q.hpp"
#include "..\util\settings\settings_group.hpp"
#include "..\styled_controls\styled_label.q.hpp"

BEGIN_BDL_SQTC

/*! \brief A window with a better/unified dark-orange style
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_window : public QObject
{
	Q_OBJECT;

public:
	#pragma region Enumerations

	//! Flags for specifying states of the window
	enum class window_flags : unsigned short
	{
		//! No additional state
		none = 0,
		//! The window should not display any frames
		frameless = 1,
		//! The frame should be added when the widget stops to move
		frame_on_stop_move = 2,
		//! The window exits the application when it is closed. Useful for mainwindows
		exit_on_close = 4,
		//! The window should not be visibile to user input
		hittest_visible = 8,
		//! When this is set, the window is deleted when it is closed
		delete_on_close = 16,
		//! Determines whether or not this window is shown in the taskbar
		show_on_taskbar = 32,
		//! Enables resizing. This state can only be set in the constructor
		resizable = 64,
		//! Shows the maximize button. This state can only be set in the constructor
		show_maximize = 128
	};

	//! Enumeration for different window types
	enum class window_type 
	{
		//! A normal window
		normal,
		//! A dialog window (has, e.g., shadows)
		dialog 
	};

	//! Internal flags for windows
	enum class internal_flags : unsigned short
	{
		//! No flag
		none = 0,
		//! Adjusts the size to the minimum possible size at the next resize event
		adjust_size = 1
	};

	#pragma endregion



	PROPERTY0(styled_window*, parent);
	PROPERTY0(HWND, hwnd);
	PROPERTY0(HINSTANCE, hInstance);
	PROPERTY2(window_flags, flags, GET, SET_PT);
	PROPERTY0(window_type, type);
	PROPERTY0(QString, title);

	PROPERTY0(QPushButton*, part_restore_button);
	PROPERTY0(QPushButton*, part_maximize_button);
	PROPERTY0(QGridLayout*, titlebar_layout);
	PROPERTY0(styled_label*, part_icon);
	PROPERTY0(styled_widget*, client_widget);
	PROPERTY0(QVector<styled_widget*>, border_widgets);

	PROPERTY0(QTimer, system_menu_timer);

	//! Stores the main widget of this window
	PROPERTY1(styled_frame*, part_window_widget, protected: GET);
	//! Stores the menubar
	PROPERTY1(QMenuBar*, menubar, GET);

public:
	/*! \brief Initializes a new instance of the styled_window class
		*
		* \param title Title of the window. Only used in the taskbar
		* \param parent Specifies the parent window. This can be used for blocking dialogs. Setting this to nullptr makes this a normal application window
		* \param type Specifies the type of the window
		* \param initial_flags Specifies the initial flags that are set. Default value is (show_maximize|resizable|show_on_taskbar|hittest_visible)
		*/
	styled_window(QString title, styled_window* parent = nullptr, window_type type = window_type::normal, window_flags initial_flags = (window_flags)(128|64|32|8));
	/*! \brief Releases all data associated with an instance of the styled_window class
		*/
	virtual ~styled_window();

	/*! \brief Shows the window
		*/
	virtual void show();
	/*! \brief Hides the window
		*/
	void hide();
	/*! \brief Closes the window. After this no further show calls are possible
		*/
	virtual void close();

	/*! \brief Gets or sets the rectangle covered by the window
		*
		* \returns The rectangle covered by the window
		*/
	QRect geometry();
	/*! \brief Gets or sets the rectangle covered by the window
		*
		* \param x The leftmost point of the window
		* \param y The topmost point of the window
		* \param width The width of the window
		* \param height The height of the window
		*/
	void geometry(int x, int y, int width, int height);
	/*! \brief Gets or sets the rectangle covered by the window
	*
	* \param rect The new size and position
	*/
	void geometry(const QRect& rect);

	/*! Starts to move the window around. The mouse controlled is handed over to the operating system
		*/
	void start_move();

	/*! \brief Saves the settings of this window
		*
		* \returns A settings_group containing the settings of this window
		*/
	virtual util::settings_group* save_settings();
	/*! \brief Loads the settings for this window
		*
		* \param group A settings_group containing new settings for this window
		*/
	virtual void load_settings(util::settings_group* group);

	/*! \brief Returns a list of all windows in this application, sorted front to back
		*
		* \returns A list of all windows in this application
		*/
	static QVector<styled_window*> front_to_back_windows();
	/*! \brief Returns the window for a given window widget
		*
		* A window widget is the parent of the client_widget and the toplevel widget of this window. It is used to display borders, titlebar etc. This method
		* is especially useful when searching up the parenting hierarchy to determine in which window a widget lies.
		*
		* \param w The window widget
		* \returns The window that belongs to this widget
		*/
	static styled_window* widget_to_window(QWidget* w);

	/*! \brief Enables the window for user interactions
		*/
	void enable();
	/*! \brief Disables the window for user interactions
	*/
	void disable();
	/*! \brief Set the focus to this window
		*/
	void focus();

	/*! \brief Returns the client_widget
		*
		* \returns A pointer to the client widget
		*/
	virtual styled_widget* client_widget() const;

	/*! \brief Sets the window icon
	 *
	 * \param icon The icon to display
	 */
	void icon(const QPixmap& icon);
	/*! \brief Sets the icon that is displayed in the taskbar
	 *
	 * \param icon The icon to display
	 */
	void taskbar_icon(const QIcon& icon);

	/*! \brief Resizes the window
	 *
	 * \param size The new size
	 */
	void resize(const QSize& size);
	/*! \brief Sets the minimum size of the window.
	 *
	 * \param size The new minimum size
	 */
	void minimum_size(const QSize& size);
	/*! \brief Sets the maximum size of the window.
	*
	* \param size The new maximum size
	*/
	void maximum_size(const QSize& size);
	/*! \brief Sets a fixed size for the window (minimum and maximum).
	*
	* \param size The fixed size
	*/
	void fixed_size(const QSize& size);

	/*! \brief Adjusts the window to the minimal possible size
	 */
	void adjust_size();

	/*! \brief Changes between maximized and restored state
	 */
	void toggle_maximized();

protected:
	//! See QObject
	bool eventFilter(QObject *obj, QEvent *ev);

signals:
	/*! \brief Emitted when the window is going to be closed
		*
		* \param close When set to False, closing is aborted
		*/
	void closing(bool& close);
	/*! \brief Emitted when the window is closed
	 */
	void closed();
	/*! Emitted when the frameless state of the window changes
		*
		* \param is_frameless True when the window is now frameless, False otherwise
		*/
	void frameless_changed(bool is_frameless);

	/*! \brief Emitted when the windows position has changed
	 */
	void moved();
	/*! \brief Emitted when the window starts to move
	 */
	void move_started();
	/*! \brief Emitted when the move operation of this window has ended
	 */
	void move_ended();

private slots:
	void close_button_clicked();
	void minimize_button_clicked();
	void maximize_button_clicked();
	void restore_button_clicked();

	void titlebar_mouse_pressed(QMouseEvent* event);
	void titlebar_mouse_doubleclick(QMouseEvent* event);

	void border_ne_mouse_pressed(QMouseEvent* event);
	void border_nw_mouse_pressed(QMouseEvent* event);
	void border_e_mouse_pressed(QMouseEvent* event);
	void border_w_mouse_pressed(QMouseEvent* event);
	void border_s_mouse_pressed(QMouseEvent* event);
	void border_se_mouse_pressed(QMouseEvent* event);
	void border_sw_mouse_pressed(QMouseEvent* event);

	void icon_mousePressed(QMouseEvent* event);
	void icon_mouseDoubleClick(QMouseEvent* event);

	void system_menu_timer_timeout();

private:
	internal_flags m_internal_flags;

	void initialize_widget();
	void show_system_menu(bool show_at_cursor);

	static LRESULT CALLBACK wnd_prc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	static QHash<HWND, styled_window*> m_all_windows;
	static QHash<QWidget*, styled_window*> m_widget_to_window;
};

END_BDL_SQTC

FLAG_COMMON_OPERATIONS(bdl::styled_qt_controls::styled_window::internal_flags)
FLAG_COMMON_OPERATIONS(bdl::styled_qt_controls::styled_window::window_flags)