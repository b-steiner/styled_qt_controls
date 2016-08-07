/****************************************************************************
** Meta object code from reading C++ file 'qabstractitemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qabstractitemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractitemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractItemModel_t {
    QByteArrayData data[73];
    char stringdata0[911];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractItemModel_t qt_meta_stringdata_QAbstractItemModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QAbstractItemModel"
QT_MOC_LITERAL(1, 19, 11), // "dataChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "topLeft"
QT_MOC_LITERAL(4, 40, 11), // "bottomRight"
QT_MOC_LITERAL(5, 52, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 65, 5), // "roles"
QT_MOC_LITERAL(7, 71, 17), // "headerDataChanged"
QT_MOC_LITERAL(8, 89, 15), // "Qt::Orientation"
QT_MOC_LITERAL(9, 105, 11), // "orientation"
QT_MOC_LITERAL(10, 117, 5), // "first"
QT_MOC_LITERAL(11, 123, 4), // "last"
QT_MOC_LITERAL(12, 128, 13), // "layoutChanged"
QT_MOC_LITERAL(13, 142, 28), // "QList<QPersistentModelIndex>"
QT_MOC_LITERAL(14, 171, 7), // "parents"
QT_MOC_LITERAL(15, 179, 36), // "QAbstractItemModel::LayoutCha..."
QT_MOC_LITERAL(16, 216, 4), // "hint"
QT_MOC_LITERAL(17, 221, 22), // "layoutAboutToBeChanged"
QT_MOC_LITERAL(18, 244, 21), // "rowsAboutToBeInserted"
QT_MOC_LITERAL(19, 266, 6), // "parent"
QT_MOC_LITERAL(20, 273, 12), // "rowsInserted"
QT_MOC_LITERAL(21, 286, 20), // "rowsAboutToBeRemoved"
QT_MOC_LITERAL(22, 307, 11), // "rowsRemoved"
QT_MOC_LITERAL(23, 319, 24), // "columnsAboutToBeInserted"
QT_MOC_LITERAL(24, 344, 15), // "columnsInserted"
QT_MOC_LITERAL(25, 360, 23), // "columnsAboutToBeRemoved"
QT_MOC_LITERAL(26, 384, 14), // "columnsRemoved"
QT_MOC_LITERAL(27, 399, 19), // "modelAboutToBeReset"
QT_MOC_LITERAL(28, 419, 10), // "modelReset"
QT_MOC_LITERAL(29, 430, 18), // "rowsAboutToBeMoved"
QT_MOC_LITERAL(30, 449, 12), // "sourceParent"
QT_MOC_LITERAL(31, 462, 11), // "sourceStart"
QT_MOC_LITERAL(32, 474, 9), // "sourceEnd"
QT_MOC_LITERAL(33, 484, 17), // "destinationParent"
QT_MOC_LITERAL(34, 502, 14), // "destinationRow"
QT_MOC_LITERAL(35, 517, 9), // "rowsMoved"
QT_MOC_LITERAL(36, 527, 5), // "start"
QT_MOC_LITERAL(37, 533, 3), // "end"
QT_MOC_LITERAL(38, 537, 11), // "destination"
QT_MOC_LITERAL(39, 549, 3), // "row"
QT_MOC_LITERAL(40, 553, 21), // "columnsAboutToBeMoved"
QT_MOC_LITERAL(41, 575, 17), // "destinationColumn"
QT_MOC_LITERAL(42, 593, 12), // "columnsMoved"
QT_MOC_LITERAL(43, 606, 6), // "column"
QT_MOC_LITERAL(44, 613, 6), // "submit"
QT_MOC_LITERAL(45, 620, 6), // "revert"
QT_MOC_LITERAL(46, 627, 17), // "resetInternalData"
QT_MOC_LITERAL(47, 645, 8), // "hasIndex"
QT_MOC_LITERAL(48, 654, 5), // "index"
QT_MOC_LITERAL(49, 660, 5), // "child"
QT_MOC_LITERAL(50, 666, 7), // "sibling"
QT_MOC_LITERAL(51, 674, 3), // "idx"
QT_MOC_LITERAL(52, 678, 8), // "rowCount"
QT_MOC_LITERAL(53, 687, 11), // "columnCount"
QT_MOC_LITERAL(54, 699, 11), // "hasChildren"
QT_MOC_LITERAL(55, 711, 4), // "data"
QT_MOC_LITERAL(56, 716, 4), // "role"
QT_MOC_LITERAL(57, 721, 7), // "setData"
QT_MOC_LITERAL(58, 729, 5), // "value"
QT_MOC_LITERAL(59, 735, 10), // "headerData"
QT_MOC_LITERAL(60, 746, 7), // "section"
QT_MOC_LITERAL(61, 754, 9), // "fetchMore"
QT_MOC_LITERAL(62, 764, 12), // "canFetchMore"
QT_MOC_LITERAL(63, 777, 5), // "flags"
QT_MOC_LITERAL(64, 783, 13), // "Qt::ItemFlags"
QT_MOC_LITERAL(65, 797, 5), // "match"
QT_MOC_LITERAL(66, 803, 15), // "QModelIndexList"
QT_MOC_LITERAL(67, 819, 4), // "hits"
QT_MOC_LITERAL(68, 824, 14), // "Qt::MatchFlags"
QT_MOC_LITERAL(69, 839, 16), // "LayoutChangeHint"
QT_MOC_LITERAL(70, 856, 18), // "NoLayoutChangeHint"
QT_MOC_LITERAL(71, 875, 16), // "VerticalSortHint"
QT_MOC_LITERAL(72, 892, 18) // "HorizontalSortHint"

    },
    "QAbstractItemModel\0dataChanged\0\0topLeft\0"
    "bottomRight\0QVector<int>\0roles\0"
    "headerDataChanged\0Qt::Orientation\0"
    "orientation\0first\0last\0layoutChanged\0"
    "QList<QPersistentModelIndex>\0parents\0"
    "QAbstractItemModel::LayoutChangeHint\0"
    "hint\0layoutAboutToBeChanged\0"
    "rowsAboutToBeInserted\0parent\0rowsInserted\0"
    "rowsAboutToBeRemoved\0rowsRemoved\0"
    "columnsAboutToBeInserted\0columnsInserted\0"
    "columnsAboutToBeRemoved\0columnsRemoved\0"
    "modelAboutToBeReset\0modelReset\0"
    "rowsAboutToBeMoved\0sourceParent\0"
    "sourceStart\0sourceEnd\0destinationParent\0"
    "destinationRow\0rowsMoved\0start\0end\0"
    "destination\0row\0columnsAboutToBeMoved\0"
    "destinationColumn\0columnsMoved\0column\0"
    "submit\0revert\0resetInternalData\0"
    "hasIndex\0index\0child\0sibling\0idx\0"
    "rowCount\0columnCount\0hasChildren\0data\0"
    "role\0setData\0value\0headerData\0section\0"
    "fetchMore\0canFetchMore\0flags\0Qt::ItemFlags\0"
    "match\0QModelIndexList\0hits\0Qt::MatchFlags\0"
    "LayoutChangeHint\0NoLayoutChangeHint\0"
    "VerticalSortHint\0HorizontalSortHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractItemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       1,  520, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  264,    2, 0x06 /* Public */,
       1,    2,  271,    2, 0x26 /* Public | MethodCloned */,
       7,    3,  276,    2, 0x06 /* Public */,
      12,    2,  283,    2, 0x06 /* Public */,
      12,    1,  288,    2, 0x26 /* Public | MethodCloned */,
      12,    0,  291,    2, 0x26 /* Public | MethodCloned */,
      17,    2,  292,    2, 0x06 /* Public */,
      17,    1,  297,    2, 0x26 /* Public | MethodCloned */,
      17,    0,  300,    2, 0x26 /* Public | MethodCloned */,
      18,    3,  301,    2, 0x06 /* Public */,
      20,    3,  308,    2, 0x06 /* Public */,
      21,    3,  315,    2, 0x06 /* Public */,
      22,    3,  322,    2, 0x06 /* Public */,
      23,    3,  329,    2, 0x06 /* Public */,
      24,    3,  336,    2, 0x06 /* Public */,
      25,    3,  343,    2, 0x06 /* Public */,
      26,    3,  350,    2, 0x06 /* Public */,
      27,    0,  357,    2, 0x06 /* Public */,
      28,    0,  358,    2, 0x06 /* Public */,
      29,    5,  359,    2, 0x06 /* Public */,
      35,    5,  370,    2, 0x06 /* Public */,
      40,    5,  381,    2, 0x06 /* Public */,
      42,    5,  392,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      44,    0,  403,    2, 0x0a /* Public */,
      45,    0,  404,    2, 0x0a /* Public */,
      46,    0,  405,    2, 0x09 /* Protected */,

 // methods: name, argc, parameters, tag, flags
      47,    3,  406,    2, 0x02 /* Public */,
      47,    2,  413,    2, 0x22 /* Public | MethodCloned */,
      48,    3,  418,    2, 0x02 /* Public */,
      48,    2,  425,    2, 0x22 /* Public | MethodCloned */,
      19,    1,  430,    2, 0x02 /* Public */,
      50,    3,  433,    2, 0x02 /* Public */,
      52,    1,  440,    2, 0x02 /* Public */,
      52,    0,  443,    2, 0x22 /* Public | MethodCloned */,
      53,    1,  444,    2, 0x02 /* Public */,
      53,    0,  447,    2, 0x22 /* Public | MethodCloned */,
      54,    1,  448,    2, 0x02 /* Public */,
      54,    0,  451,    2, 0x22 /* Public | MethodCloned */,
      55,    2,  452,    2, 0x02 /* Public */,
      55,    1,  457,    2, 0x22 /* Public | MethodCloned */,
      57,    3,  460,    2, 0x02 /* Public */,
      57,    2,  467,    2, 0x22 /* Public | MethodCloned */,
      59,    3,  472,    2, 0x02 /* Public */,
      59,    2,  479,    2, 0x22 /* Public | MethodCloned */,
      61,    1,  484,    2, 0x02 /* Public */,
      62,    1,  487,    2, 0x02 /* Public */,
      63,    1,  490,    2, 0x02 /* Public */,
      65,    5,  493,    2, 0x02 /* Public */,
      65,    4,  504,    2, 0x22 /* Public | MethodCloned */,
      65,    3,  513,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    3,    4,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int, QMetaType::Int,    9,   10,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 15,   14,   16,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   19,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,   30,   31,   32,   33,   34,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,   19,   36,   37,   38,   39,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,   30,   31,   32,   33,   41,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex, QMetaType::Int,   19,   36,   37,   38,   43,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   39,   43,   19,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   39,   43,
    QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   39,   43,   19,
    QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,   39,   43,
    QMetaType::QModelIndex, QMetaType::QModelIndex,   49,
    QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int, QMetaType::QModelIndex,   39,   43,   51,
    QMetaType::Int, QMetaType::QModelIndex,   19,
    QMetaType::Int,
    QMetaType::Int, QMetaType::QModelIndex,   19,
    QMetaType::Int,
    QMetaType::Bool, QMetaType::QModelIndex,   19,
    QMetaType::Bool,
    QMetaType::QVariant, QMetaType::QModelIndex, QMetaType::Int,   48,   56,
    QMetaType::QVariant, QMetaType::QModelIndex,   48,
    QMetaType::Bool, QMetaType::QModelIndex, QMetaType::QVariant, QMetaType::Int,   48,   58,   56,
    QMetaType::Bool, QMetaType::QModelIndex, QMetaType::QVariant,   48,   58,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 8, QMetaType::Int,   60,    9,   56,
    QMetaType::QVariant, QMetaType::Int, 0x80000000 | 8,   60,    9,
    QMetaType::Void, QMetaType::QModelIndex,   19,
    QMetaType::Bool, QMetaType::QModelIndex,   19,
    0x80000000 | 64, QMetaType::QModelIndex,   48,
    0x80000000 | 66, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int, 0x80000000 | 68,   36,   56,   58,   67,   63,
    0x80000000 | 66, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant, QMetaType::Int,   36,   56,   58,   67,
    0x80000000 | 66, QMetaType::QModelIndex, QMetaType::Int, QMetaType::QVariant,   36,   56,   58,

 // enums: name, flags, count, data
      69, 0x0,    3,  524,

 // enum data: key, value
      70, uint(QAbstractItemModel::NoLayoutChangeHint),
      71, uint(QAbstractItemModel::VerticalSortHint),
      72, uint(QAbstractItemModel::HorizontalSortHint),

       0        // eod
};

void QAbstractItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractItemModel *_t = static_cast<QAbstractItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])),(*reinterpret_cast< const QVector<int>(*)>(_a[3]))); break;
        case 1: _t->dataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->headerDataChanged((*reinterpret_cast< Qt::Orientation(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 4: _t->layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1]))); break;
        case 5: _t->layoutChanged(); break;
        case 6: _t->layoutAboutToBeChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 7: _t->layoutAboutToBeChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1]))); break;
        case 8: _t->layoutAboutToBeChanged(); break;
        case 9: _t->rowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 10: _t->rowsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 11: _t->rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 12: _t->rowsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 13: _t->columnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 14: _t->columnsInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 15: _t->columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 16: _t->columnsRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])), QPrivateSignal()); break;
        case 17: _t->modelAboutToBeReset(QPrivateSignal()); break;
        case 18: _t->modelReset(QPrivateSignal()); break;
        case 19: _t->rowsAboutToBeMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])), QPrivateSignal()); break;
        case 20: _t->rowsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])), QPrivateSignal()); break;
        case 21: _t->columnsAboutToBeMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])), QPrivateSignal()); break;
        case 22: _t->columnsMoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QModelIndex(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])), QPrivateSignal()); break;
        case 23: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: _t->revert(); break;
        case 25: _t->resetInternalData(); break;
        case 26: { bool _r = _t->hasIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { bool _r = _t->hasIndex((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 28: { QModelIndex _r = _t->index((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 29: { QModelIndex _r = _t->index((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 30: { QModelIndex _r = _t->parent((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 31: { QModelIndex _r = _t->sibling((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QModelIndex(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndex*>(_a[0]) = _r; }  break;
        case 32: { int _r = _t->rowCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 33: { int _r = _t->rowCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 34: { int _r = _t->columnCount((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 35: { int _r = _t->columnCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 36: { bool _r = _t->hasChildren((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 37: { bool _r = _t->hasChildren();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 38: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 39: { QVariant _r = _t->data((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 40: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 41: { bool _r = _t->setData((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 42: { QVariant _r = _t->headerData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 43: { QVariant _r = _t->headerData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Qt::Orientation(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = _r; }  break;
        case 44: _t->fetchMore((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 45: { bool _r = _t->canFetchMore((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 46: { Qt::ItemFlags _r = _t->flags((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Qt::ItemFlags*>(_a[0]) = _r; }  break;
        case 47: { QModelIndexList _r = _t->match((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< Qt::MatchFlags(*)>(_a[5])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        case 48: { QModelIndexList _r = _t->match((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        case 49: { QModelIndexList _r = _t->match((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QVariant(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , const QModelIndex & , const QVector<int> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::dataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(Qt::Orientation , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::headerDataChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QList<QPersistentModelIndex> & , QAbstractItemModel::LayoutChangeHint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::layoutChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QList<QPersistentModelIndex> & , QAbstractItemModel::LayoutChangeHint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::layoutAboutToBeChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsAboutToBeInserted)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsInserted)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsAboutToBeRemoved)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsRemoved)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsAboutToBeInserted)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsInserted)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsAboutToBeRemoved)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsRemoved)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::modelAboutToBeReset)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::modelReset)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsAboutToBeMoved)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::rowsMoved)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsAboutToBeMoved)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (QAbstractItemModel::*_t)(const QModelIndex & , int , int , const QModelIndex & , int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractItemModel::columnsMoved)) {
                *result = 22;
                return;
            }
        }
    }
}

const QMetaObject QAbstractItemModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractItemModel.data,
      qt_meta_data_QAbstractItemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractItemModel.stringdata0))
        return static_cast<void*>(const_cast< QAbstractItemModel*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void QAbstractItemModel::dataChanged(const QModelIndex & _t1, const QModelIndex & _t2, const QVector<int> & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QAbstractItemModel::headerDataChanged(Qt::Orientation _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractItemModel::layoutChanged(const QList<QPersistentModelIndex> & _t1, QAbstractItemModel::LayoutChangeHint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 6
void QAbstractItemModel::layoutAboutToBeChanged(const QList<QPersistentModelIndex> & _t1, QAbstractItemModel::LayoutChangeHint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 9
void QAbstractItemModel::rowsAboutToBeInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QAbstractItemModel::rowsInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QAbstractItemModel::rowsAboutToBeRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QAbstractItemModel::rowsRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QAbstractItemModel::columnsAboutToBeInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QAbstractItemModel::columnsInserted(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void QAbstractItemModel::columnsAboutToBeRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QAbstractItemModel::columnsRemoved(const QModelIndex & _t1, int _t2, int _t3, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QAbstractItemModel::modelAboutToBeReset(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void QAbstractItemModel::modelReset(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void QAbstractItemModel::rowsAboutToBeMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void QAbstractItemModel::rowsMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void QAbstractItemModel::columnsAboutToBeMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void QAbstractItemModel::columnsMoved(const QModelIndex & _t1, int _t2, int _t3, const QModelIndex & _t4, int _t5, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
struct qt_meta_stringdata_QAbstractTableModel_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractTableModel_t qt_meta_stringdata_QAbstractTableModel = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QAbstractTableModel"

    },
    "QAbstractTableModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QAbstractTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAbstractTableModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QAbstractTableModel.data,
      qt_meta_data_QAbstractTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractTableModel.stringdata0))
        return static_cast<void*>(const_cast< QAbstractTableModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QAbstractTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QAbstractListModel_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractListModel_t qt_meta_stringdata_QAbstractListModel = {
    {
QT_MOC_LITERAL(0, 0, 18) // "QAbstractListModel"

    },
    "QAbstractListModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QAbstractListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAbstractListModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QAbstractListModel.data,
      qt_meta_data_QAbstractListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractListModel.stringdata0))
        return static_cast<void*>(const_cast< QAbstractListModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QAbstractListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
