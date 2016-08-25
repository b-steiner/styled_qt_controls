#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_messagebox.hpp"
#include "../util/style_loader.hpp"
#include "../util/os/icon_loader.hpp"

using namespace bdl::styled_qt_controls;

QMessageBox::StandardButton styled_messagebox::critical(styled_window* parent, const QString& title, const QString& text)
{
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::error, 32), { { "Ok", 0 } });
	QMessageBox::StandardButton buttons [] = { QMessageBox::StandardButton::Abort, QMessageBox::StandardButton::Ok };

	return buttons[role + 1];
}

QMessageBox::StandardButton styled_messagebox::warning(styled_window * parent, const QString & title, const QString & text)
{
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::warning, 32), { { "Ok", 0 } });
	QMessageBox::StandardButton buttons[] = { QMessageBox::StandardButton::Abort, QMessageBox::StandardButton::Ok };

	return buttons[role + 1];
}

BDL_SQTC_EXPORT QMessageBox::StandardButton styled_messagebox::information(styled_window * parent, const QString & title, const QString & text)
{
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::info, 32), { { "Ok", 0 } });
	QMessageBox::StandardButton buttons[] = { QMessageBox::StandardButton::Abort, QMessageBox::StandardButton::Ok };

	return buttons[role + 1];
}

BDL_SQTC_EXPORT QMessageBox::StandardButton styled_messagebox::question(styled_window * parent, const QString & title, const QString & text)
{
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::question, 32), { { "Yes", 0 }, { "No", 1 } });
	QMessageBox::StandardButton buttons[] = { QMessageBox::StandardButton::Abort, QMessageBox::StandardButton::Yes, QMessageBox::StandardButton::No };

	return buttons[role + 1];
}



int styled_messagebox::show(styled_window* parent, const QString& title, const QString& text, const QPixmap& icon,
								 QList<QPair<QString, int>> buttons)
{
	styled_dialog* diag = new styled_dialog(title, parent, -1, styled_window::window_flags::hittest_visible);

	util::style_loader loader(":/styled_window/styled_messagebox.qss");
	diag->client_widget()->setStyleSheet(loader.style_string());

	QGridLayout* layout = new QGridLayout();
	layout->setSpacing(20);
	layout->setContentsMargins(5, 5, 20, 5);
	layout->setColumnStretch(1, 1);
	layout->setRowStretch(0, 1);

	QLabel* icon_lbl = new QLabel();
	icon_lbl->setFixedSize(32, 32);
	icon_lbl->setPixmap(icon);
	icon_lbl->setObjectName("part_msg_critical_icon");

	QLabel* label = new QLabel();
	label->setWordWrap(true);
	label->setText(text);

	layout->addWidget(icon_lbl, 0, 0, Qt::AlignVCenter | Qt::AlignLeft);
	layout->addWidget(label, 0, 1, Qt::AlignTop | Qt::AlignLeft);
	diag->client_widget()->setLayout(layout);

	for (auto& btn : buttons)
		diag->add_button(btn.first, btn.second);

	return diag->exec();
}