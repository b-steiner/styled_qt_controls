#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "vertical_scroll_area.q.hpp"

using namespace bdl::styled_qt_controls;

vertical_scroll_area::vertical_scroll_area(QWidget *parent) :
QScrollArea(parent)
{
	setWidgetResizable(true);
	setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
}

bool vertical_scroll_area::eventFilter(QObject *o, QEvent *e)
{
	// This works because QScrollArea::setWidget installs an eventFilter on the widget
	if (o && o == widget() && e->type() == QEvent::Resize)
	{
		widget()->setMinimumHeight(widget()->minimumSizeHint().height());
		setMinimumWidth(widget()->minimumSizeHint().width() + verticalScrollBar()->width());
	}

	return QScrollArea::eventFilter(o, e);
}