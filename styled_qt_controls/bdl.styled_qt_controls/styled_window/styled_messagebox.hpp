#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_window/styled_dialog.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Enumeration containing result values for message boxes
 *
 * \author bdl
 */
enum class messagebox_result : int
{
	//! Returned when the messagebox is closed by pressing the X button
	close,
	//! Returned when a Ok button is pressed
	ok,
	//! Returned when a Cancel button is pressed
	cancel,
	//! Returned when a Yes button is pressed
	yes,
	//! Returned when a No button is pressed
	no,
};

/*! \brief Displays message boxes
 *
 * \author bdl
 */
class styled_messagebox
{
public:
	/*! \brief Displays a critical error messagebox. Has a error icon and a Ok button
	 *
	 * \param parent The parent window (gets disabled while the messagebox is open)
	 * \param title The title of the messagebox
	 * \param text The text in the box
	 *
	 * \returns A messagebox_result depending on the button/closing action. Can be ok or close
	 */
	static BDL_SQTC_EXPORT messagebox_result critical(styled_window* parent, const QString& title, const QString& text);
	/*! \brief Displays a warning messagebox. Has a exclamation mark icon and a Ok button
	*
	* \param parent The parent window (gets disabled while the messagebox is open)
	* \param title The title of the messagebox
	* \param text The text in the box
	*
	* \returns A messagebox_result depending on the button/closing action. Can be ok or close
	*/
	static BDL_SQTC_EXPORT messagebox_result warning(styled_window* parent, const QString& title, const QString& text);
	/*! \brief Displays a information messagebox. Has a i-icon and a Ok button
	*
	* \param parent The parent window (gets disabled while the messagebox is open)
	* \param title The title of the messagebox
	* \param text The text in the box
	*
	* \returns A messagebox_result depending on the button/closing action. Can be ok or close
	*/
	static BDL_SQTC_EXPORT messagebox_result information(styled_window* parent, const QString& title, const QString& text);
	/*! \brief Displays a yes/no messagebox. Has a question mark icon and Yes/No buttons
	*
	* \param parent The parent window (gets disabled while the messagebox is open)
	* \param title The title of the messagebox
	* \param text The text in the box
	*
	* \returns A messagebox_result depending on the button/closing action. Can be yes, no or close
	*/
	static BDL_SQTC_EXPORT messagebox_result question(styled_window* parent, const QString& title, const QString& text);


	/*! \brief Displays a generic messagebox
	*
	* \param parent The parent window (gets disabled while the messagebox is open)
	* \param title The title of the messagebox
	* \param text The text in the box
	* \param icon The icon to display
	* \param buttons A list of dialog buttons
	* 
	* \returns The dialog result depending on the pressed button
	*/
	static BDL_SQTC_EXPORT int show(styled_window* parent, const QString& title, const QString& text, const QPixmap& icon,
											QList<styled_dialog_button> buttons);
};

END_BDL_SQTC