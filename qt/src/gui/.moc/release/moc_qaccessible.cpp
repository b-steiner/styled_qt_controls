/****************************************************************************
** Meta object code from reading C++ file 'qaccessible.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../accessible/qaccessible.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qaccessible.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAccessible_t {
    QByteArrayData data[148];
    char stringdata0[1861];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAccessible_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAccessible_t qt_meta_stringdata_QAccessible = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QAccessible"
QT_MOC_LITERAL(1, 12, 5), // "Event"
QT_MOC_LITERAL(2, 18, 11), // "SoundPlayed"
QT_MOC_LITERAL(3, 30, 5), // "Alert"
QT_MOC_LITERAL(4, 36, 17), // "ForegroundChanged"
QT_MOC_LITERAL(5, 54, 9), // "MenuStart"
QT_MOC_LITERAL(6, 64, 7), // "MenuEnd"
QT_MOC_LITERAL(7, 72, 14), // "PopupMenuStart"
QT_MOC_LITERAL(8, 87, 12), // "PopupMenuEnd"
QT_MOC_LITERAL(9, 100, 16), // "ContextHelpStart"
QT_MOC_LITERAL(10, 117, 14), // "ContextHelpEnd"
QT_MOC_LITERAL(11, 132, 13), // "DragDropStart"
QT_MOC_LITERAL(12, 146, 11), // "DragDropEnd"
QT_MOC_LITERAL(13, 158, 11), // "DialogStart"
QT_MOC_LITERAL(14, 170, 9), // "DialogEnd"
QT_MOC_LITERAL(15, 180, 14), // "ScrollingStart"
QT_MOC_LITERAL(16, 195, 12), // "ScrollingEnd"
QT_MOC_LITERAL(17, 208, 11), // "MenuCommand"
QT_MOC_LITERAL(18, 220, 13), // "ActionChanged"
QT_MOC_LITERAL(19, 234, 23), // "ActiveDescendantChanged"
QT_MOC_LITERAL(20, 258, 16), // "AttributeChanged"
QT_MOC_LITERAL(21, 275, 22), // "DocumentContentChanged"
QT_MOC_LITERAL(22, 298, 20), // "DocumentLoadComplete"
QT_MOC_LITERAL(23, 319, 19), // "DocumentLoadStopped"
QT_MOC_LITERAL(24, 339, 14), // "DocumentReload"
QT_MOC_LITERAL(25, 354, 24), // "HyperlinkEndIndexChanged"
QT_MOC_LITERAL(26, 379, 31), // "HyperlinkNumberOfAnchorsChanged"
QT_MOC_LITERAL(27, 411, 28), // "HyperlinkSelectedLinkChanged"
QT_MOC_LITERAL(28, 440, 22), // "HypertextLinkActivated"
QT_MOC_LITERAL(29, 463, 21), // "HypertextLinkSelected"
QT_MOC_LITERAL(30, 485, 26), // "HyperlinkStartIndexChanged"
QT_MOC_LITERAL(31, 512, 16), // "HypertextChanged"
QT_MOC_LITERAL(32, 529, 22), // "HypertextNLinksChanged"
QT_MOC_LITERAL(33, 552, 22), // "ObjectAttributeChanged"
QT_MOC_LITERAL(34, 575, 11), // "PageChanged"
QT_MOC_LITERAL(35, 587, 14), // "SectionChanged"
QT_MOC_LITERAL(36, 602, 19), // "TableCaptionChanged"
QT_MOC_LITERAL(37, 622, 29), // "TableColumnDescriptionChanged"
QT_MOC_LITERAL(38, 652, 24), // "TableColumnHeaderChanged"
QT_MOC_LITERAL(39, 677, 17), // "TableModelChanged"
QT_MOC_LITERAL(40, 695, 26), // "TableRowDescriptionChanged"
QT_MOC_LITERAL(41, 722, 21), // "TableRowHeaderChanged"
QT_MOC_LITERAL(42, 744, 19), // "TableSummaryChanged"
QT_MOC_LITERAL(43, 764, 20), // "TextAttributeChanged"
QT_MOC_LITERAL(44, 785, 14), // "TextCaretMoved"
QT_MOC_LITERAL(45, 800, 17), // "TextColumnChanged"
QT_MOC_LITERAL(46, 818, 12), // "TextInserted"
QT_MOC_LITERAL(47, 831, 11), // "TextRemoved"
QT_MOC_LITERAL(48, 843, 11), // "TextUpdated"
QT_MOC_LITERAL(49, 855, 20), // "TextSelectionChanged"
QT_MOC_LITERAL(50, 876, 18), // "VisibleDataChanged"
QT_MOC_LITERAL(51, 895, 13), // "ObjectCreated"
QT_MOC_LITERAL(52, 909, 15), // "ObjectDestroyed"
QT_MOC_LITERAL(53, 925, 10), // "ObjectShow"
QT_MOC_LITERAL(54, 936, 10), // "ObjectHide"
QT_MOC_LITERAL(55, 947, 13), // "ObjectReorder"
QT_MOC_LITERAL(56, 961, 5), // "Focus"
QT_MOC_LITERAL(57, 967, 9), // "Selection"
QT_MOC_LITERAL(58, 977, 12), // "SelectionAdd"
QT_MOC_LITERAL(59, 990, 15), // "SelectionRemove"
QT_MOC_LITERAL(60, 1006, 15), // "SelectionWithin"
QT_MOC_LITERAL(61, 1022, 12), // "StateChanged"
QT_MOC_LITERAL(62, 1035, 15), // "LocationChanged"
QT_MOC_LITERAL(63, 1051, 11), // "NameChanged"
QT_MOC_LITERAL(64, 1063, 18), // "DescriptionChanged"
QT_MOC_LITERAL(65, 1082, 12), // "ValueChanged"
QT_MOC_LITERAL(66, 1095, 13), // "ParentChanged"
QT_MOC_LITERAL(67, 1109, 11), // "HelpChanged"
QT_MOC_LITERAL(68, 1121, 20), // "DefaultActionChanged"
QT_MOC_LITERAL(69, 1142, 18), // "AcceleratorChanged"
QT_MOC_LITERAL(70, 1161, 12), // "InvalidEvent"
QT_MOC_LITERAL(71, 1174, 4), // "Role"
QT_MOC_LITERAL(72, 1179, 6), // "NoRole"
QT_MOC_LITERAL(73, 1186, 8), // "TitleBar"
QT_MOC_LITERAL(74, 1195, 7), // "MenuBar"
QT_MOC_LITERAL(75, 1203, 9), // "ScrollBar"
QT_MOC_LITERAL(76, 1213, 4), // "Grip"
QT_MOC_LITERAL(77, 1218, 5), // "Sound"
QT_MOC_LITERAL(78, 1224, 6), // "Cursor"
QT_MOC_LITERAL(79, 1231, 5), // "Caret"
QT_MOC_LITERAL(80, 1237, 12), // "AlertMessage"
QT_MOC_LITERAL(81, 1250, 6), // "Window"
QT_MOC_LITERAL(82, 1257, 6), // "Client"
QT_MOC_LITERAL(83, 1264, 9), // "PopupMenu"
QT_MOC_LITERAL(84, 1274, 8), // "MenuItem"
QT_MOC_LITERAL(85, 1283, 7), // "ToolTip"
QT_MOC_LITERAL(86, 1291, 11), // "Application"
QT_MOC_LITERAL(87, 1303, 8), // "Document"
QT_MOC_LITERAL(88, 1312, 4), // "Pane"
QT_MOC_LITERAL(89, 1317, 5), // "Chart"
QT_MOC_LITERAL(90, 1323, 6), // "Dialog"
QT_MOC_LITERAL(91, 1330, 6), // "Border"
QT_MOC_LITERAL(92, 1337, 8), // "Grouping"
QT_MOC_LITERAL(93, 1346, 9), // "Separator"
QT_MOC_LITERAL(94, 1356, 7), // "ToolBar"
QT_MOC_LITERAL(95, 1364, 9), // "StatusBar"
QT_MOC_LITERAL(96, 1374, 5), // "Table"
QT_MOC_LITERAL(97, 1380, 12), // "ColumnHeader"
QT_MOC_LITERAL(98, 1393, 9), // "RowHeader"
QT_MOC_LITERAL(99, 1403, 6), // "Column"
QT_MOC_LITERAL(100, 1410, 3), // "Row"
QT_MOC_LITERAL(101, 1414, 4), // "Cell"
QT_MOC_LITERAL(102, 1419, 4), // "Link"
QT_MOC_LITERAL(103, 1424, 11), // "HelpBalloon"
QT_MOC_LITERAL(104, 1436, 9), // "Assistant"
QT_MOC_LITERAL(105, 1446, 4), // "List"
QT_MOC_LITERAL(106, 1451, 8), // "ListItem"
QT_MOC_LITERAL(107, 1460, 4), // "Tree"
QT_MOC_LITERAL(108, 1465, 8), // "TreeItem"
QT_MOC_LITERAL(109, 1474, 7), // "PageTab"
QT_MOC_LITERAL(110, 1482, 12), // "PropertyPage"
QT_MOC_LITERAL(111, 1495, 9), // "Indicator"
QT_MOC_LITERAL(112, 1505, 7), // "Graphic"
QT_MOC_LITERAL(113, 1513, 10), // "StaticText"
QT_MOC_LITERAL(114, 1524, 12), // "EditableText"
QT_MOC_LITERAL(115, 1537, 6), // "Button"
QT_MOC_LITERAL(116, 1544, 10), // "PushButton"
QT_MOC_LITERAL(117, 1555, 8), // "CheckBox"
QT_MOC_LITERAL(118, 1564, 11), // "RadioButton"
QT_MOC_LITERAL(119, 1576, 8), // "ComboBox"
QT_MOC_LITERAL(120, 1585, 11), // "ProgressBar"
QT_MOC_LITERAL(121, 1597, 4), // "Dial"
QT_MOC_LITERAL(122, 1602, 11), // "HotkeyField"
QT_MOC_LITERAL(123, 1614, 6), // "Slider"
QT_MOC_LITERAL(124, 1621, 7), // "SpinBox"
QT_MOC_LITERAL(125, 1629, 6), // "Canvas"
QT_MOC_LITERAL(126, 1636, 9), // "Animation"
QT_MOC_LITERAL(127, 1646, 8), // "Equation"
QT_MOC_LITERAL(128, 1655, 14), // "ButtonDropDown"
QT_MOC_LITERAL(129, 1670, 10), // "ButtonMenu"
QT_MOC_LITERAL(130, 1681, 14), // "ButtonDropGrid"
QT_MOC_LITERAL(131, 1696, 10), // "Whitespace"
QT_MOC_LITERAL(132, 1707, 11), // "PageTabList"
QT_MOC_LITERAL(133, 1719, 5), // "Clock"
QT_MOC_LITERAL(134, 1725, 8), // "Splitter"
QT_MOC_LITERAL(135, 1734, 11), // "LayeredPane"
QT_MOC_LITERAL(136, 1746, 8), // "Terminal"
QT_MOC_LITERAL(137, 1755, 7), // "Desktop"
QT_MOC_LITERAL(138, 1763, 9), // "Paragraph"
QT_MOC_LITERAL(139, 1773, 11), // "WebDocument"
QT_MOC_LITERAL(140, 1785, 7), // "Section"
QT_MOC_LITERAL(141, 1793, 12), // "ColorChooser"
QT_MOC_LITERAL(142, 1806, 6), // "Footer"
QT_MOC_LITERAL(143, 1813, 4), // "Form"
QT_MOC_LITERAL(144, 1818, 7), // "Heading"
QT_MOC_LITERAL(145, 1826, 4), // "Note"
QT_MOC_LITERAL(146, 1831, 20), // "ComplementaryContent"
QT_MOC_LITERAL(147, 1852, 8) // "UserRole"

    },
    "QAccessible\0Event\0SoundPlayed\0Alert\0"
    "ForegroundChanged\0MenuStart\0MenuEnd\0"
    "PopupMenuStart\0PopupMenuEnd\0"
    "ContextHelpStart\0ContextHelpEnd\0"
    "DragDropStart\0DragDropEnd\0DialogStart\0"
    "DialogEnd\0ScrollingStart\0ScrollingEnd\0"
    "MenuCommand\0ActionChanged\0"
    "ActiveDescendantChanged\0AttributeChanged\0"
    "DocumentContentChanged\0DocumentLoadComplete\0"
    "DocumentLoadStopped\0DocumentReload\0"
    "HyperlinkEndIndexChanged\0"
    "HyperlinkNumberOfAnchorsChanged\0"
    "HyperlinkSelectedLinkChanged\0"
    "HypertextLinkActivated\0HypertextLinkSelected\0"
    "HyperlinkStartIndexChanged\0HypertextChanged\0"
    "HypertextNLinksChanged\0ObjectAttributeChanged\0"
    "PageChanged\0SectionChanged\0"
    "TableCaptionChanged\0TableColumnDescriptionChanged\0"
    "TableColumnHeaderChanged\0TableModelChanged\0"
    "TableRowDescriptionChanged\0"
    "TableRowHeaderChanged\0TableSummaryChanged\0"
    "TextAttributeChanged\0TextCaretMoved\0"
    "TextColumnChanged\0TextInserted\0"
    "TextRemoved\0TextUpdated\0TextSelectionChanged\0"
    "VisibleDataChanged\0ObjectCreated\0"
    "ObjectDestroyed\0ObjectShow\0ObjectHide\0"
    "ObjectReorder\0Focus\0Selection\0"
    "SelectionAdd\0SelectionRemove\0"
    "SelectionWithin\0StateChanged\0"
    "LocationChanged\0NameChanged\0"
    "DescriptionChanged\0ValueChanged\0"
    "ParentChanged\0HelpChanged\0"
    "DefaultActionChanged\0AcceleratorChanged\0"
    "InvalidEvent\0Role\0NoRole\0TitleBar\0"
    "MenuBar\0ScrollBar\0Grip\0Sound\0Cursor\0"
    "Caret\0AlertMessage\0Window\0Client\0"
    "PopupMenu\0MenuItem\0ToolTip\0Application\0"
    "Document\0Pane\0Chart\0Dialog\0Border\0"
    "Grouping\0Separator\0ToolBar\0StatusBar\0"
    "Table\0ColumnHeader\0RowHeader\0Column\0"
    "Row\0Cell\0Link\0HelpBalloon\0Assistant\0"
    "List\0ListItem\0Tree\0TreeItem\0PageTab\0"
    "PropertyPage\0Indicator\0Graphic\0"
    "StaticText\0EditableText\0Button\0"
    "PushButton\0CheckBox\0RadioButton\0"
    "ComboBox\0ProgressBar\0Dial\0HotkeyField\0"
    "Slider\0SpinBox\0Canvas\0Animation\0"
    "Equation\0ButtonDropDown\0ButtonMenu\0"
    "ButtonDropGrid\0Whitespace\0PageTabList\0"
    "Clock\0Splitter\0LayeredPane\0Terminal\0"
    "Desktop\0Paragraph\0WebDocument\0Section\0"
    "ColorChooser\0Footer\0Form\0Heading\0Note\0"
    "ComplementaryContent\0UserRole"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAccessible[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   69,   22,
      71, 0x0,   76,  160,

 // enum data: key, value
       2, uint(QAccessible::SoundPlayed),
       3, uint(QAccessible::Alert),
       4, uint(QAccessible::ForegroundChanged),
       5, uint(QAccessible::MenuStart),
       6, uint(QAccessible::MenuEnd),
       7, uint(QAccessible::PopupMenuStart),
       8, uint(QAccessible::PopupMenuEnd),
       9, uint(QAccessible::ContextHelpStart),
      10, uint(QAccessible::ContextHelpEnd),
      11, uint(QAccessible::DragDropStart),
      12, uint(QAccessible::DragDropEnd),
      13, uint(QAccessible::DialogStart),
      14, uint(QAccessible::DialogEnd),
      15, uint(QAccessible::ScrollingStart),
      16, uint(QAccessible::ScrollingEnd),
      17, uint(QAccessible::MenuCommand),
      18, uint(QAccessible::ActionChanged),
      19, uint(QAccessible::ActiveDescendantChanged),
      20, uint(QAccessible::AttributeChanged),
      21, uint(QAccessible::DocumentContentChanged),
      22, uint(QAccessible::DocumentLoadComplete),
      23, uint(QAccessible::DocumentLoadStopped),
      24, uint(QAccessible::DocumentReload),
      25, uint(QAccessible::HyperlinkEndIndexChanged),
      26, uint(QAccessible::HyperlinkNumberOfAnchorsChanged),
      27, uint(QAccessible::HyperlinkSelectedLinkChanged),
      28, uint(QAccessible::HypertextLinkActivated),
      29, uint(QAccessible::HypertextLinkSelected),
      30, uint(QAccessible::HyperlinkStartIndexChanged),
      31, uint(QAccessible::HypertextChanged),
      32, uint(QAccessible::HypertextNLinksChanged),
      33, uint(QAccessible::ObjectAttributeChanged),
      34, uint(QAccessible::PageChanged),
      35, uint(QAccessible::SectionChanged),
      36, uint(QAccessible::TableCaptionChanged),
      37, uint(QAccessible::TableColumnDescriptionChanged),
      38, uint(QAccessible::TableColumnHeaderChanged),
      39, uint(QAccessible::TableModelChanged),
      40, uint(QAccessible::TableRowDescriptionChanged),
      41, uint(QAccessible::TableRowHeaderChanged),
      42, uint(QAccessible::TableSummaryChanged),
      43, uint(QAccessible::TextAttributeChanged),
      44, uint(QAccessible::TextCaretMoved),
      45, uint(QAccessible::TextColumnChanged),
      46, uint(QAccessible::TextInserted),
      47, uint(QAccessible::TextRemoved),
      48, uint(QAccessible::TextUpdated),
      49, uint(QAccessible::TextSelectionChanged),
      50, uint(QAccessible::VisibleDataChanged),
      51, uint(QAccessible::ObjectCreated),
      52, uint(QAccessible::ObjectDestroyed),
      53, uint(QAccessible::ObjectShow),
      54, uint(QAccessible::ObjectHide),
      55, uint(QAccessible::ObjectReorder),
      56, uint(QAccessible::Focus),
      57, uint(QAccessible::Selection),
      58, uint(QAccessible::SelectionAdd),
      59, uint(QAccessible::SelectionRemove),
      60, uint(QAccessible::SelectionWithin),
      61, uint(QAccessible::StateChanged),
      62, uint(QAccessible::LocationChanged),
      63, uint(QAccessible::NameChanged),
      64, uint(QAccessible::DescriptionChanged),
      65, uint(QAccessible::ValueChanged),
      66, uint(QAccessible::ParentChanged),
      67, uint(QAccessible::HelpChanged),
      68, uint(QAccessible::DefaultActionChanged),
      69, uint(QAccessible::AcceleratorChanged),
      70, uint(QAccessible::InvalidEvent),
      72, uint(QAccessible::NoRole),
      73, uint(QAccessible::TitleBar),
      74, uint(QAccessible::MenuBar),
      75, uint(QAccessible::ScrollBar),
      76, uint(QAccessible::Grip),
      77, uint(QAccessible::Sound),
      78, uint(QAccessible::Cursor),
      79, uint(QAccessible::Caret),
      80, uint(QAccessible::AlertMessage),
      81, uint(QAccessible::Window),
      82, uint(QAccessible::Client),
      83, uint(QAccessible::PopupMenu),
      84, uint(QAccessible::MenuItem),
      85, uint(QAccessible::ToolTip),
      86, uint(QAccessible::Application),
      87, uint(QAccessible::Document),
      88, uint(QAccessible::Pane),
      89, uint(QAccessible::Chart),
      90, uint(QAccessible::Dialog),
      91, uint(QAccessible::Border),
      92, uint(QAccessible::Grouping),
      93, uint(QAccessible::Separator),
      94, uint(QAccessible::ToolBar),
      95, uint(QAccessible::StatusBar),
      96, uint(QAccessible::Table),
      97, uint(QAccessible::ColumnHeader),
      98, uint(QAccessible::RowHeader),
      99, uint(QAccessible::Column),
     100, uint(QAccessible::Row),
     101, uint(QAccessible::Cell),
     102, uint(QAccessible::Link),
     103, uint(QAccessible::HelpBalloon),
     104, uint(QAccessible::Assistant),
     105, uint(QAccessible::List),
     106, uint(QAccessible::ListItem),
     107, uint(QAccessible::Tree),
     108, uint(QAccessible::TreeItem),
     109, uint(QAccessible::PageTab),
     110, uint(QAccessible::PropertyPage),
     111, uint(QAccessible::Indicator),
     112, uint(QAccessible::Graphic),
     113, uint(QAccessible::StaticText),
     114, uint(QAccessible::EditableText),
     115, uint(QAccessible::Button),
     116, uint(QAccessible::PushButton),
     117, uint(QAccessible::CheckBox),
     118, uint(QAccessible::RadioButton),
     119, uint(QAccessible::ComboBox),
     120, uint(QAccessible::ProgressBar),
     121, uint(QAccessible::Dial),
     122, uint(QAccessible::HotkeyField),
     123, uint(QAccessible::Slider),
     124, uint(QAccessible::SpinBox),
     125, uint(QAccessible::Canvas),
     126, uint(QAccessible::Animation),
     127, uint(QAccessible::Equation),
     128, uint(QAccessible::ButtonDropDown),
     129, uint(QAccessible::ButtonMenu),
     130, uint(QAccessible::ButtonDropGrid),
     131, uint(QAccessible::Whitespace),
     132, uint(QAccessible::PageTabList),
     133, uint(QAccessible::Clock),
     134, uint(QAccessible::Splitter),
     135, uint(QAccessible::LayeredPane),
     136, uint(QAccessible::Terminal),
     137, uint(QAccessible::Desktop),
     138, uint(QAccessible::Paragraph),
     139, uint(QAccessible::WebDocument),
     140, uint(QAccessible::Section),
     141, uint(QAccessible::ColorChooser),
     142, uint(QAccessible::Footer),
     143, uint(QAccessible::Form),
     144, uint(QAccessible::Heading),
     145, uint(QAccessible::Note),
     146, uint(QAccessible::ComplementaryContent),
     147, uint(QAccessible::UserRole),

       0        // eod
};

const QMetaObject QAccessible::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QAccessible.data,
      qt_meta_data_QAccessible,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
