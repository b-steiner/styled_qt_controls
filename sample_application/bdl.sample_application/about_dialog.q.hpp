#pragma once

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

namespace bdl
{
	namespace sample_application
	{
		/*! \A dialog window that show license infos
		 *
		 * \author bdl
		 */
		class about_dialog : public styled_qt_controls::styled_dialog
		{
			Q_OBJECT;

		public:
			/*! \brief Initializes a new instance of the about_dialog class
			 *
			 * \param parent A handle to the parent window that should be locked while the dialog is open.
			*/
			about_dialog(styled_qt_controls::styled_window* parent);
			/*! \brief Releases all data associated with an instance of the about_dialog class
			*/
			~about_dialog();
		};
	}
}