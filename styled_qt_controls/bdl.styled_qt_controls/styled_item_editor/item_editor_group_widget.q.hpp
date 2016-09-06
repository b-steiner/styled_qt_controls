#pragma once

#include "../util/settings/i_settings_provider.q.hpp"

BEGIN_BDL_SQTC

class item_editor_group_widget : public util::i_settings_provider
{
	Q_OBJECT;

public:
	item_editor_group_widget();
	virtual ~item_editor_group_widget();

	virtual util::settings_group* save_settings();
	virtual void load_settings(util::settings_group* group);

};

END_BDL_SQTC