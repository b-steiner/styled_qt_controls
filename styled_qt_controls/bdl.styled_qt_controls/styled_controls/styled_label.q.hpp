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

/*! \brief A QLabel with an additional property
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_label : public QLabel
{
	Q_OBJECT;

	//! True when the frame is selected. Has to be set manually
	PROPERTY2(bool, selected, GET, SET_STYLE);
	//! True when the frame is selected. Has to be set manually
	Q_PROPERTY(bool selected READ selected WRITE selected);

public:
	/*! Initializes a new instance of the styled_label class. See QLabel for details
		*
		* \param text See QLabel
		*/
	styled_label(const QString& text);
	/*! \brief Releases all data associated with an instance of the styled_label class
		*/
	virtual ~styled_label();

protected:
	//! See QLabel
	virtual void paintEvent(QPaintEvent *pe);
	//! See QWidget
	virtual void mousePressEvent(QMouseEvent* event);
	//! See QWidget
	virtual void mouseReleaseEvent(QMouseEvent* event);

signals:
	//! See QWidget
	void mousePressed(QMouseEvent* event);
	//! See QWidget
	void mouseReleased(QMouseEvent* event);
};

END_BDL_SQTC