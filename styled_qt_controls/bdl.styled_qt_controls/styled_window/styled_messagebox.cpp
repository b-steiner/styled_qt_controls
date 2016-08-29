#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_messagebox.hpp"
#include "../util/style_loader.hpp"
#include "../util/os/icon_loader.hpp"
#include "../util/os/os_sound.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

messagebox_result styled_messagebox::critical(styled_window* parent, const QString& title, const QString& text)
{
	os_sound::play(os_sound_type::error);
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::error, 32), { { "Ok", 0, button_flags::accept_button } });
	messagebox_result buttons [] = { messagebox_result::close, messagebox_result::ok };

	return buttons[role + 1];
}

messagebox_result styled_messagebox::warning(styled_window * parent, const QString & title, const QString & text)
{
	os_sound::play(os_sound_type::warning);
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::warning, 32), { { "Ok", 0, button_flags::accept_button } });
	messagebox_result buttons[] = { messagebox_result::close, messagebox_result::ok };

	return buttons[role + 1];
}

messagebox_result styled_messagebox::information(styled_window * parent, const QString & title, const QString & text)
{
	os_sound::play(os_sound_type::question);
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::info, 32), { { "Ok", 0, button_flags::accept_button } });
	messagebox_result buttons[] = { messagebox_result::close, messagebox_result::ok };

	return buttons[role + 1];
}

messagebox_result styled_messagebox::question(styled_window * parent, const QString & title, const QString & text)
{
	os_sound::play(os_sound_type::question);
	auto role = show(parent, title, text, util::icon_loader::default_os_icon(util::default_icon_type::question, 32), { { "Yes", 0, button_flags::accept_button }, { "No", 1, button_flags::abort_button } });
	messagebox_result buttons[] = { messagebox_result::close, messagebox_result::yes, messagebox_result::no };

	return buttons[role + 1];
}



int styled_messagebox::show(styled_window* parent, const QString& title, const QString& text, const QPixmap& icon,
								 QList<styled_dialog_button> buttons)
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

	layout->addWidget(icon_lbl, 0, 0 , Qt::AlignTop | Qt::AlignLeft);
	layout->addWidget(label, 0, 1, Qt::AlignTop | Qt::AlignLeft);
	diag->client_widget()->setLayout(layout);

	for (auto& btn : buttons)
		diag->add_button(btn);

	diag->adjust_size();
	return diag->exec();
}