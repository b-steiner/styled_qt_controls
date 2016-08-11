#pragma once

#include "../styled_qt_controls.hpp"
#include "styled_frame.q.hpp"

BEGIN_BDL_SQTC

/*! \brief A frame that has a color gradient from top to bottom and a transparency gradient from left to right
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_gradient_frame : public styled_frame
{
	Q_OBJECT;

	//! Stores the color of the top line
	Q_PROPERTY(QColor gradient_topline_color READ gradient_topline_color WRITE gradient_topline_color);
	//! Stores the color of the top line
	PROPERTY2(QColor, gradient_topline_color, GET, SET);

	//! Stores the bottom color of the color gradient
	Q_PROPERTY(QColor gradient_bottom_color READ gradient_bottom_color WRITE gradient_bottom_color);
	//! Stores the bottom color of the color gradient
	PROPERTY2(QColor, gradient_bottom_color, GET, SET);
	//! Stores the top color of the color gradient
	Q_PROPERTY(QColor gradient_top_color READ gradient_top_color WRITE gradient_top_color);
	//! Stores the top color of the color gradient
	PROPERTY2(QColor, gradient_top_color, GET, SET);

	//! Stores the start of the alpha transition (values are normalized from left (0) to right (1)
	Q_PROPERTY(float alpha_transition_start READ alpha_transition_start WRITE alpha_transition_start);
	//! Stores the start of the alpha transition (values are normalized from left (0) to right (1)
	PROPERTY2(float, alpha_transition_start, GET, SET);
	//! Stores the end of the alpha transition (values are normalized from left (0) to right (1)
	Q_PROPERTY(float alpha_transition_end READ alpha_transition_end WRITE alpha_transition_end);
	//! Stores the end of the alpha transition (values are normalized from left (0) to right (1)
	PROPERTY2(float, alpha_transition_end, GET, SET);

public:
	/*! \brief Initializes a new instance of the styled_gradient_frame class
		*
		* \param parent See QFrame
		* \param f See QFrame
		*/
	styled_gradient_frame(QWidget* parent = 0, Qt::WindowFlags f = 0);
	/*! \brief Releases all data associated with an instance of the clearable_line_edit class
		*/
	virtual ~styled_gradient_frame();

protected:
	//! See QFrame
	virtual void paintEvent(QPaintEvent *pe);
};

END_BDL_SQTC