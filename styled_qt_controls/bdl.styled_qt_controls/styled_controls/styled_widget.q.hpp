#pragma once

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief A QPushButton with an additional line on top of it. Supports additional properties for states
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_widget : public QWidget
{
	Q_OBJECT;			

	//! Color for the topline. Set this to transparent to prevent the line from beeing shown
	PROPERTY2(QColor, topline_color, GET, SET);
	//! Color for the topline. Set this to transparent to prevent the line from beeing shown
	Q_PROPERTY(QColor topline_color READ topline_color WRITE topline_color);

	//! True when the cursor is over the widget, false otherwise
	Q_PROPERTY(bool hover MEMBER m_hover);

	PROPERTY0(bool, hover);

public:
	/*! \brief Initializes a new instance of the styled_widget class.
		* \param parent See QWidget for details
		* \param f See QWidget for details
		*/
	styled_widget(QWidget* parent = 0, Qt::WindowFlags f = 0);
	/*! \brief Releases all data associated with an instance of the styled_widget class
		*/
	virtual ~styled_widget();

signals:
	//! See QWidget
	void mousePressed(QMouseEvent* event);
	//! See QWidget
	void mouseReleased(QMouseEvent* event);
	//! See QWidget
	void keyPressed(QKeyEvent* event);

protected:
	//! See QWidget
	virtual void keyPressEvent(QKeyEvent *event);
	//! See QWidget
	virtual void mousePressEvent(QMouseEvent* event);
	//! See QWidget
	virtual void mouseReleaseEvent(QMouseEvent* event);
	//! See QWidget
	virtual void paintEvent(QPaintEvent *pe);

	//! See QWidget
	virtual void enterEvent(QEvent * event);
	//! See QWidget
	virtual void leaveEvent(QEvent * event);
};

END_BDL_SQTC