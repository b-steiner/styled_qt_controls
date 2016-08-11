#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_gradient_frame.q.hpp"

using namespace bdl::styled_qt_controls;

styled_gradient_frame::styled_gradient_frame(QWidget* parent, Qt::WindowFlags f) : styled_frame(parent, f), m_alpha_transition_start(0), m_alpha_transition_end(1),
	m_gradient_bottom_color(0,0,0,0), m_gradient_top_color(0,0,0,0), m_gradient_topline_color(0,0,0,0) { }
styled_gradient_frame::~styled_gradient_frame() { }

void styled_gradient_frame::paintEvent(QPaintEvent *pe)
{
	styled_frame::paintEvent(pe);

	QPainter p(this);
	float dt = 1.0f / (height() - 1 - 2 * m_inner_padding_top);

	QLinearGradient gradient(m_alpha_transition_start * width(), 0, m_alpha_transition_end * width(), 0);

	if (m_gradient_bottom_color.alpha() != 0 || m_gradient_topline_color.alpha() != 0)
	{
		for (int i = m_inner_padding_top + 1; i < height() - m_inner_padding_top; i++)
		{
			int reali = i - (m_inner_padding_top + 1);

			QColor color(
				(int)(m_gradient_bottom_color.red() *   reali * dt + m_gradient_top_color.red() *   (1.0 - reali * dt)),
				(int)(m_gradient_bottom_color.green() * reali * dt + m_gradient_top_color.green() * (1.0 - reali * dt)),
				(int)(m_gradient_bottom_color.blue() *  reali * dt + m_gradient_top_color.blue() *  (1.0 - reali * dt))
				);

			gradient.setColorAt(0, QColor(color.red(), color.green(), color.blue(), 255));
			gradient.setColorAt(1, QColor(color.red(), color.green(), color.blue(), 0));
			p.fillRect(m_inner_padding_side, i, width() - 2 * m_inner_padding_side, 1, QBrush(gradient));
		}
	}
	if (m_gradient_topline_color.alpha() != 0)
	{
		gradient.setColorAt(0, QColor(m_gradient_topline_color.red(), m_gradient_topline_color.green(), m_gradient_topline_color.blue(), 255));
		gradient.setColorAt(1, QColor(m_gradient_topline_color.red(), m_gradient_topline_color.green(), m_gradient_topline_color.blue(), 0));
		p.fillRect(m_inner_padding_side, m_inner_padding_top, width() - 2 * m_inner_padding_side, 1, QBrush(gradient));
	}
}