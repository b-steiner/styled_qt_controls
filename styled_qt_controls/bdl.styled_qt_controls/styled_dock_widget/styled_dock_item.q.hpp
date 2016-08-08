#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class styled_dock_widget;

/*! \brief A item for the styled_dock_widget
	*
	* \author bdl
	*/
class BDL_SQTC_EXPORT styled_dock_item : public QObject
{
	Q_OBJECT;

	//! The title of the item. This text is displayed in the tab and in the header bar
	PROPERTY2(QString, title, GET_CONST_REF, SET_PT);
	//! Content widget of the item
	PROPERTY1(QWidget*, content, GET);
	//! The container to which this item belongs
	PROPERTY2(styled_dock_widget*, parent, GET, SET);

public:
	/*! \brief Initializes a new instance of the styled_dock_widget class
		*
		* \param title The string that should be displayed in the tab
		* \param content The content widget
		*/
	styled_dock_item(const QString& title, QWidget* content);
	/*! \brief Releases all data associated with an instance of the styled_dock_widget class
		*/
	~styled_dock_item();

	/*! \brief Selects this item
		*/
	void select();
	/*! \brief Closes the item
		*/
	void close();

signals:
	/*! \brief Is emitted when the item is going to be closed
		*
		* \param accept_close When set to false, the closing is aborted. The default value is True.
		*/
	void closing(bool& accept_close);
	/*! \brief Emitted when the tab is closed
		*
		* \param is_deleted Has to be set by the slot: True when the slot has already deleted the item, False otherwise
		*/
	void closed(bool& is_deleted);
	/*! \brief Is emitted when the overlay of the parent widget changed (can be used to hide OpenGL widgets, since they interferre with the overlay)
		*
		* \param is_visible True when the overlay is shown, False otherwise
		*/
	void overlay_changed(bool is_visible);
	/*! \brief Is emitted when the title has changed
		*
		* \param item The item that's title has changed
		*/
	void title_changed(bdl::styled_qt_controls::styled_dock_item* item);
	/*! \brief Is emitted when the item gets selected
		*/
	void selected();
};

END_BDL_SQTC