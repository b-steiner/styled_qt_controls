#pragma once

#pragma once

#include "../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

class styled_window_style : public QProxyStyle
{
public:
	virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
	virtual int pixelMetric(PixelMetric metric, const QStyleOption *option = Q_NULLPTR, const QWidget *widget = Q_NULLPTR) const;
};

END_BDL_SQTC