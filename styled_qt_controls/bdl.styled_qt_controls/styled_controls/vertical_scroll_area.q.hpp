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

/*! \brief A scroll area that does only scroll vertically.
	*
	* \author bdl
	* 
	* Widgets are stretched horizontally
	*/
class BDL_SQTC_EXPORT vertical_scroll_area : public QScrollArea
{
	Q_OBJECT;

public:
	/*! \brief Initializes a new instance of the vertical_scroll_area class
		*
		* \param parent The parent widget. See QScrollArea.
		*/
	explicit vertical_scroll_area(QWidget *parent = 0);

	//! See QScrollArea
	virtual bool eventFilter(QObject *o, QEvent *e);
};
	
END_BDL_SQTC