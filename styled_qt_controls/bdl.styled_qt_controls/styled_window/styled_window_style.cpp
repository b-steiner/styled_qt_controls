#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "styled_window_style.hpp"

using namespace bdl::styled_qt_controls;

QIcon styled_window_style::standardIcon(StandardPixmap standardIcon, const QStyleOption * option, const QWidget * widget) const
{
	switch (standardIcon)
	{
	case QStyle::SP_ToolBarHorizontalExtensionButton:
	case QStyle::SP_ToolBarVerticalExtensionButton:
		return QIcon(":/images/toolbar_overflow_hor.png");
		break;
	}

	return QProxyStyle::standardIcon(standardIcon, option, widget);
}

int styled_window_style::pixelMetric(PixelMetric metric, const QStyleOption * option, const QWidget * widget) const
{
	if (metric == QStyle::PM_ToolBarExtensionExtent)
		return 10;

	return QProxyStyle::pixelMetric(metric, option, widget);
}
