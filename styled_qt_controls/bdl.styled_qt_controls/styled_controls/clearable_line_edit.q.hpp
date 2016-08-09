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