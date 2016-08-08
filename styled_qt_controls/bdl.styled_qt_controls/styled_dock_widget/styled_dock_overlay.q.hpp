#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class styled_dock_widget;

/*! \brief Overlay mode that should be displayed
	*/
enum class styled_overlay_mode : unsigned char
{
	//! No overlay is displayed
	none,
	//! The overlay covers the full content rectangle and a specific tab (given by tab())
	tab,
	//! Covers the left half of the widget
	left,
	//! Covers the right half of the widget
	right,
	//! Covers the bottom half of the widget
	bottom,
	//! Covers the upper half of the widget
	top
};

/*! \brief Displays an overlay over the styled_dock_widget when items can be docked to it
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_dock_overlay : public QWidget
{
	Q_OBJECT;

	//! Specifies in which mode the overlay should be drawn
	PROPERTY2(styled_overlay_mode, mode, GET, SET_PT);
	//! The tab that should be covered (only relevant in tab mode)
	PROPERTY2(QWidget*, tab, GET, SET_PT);
	PROPERTY0(styled_dock_widget*, widget);

public:
	/*! \brief Initializes a new instance of the styled_dock_overlay class
		*
		* \param widget The widget that should be overlayed
		*/
	styled_dock_overlay(styled_dock_widget* widget);
	/*! \brief Releases all data associated with an instance of the styled_dock_overlay class
		*/
	~styled_dock_overlay();

protected:
	//! See QWidget
	void paintEvent(QPaintEvent *pe);

private:
	QRect map(QRect r, QWidget* from);
	QPoint map(QPoint p, QWidget* from);
};

END_BDL_SQTC