#include <bdl.styled_qt_controls/styled_qt_controls.hpp>
#include "styled_collapse_widget.q.hpp"

#include "..\util\style_loader.hpp"
#include "styled_frame.q.hpp"
#include "styled_gradient_frame.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

styled_collapse_widget::styled_collapse_widget() : m_button_alignment(Qt::AlignRight), m_title_frame(nullptr), m_title_widget(nullptr), m_content_widget(nullptr), m_is_button_visible(true)
{
	m_title_frame = new styled_gradient_frame();
	m_title_frame->setObjectName("part_scw_title_frame");
	QGridLayout* title_layout = new QGridLayout();
	title_layout->setContentsMargins(0, 2, 0, 2);
	title_layout->setSpacing(0);
	m_title_frame->setLayout(title_layout);
	m_title_frame->move(0, 0);
	QObject::connect(m_title_frame, SIGNAL(mousePressed(QMouseEvent*)), this, SLOT(title_mousePressed(QMouseEvent*)));

	m_collapse_button = new QPushButton();
	m_collapse_button->setCheckable(true);
	m_collapse_button->setChecked(false);
	m_collapse_button->setObjectName("part_scw_collapse_button");
	m_collapse_button->setFixedWidth(16);
	QObject::connect(m_collapse_button, SIGNAL(toggled(bool)), this, SLOT(collapse_toggled(bool)));

	QGridLayout* this_layout = new QGridLayout();
	this_layout->setContentsMargins(0, 0, 0, 0);
	this_layout->setSpacing(0);

	this_layout->addWidget(m_title_frame, 0, 0);
	this->setLayout(this_layout);

	set_title_layout();
}
styled_collapse_widget::~styled_collapse_widget()
{ }


bool styled_collapse_widget::is_collapsed()
{
	return m_collapse_button->isChecked();
}
void styled_collapse_widget::is_collapsed(bool value)
{
	m_collapse_button->setChecked(value);
}
void styled_collapse_widget::is_button_visible(bool const & value)
{
	m_is_button_visible = value;
	m_collapse_button->setVisible(value);
}
void styled_collapse_widget::state(const state_t& value)
{
	m_state = value;
	m_title_frame->custom_int_1((int)value);
}
void styled_collapse_widget::button_alignment(const Qt::Alignment& value)
{
	if (value != Qt::AlignLeft && value != Qt::AlignRight)
		qWarning() << "styled_collapse_widget button_alignment must be AlignLeft or AlignRight";
	else
	{
		m_button_alignment = value;
		set_title_layout();
	}
}

void styled_collapse_widget::title_widget(QWidget* const & widget)
{
	if (m_title_widget != nullptr)
	{
		m_title_widget->setParent(nullptr);
		delete m_title_widget;
	}

	m_title_widget = widget;
	set_title_layout();
}
void styled_collapse_widget::content_widget(QWidget* const & widget)
{
	if (m_content_widget != nullptr)
	{
		m_content_widget->setParent(nullptr);
		delete m_content_widget;
	}
	
	m_content_widget = widget;

	if (m_content_widget != nullptr)
	{
		((QGridLayout*)this->layout())->addWidget(widget, 1, 0);
		m_content_widget->setVisible(m_collapse_button->isChecked());
	}
}


void styled_collapse_widget::paintEvent(QPaintEvent *pe)
{
	QStyleOption o;
	o.initFrom(this);
	QPainter p(this);
	style()->drawPrimitive(QStyle::PE_Widget, &o, &p, this);
}


void styled_collapse_widget::title_mousePressed(QMouseEvent* event)
{
	this->m_collapse_button->click();
}
void styled_collapse_widget::collapse_toggled(bool checked)
{
	if (m_content_widget != nullptr)
		m_content_widget->setVisible(checked);
}



void styled_collapse_widget::set_title_layout()
{
	QGridLayout* layout = (QGridLayout*)m_title_frame->layout();

	m_collapse_button->setParent(nullptr);
	if (m_title_widget != nullptr)
		m_title_widget->setParent(nullptr);

	if (m_button_alignment == Qt::AlignRight)
	{
		layout->setColumnStretch(0, 1);
		layout->setColumnStretch(1, 0);
		layout->addWidget(m_collapse_button, 0, 1, Qt::AlignVCenter);
		if (m_title_widget != nullptr)
			layout->addWidget(m_title_widget, 0, 0);
	}
	else
	{
		layout->setColumnStretch(0, 0);
		layout->setColumnStretch(1, 1);
		layout->addWidget(m_collapse_button, 0, 0, Qt::AlignVCenter);
		if (m_title_widget != nullptr)
			layout->addWidget(m_title_widget, 0, 1);
	}
}