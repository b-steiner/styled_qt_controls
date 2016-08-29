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

#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief A QLineEdit with an additional clear button
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT clearable_line_edit : public QLineEdit
{
	Q_OBJECT;

public:
	//! Initializes a new instance of the clearable_line_edit class. See QLineEdit for details
	clearable_line_edit(QWidget* _parent = 0);
	//! Initializes a new instance of the clearable_line_edit class. See QLineEdit for details
	clearable_line_edit(const QString& _contents, QWidget* _parent = 0);
	//! Releases all data associated with an instance of the clearable_line_edit class
	~clearable_line_edit();

protected:
	//! See QLineEdit for details
	void paintEvent(QPaintEvent *pe);

private slots:
	void this_text_changed(const QString& _text);
	void clear_button_clicked(bool _checked);

private:
	void init();
};

END_BDL_SQTC