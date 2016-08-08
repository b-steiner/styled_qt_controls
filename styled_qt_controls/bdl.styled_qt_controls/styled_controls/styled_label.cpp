#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_label.q.hpp"

using namespace bdl::styled_qt_controls;

styled_label::styled_label(const QString& text) : QLabel(text), m_selected(false) { }
styled_label::~styled_label() { }

void styled_label::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);

	QLabel::paintEvent(pe);
}
void styled_label::mousePressEvent(QMouseEvent* event)
{
	emit mousePressed(event);
	QLabel::mousePressEvent(event);
}
void styled_label::mouseReleaseEvent(QMouseEvent* event)
{
	emit mouseReleased(event);
	QLabel::mouseReleaseEvent(event);
}