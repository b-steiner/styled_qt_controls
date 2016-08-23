#include "about_dialog.q.hpp"

using namespace bdl::sample_application;
using namespace bdl::styled_qt_controls;

about_dialog::about_dialog(styled_window* parent) : styled_dialog("About", parent)
{
	this->add_button("Close", 0);
	this->add_button("Love it!", 1);

	this->resize(QSize(400, 200));
}
about_dialog::~about_dialog()
{
}