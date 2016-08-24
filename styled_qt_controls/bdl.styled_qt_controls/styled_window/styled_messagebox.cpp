#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_messagebox.hpp"
#include "../util/style_loader.hpp"

using namespace bdl::styled_qt_controls;

QMessageBox::StandardButton styled_messagebox::critical(styled_window* parent, const QString& title, const QString& text)
{
	styled_dialog* diag = new styled_dialog(title, parent);

	util::style_loader loader(":/styled_window/styled_messagebox.qss");
	diag->client_widget()->setStyleSheet(loader.style_string());

	QGridLayout* layout = new QGridLayout();
	layout->setSpacing(20);
	layout->setContentsMargins(20, 0, 20, 0);
	layout->setColumnStretch(1, 1);
	layout->setRowStretch(0, 1);

	QLabel* icon = new QLabel();
	icon->setFixedSize(32, 32);
	icon->setObjectName("part_msg_critical_icon");

	QLabel* label = new QLabel();
	label->setWordWrap(true);
	label->setText(text);

	layout->addWidget(icon, 0, 0, Qt::AlignVCenter | Qt::AlignLeft);
	layout->addWidget(label, 0, 1 , Qt::AlignTop | Qt::AlignLeft);
	diag->client_widget()->setLayout(layout);

	diag->add_button("Ok", 1);
	diag->resize(QSize(200, 100));
	int result = diag->exec();
	QMessageBox::StandardButton buttons [] = { QMessageBox::StandardButton::Abort, QMessageBox::StandardButton::Ok };

	return buttons[result];
}
