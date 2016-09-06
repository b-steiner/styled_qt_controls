#pragma once

#include "../styled_qt_controls.hpp"
#include "../util/settings/settings_group.hpp"
#include "../util/settings/i_settings_provider.q.hpp"

BEGIN_BDL_SQTC

class styled_dock_widget;

class BDL_SQTC_EXPORT base_widget_factory : public QObject
{
	Q_OBJECT;

public:
	virtual void load(styled_dock_widget* parent, util::settings_group* group);
};

END_BDL_SQTC