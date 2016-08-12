#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_controls/styled_frame.q.hpp"

BEGIN_BDL_SQTC

/*! \brief A frame for selecting the hue and saturation value
	*
	* \author bdl
	*/
class hs_frame : public styled_frame
{
	Q_OBJECT;

	PROPERTY0(bool, mouse_down);

	//! Stores the color
	PROPERTY2(QColor, color, GET_CONST_REF, SET_PT);

public:
	/*! \brief Initializes a new instance of the hs_frame class
		*/
	hs_frame();
	/*! \brief Releases all data associated with an instance of the hs_frame class
		*/
	~hs_frame();

protected:
	/*! \brief See QFrame
		*
		* \param pe See QFrame
		*/
	void paintEvent(QPaintEvent *pe);
	/*! \brief See QFrame
	*
	* \param e See QFrame
	*/
	void mouseMoveEvent(QMouseEvent *e);
	/*! \brief See QFrame
	*
	* \param e See QFrame
	*/
	void mousePressEvent(QMouseEvent *e);
	/*! \brief See QFrame
	*
	* \param e See QFrame
	*/
	void mouseReleaseEvent(QMouseEvent *e);

private:
	void set_from_coord(QPoint p);

signals:
	/*! Signals when the user selected a different color
		*
		* \param color The newly selected color
		*/
	void color_changed(const QColor& color);
};

END_BDL_SQTC