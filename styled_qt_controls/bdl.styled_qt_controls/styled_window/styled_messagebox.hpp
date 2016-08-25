#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_window/styled_dialog.q.hpp"

BEGIN_BDL_SQTC

class styled_messagebox
{
public:
	static BDL_SQTC_EXPORT QMessageBox::StandardButton critical(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT QMessageBox::StandardButton warning(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT QMessageBox::StandardButton information(styled_window* parent, const QString& title, const QString& text);
	static BDL_SQTC_EXPORT QMessageBox::StandardButton question(styled_window* parent, const QString& title, const QString& text);

	static BDL_SQTC_EXPORT int show(styled_window* parent, const QString& title, const QString& text, const QPixmap& icon,
											QList<QPair<QString, int>> buttons);
};

END_BDL_SQTC