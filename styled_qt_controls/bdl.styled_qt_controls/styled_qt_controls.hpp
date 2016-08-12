#include "util\properties.hpp"
#include "util\property_extension.hpp"

#include <sstream>
#include <Windows.h>
#include <algorithm>

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

#include <QtXml\QDomDocument>

#include <QtWinExtras\QtWinExtras>

#pragma comment(lib, "Qt5Core.lib")
#pragma comment(lib, "Qt5Gui.lib")
#pragma comment(lib, "Qt5Xml.lib")
#pragma comment(lib, "Qt5Widgets.lib")
#pragma comment(lib, "Qt5WinExtras.lib")
#pragma comment(lib, "Shlwapi.lib")

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
	inline bool flag_contains(type flags, type flag) { return !(static_cast<int>(flags & flag) == 0); }

#define ISQTYPE(INSTANCE, TYPE) (INSTANCE->inherits(TYPE::staticMetaObject.className()))