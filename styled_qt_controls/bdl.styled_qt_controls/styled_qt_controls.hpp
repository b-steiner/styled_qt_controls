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

#define OEMRESOURCE

#include <sstream>
#include <Windows.h>
#include <algorithm>
#include <memory>

#include <QtCore\QHash>
#include <QtCore\QFile>
#include <QtCore\QFileinfo>
#include <QtCore\QDebug>
#include <QtCore\QThread>

#include <QtGui\QColor>
#include <QtGui\5.7.0\QtGui\qpa\qplatformnativeinterface.h>

#include <QtWidgets\QApplication>
#include <QtWidgets\QAbstractitemview>
#include <QtWidgets\QPushbutton>
#include <QtWidgets\QButtongroup>
#include <QtWidgets\QGridlayout>
#include <QtWidgets\QLabel>
#include <QtWidgets\QMenubar>
#include <QtWidgets\QSplitter>
#include <QtWidgets\QLineedit>
#include <QtWidgets\QTreeview>
#include <QtWidgets\QStyleditemdelegate>
#include <QtWidgets\QHeaderview>
#include <QtWidgets\QListview>
#include <QtWidgets\QScrollarea>
#include <QtWidgets\QScrollbar>
#include <QtWidgets\QWidgetaction>
#include <QtWidgets\QUndoCommand>
#include <QtWidgets\QButtongroup>
#include <QtWidgets\QCheckbox>
#include <QtWidgets\QMessagebox>

#include <QtXml\QDomDocument>

#include <QtWinExtras\QtWinExtras>

#pragma comment(lib, "Qt5Core.lib")
#pragma comment(lib, "Qt5Gui.lib")
#pragma comment(lib, "Qt5Xml.lib")
#pragma comment(lib, "Qt5Widgets.lib")
#pragma comment(lib, "Qt5WinExtras.lib")
#pragma comment(lib, "Shlwapi.lib")
#pragma comment(lib, "Winmm.lib")

#ifndef BDL_SQTC_BUILD
#	if _DEBUG
#		pragma comment(lib, "styled_qt_controlsD.lib")
#	else
#		pragma comment(lib, "styled_qt_controls.lib")
#	endif
#endif



#define BEGIN_BDL_SQTC namespace bdl { namespace styled_qt_controls {
#define END_BDL_SQTC }; };

#ifdef BDL_SQTC_BUILD
#define BDL_SQTC_EXPORT _declspec(dllexport)
#else
#define BDL_SQTC_EXPORT _declspec(dllimport)
#endif

#define FLAG_COMMON_OPERATIONS(type) \
	inline type operator|(type a, type b) { return static_cast<type>(static_cast<int>(a) | static_cast<int>(b)); } \
	inline type operator&(type a, type b) { return static_cast<type>(static_cast<int>(a) & static_cast<int>(b)); } \
	inline type operator~(type a) { return static_cast<type>(~static_cast<int>(a)); } \
	inline type& operator|= (type& a, const type& b) { a = a | b; return a; } \
	inline type& operator&= (type& a, const type& b) { a = a & b; return a; } \
	inline bool flag_contains(type flags, type flag) { return !(static_cast<int>(flags & flag) == 0); }

#define ISQTYPE(INSTANCE, TYPE) (INSTANCE->inherits(TYPE::staticMetaObject.className()))

#include "util\properties.hpp"
#include "util\property_extension.hpp"

#ifndef BDL_SQTC_BUILD

#include "styled_controls\clearable_line_edit.q.hpp"
#include "styled_controls\numeric_line_edit.q.hpp"
#include "styled_controls\styled_collapse_widget.q.hpp"
#include "styled_controls\styled_frame.q.hpp"
#include "styled_controls\styled_gradient_frame.q.hpp"
#include "styled_controls\styled_label.q.hpp"
#include "styled_controls\styled_list_view_item_delegate.q.hpp"
#include "styled_controls\styled_list_view.q.hpp"
#include "styled_controls\styled_pushbutton.q.hpp"
#include "styled_controls\styled_tree_view_item_delegate.q.hpp"
#include "styled_controls\styled_tree_view.q.hpp"
#include "styled_controls\styled_widget.q.hpp"
#include "styled_controls\tree_combobox.q.hpp"
#include "styled_controls\vertical_scroll_area.q.hpp"

#include "styled_window\styled_window.q.hpp"
#include "styled_window\styled_dialog.q.hpp"
#include "styled_window/styled_messagebox.hpp"

#include "styled_color_picker\styled_color_picker.q.hpp"
#include "styled_color_picker\color_item_delegate.q.hpp"
#include "styled_color_picker\color_list_item_model.q.hpp"
#include "styled_color_picker\hs_frame.q.hpp"
#include "styled_color_picker\l_frame.q.hpp"

#include "styled_dock_widget\styled_dock_widget.q.hpp"
#include "styled_dock_widget\styled_dock_splitter.q.hpp"
#include "styled_dock_widget\styled_dock_overlay.q.hpp"
#include "styled_dock_widget\styled_dock_layout.q.hpp"
#include "styled_dock_widget\styled_dock_item.q.hpp"

#include "styled_item_editor\base_editor_group.q.hpp"
#include "styled_item_editor\item_editor_group.q.hpp"
#include "styled_item_editor\item_editor_item.q.hpp"
#include "styled_item_editor\styled_item_editor.q.hpp"

#include "styled_path_widget\styled_path_widget.q.hpp"
#include "styled_path_widget\styled_path_widget_item.q.hpp"
#include "styled_path_widget\styled_path_widget_layout.q.hpp"

#include "util\qt_helper_functions.hpp"
#include "util\style_loader.hpp"
#include "util\theme_colors.hpp"
#include "util\os\file_system_watcher.q.hpp"
#include "util\os\icon_loader.hpp"
#include "util\os\os_sound.hpp"
#include "util\settings\i_settings_provider.q.hpp"
#include "util\settings\settings_group.hpp"
#include "util\settings\settings_io.hpp"

#endif