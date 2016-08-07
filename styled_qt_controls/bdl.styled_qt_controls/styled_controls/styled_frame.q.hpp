#pragma once

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

	/*! \brief A QFrame with an additional line on top of it. Supports additional properties for states
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT styled_frame : public QFrame
	{
		Q_OBJECT;

		//! Color for the topline. Set this to transparent to prevent the line from beeing shown
		Q_PROPERTY(QColor topline_color READ topline_color WRITE topline_color);
		//! Color for the topline. Set this to transparent to prevent the line from beeing shown
		PROPERTY2(QColor, topline_color, GET, SET);
		//! True when the cursor is over the widget, false otherwise
		Q_PROPERTY(bool hover READ hover WRITE hover NOTIFY hover_changed);
		//! True when the cursor is over the widget, false otherwise
		PROPERTY2(bool, hover, GET, SET_STYLE);
		//! True when the frame is selected. Has to be set manually
		Q_PROPERTY(bool selected READ selected WRITE selected);
		//! True when the frame is selected. Has to be set manually
		PROPERTY2(bool, selected, GET, SET_STYLE);
		//! Distance to the upper edge of the frame (required when the frame has a border)
		Q_PROPERTY(int inner_padding_top READ inner_padding_top WRITE inner_padding_top);
		//! Distance to the upper edge of the frame (required when the frame has a border)
		PROPERTY2(int, inner_padding_top, GET, SET);
		//! Distance to the sides (required when the frame has a border)
		Q_PROPERTY(int inner_padding_side READ inner_padding_side WRITE inner_padding_side);
		//! Distance to the sides (required when the frame has a border)
		PROPERTY2(int, inner_padding_side, GET, SET);

		//! Additional data field (can be used for whatever needed)
		Q_PROPERTY(bool custom_data_1 READ custom_data_1 WRITE custom_data_1);
		//! Additional data field (can be used for whatever needed)
		PROPERTY2(bool, custom_data_1, GET, SET_STYLE);

		//! Additional data field (can be used for whatever needed)
		Q_PROPERTY(int custom_int_1 READ custom_int_1 WRITE custom_int_1);
		//! Additional data field (can be used for whatever needed)
		PROPERTY2(int, custom_int_1, GET, SET_STYLE);

	public:
		/*! \brief Initializes a new instance of the styled_frame class. See QFrame for details
			*
			* \param parent See QFrame
			* \param f See QFrame
			*/
		styled_frame(QWidget* parent = 0, Qt::WindowFlags f = 0);
		//! Releases all data associated with an instance of the styled_frame class
		virtual ~styled_frame();

	signals:
		//! Emitted when the mouse is pressed over the widget (see mousePressEvent)
		void mousePressed(QMouseEvent* event);
		//! Emitted when the mouse is released over the widget (see mouseReleaseEvent)
		void mouseReleased(QMouseEvent* event);
		//! Emitted when the mouse is moved over the widget (see mouseMoveEvent)
		void mouseMove(QMouseEvent* event);
		//! Emitted when the mouse leaves the widget (see enterEvent)
		void leave(QEvent* event);
		//! Emitted when the mouse enters the widget (see leaveEvent)
		void enter(QEvent* event);

		//! Emitted when the hover property changes its value
		void hover_changed(bool value);

	protected:
		//! See QFrame
		virtual void mousePressEvent(QMouseEvent* event);
		//! See QFrame
		virtual void mouseReleaseEvent(QMouseEvent* event);
		//! See QFrame
		virtual void mouseMoveEvent(QMouseEvent* event);
		//! See QFrame
		virtual void paintEvent(QPaintEvent *pe);

		//! See QFrame
		virtual void enterEvent(QEvent * event);
		//! See QFrame
		virtual void leaveEvent(QEvent * event);
	};

END_BDL_SQTC