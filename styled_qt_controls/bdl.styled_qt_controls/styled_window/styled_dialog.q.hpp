#pragma once

#include "..\styled_qt_controls.hpp"
#include "styled_window.q.hpp"

BEGIN_BDL_SQTC

enum class button_flags
{
	none = 0,
	abort_button = 1,
	accept_button = 2,
	default_button = 4
};

struct BDL_SQTC_EXPORT styled_dialog_button
{
public:
	QString text;
	int role;
	button_flags flags;

	styled_dialog_button(const QString& text, int role, button_flags flags = button_flags::none) : text(text), role(role), flags(flags) { }
};

/*! \brief A dialog window
	*
	* \author bdl
	*
	* Set the content by attaching widgets to the client_widget(). Buttons (on top of the window) can be attached by the add_button method.
	* When this dialog is executed, it disables the parent window unitl the dialog is closed. The result can then be queried from result.
	*/
class BDL_SQTC_EXPORT styled_dialog : public styled_window
{
	Q_OBJECT;

	PROPERTY0(QList<styled_dialog_button>, buttons)
	PROPERTY0(styled_widget*, dialog_client_widget);
	PROPERTY0(QHBoxLayout*, button_layout);
	PROPERTY0(QEventLoop*, msg_loop);
	typedef QHash<QPushButton*, int> pushbutton_int_hashtable;
	PROPERTY0(pushbutton_int_hashtable, button_result_lookup);

	//! Stores the result of the dialog
	PROPERTY1(int, result, GET);

public:
	/*! \brief Initializes a new instance of the styled_dialog class
		*
		* \param title Title of the dialog window
		* \param parent The parent window, which is blocked by the dialog during execution
		* \param exit_result The default result of the dialog
		*/
	styled_dialog(const QString& title, styled_window* parent, int exit_result = -1, window_flags initial_flags = (window_flags)(64|8));
	/*! \brief Releases all data associated with an instance of the styled_dialog class
	*/
	virtual ~styled_dialog();

	/*! \brief Shows the window
	*/
	virtual void show();
	/*! \brief Executes the dialog (blocking)
	*/
	virtual int exec();

	/*! \brief Returns the client_widget
	*
	* \returns A pointer to the client widget
	*/
	virtual styled_widget* client_widget() const;
	/*! \brief Adds a button to the dialog
		*
		* \param text The text to display on the button
		* \param result The value that should be stored in result when this button was clicked
		*/
	void add_button(const QString& text, int result, button_flags flags = button_flags::none);
	void add_button(const styled_dialog_button& button);

private slots:
	void dialog_button_clicked(bool checked);
	void this_closed();

	void this_keyPressed(QKeyEvent* event);
};

END_BDL_SQTC

FLAG_COMMON_OPERATIONS(bdl::styled_qt_controls::button_flags);