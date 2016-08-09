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