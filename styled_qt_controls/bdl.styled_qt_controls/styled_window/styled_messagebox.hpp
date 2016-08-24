#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_window/styled_dialog.q.hpp"

BEGIN_BDL_SQTC

class styled_messagebox
{
public:
	static BDL_SQTC_EXPORT QMessageBox::StandardButton critical(styled_window* parent, const QString& title, const QString& text);
	
};

END_BDL_SQTC