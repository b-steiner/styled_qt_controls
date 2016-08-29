#pragma once

#include "../../styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	//! Enumeration that contains different system sounds
	enum class os_sound_type
	{
		//! The error sound
		error,
		//! The warning sound
		warning,
		//! The question sound
		question,
	};

	/*! \brief Provides methods for playing system sounds
	 *
	 * \author bdl
	 */
	class os_sound
	{
	public:
		/*! \brief Plays a sound asynchronousely
		 *
		 * \param type The sound type that should be played
		 *
		 */
		static BDL_SQTC_EXPORT void play(os_sound_type type);
	};
}

END_BDL_SQTC