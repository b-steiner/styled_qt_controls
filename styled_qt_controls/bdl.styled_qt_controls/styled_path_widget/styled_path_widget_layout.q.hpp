#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

/*! \brief Layout used for the styled_path_widget
	*
	* \author bdl
	* 
	* This layout displays an overflow as first element.
	*/
class BDL_SQTC_EXPORT styled_path_widget_layout : public QLayout
{
	Q_OBJECT;

	PROPERTY0(QList<QLayoutItem*>, items);
	PROPERTY0(QList<QLayoutItem*>, visible_items);

public:
	/*! \brief Initializes a new instance of the styled_path_widget_layout class.
		*/
	styled_path_widget_layout();
	/*! \brief Releases all data associated with an instance of the styled_path_widget_layout class
		*/
	~styled_path_widget_layout();

	//! See QLayout
	void addItem(QLayoutItem *item);
	//! See QLayout
	QSize sizeHint() const;
	//! See QLayout
	QSize minimumSize() const;
	//! See QLayout
	int count() const;
	//! See QLayout
	QLayoutItem* itemAt(int idx) const;
	//! See QLayout
	QLayoutItem* takeAt(int idx);
	//! See QLayout
	void setGeometry(const QRect& rect);

	/*! \brief Returns whether or not a widget is visible in the layout
		*
		* \param widget The widget to test
		* \returns True when the widget is visible, False otherwise
		*/
	bool is_visible(QWidget* widget);

signals:
	/*! \brief Emitted when the overflow state has changed
		*
		* \param has_overflow Is set to True when the layout has some elements in the overflow section.
		*/
	void overflow_changed(bool has_overflow);
};

END_BDL_SQTC