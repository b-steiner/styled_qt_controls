#pragma once

#include "../styled_qt_controls.hpp"
#include "../util/settings/settings_group.hpp"

BEGIN_BDL_SQTC

class base_editor_group : public QObject
{
	Q_OBJECT;

public:
	virtual ~base_editor_group() { }

	virtual QWidget* widget() = 0;
};

END_BDL_SQTC