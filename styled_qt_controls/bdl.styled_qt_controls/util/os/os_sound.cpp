#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "os_sound.hpp"

using namespace bdl::styled_qt_controls::util;

void os_sound::play(os_sound_type type)
{
	switch (type)
	{
	case os_sound_type::error:
		PlaySound((LPCWSTR)SND_ALIAS_SYSTEMEXCLAMATION, NULL, SND_ALIAS_ID | SND_ASYNC);
		break;
	case os_sound_type::warning:
		PlaySound((LPCWSTR)SND_ALIAS_SYSTEMEXCLAMATION, NULL, SND_ALIAS_ID | SND_ASYNC);
		break;
	case os_sound_type::question:
		PlaySound((LPCWSTR)SND_ALIAS_SYSTEMQUESTION, NULL, SND_ALIAS_ID | SND_ASYNC);
		break;
	}
	
}
