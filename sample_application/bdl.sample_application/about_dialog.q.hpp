#pragma once

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>

namespace bdl
{
	namespace sample_application
	{
		class about_dialog : public styled_qt_controls::styled_dialog
		{
			Q_OBJECT;

		public:
			about_dialog(styled_qt_controls::styled_window* parent);
			~about_dialog();
		};
	}
}