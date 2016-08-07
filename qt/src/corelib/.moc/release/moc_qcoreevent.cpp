/****************************************************************************
** Meta object code from reading C++ file 'qcoreevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qcoreevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcoreevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QEvent_t {
    QByteArrayData data[173];
    char stringdata0[2569];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QEvent_t qt_meta_stringdata_QEvent = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QEvent"
QT_MOC_LITERAL(1, 7, 4), // "Type"
QT_MOC_LITERAL(2, 12, 4), // "None"
QT_MOC_LITERAL(3, 17, 5), // "Timer"
QT_MOC_LITERAL(4, 23, 16), // "MouseButtonPress"
QT_MOC_LITERAL(5, 40, 18), // "MouseButtonRelease"
QT_MOC_LITERAL(6, 59, 19), // "MouseButtonDblClick"
QT_MOC_LITERAL(7, 79, 9), // "MouseMove"
QT_MOC_LITERAL(8, 89, 8), // "KeyPress"
QT_MOC_LITERAL(9, 98, 10), // "KeyRelease"
QT_MOC_LITERAL(10, 109, 7), // "FocusIn"
QT_MOC_LITERAL(11, 117, 8), // "FocusOut"
QT_MOC_LITERAL(12, 126, 18), // "FocusAboutToChange"
QT_MOC_LITERAL(13, 145, 5), // "Enter"
QT_MOC_LITERAL(14, 151, 5), // "Leave"
QT_MOC_LITERAL(15, 157, 5), // "Paint"
QT_MOC_LITERAL(16, 163, 4), // "Move"
QT_MOC_LITERAL(17, 168, 6), // "Resize"
QT_MOC_LITERAL(18, 175, 6), // "Create"
QT_MOC_LITERAL(19, 182, 7), // "Destroy"
QT_MOC_LITERAL(20, 190, 4), // "Show"
QT_MOC_LITERAL(21, 195, 4), // "Hide"
QT_MOC_LITERAL(22, 200, 5), // "Close"
QT_MOC_LITERAL(23, 206, 4), // "Quit"
QT_MOC_LITERAL(24, 211, 12), // "ParentChange"
QT_MOC_LITERAL(25, 224, 19), // "ParentAboutToChange"
QT_MOC_LITERAL(26, 244, 12), // "ThreadChange"
QT_MOC_LITERAL(27, 257, 14), // "WindowActivate"
QT_MOC_LITERAL(28, 272, 16), // "WindowDeactivate"
QT_MOC_LITERAL(29, 289, 12), // "ShowToParent"
QT_MOC_LITERAL(30, 302, 12), // "HideToParent"
QT_MOC_LITERAL(31, 315, 5), // "Wheel"
QT_MOC_LITERAL(32, 321, 17), // "WindowTitleChange"
QT_MOC_LITERAL(33, 339, 16), // "WindowIconChange"
QT_MOC_LITERAL(34, 356, 27), // "ApplicationWindowIconChange"
QT_MOC_LITERAL(35, 384, 21), // "ApplicationFontChange"
QT_MOC_LITERAL(36, 406, 32), // "ApplicationLayoutDirectionChange"
QT_MOC_LITERAL(37, 439, 24), // "ApplicationPaletteChange"
QT_MOC_LITERAL(38, 464, 13), // "PaletteChange"
QT_MOC_LITERAL(39, 478, 9), // "Clipboard"
QT_MOC_LITERAL(40, 488, 6), // "Speech"
QT_MOC_LITERAL(41, 495, 8), // "MetaCall"
QT_MOC_LITERAL(42, 504, 7), // "SockAct"
QT_MOC_LITERAL(43, 512, 11), // "WinEventAct"
QT_MOC_LITERAL(44, 524, 14), // "DeferredDelete"
QT_MOC_LITERAL(45, 539, 9), // "DragEnter"
QT_MOC_LITERAL(46, 549, 8), // "DragMove"
QT_MOC_LITERAL(47, 558, 9), // "DragLeave"
QT_MOC_LITERAL(48, 568, 4), // "Drop"
QT_MOC_LITERAL(49, 573, 12), // "DragResponse"
QT_MOC_LITERAL(50, 586, 10), // "ChildAdded"
QT_MOC_LITERAL(51, 597, 13), // "ChildPolished"
QT_MOC_LITERAL(52, 611, 12), // "ChildRemoved"
QT_MOC_LITERAL(53, 624, 17), // "ShowWindowRequest"
QT_MOC_LITERAL(54, 642, 13), // "PolishRequest"
QT_MOC_LITERAL(55, 656, 6), // "Polish"
QT_MOC_LITERAL(56, 663, 13), // "LayoutRequest"
QT_MOC_LITERAL(57, 677, 13), // "UpdateRequest"
QT_MOC_LITERAL(58, 691, 11), // "UpdateLater"
QT_MOC_LITERAL(59, 703, 16), // "EmbeddingControl"
QT_MOC_LITERAL(60, 720, 15), // "ActivateControl"
QT_MOC_LITERAL(61, 736, 17), // "DeactivateControl"
QT_MOC_LITERAL(62, 754, 11), // "ContextMenu"
QT_MOC_LITERAL(63, 766, 11), // "InputMethod"
QT_MOC_LITERAL(64, 778, 10), // "TabletMove"
QT_MOC_LITERAL(65, 789, 12), // "LocaleChange"
QT_MOC_LITERAL(66, 802, 14), // "LanguageChange"
QT_MOC_LITERAL(67, 817, 21), // "LayoutDirectionChange"
QT_MOC_LITERAL(68, 839, 5), // "Style"
QT_MOC_LITERAL(69, 845, 11), // "TabletPress"
QT_MOC_LITERAL(70, 857, 13), // "TabletRelease"
QT_MOC_LITERAL(71, 871, 9), // "OkRequest"
QT_MOC_LITERAL(72, 881, 11), // "HelpRequest"
QT_MOC_LITERAL(73, 893, 8), // "IconDrag"
QT_MOC_LITERAL(74, 902, 10), // "FontChange"
QT_MOC_LITERAL(75, 913, 13), // "EnabledChange"
QT_MOC_LITERAL(76, 927, 16), // "ActivationChange"
QT_MOC_LITERAL(77, 944, 11), // "StyleChange"
QT_MOC_LITERAL(78, 956, 14), // "IconTextChange"
QT_MOC_LITERAL(79, 971, 14), // "ModifiedChange"
QT_MOC_LITERAL(80, 986, 19), // "MouseTrackingChange"
QT_MOC_LITERAL(81, 1006, 13), // "WindowBlocked"
QT_MOC_LITERAL(82, 1020, 15), // "WindowUnblocked"
QT_MOC_LITERAL(83, 1036, 17), // "WindowStateChange"
QT_MOC_LITERAL(84, 1054, 14), // "ReadOnlyChange"
QT_MOC_LITERAL(85, 1069, 7), // "ToolTip"
QT_MOC_LITERAL(86, 1077, 9), // "WhatsThis"
QT_MOC_LITERAL(87, 1087, 9), // "StatusTip"
QT_MOC_LITERAL(88, 1097, 13), // "ActionChanged"
QT_MOC_LITERAL(89, 1111, 11), // "ActionAdded"
QT_MOC_LITERAL(90, 1123, 13), // "ActionRemoved"
QT_MOC_LITERAL(91, 1137, 8), // "FileOpen"
QT_MOC_LITERAL(92, 1146, 8), // "Shortcut"
QT_MOC_LITERAL(93, 1155, 16), // "ShortcutOverride"
QT_MOC_LITERAL(94, 1172, 16), // "WhatsThisClicked"
QT_MOC_LITERAL(95, 1189, 13), // "ToolBarChange"
QT_MOC_LITERAL(96, 1203, 19), // "ApplicationActivate"
QT_MOC_LITERAL(97, 1223, 20), // "ApplicationActivated"
QT_MOC_LITERAL(98, 1244, 21), // "ApplicationDeactivate"
QT_MOC_LITERAL(99, 1266, 22), // "ApplicationDeactivated"
QT_MOC_LITERAL(100, 1289, 14), // "QueryWhatsThis"
QT_MOC_LITERAL(101, 1304, 18), // "EnterWhatsThisMode"
QT_MOC_LITERAL(102, 1323, 18), // "LeaveWhatsThisMode"
QT_MOC_LITERAL(103, 1342, 12), // "ZOrderChange"
QT_MOC_LITERAL(104, 1355, 10), // "HoverEnter"
QT_MOC_LITERAL(105, 1366, 10), // "HoverLeave"
QT_MOC_LITERAL(106, 1377, 9), // "HoverMove"
QT_MOC_LITERAL(107, 1387, 17), // "AcceptDropsChange"
QT_MOC_LITERAL(108, 1405, 14), // "ZeroTimerEvent"
QT_MOC_LITERAL(109, 1420, 22), // "GraphicsSceneMouseMove"
QT_MOC_LITERAL(110, 1443, 23), // "GraphicsSceneMousePress"
QT_MOC_LITERAL(111, 1467, 25), // "GraphicsSceneMouseRelease"
QT_MOC_LITERAL(112, 1493, 29), // "GraphicsSceneMouseDoubleClick"
QT_MOC_LITERAL(113, 1523, 24), // "GraphicsSceneContextMenu"
QT_MOC_LITERAL(114, 1548, 23), // "GraphicsSceneHoverEnter"
QT_MOC_LITERAL(115, 1572, 22), // "GraphicsSceneHoverMove"
QT_MOC_LITERAL(116, 1595, 23), // "GraphicsSceneHoverLeave"
QT_MOC_LITERAL(117, 1619, 17), // "GraphicsSceneHelp"
QT_MOC_LITERAL(118, 1637, 22), // "GraphicsSceneDragEnter"
QT_MOC_LITERAL(119, 1660, 21), // "GraphicsSceneDragMove"
QT_MOC_LITERAL(120, 1682, 22), // "GraphicsSceneDragLeave"
QT_MOC_LITERAL(121, 1705, 17), // "GraphicsSceneDrop"
QT_MOC_LITERAL(122, 1723, 18), // "GraphicsSceneWheel"
QT_MOC_LITERAL(123, 1742, 20), // "KeyboardLayoutChange"
QT_MOC_LITERAL(124, 1763, 21), // "DynamicPropertyChange"
QT_MOC_LITERAL(125, 1785, 20), // "TabletEnterProximity"
QT_MOC_LITERAL(126, 1806, 20), // "TabletLeaveProximity"
QT_MOC_LITERAL(127, 1827, 22), // "NonClientAreaMouseMove"
QT_MOC_LITERAL(128, 1850, 29), // "NonClientAreaMouseButtonPress"
QT_MOC_LITERAL(129, 1880, 31), // "NonClientAreaMouseButtonRelease"
QT_MOC_LITERAL(130, 1912, 32), // "NonClientAreaMouseButtonDblClick"
QT_MOC_LITERAL(131, 1945, 13), // "MacSizeChange"
QT_MOC_LITERAL(132, 1959, 18), // "ContentsRectChange"
QT_MOC_LITERAL(133, 1978, 17), // "MacGLWindowChange"
QT_MOC_LITERAL(134, 1996, 13), // "FutureCallOut"
QT_MOC_LITERAL(135, 2010, 19), // "GraphicsSceneResize"
QT_MOC_LITERAL(136, 2030, 17), // "GraphicsSceneMove"
QT_MOC_LITERAL(137, 2048, 12), // "CursorChange"
QT_MOC_LITERAL(138, 2061, 13), // "ToolTipChange"
QT_MOC_LITERAL(139, 2075, 19), // "NetworkReplyUpdated"
QT_MOC_LITERAL(140, 2095, 9), // "GrabMouse"
QT_MOC_LITERAL(141, 2105, 11), // "UngrabMouse"
QT_MOC_LITERAL(142, 2117, 12), // "GrabKeyboard"
QT_MOC_LITERAL(143, 2130, 14), // "UngrabKeyboard"
QT_MOC_LITERAL(144, 2145, 18), // "MacGLClearDrawable"
QT_MOC_LITERAL(145, 2164, 18), // "StateMachineSignal"
QT_MOC_LITERAL(146, 2183, 19), // "StateMachineWrapped"
QT_MOC_LITERAL(147, 2203, 10), // "TouchBegin"
QT_MOC_LITERAL(148, 2214, 11), // "TouchUpdate"
QT_MOC_LITERAL(149, 2226, 8), // "TouchEnd"
QT_MOC_LITERAL(150, 2235, 13), // "NativeGesture"
QT_MOC_LITERAL(151, 2249, 25), // "RequestSoftwareInputPanel"
QT_MOC_LITERAL(152, 2275, 23), // "CloseSoftwareInputPanel"
QT_MOC_LITERAL(153, 2299, 11), // "WinIdChange"
QT_MOC_LITERAL(154, 2311, 7), // "Gesture"
QT_MOC_LITERAL(155, 2319, 15), // "GestureOverride"
QT_MOC_LITERAL(156, 2335, 13), // "ScrollPrepare"
QT_MOC_LITERAL(157, 2349, 6), // "Scroll"
QT_MOC_LITERAL(158, 2356, 6), // "Expose"
QT_MOC_LITERAL(159, 2363, 16), // "InputMethodQuery"
QT_MOC_LITERAL(160, 2380, 17), // "OrientationChange"
QT_MOC_LITERAL(161, 2398, 11), // "TouchCancel"
QT_MOC_LITERAL(162, 2410, 11), // "ThemeChange"
QT_MOC_LITERAL(163, 2422, 9), // "SockClose"
QT_MOC_LITERAL(164, 2432, 13), // "PlatformPanel"
QT_MOC_LITERAL(165, 2446, 20), // "StyleAnimationUpdate"
QT_MOC_LITERAL(166, 2467, 22), // "ApplicationStateChange"
QT_MOC_LITERAL(167, 2490, 20), // "WindowChangeInternal"
QT_MOC_LITERAL(168, 2511, 20), // "ScreenChangeInternal"
QT_MOC_LITERAL(169, 2532, 15), // "PlatformSurface"
QT_MOC_LITERAL(170, 2548, 7), // "Pointer"
QT_MOC_LITERAL(171, 2556, 4), // "User"
QT_MOC_LITERAL(172, 2561, 7) // "MaxUser"

    },
    "QEvent\0Type\0None\0Timer\0MouseButtonPress\0"
    "MouseButtonRelease\0MouseButtonDblClick\0"
    "MouseMove\0KeyPress\0KeyRelease\0FocusIn\0"
    "FocusOut\0FocusAboutToChange\0Enter\0"
    "Leave\0Paint\0Move\0Resize\0Create\0Destroy\0"
    "Show\0Hide\0Close\0Quit\0ParentChange\0"
    "ParentAboutToChange\0ThreadChange\0"
    "WindowActivate\0WindowDeactivate\0"
    "ShowToParent\0HideToParent\0Wheel\0"
    "WindowTitleChange\0WindowIconChange\0"
    "ApplicationWindowIconChange\0"
    "ApplicationFontChange\0"
    "ApplicationLayoutDirectionChange\0"
    "ApplicationPaletteChange\0PaletteChange\0"
    "Clipboard\0Speech\0MetaCall\0SockAct\0"
    "WinEventAct\0DeferredDelete\0DragEnter\0"
    "DragMove\0DragLeave\0Drop\0DragResponse\0"
    "ChildAdded\0ChildPolished\0ChildRemoved\0"
    "ShowWindowRequest\0PolishRequest\0Polish\0"
    "LayoutRequest\0UpdateRequest\0UpdateLater\0"
    "EmbeddingControl\0ActivateControl\0"
    "DeactivateControl\0ContextMenu\0InputMethod\0"
    "TabletMove\0LocaleChange\0LanguageChange\0"
    "LayoutDirectionChange\0Style\0TabletPress\0"
    "TabletRelease\0OkRequest\0HelpRequest\0"
    "IconDrag\0FontChange\0EnabledChange\0"
    "ActivationChange\0StyleChange\0"
    "IconTextChange\0ModifiedChange\0"
    "MouseTrackingChange\0WindowBlocked\0"
    "WindowUnblocked\0WindowStateChange\0"
    "ReadOnlyChange\0ToolTip\0WhatsThis\0"
    "StatusTip\0ActionChanged\0ActionAdded\0"
    "ActionRemoved\0FileOpen\0Shortcut\0"
    "ShortcutOverride\0WhatsThisClicked\0"
    "ToolBarChange\0ApplicationActivate\0"
    "ApplicationActivated\0ApplicationDeactivate\0"
    "ApplicationDeactivated\0QueryWhatsThis\0"
    "EnterWhatsThisMode\0LeaveWhatsThisMode\0"
    "ZOrderChange\0HoverEnter\0HoverLeave\0"
    "HoverMove\0AcceptDropsChange\0ZeroTimerEvent\0"
    "GraphicsSceneMouseMove\0GraphicsSceneMousePress\0"
    "GraphicsSceneMouseRelease\0"
    "GraphicsSceneMouseDoubleClick\0"
    "GraphicsSceneContextMenu\0"
    "GraphicsSceneHoverEnter\0GraphicsSceneHoverMove\0"
    "GraphicsSceneHoverLeave\0GraphicsSceneHelp\0"
    "GraphicsSceneDragEnter\0GraphicsSceneDragMove\0"
    "GraphicsSceneDragLeave\0GraphicsSceneDrop\0"
    "GraphicsSceneWheel\0KeyboardLayoutChange\0"
    "DynamicPropertyChange\0TabletEnterProximity\0"
    "TabletLeaveProximity\0NonClientAreaMouseMove\0"
    "NonClientAreaMouseButtonPress\0"
    "NonClientAreaMouseButtonRelease\0"
    "NonClientAreaMouseButtonDblClick\0"
    "MacSizeChange\0ContentsRectChange\0"
    "MacGLWindowChange\0FutureCallOut\0"
    "GraphicsSceneResize\0GraphicsSceneMove\0"
    "CursorChange\0ToolTipChange\0"
    "NetworkReplyUpdated\0GrabMouse\0UngrabMouse\0"
    "GrabKeyboard\0UngrabKeyboard\0"
    "MacGLClearDrawable\0StateMachineSignal\0"
    "StateMachineWrapped\0TouchBegin\0"
    "TouchUpdate\0TouchEnd\0NativeGesture\0"
    "RequestSoftwareInputPanel\0"
    "CloseSoftwareInputPanel\0WinIdChange\0"
    "Gesture\0GestureOverride\0ScrollPrepare\0"
    "Scroll\0Expose\0InputMethodQuery\0"
    "OrientationChange\0TouchCancel\0ThemeChange\0"
    "SockClose\0PlatformPanel\0StyleAnimationUpdate\0"
    "ApplicationStateChange\0WindowChangeInternal\0"
    "ScreenChangeInternal\0PlatformSurface\0"
    "Pointer\0User\0MaxUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QEvent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,  171,   18,

 // enum data: key, value
       2, uint(QEvent::None),
       3, uint(QEvent::Timer),
       4, uint(QEvent::MouseButtonPress),
       5, uint(QEvent::MouseButtonRelease),
       6, uint(QEvent::MouseButtonDblClick),
       7, uint(QEvent::MouseMove),
       8, uint(QEvent::KeyPress),
       9, uint(QEvent::KeyRelease),
      10, uint(QEvent::FocusIn),
      11, uint(QEvent::FocusOut),
      12, uint(QEvent::FocusAboutToChange),
      13, uint(QEvent::Enter),
      14, uint(QEvent::Leave),
      15, uint(QEvent::Paint),
      16, uint(QEvent::Move),
      17, uint(QEvent::Resize),
      18, uint(QEvent::Create),
      19, uint(QEvent::Destroy),
      20, uint(QEvent::Show),
      21, uint(QEvent::Hide),
      22, uint(QEvent::Close),
      23, uint(QEvent::Quit),
      24, uint(QEvent::ParentChange),
      25, uint(QEvent::ParentAboutToChange),
      26, uint(QEvent::ThreadChange),
      27, uint(QEvent::WindowActivate),
      28, uint(QEvent::WindowDeactivate),
      29, uint(QEvent::ShowToParent),
      30, uint(QEvent::HideToParent),
      31, uint(QEvent::Wheel),
      32, uint(QEvent::WindowTitleChange),
      33, uint(QEvent::WindowIconChange),
      34, uint(QEvent::ApplicationWindowIconChange),
      35, uint(QEvent::ApplicationFontChange),
      36, uint(QEvent::ApplicationLayoutDirectionChange),
      37, uint(QEvent::ApplicationPaletteChange),
      38, uint(QEvent::PaletteChange),
      39, uint(QEvent::Clipboard),
      40, uint(QEvent::Speech),
      41, uint(QEvent::MetaCall),
      42, uint(QEvent::SockAct),
      43, uint(QEvent::WinEventAct),
      44, uint(QEvent::DeferredDelete),
      45, uint(QEvent::DragEnter),
      46, uint(QEvent::DragMove),
      47, uint(QEvent::DragLeave),
      48, uint(QEvent::Drop),
      49, uint(QEvent::DragResponse),
      50, uint(QEvent::ChildAdded),
      51, uint(QEvent::ChildPolished),
      52, uint(QEvent::ChildRemoved),
      53, uint(QEvent::ShowWindowRequest),
      54, uint(QEvent::PolishRequest),
      55, uint(QEvent::Polish),
      56, uint(QEvent::LayoutRequest),
      57, uint(QEvent::UpdateRequest),
      58, uint(QEvent::UpdateLater),
      59, uint(QEvent::EmbeddingControl),
      60, uint(QEvent::ActivateControl),
      61, uint(QEvent::DeactivateControl),
      62, uint(QEvent::ContextMenu),
      63, uint(QEvent::InputMethod),
      64, uint(QEvent::TabletMove),
      65, uint(QEvent::LocaleChange),
      66, uint(QEvent::LanguageChange),
      67, uint(QEvent::LayoutDirectionChange),
      68, uint(QEvent::Style),
      69, uint(QEvent::TabletPress),
      70, uint(QEvent::TabletRelease),
      71, uint(QEvent::OkRequest),
      72, uint(QEvent::HelpRequest),
      73, uint(QEvent::IconDrag),
      74, uint(QEvent::FontChange),
      75, uint(QEvent::EnabledChange),
      76, uint(QEvent::ActivationChange),
      77, uint(QEvent::StyleChange),
      78, uint(QEvent::IconTextChange),
      79, uint(QEvent::ModifiedChange),
      80, uint(QEvent::MouseTrackingChange),
      81, uint(QEvent::WindowBlocked),
      82, uint(QEvent::WindowUnblocked),
      83, uint(QEvent::WindowStateChange),
      84, uint(QEvent::ReadOnlyChange),
      85, uint(QEvent::ToolTip),
      86, uint(QEvent::WhatsThis),
      87, uint(QEvent::StatusTip),
      88, uint(QEvent::ActionChanged),
      89, uint(QEvent::ActionAdded),
      90, uint(QEvent::ActionRemoved),
      91, uint(QEvent::FileOpen),
      92, uint(QEvent::Shortcut),
      93, uint(QEvent::ShortcutOverride),
      94, uint(QEvent::WhatsThisClicked),
      95, uint(QEvent::ToolBarChange),
      96, uint(QEvent::ApplicationActivate),
      97, uint(QEvent::ApplicationActivated),
      98, uint(QEvent::ApplicationDeactivate),
      99, uint(QEvent::ApplicationDeactivated),
     100, uint(QEvent::QueryWhatsThis),
     101, uint(QEvent::EnterWhatsThisMode),
     102, uint(QEvent::LeaveWhatsThisMode),
     103, uint(QEvent::ZOrderChange),
     104, uint(QEvent::HoverEnter),
     105, uint(QEvent::HoverLeave),
     106, uint(QEvent::HoverMove),
     107, uint(QEvent::AcceptDropsChange),
     108, uint(QEvent::ZeroTimerEvent),
     109, uint(QEvent::GraphicsSceneMouseMove),
     110, uint(QEvent::GraphicsSceneMousePress),
     111, uint(QEvent::GraphicsSceneMouseRelease),
     112, uint(QEvent::GraphicsSceneMouseDoubleClick),
     113, uint(QEvent::GraphicsSceneContextMenu),
     114, uint(QEvent::GraphicsSceneHoverEnter),
     115, uint(QEvent::GraphicsSceneHoverMove),
     116, uint(QEvent::GraphicsSceneHoverLeave),
     117, uint(QEvent::GraphicsSceneHelp),
     118, uint(QEvent::GraphicsSceneDragEnter),
     119, uint(QEvent::GraphicsSceneDragMove),
     120, uint(QEvent::GraphicsSceneDragLeave),
     121, uint(QEvent::GraphicsSceneDrop),
     122, uint(QEvent::GraphicsSceneWheel),
     123, uint(QEvent::KeyboardLayoutChange),
     124, uint(QEvent::DynamicPropertyChange),
     125, uint(QEvent::TabletEnterProximity),
     126, uint(QEvent::TabletLeaveProximity),
     127, uint(QEvent::NonClientAreaMouseMove),
     128, uint(QEvent::NonClientAreaMouseButtonPress),
     129, uint(QEvent::NonClientAreaMouseButtonRelease),
     130, uint(QEvent::NonClientAreaMouseButtonDblClick),
     131, uint(QEvent::MacSizeChange),
     132, uint(QEvent::ContentsRectChange),
     133, uint(QEvent::MacGLWindowChange),
     134, uint(QEvent::FutureCallOut),
     135, uint(QEvent::GraphicsSceneResize),
     136, uint(QEvent::GraphicsSceneMove),
     137, uint(QEvent::CursorChange),
     138, uint(QEvent::ToolTipChange),
     139, uint(QEvent::NetworkReplyUpdated),
     140, uint(QEvent::GrabMouse),
     141, uint(QEvent::UngrabMouse),
     142, uint(QEvent::GrabKeyboard),
     143, uint(QEvent::UngrabKeyboard),
     144, uint(QEvent::MacGLClearDrawable),
     145, uint(QEvent::StateMachineSignal),
     146, uint(QEvent::StateMachineWrapped),
     147, uint(QEvent::TouchBegin),
     148, uint(QEvent::TouchUpdate),
     149, uint(QEvent::TouchEnd),
     150, uint(QEvent::NativeGesture),
     151, uint(QEvent::RequestSoftwareInputPanel),
     152, uint(QEvent::CloseSoftwareInputPanel),
     153, uint(QEvent::WinIdChange),
     154, uint(QEvent::Gesture),
     155, uint(QEvent::GestureOverride),
     156, uint(QEvent::ScrollPrepare),
     157, uint(QEvent::Scroll),
     158, uint(QEvent::Expose),
     159, uint(QEvent::InputMethodQuery),
     160, uint(QEvent::OrientationChange),
     161, uint(QEvent::TouchCancel),
     162, uint(QEvent::ThemeChange),
     163, uint(QEvent::SockClose),
     164, uint(QEvent::PlatformPanel),
     165, uint(QEvent::StyleAnimationUpdate),
     166, uint(QEvent::ApplicationStateChange),
     167, uint(QEvent::WindowChangeInternal),
     168, uint(QEvent::ScreenChangeInternal),
     169, uint(QEvent::PlatformSurface),
     170, uint(QEvent::Pointer),
     171, uint(QEvent::User),
     172, uint(QEvent::MaxUser),

       0        // eod
};

const QMetaObject QEvent::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QEvent.data,
      qt_meta_data_QEvent,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
