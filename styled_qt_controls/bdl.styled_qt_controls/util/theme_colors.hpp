#pragma once

#include "..\styled_qt_controls.hpp"

BEGIN_BDL_SQTC

namespace util
{
	/*! \brief Contains color constants used in the dark orange theme
		*
		* \author bdl
		*/
	class BDL_SQTC_EXPORT theme_colors
	{
	public:
		//! Default background color for most widgets
		static QColor normal;
		//! Color for the hightlight line of normal colored widgets
		static QColor normal_highlight;
		//! Dark background color. Used for example as background color for QLineEditor or QMenu
		static QColor dark;
		//! Color for the hightlight line of dark colored widgets
		static QColor dark_highlight;
		//! Light color for widgets. For example used for inactive selections
		static QColor light;
		//! Color for the hightlight line of light colored widgets
		static QColor light_highlight;
		//! Used as background color for content controls (e.g. QListView, QTreeView, etc.)
		static QColor content_control;

		//! Color used for active selections
		static QColor selection;
		//! Color used for highlighting active selections
		static QColor selection_highlight;
		//! Color for borders of selections
		static QColor selection_border;
		//! Color for active selections. Used for example when selected elements are pressed
		static QColor selection_dark;

		//! Default color for borders
		static QColor border;

		//! Default color for active fonts
		static QColor font;
		//! Default color for inactive fonts
		static QColor font_inactive;
			
		//! Transparency key of the underlying window. Do not use this color when you don't want the widget to be transparent.
		static QColor transparency_key;
	};
}

END_BDL_SQTC