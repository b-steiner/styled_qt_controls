#pragma once

#include "../styled_qt_controls.hpp"
#include "../styled_controls/styled_frame.q.hpp"

BEGIN_BDL_SQTC


/*! \brief A frame for selecting the lightness value
*
* \author bdl
*/
class l_frame : public styled_frame
{
	Q_OBJECT;

	//! Stores the current color
	PROPERTY2(QColor, color, SET_PT, GET_CONST_REF);
	PROPERTY0(bool, mouse_down)

public:
	/*! \brief Initializes a new instance of the l_frame class
	*/
	l_frame();
	/*! \brief Releases all data associated with an instance of the l_frame class
	*/
	~l_frame();

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

signals:
	/*! Signals when the user selected a different color
	*
	* \param color The newly selected color
	*/
	void color_changed(const QColor& color);

private:
	void set_from_coord(QPoint p);

	static QPixmap* m_slider;
};

END_BDL_SQTC