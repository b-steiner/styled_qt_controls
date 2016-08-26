#pragma once

#include "../styled_qt_controls.hpp"
#include "../util/settings/settings_group.hpp"

BEGIN_BDL_SQTC

/*! \brief Base class for groups in the styled_item_editor_widget
 *
 * \author bdl
 *
 * Implement this interface if you want to add a custom widget to the item editor
 */
class BDL_SQTC_EXPORT base_editor_group : public QObject
{
	Q_OBJECT;

public:
	/*! \brief Releases all data associated with an instance of the base_editor_group class
	*/
	virtual ~base_editor_group() { }

	/*! \brief Constructs the group widget
	 *
	 * This method creates a widget and hands it over to the editor. The widget gets deleted by the editor
	 *
	 * \returns A pointer to a new group widget
	 */
	virtual QWidget* widget() = 0;
};

END_BDL_SQTC