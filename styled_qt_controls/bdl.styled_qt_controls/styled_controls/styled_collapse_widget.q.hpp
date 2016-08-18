#pragma once

#include "../styled_qt_controls.hpp"
#include "styled_frame.q.hpp"

BEGIN_BDL_SQTC

/*! \brief A widget with a titlebar and a collapsable content area
	*
	* \author bdl
	*
	* For both, the title and the content, a layout can be set.
	* The title is contained in a styled_gradient_frame. The state of the styled_collapse_widget is set as custom_int_1 on this styled_gradient_frame.
	* This can be used to color the titlebar depending on the state.
	*/
class BDL_SQTC_EXPORT styled_collapse_widget : public QWidget
{
public:
	//! Enumeration with different states for the styled_collapse_widget
	enum class state_t { no_state = 0, good = 1, warn = 2, error = 3 };

	Q_OBJECT;

	PROPERTY0(QPushButton*, collapse_button);
	PROPERTY0(styled_frame*, title_frame);
	//! Stores the state of this widget
	PROPERTY2(state_t, state, GET, SET_PT);

	PROPERTY2(QWidget*, title_widget, GET, SET_PT);
	PROPERTY2(QWidget*, content_widget, GET, SET_PT);

	//! Stores the alignment of the collapse button. Allowed values are only Qt::AlignLeft and Qt::AlignRight
	PROPERTY2(Qt::Alignment, button_alignment, GET, SET_PT);
	Q_PROPERTY(Qt::Alignment button_alignment READ button_alignment WRITE button_alignment);
	PROPERTY2(bool, is_button_visible, GET, SET_PT);

public:
	/*! \brief Initializes a new instance of the styled_collapse_widget class
		*/
	styled_collapse_widget();
	/*! \brief Releases all data associated with an instance of the clearable_line_edit class
		*/
	virtual ~styled_collapse_widget();

	/*! \brief Gets or sets the expansion state
		*
		* \returns True when the widget is collapsed, False otherwise
		*/
	bool is_collapsed();
	/*! \brief Gets or sets the expansion state
		*
		* \param value The new expansion state
		*/
	void is_collapsed(bool value);

protected:
	//! See QWidget
	virtual void paintEvent(QPaintEvent *pe);

signals:
	void deleted();

private slots:
	void title_mousePressed(QMouseEvent* event);
	void collapse_toggled(bool checked);

private:
	void set_title_layout();
};

END_BDL_SQTC