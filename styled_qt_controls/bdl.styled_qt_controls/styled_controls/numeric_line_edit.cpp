#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "numeric_line_edit.q.hpp"

using namespace bdl::styled_qt_controls;

numeric_line_edit::numeric_line_edit(double value, int visible_decimal_places) : m_visible_decimal_places(visible_decimal_places), m_select_on_click(false), m_mouse_down(false),
	m_tick(0.01), m_minimum(-std::numeric_limits<double>::infinity()), m_maximum(std::numeric_limits<double>::infinity())
{
	QCursor cursor(QPixmap(":/images/cursor_numeric_drag.png"), 15, 5);
	this->setCursor(cursor);

	//Ensure that the first call to value will really set it
	this->setText(QString::number(value + 10));

	QObject::connect(this, SIGNAL(returnPressed()), this, SLOT(this_returnPressed()));

	this->value(value);
}
numeric_line_edit::~numeric_line_edit() { }

double numeric_line_edit::value() const
{
	return this->text().replace(',', '.').toDouble();
}
void numeric_line_edit::value(double val)
{
	int p = pow(10, m_visible_decimal_places);

	if (abs(value() - val) > (1.0 / (double)p))
	{
		double v = min(max(val, m_minimum), m_maximum);
		this->setText(QString::number(round(v * p) / p));
	}
}


void numeric_line_edit::focusOutEvent(QFocusEvent* event)
{
	int p = pow(10, m_visible_decimal_places);
	double v = min(max(value(), m_minimum), m_maximum);
	this->setText(QString::number(round(v * p) / p));
	this->deselect();
	QLineEdit::focusOutEvent(event);
}
void numeric_line_edit::focusInEvent(QFocusEvent* event)
{
	QLineEdit::focusInEvent(event);
	m_select_on_click = true;
}

void numeric_line_edit::this_returnPressed()
{
	int p = pow(10, m_visible_decimal_places);
	double v = min(max(value(), m_minimum), m_maximum);
	this->setText(QString::number(round(v * p) / p));
	this->selectAll();
}

void numeric_line_edit::mousePressEvent(QMouseEvent* event)
{
	QLineEdit::mousePressEvent(event);

	if (m_select_on_click)
	{
		this->selectAll();
		m_select_on_click = false;
	}

	m_mouse_down = true;
	m_mouse_reference_point = event->pos();
	m_drag_reference_value = value();
}

void numeric_line_edit::mouseMoveEvent(QMouseEvent* event)
{
	if (m_mouse_down)
	{
		int x_diff = event->pos().x() - m_mouse_reference_point.x();

		value(m_drag_reference_value + x_diff * m_tick);
		emit this->textEdited(this->text());
		emit this->editingFinished();
		this->selectAll();
	}
}

void numeric_line_edit::mouseReleaseEvent(QMouseEvent* event)
{
	m_mouse_down = false;
}