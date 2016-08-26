#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_window/styled_dialog.q.hpp"

BEGIN_BDL_SQTC

enum class messagebox_result : int
{
	close,
	ok,
	cancel,
	yes,
	no,
};

class styled_messagebox
{
public:
	static BDL_SQTC_EXPORT messagebox_result critical(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT messagebox_result warning(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT messagebox_result information(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT messagebox_result question(styled_window* parent, const QString& title, const QString& text);

	static BDL_SQTC_EXPORT int show(styled_window* parent, const QString& title, const QString& text, const QPixmap& icon,
											QList<styled_dialog_button> buttons);
};

END_BDL_SQTC