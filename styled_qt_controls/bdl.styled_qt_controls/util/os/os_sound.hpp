/**************************************************************************************
**
** Copyright (C) 2016 Bernhard Steiner
**
** This file is part of the styled_qt_controls library
**
** This product is licensed under the GNU General Public License version 3.
** The license is as published by the Free Software Foundation published at
** https://www.gnu.org/licenses/gpl-3.0.html.
**
** Alternatively, this product is licensed under the GNU Lesser General Public
** License version 3 for non-commercial use. The license is as published by the
** Free Software Foundation published at https://www.gnu.org/licenses/lgpl-3.0.html.
**
** Feel free to contact us if you have any questions about licensing or want
** to use the library in a commercial closed source product.
**
**************************************************************************************/

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