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