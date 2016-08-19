#pragma once

#include "../styled_qt_controls.hpp"
#include "base_editor_group.q.hpp"
#include "../styled_controls/vertical_scroll_area.q.hpp"

BEGIN_BDL_SQTC

class BDL_SQTC_EXPORT styled_item_editor : public vertical_scroll_area
{
	Q_OBJECT;

	PROPERTY0(QList<base_editor_group*>, groups);
	PROPERTY0(QGridLayout*, layout);

public:
	styled_item_editor();
	virtual ~styled_item_editor();

	void add_group(base_editor_group* group);
	void remove_group(base_editor_group* group);
	void remove_group(int idx);

private:
	void groups_changed();
};

END_BDL_SQTC