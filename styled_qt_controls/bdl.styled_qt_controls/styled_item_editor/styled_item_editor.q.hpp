#pragma once

#include "../styled_qt_controls.hpp"
#include "base_editor_group.q.hpp"
#include "../styled_controls/vertical_scroll_area.q.hpp"

BEGIN_BDL_SQTC

/*! \brief Widget for displaying and editing items
 *
 * \author bdl
 *
 * Groups and items can either be derived from existing ones or newly implemented. See base_editor_group, item_editor_group, base_item_editor_item
 */
class BDL_SQTC_EXPORT styled_item_editor : public vertical_scroll_area
{
	Q_OBJECT;

	PROPERTY0(QList<base_editor_group*>, groups);
	PROPERTY0(QGridLayout*, layout);

public:
	/*! \brief Initializes a new instance of the styled_item_editor class
	 */
	styled_item_editor();
	/*! \brief Releases all data associated with an instance of the styled_item_editor class
	 */
	virtual ~styled_item_editor();

	/*! \brief Adds a editing group to the widget
	 *
	 * \param group The group to add
	 */
	void add_group(base_editor_group* group);
	/*! \brief Removes a editing group to the widget
	*
	* \param group The group to remove
	*/
	void remove_group(base_editor_group* group);
	/*! \brief Removes a editing group to the widget
	*
	* \param idx The index of the item to remove
	*/
	void remove_group(int idx);

private:
	void groups_changed();
};

END_BDL_SQTC