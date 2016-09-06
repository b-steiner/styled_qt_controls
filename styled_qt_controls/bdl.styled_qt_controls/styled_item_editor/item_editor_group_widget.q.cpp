#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "item_editor_group_widget.q.hpp"

using namespace bdl::styled_qt_controls;
using namespace bdl::styled_qt_controls::util;

item_editor_group_widget::item_editor_group_widget() { }

item_editor_group_widget::~item_editor_group_widget() { }

util::settings_group * item_editor_group_widget::save_settings()
{
	return nullptr;
}

void item_editor_group_widget::load_settings(util::settings_group * group)
{
}
