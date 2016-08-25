#include <bdl.styled_qt_controls\styled_qt_controls.hpp>
#include "styled_dialog.q.hpp"

#include "../styled_controls/styled_pushbutton.q.hpp"

using namespace bdl::styled_qt_controls;

styled_dialog::styled_dialog(const QString& title, styled_window* parent, int exit_result, window_flags initial_flags)
	: styled_window(title, parent, window_type::dialog, initial_flags), m_result(exit_result), m_msg_loop(nullptr)
{ 
	styled_window::client_widget()->setAttribute(Qt::WA_ShowModal, true);

	m_button_layout = new QHBoxLayout();
	m_button_layout->setContentsMargins(0, 0, 0, 0);
	m_button_layout->setSpacing(4);

	QGridLayout* layout = new QGridLayout();
	layout->setContentsMargins(0, 0, 0, 0);
	layout->setSpacing(4);
	layout->setRowStretch(0, 1);
	styled_window::client_widget()->setLayout(layout);

	m_dialog_client_widget = new styled_widget();
	m_dialog_client_widget->setObjectName("part_client_widget");
	layout->addWidget(m_dialog_client_widget, 0, 0);
	layout->addLayout(m_button_layout, 1, 0, Qt::AlignRight);

	QObject::connect(this, SIGNAL(closed()), this, SLOT(this_closed()));
	QObject::connect(this->part_window_widget(), SIGNAL(keyPressed(QKeyEvent*)), this, SLOT(this_keyPressed(QKeyEvent*)));
}
styled_dialog::~styled_dialog()
{ }

void styled_dialog::show()
{
	QLayoutItem *item;
	while ((item = m_button_layout->takeAt(0)))
		delete item;

	for (int i = 0; i < m_button_text.size(); i++)
	{
		styled_pushbutton* button = new styled_pushbutton(m_button_text[i]);
		button->setMinimumWidth(70);
		button->setObjectName("part_sdiag_button");
		m_button_result_lookup.insert(button, m_button_result[i]);
		m_button_layout->addWidget(button);
		QObject::connect(button, SIGNAL(clicked(bool)), this, SLOT(dialog_button_clicked(bool)));
	}

	styled_window::show();
}

int styled_dialog::exec()
{
	QEventLoop loop;
	m_msg_loop = &loop;

	this->show();

	auto windows = styled_window::front_to_back_windows();
	for (auto w : windows)
		if (w != this)
			w->disable();

	loop.exec(QEventLoop::DialogExec);
	m_msg_loop = nullptr;

	for (auto w : windows)
		if (w != this)
			w->enable();
	if (m_parent != nullptr)
		m_parent->focus();

	return m_result;
}

styled_widget* styled_dialog::client_widget() const
{
	return m_dialog_client_widget;
}
void styled_dialog::add_button(const QString& text, int result)
{
	m_button_text.push_back(text);
	m_button_result.push_back(result);
}

void styled_dialog::dialog_button_clicked(bool checked)
{
	QPushButton* s = (QPushButton*)sender();
	m_result = m_button_result_lookup[s];
	this->close();
}

void styled_dialog::this_closed()
{
	if (m_msg_loop != nullptr)
		m_msg_loop->exit(m_result);
}
void styled_dialog::this_keyPressed(QKeyEvent* event)
{
	auto cancel = QKeySequence(QKeySequence::Cancel);

	if (cancel[0] == event->key() | event->modifiers())
	{
		this->close();
	}
}