#pragma once

#include "..\styled_qt_controls.hpp"
#include "styled_window.q.hpp"

BEGIN_BDL_SQTC

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

	PROPERTY0(QList<QString>, button_text);
	PROPERTY0(QList<int>, button_result);
	PROPERTY0(QWidget*, dialog_client_widget);
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
	styled_dialog(const QString& title, styled_window* parent, int exit_result = -1);
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
	virtual QWidget* client_widget() const;
	/*! \brief Adds a button to the dialog
		*
		* \param text The text to display on the button
		* \param result The value that should be stored in result when this button was clicked
		*/
	void add_button(const QString& text, int result);

private slots:
	void dialog_button_clicked(bool checked);
	void this_closed();
};


END_BDL_SQTC