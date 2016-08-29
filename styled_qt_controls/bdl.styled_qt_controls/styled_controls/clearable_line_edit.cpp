/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the styled_qt_controls library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/

#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "clearable_line_edit.q.hpp"

#include "..\util\style_loader.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

clearable_line_edit::clearable_line_edit(QWidget* _parent) : QLineEdit(_parent)
{
	init();
}
clearable_line_edit::clearable_line_edit(const QString& _contents, QWidget* _parent) : QLineEdit(_contents, _parent)
{
	init();
	this_text_changed(_contents);
}
clearable_line_edit::~clearable_line_edit()
{ }

void clearable_line_edit::init()
{
	this->setTextMargins(0, 1, 0, 1);

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(1, 1, 1, 1);
	layout->setColumnStretch(0, 1);

	QPushButton* clearButton = new QPushButton();
	clearButton->setObjectName("part_ClearButton");
	clearButton->setFixedSize(16, 18);
	clearButton->setVisible(false);
	clearButton->setCursor(Qt::ArrowCursor);
	clearButton->setFocusPolicy(Qt::NoFocus);
	layout->addWidget(clearButton, 0, 1);

	this->setLayout(layout);

	QObject::connect(this, SIGNAL(textChanged(const QString&)), this, SLOT(this_text_changed(const QString&)));
	QObject::connect(clearButton, SIGNAL(clicked(bool)), this, SLOT(clear_button_clicked(bool)));
}


void clearable_line_edit::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QLineEdit::paintEvent(pe);
}

void clearable_line_edit::this_text_changed(const QString& _text)
{
	QPushButton* clearButton = this->findChild<QPushButton*>("part_ClearButton");

	if (_text == "")
		clearButton->setVisible(false);
	else
		clearButton->setVisible(true);
}

void clearable_line_edit::clear_button_clicked(bool _checked)
{
	this->setText("");
}