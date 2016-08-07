/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemviews/qabstractitemview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractItemView_t {
    QByteArrayData data[115];
    char stringdata0[1625];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractItemView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractItemView_t qt_meta_stringdata_QAbstractItemView = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QAbstractItemView"
QT_MOC_LITERAL(1, 18, 7), // "pressed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 7), // "clicked"
QT_MOC_LITERAL(5, 41, 13), // "doubleClicked"
QT_MOC_LITERAL(6, 55, 9), // "activated"
QT_MOC_LITERAL(7, 65, 7), // "entered"
QT_MOC_LITERAL(8, 73, 15), // "viewportEntered"
QT_MOC_LITERAL(9, 89, 15), // "iconSizeChanged"
QT_MOC_LITERAL(10, 105, 4), // "size"
QT_MOC_LITERAL(11, 110, 5), // "reset"
QT_MOC_LITERAL(12, 116, 12), // "setRootIndex"
QT_MOC_LITERAL(13, 129, 13), // "doItemsLayout"
QT_MOC_LITERAL(14, 143, 9), // "selectAll"
QT_MOC_LITERAL(15, 153, 4), // "edit"
QT_MOC_LITERAL(16, 158, 14), // "clearSelection"
QT_MOC_LITERAL(17, 173, 15), // "setCurrentIndex"
QT_MOC_LITERAL(18, 189, 11), // "scrollToTop"
QT_MOC_LITERAL(19, 201, 14), // "scrollToBottom"
QT_MOC_LITERAL(20, 216, 6), // "update"
QT_MOC_LITERAL(21, 223, 11), // "dataChanged"
QT_MOC_LITERAL(22, 235, 7), // "topLeft"
QT_MOC_LITERAL(23, 243, 11), // "bottomRight"
QT_MOC_LITERAL(24, 255, 12), // "QVector<int>"
QT_MOC_LITERAL(25, 268, 5), // "roles"
QT_MOC_LITERAL(26, 274, 12), // "rowsInserted"
QT_MOC_LITERAL(27, 287, 6), // "parent"
QT_MOC_LITERAL(28, 294, 5), // "start"
QT_MOC_LITERAL(29, 300, 3), // "end"
QT_MOC_LITERAL(30, 304, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(31, 325, 16), // "selectionChanged"
QT_MOC_LITERAL(32, 342, 14), // "QItemSelection"
QT_MOC_LITERAL(33, 357, 8), // "selected"
QT_MOC_LITERAL(34, 366, 10), // "deselected"
QT_MOC_LITERAL(35, 377, 14), // "currentChanged"
QT_MOC_LITERAL(36, 392, 7), // "current"
QT_MOC_LITERAL(37, 400, 8), // "previous"
QT_MOC_LITERAL(38, 409, 16), // "updateEditorData"
QT_MOC_LITERAL(39, 426, 22), // "updateEditorGeometries"
QT_MOC_LITERAL(40, 449, 16), // "updateGeometries"
QT_MOC_LITERAL(41, 466, 23), // "verticalScrollbarAction"
QT_MOC_LITERAL(42, 490, 6), // "action"
QT_MOC_LITERAL(43, 497, 25), // "horizontalScrollbarAction"
QT_MOC_LITERAL(44, 523, 29), // "verticalScrollbarValueChanged"
QT_MOC_LITERAL(45, 553, 5), // "value"
QT_MOC_LITERAL(46, 559, 31), // "horizontalScrollbarValueChanged"
QT_MOC_LITERAL(47, 591, 11), // "closeEditor"
QT_MOC_LITERAL(48, 603, 8), // "QWidget*"
QT_MOC_LITERAL(49, 612, 6), // "editor"
QT_MOC_LITERAL(50, 619, 34), // "QAbstractItemDelegate::EndEdi..."
QT_MOC_LITERAL(51, 654, 4), // "hint"
QT_MOC_LITERAL(52, 659, 10), // "commitData"
QT_MOC_LITERAL(53, 670, 15), // "editorDestroyed"
QT_MOC_LITERAL(54, 686, 26), // "_q_columnsAboutToBeRemoved"
QT_MOC_LITERAL(55, 713, 17), // "_q_columnsRemoved"
QT_MOC_LITERAL(56, 731, 18), // "_q_columnsInserted"
QT_MOC_LITERAL(57, 750, 15), // "_q_rowsInserted"
QT_MOC_LITERAL(58, 766, 14), // "_q_rowsRemoved"
QT_MOC_LITERAL(59, 781, 15), // "_q_columnsMoved"
QT_MOC_LITERAL(60, 797, 12), // "_q_rowsMoved"
QT_MOC_LITERAL(61, 810, 17), // "_q_modelDestroyed"
QT_MOC_LITERAL(62, 828, 16), // "_q_layoutChanged"
QT_MOC_LITERAL(63, 845, 20), // "_q_headerDataChanged"
QT_MOC_LITERAL(64, 866, 23), // "_q_scrollerStateChanged"
QT_MOC_LITERAL(65, 890, 10), // "autoScroll"
QT_MOC_LITERAL(66, 901, 16), // "autoScrollMargin"
QT_MOC_LITERAL(67, 918, 12), // "editTriggers"
QT_MOC_LITERAL(68, 931, 12), // "EditTriggers"
QT_MOC_LITERAL(69, 944, 16), // "tabKeyNavigation"
QT_MOC_LITERAL(70, 961, 17), // "showDropIndicator"
QT_MOC_LITERAL(71, 979, 11), // "dragEnabled"
QT_MOC_LITERAL(72, 991, 21), // "dragDropOverwriteMode"
QT_MOC_LITERAL(73, 1013, 12), // "dragDropMode"
QT_MOC_LITERAL(74, 1026, 12), // "DragDropMode"
QT_MOC_LITERAL(75, 1039, 17), // "defaultDropAction"
QT_MOC_LITERAL(76, 1057, 14), // "Qt::DropAction"
QT_MOC_LITERAL(77, 1072, 20), // "alternatingRowColors"
QT_MOC_LITERAL(78, 1093, 13), // "selectionMode"
QT_MOC_LITERAL(79, 1107, 13), // "SelectionMode"
QT_MOC_LITERAL(80, 1121, 17), // "selectionBehavior"
QT_MOC_LITERAL(81, 1139, 17), // "SelectionBehavior"
QT_MOC_LITERAL(82, 1157, 8), // "iconSize"
QT_MOC_LITERAL(83, 1166, 13), // "textElideMode"
QT_MOC_LITERAL(84, 1180, 17), // "Qt::TextElideMode"
QT_MOC_LITERAL(85, 1198, 18), // "verticalScrollMode"
QT_MOC_LITERAL(86, 1217, 10), // "ScrollMode"
QT_MOC_LITERAL(87, 1228, 20), // "horizontalScrollMode"
QT_MOC_LITERAL(88, 1249, 11), // "NoSelection"
QT_MOC_LITERAL(89, 1261, 15), // "SingleSelection"
QT_MOC_LITERAL(90, 1277, 14), // "MultiSelection"
QT_MOC_LITERAL(91, 1292, 17), // "ExtendedSelection"
QT_MOC_LITERAL(92, 1310, 19), // "ContiguousSelection"
QT_MOC_LITERAL(93, 1330, 11), // "SelectItems"
QT_MOC_LITERAL(94, 1342, 10), // "SelectRows"
QT_MOC_LITERAL(95, 1353, 13), // "SelectColumns"
QT_MOC_LITERAL(96, 1367, 10), // "ScrollHint"
QT_MOC_LITERAL(97, 1378, 13), // "EnsureVisible"
QT_MOC_LITERAL(98, 1392, 13), // "PositionAtTop"
QT_MOC_LITERAL(99, 1406, 16), // "PositionAtBottom"
QT_MOC_LITERAL(100, 1423, 16), // "PositionAtCenter"
QT_MOC_LITERAL(101, 1440, 14), // "NoEditTriggers"
QT_MOC_LITERAL(102, 1455, 14), // "CurrentChanged"
QT_MOC_LITERAL(103, 1470, 13), // "DoubleClicked"
QT_MOC_LITERAL(104, 1484, 15), // "SelectedClicked"
QT_MOC_LITERAL(105, 1500, 14), // "EditKeyPressed"
QT_MOC_LITERAL(106, 1515, 13), // "AnyKeyPressed"
QT_MOC_LITERAL(107, 1529, 15), // "AllEditTriggers"
QT_MOC_LITERAL(108, 1545, 13), // "ScrollPerItem"
QT_MOC_LITERAL(109, 1559, 14), // "ScrollPerPixel"
QT_MOC_LITERAL(110, 1574, 10), // "NoDragDrop"
QT_MOC_LITERAL(111, 1585, 8), // "DragOnly"
QT_MOC_LITERAL(112, 1594, 8), // "DropOnly"
QT_MOC_LITERAL(113, 1603, 8), // "DragDrop"
QT_MOC_LITERAL(114, 1612, 12) // "InternalMove"

    },
    "QAbstractItemView\0pressed\0\0index\0"
    "clicked\0doubleClicked\0activated\0entered\0"
    "viewportEntered\0iconSizeChanged\0size\0"
    "reset\0setRootIndex\0doItemsLayout\0"
    "selectAll\0edit\0clearSelection\0"
    "setCurrentIndex\0scrollToTop\0scrollToBottom\0"
    "update\0dataChanged\0topLeft\0bottomRight\0"
    "QVector<int>\0roles\0rowsInserted\0parent\0"
    "start\0end\0rowsAboutToBeRemoved\0"
    "selectionChanged\0QItemSelection\0"
    "selected\0deselected\0currentChanged\0"
    "current\0previous\0updateEditorData\0"
    "updateEditorGeometries\0updateGeometries\0"
    "verticalScrollbarAction\0action\0"
    "horizontalScrollbarAction\0"
    "verticalScrollbarValueChanged\0value\0"
    "horizontalScrollbarValueChanged\0"
    "closeEditor\0QWidget*\0editor\0"
    "QAbstractItemDelegate::EndEditHint\0"
    "hint\0commitData\0editorDestroyed\0"
    "_q_columnsAboutToBeRemoved\0_q_columnsRemoved\0"
    "_q_columnsInserted\0_q_rowsInserted\0"
    "_q_rowsRemoved\0_q_columnsMoved\0"
    "_q_rowsMoved\0_q_modelDestroyed\0"
    "_q_layoutChanged\0_q_headerDataChanged\0"
    "_q_scrollerStateChanged\0autoScroll\0"
    "autoScrollMargin\0editTriggers\0"
    "EditTriggers\0tabKeyNavigation\0"
    "showDropIndicator\0dragEnabled\0"
    "dragDropOverwriteMode\0dragDropMode\0"
    "DragDropMode\0defaultDropAction\0"
    "Qt::DropAction\0alternatingRowColors\0"
    "selectionMode\0SelectionMode\0"
    "selectionBehavior\0SelectionBehavior\0"
    "iconSize\0textElideMode\0Qt::TextElideMode\0"
    "verticalScrollMode\0ScrollMode\0"
    "horizontalScrollMode\0NoSelection\0"
    "SingleSelection\0MultiSelection\0"
    "ExtendedSelection\0ContiguousSelection\0"
    "SelectItems\0SelectRows\0SelectColumns\0"
    "ScrollHint\0EnsureVisible\0PositionAtTop\0"
    "PositionAtBottom\0PositionAtCenter\0"
    "NoEditTriggers\0CurrentChanged\0"
    "DoubleClicked\0SelectedClicked\0"
    "EditKeyPressed\0AnyKeyPressed\0"
    "AllEditTriggers\0ScrollPerItem\0"
    "ScrollPerPixel\0NoDragDrop\0DragOnly\0"
    "DropOnly\0DragDrop\0InternalMove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractItemView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
      16,  394, // properties
       6,  458, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       4,    1,  237,    2, 0x06 /* Public */,
       5,    1,  240,    2, 0x06 /* Public */,
       6,    1,  243,    2, 0x06 /* Public */,
       7,    1,  246,    2, 0x06 /* Public */,
       8,    0,  249,    2, 0x06 /* Public */,
       9,    1,  250,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  253,    2, 0x0a /* Public */,
      12,    1,  254,    2, 0x0a /* Public */,
      13,    0,  257,    2, 0x0a /* Public */,
      14,    0,  258,    2, 0x0a /* Public */,
      15,    1,  259,    2, 0x0a /* Public */,
      16,    0,  262,    2, 0x0a /* Public */,
      17,    1,  263,    2, 0x0a /* Public */,
      18,    0,  266,    2, 0x0a /* Public */,
      19,    0,  267,    2, 0x0a /* Public */,
      20,    1,  268,    2, 0x0a /* Public */,
      21,    3,  271,    2, 0x09 /* Protected */,
      21,    2,  278,    2, 0x29 /* Protected | MethodCloned */,
      26,    3,  283,    2, 0x09 /* Protected */,
      30,    3,  290,    2, 0x09 /* Protected */,
      31,    2,  297,    2, 0x09 /* Protected */,
      35,    2,  302,    2, 0x09 /* Protected */,
      38,    0,  307,    2, 0x09 /* Protected */,
      39,    0,  308,    2, 0x09 /* Protected */,
      40,    0,  309,    2, 0x09 /* Protected */,
      41,    1,  310,    2, 0x09 /* Protected */,
      43,    1,  313,    2, 0x09 /* Protected */,
      44,    1,  316,    2, 0x09 /* Protected */,
      46,    1,  319,    2, 0x09 /* Protected */,
      47,    2,  322,    2, 0x09 /* Protected */,
      52,    1,  327,    2, 0x09 /* Protected */,
      53,    1,  330,    2, 0x09 /* Protected */,
      54,    3,  333,    2, 0x08 /* Private */,
      55,    3,  340,    2, 0x08 /* Private */,
      56,    3,  347,    2, 0x08 /* Private */,
      57,    3,  354,    2, 0x08 /* Private */,
      58,    3,  361,    2, 0x08 /* Private */,
      59,    5,  368,    2, 0x08 /* Private */,
      60,    5,  379,    2, 0x08 /* Private */,
      61,    0,  390,    2, 0x08 /* Private */,
      62,    0,  391,    2, 0x08 /* Private */,
      63,    0,  392,    2, 0x08 /* Private */,
      64,    0,  393,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    3,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 24,   22,   23,   25,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   22,   23,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   27,   28,   29,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   27,   28,   29,
    QMetaType::Void, 0x80000000 | 32, 0x80000000 | 32,   33,   34,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,   36,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, QMetaType::Int,   45,
    QMetaType::Void, 0x80000000 | 48, 0x80000000 | 50,   49,   51,
    QMetaType::Void, 0x80000000 | 48,   49,
    QMetaType::Void, QMetaType::QObjectStar,   49,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      65, QMetaType::Bool, 0x00095103,
      66, QMetaType::Int, 0x00095103,
      67, 0x80000000 | 68, 0x0009510b,
      69, QMetaType::Bool, 0x00095103,
      70, QMetaType::Bool, 0x00095003,
      71, QMetaType::Bool, 0x00095103,
      72, QMetaType::Bool, 0x00095103,
      73, 0x80000000 | 74, 0x0009510b,
      75, 0x80000000 | 76, 0x0009510b,
      77, QMetaType::Bool, 0x00095103,
      78, 0x80000000 | 79, 0x0009510b,
      80, 0x80000000 | 81, 0x0009510b,
      82, QMetaType::QSize, 0x00495103,
      83, 0x80000000 | 84, 0x0009510b,
      85, 0x80000000 | 86, 0x0009510f,
      87, 0x80000000 | 86, 0x0009510f,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       6,
       0,
       0,
       0,

 // enums: name, flags, count, data
      79, 0x0,    5,  482,
      81, 0x0,    3,  492,
      96, 0x0,    4,  498,
      68, 0x1,    7,  506,
      86, 0x0,    2,  520,
      74, 0x0,    5,  524,

 // enum data: key, value
      88, uint(QAbstractItemView::NoSelection),
      89, uint(QAbstractItemView::SingleSelection),
      90, uint(QAbstractItemView::MultiSelection),
      91, uint(QAbstractItemView::ExtendedSelection),
      92, uint(QAbstractItemView::ContiguousSelection),
      93, uint(QAbstractItemView::SelectItems),
      94, uint(QAbstractItemView::SelectRows),
      95, uint(QAbstractItemView::SelectColumns),
      97, uint(QAbstractItemView::EnsureVisible),
      98, uint(QAbstractItemView::PositionAtTop),
      99, uint(QAbstractItemView::PositionAtBottom),
     100, uint(QAbstractItemView::PositionAtCenter),
     101, uint(QAbstractItemView::NoEditTriggers),
     102, uint(QAbstractItemView::CurrentChanged),
     103, uint(QAbstractItemView::DoubleClicked),
     104, uint(QAbstractItemView::SelectedClicked),
     105, uint(QAbstractItemView::EditKeyPressed),
     106, uint(QAbstractItemView::AnyKeyPressed),
     107, uint(QAbstractItemView::AllEditTriggers),
     108, uint(QAbstractItemView::ScrollPerItem),
     109, uint(QAbstractItemView::ScrollPerPixel),
     110, uint(QAbstractItemView::NoDragDrop),
     111, uint(QAbstractItemView::DragOnly),
     112, uint(QAbstractItemView::DropOnly),
     113, uint(QAbstractItemView::DragDrop),
     114, uint(QAbstractItemView::InternalMove),

       0        // eod
};

void QAbstractItemView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 1: _t->clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 4: _t->entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->viewportEntered(); break;
        case 6: _t->iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 7: _t->reset(); break;
        case 8: _t->setRootIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->doItemsLayout(); break;
        case 10: _t->selectAll(); break;
        case 11: _t->edit((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 12: _t->clearSelection(); break;
        case 13: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->scrollToTop(); break;
        case 15: _t->scrollToBottom(); break;
        case 16: _t->update((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 18: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 19: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 20: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 21: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 22: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 23: _t->updateEditorData(); break;
        case 24: _t->updateEditorGeometries(); break;
        case 25: _t->updateGeometries(); break;
        case 26: _t->verticalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->horizontalScrollbarAction((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->verticalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->horizontalScrollbarValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->closeEditor((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QAbstractItemDelegate::EndEditHint(*)>(_a[2]))); break;
        case 31: _t->commitData((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 32: _t->editorDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 33: _t->d_func()->_q_columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 34: _t->d_func()->_q_columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 35: _t->d_func()->_q_columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 36: _t->d_func()->_q_rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 37: _t->d_func()->_q_rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 38: _t->d_func()->_q_columnsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 39: _t->d_func()->_q_rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 40: _t->d_func()->_q_modelDestroyed(); break;
        case 41: _t->d_func()->_q_layoutChanged(); break;
        case 42: _t->d_func()->_q_headerDataChanged(); break;
        case 43: _t->d_func()->_q_scrollerStateChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::clicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::doubleClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::activated)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)(const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::entered)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::viewportEntered)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QAbstractItemView::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemView::iconSizeChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasAutoScroll(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->autoScrollMargin(); break;
        case 2: *reinterpret_cast<int*>(_v) = QFlag(_t->editTriggers()); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->tabKeyNavigation(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showDropIndicator(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dragEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->dragDropOverwriteMode(); break;
        case 7: *reinterpret_cast< DragDropMode*>(_v) = _t->dragDropMode(); break;
        case 8: *reinterpret_cast< Qt::DropAction*>(_v) = _t->defaultDropAction(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->alternatingRowColors(); break;
        case 10: *reinterpret_cast< SelectionMode*>(_v) = _t->selectionMode(); break;
        case 11: *reinterpret_cast< SelectionBehavior*>(_v) = _t->selectionBehavior(); break;
        case 12: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 13: *reinterpret_cast< Qt::TextElideMode*>(_v) = _t->textElideMode(); break;
        case 14: *reinterpret_cast< ScrollMode*>(_v) = _t->verticalScrollMode(); break;
        case 15: *reinterpret_cast< ScrollMode*>(_v) = _t->horizontalScrollMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAutoScroll(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoScrollMargin(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setEditTriggers(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 3: _t->setTabKeyNavigation(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setDropIndicatorShown(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDragEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDragDropOverwriteMode(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setDragDropMode(*reinterpret_cast< DragDropMode*>(_v)); break;
        case 8: _t->setDefaultDropAction(*reinterpret_cast< Qt::DropAction*>(_v)); break;
        case 9: _t->setAlternatingRowColors(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSelectionMode(*reinterpret_cast< SelectionMode*>(_v)); break;
        case 11: _t->setSelectionBehavior(*reinterpret_cast< SelectionBehavior*>(_v)); break;
        case 12: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 13: _t->setTextElideMode(*reinterpret_cast< Qt::TextElideMode*>(_v)); break;
        case 14: _t->setVerticalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        case 15: _t->setHorizontalScrollMode(*reinterpret_cast< ScrollMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QAbstractItemView *_t = static_cast<QAbstractItemView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 14: _t->resetVerticalScrollMode(); break;
        case 15: _t->resetHorizontalScrollMode(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractItemView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QAbstractItemView.data,
      qt_meta_data_QAbstractItemView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractItemView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractItemView.stringdata0))
        return static_cast<void*>(const_cast< QAbstractItemView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QAbstractItemView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractItemView::pressed(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractItemView::clicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractItemView::doubleClicked(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemView::activated(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractItemView::entered(const QModelIndex & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractItemView::viewportEntered()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QAbstractItemView::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
