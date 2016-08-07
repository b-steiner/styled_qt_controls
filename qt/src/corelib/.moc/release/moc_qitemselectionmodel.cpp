/****************************************************************************
** Meta object code from reading C++ file 'qitemselectionmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../itemmodels/qitemselectionmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qitemselectionmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QItemSelectionModel_t {
    QByteArrayData data[60];
    char stringdata0[850];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QItemSelectionModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QItemSelectionModel_t qt_meta_stringdata_QItemSelectionModel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QItemSelectionModel"
QT_MOC_LITERAL(1, 20, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "QItemSelection"
QT_MOC_LITERAL(4, 53, 8), // "selected"
QT_MOC_LITERAL(5, 62, 10), // "deselected"
QT_MOC_LITERAL(6, 73, 14), // "currentChanged"
QT_MOC_LITERAL(7, 88, 7), // "current"
QT_MOC_LITERAL(8, 96, 8), // "previous"
QT_MOC_LITERAL(9, 105, 17), // "currentRowChanged"
QT_MOC_LITERAL(10, 123, 20), // "currentColumnChanged"
QT_MOC_LITERAL(11, 144, 12), // "modelChanged"
QT_MOC_LITERAL(12, 157, 19), // "QAbstractItemModel*"
QT_MOC_LITERAL(13, 177, 5), // "model"
QT_MOC_LITERAL(14, 183, 15), // "setCurrentIndex"
QT_MOC_LITERAL(15, 199, 5), // "index"
QT_MOC_LITERAL(16, 205, 35), // "QItemSelectionModel::Selectio..."
QT_MOC_LITERAL(17, 241, 7), // "command"
QT_MOC_LITERAL(18, 249, 6), // "select"
QT_MOC_LITERAL(19, 256, 9), // "selection"
QT_MOC_LITERAL(20, 266, 5), // "clear"
QT_MOC_LITERAL(21, 272, 5), // "reset"
QT_MOC_LITERAL(22, 278, 14), // "clearSelection"
QT_MOC_LITERAL(23, 293, 17), // "clearCurrentIndex"
QT_MOC_LITERAL(24, 311, 26), // "_q_columnsAboutToBeRemoved"
QT_MOC_LITERAL(25, 338, 23), // "_q_rowsAboutToBeRemoved"
QT_MOC_LITERAL(26, 362, 27), // "_q_columnsAboutToBeInserted"
QT_MOC_LITERAL(27, 390, 24), // "_q_rowsAboutToBeInserted"
QT_MOC_LITERAL(28, 415, 25), // "_q_layoutAboutToBeChanged"
QT_MOC_LITERAL(29, 441, 28), // "QList<QPersistentModelIndex>"
QT_MOC_LITERAL(30, 470, 7), // "parents"
QT_MOC_LITERAL(31, 478, 36), // "QAbstractItemModel::LayoutCha..."
QT_MOC_LITERAL(32, 515, 4), // "hint"
QT_MOC_LITERAL(33, 520, 16), // "_q_layoutChanged"
QT_MOC_LITERAL(34, 537, 10), // "isSelected"
QT_MOC_LITERAL(35, 548, 13), // "isRowSelected"
QT_MOC_LITERAL(36, 562, 3), // "row"
QT_MOC_LITERAL(37, 566, 6), // "parent"
QT_MOC_LITERAL(38, 573, 16), // "isColumnSelected"
QT_MOC_LITERAL(39, 590, 6), // "column"
QT_MOC_LITERAL(40, 597, 22), // "rowIntersectsSelection"
QT_MOC_LITERAL(41, 620, 25), // "columnIntersectsSelection"
QT_MOC_LITERAL(42, 646, 12), // "selectedRows"
QT_MOC_LITERAL(43, 659, 15), // "QModelIndexList"
QT_MOC_LITERAL(44, 675, 15), // "selectedColumns"
QT_MOC_LITERAL(45, 691, 12), // "hasSelection"
QT_MOC_LITERAL(46, 704, 12), // "currentIndex"
QT_MOC_LITERAL(47, 717, 15), // "selectedIndexes"
QT_MOC_LITERAL(48, 733, 14), // "SelectionFlags"
QT_MOC_LITERAL(49, 748, 8), // "NoUpdate"
QT_MOC_LITERAL(50, 757, 5), // "Clear"
QT_MOC_LITERAL(51, 763, 6), // "Select"
QT_MOC_LITERAL(52, 770, 8), // "Deselect"
QT_MOC_LITERAL(53, 779, 6), // "Toggle"
QT_MOC_LITERAL(54, 786, 7), // "Current"
QT_MOC_LITERAL(55, 794, 4), // "Rows"
QT_MOC_LITERAL(56, 799, 7), // "Columns"
QT_MOC_LITERAL(57, 807, 13), // "SelectCurrent"
QT_MOC_LITERAL(58, 821, 13), // "ToggleCurrent"
QT_MOC_LITERAL(59, 835, 14) // "ClearAndSelect"

    },
    "QItemSelectionModel\0selectionChanged\0"
    "\0QItemSelection\0selected\0deselected\0"
    "currentChanged\0current\0previous\0"
    "currentRowChanged\0currentColumnChanged\0"
    "modelChanged\0QAbstractItemModel*\0model\0"
    "setCurrentIndex\0index\0"
    "QItemSelectionModel::SelectionFlags\0"
    "command\0select\0selection\0clear\0reset\0"
    "clearSelection\0clearCurrentIndex\0"
    "_q_columnsAboutToBeRemoved\0"
    "_q_rowsAboutToBeRemoved\0"
    "_q_columnsAboutToBeInserted\0"
    "_q_rowsAboutToBeInserted\0"
    "_q_layoutAboutToBeChanged\0"
    "QList<QPersistentModelIndex>\0parents\0"
    "QAbstractItemModel::LayoutChangeHint\0"
    "hint\0_q_layoutChanged\0isSelected\0"
    "isRowSelected\0row\0parent\0isColumnSelected\0"
    "column\0rowIntersectsSelection\0"
    "columnIntersectsSelection\0selectedRows\0"
    "QModelIndexList\0selectedColumns\0"
    "hasSelection\0currentIndex\0selectedIndexes\0"
    "SelectionFlags\0NoUpdate\0Clear\0Select\0"
    "Deselect\0Toggle\0Current\0Rows\0Columns\0"
    "SelectCurrent\0ToggleCurrent\0ClearAndSelect"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QItemSelectionModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       5,  288, // properties
       1,  308, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  169,    2, 0x06 /* Public */,
       6,    2,  174,    2, 0x06 /* Public */,
       9,    2,  179,    2, 0x06 /* Public */,
      10,    2,  184,    2, 0x06 /* Public */,
      11,    1,  189,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    2,  192,    2, 0x0a /* Public */,
      18,    2,  197,    2, 0x0a /* Public */,
      18,    2,  202,    2, 0x0a /* Public */,
      20,    0,  207,    2, 0x0a /* Public */,
      21,    0,  208,    2, 0x0a /* Public */,
      22,    0,  209,    2, 0x0a /* Public */,
      23,    0,  210,    2, 0x0a /* Public */,
      24,    3,  211,    2, 0x08 /* Private */,
      25,    3,  218,    2, 0x08 /* Private */,
      26,    3,  225,    2, 0x08 /* Private */,
      27,    3,  232,    2, 0x08 /* Private */,
      28,    2,  239,    2, 0x08 /* Private */,
      28,    1,  244,    2, 0x28 /* Private | MethodCloned */,
      28,    0,  247,    2, 0x28 /* Private | MethodCloned */,
      33,    2,  248,    2, 0x08 /* Private */,
      33,    1,  253,    2, 0x28 /* Private | MethodCloned */,
      33,    0,  256,    2, 0x28 /* Private | MethodCloned */,

 // methods: name, argc, parameters, tag, flags
      34,    1,  257,    2, 0x02 /* Public */,
      35,    2,  260,    2, 0x02 /* Public */,
      38,    2,  265,    2, 0x02 /* Public */,
      40,    2,  270,    2, 0x02 /* Public */,
      41,    2,  275,    2, 0x02 /* Public */,
      42,    1,  280,    2, 0x02 /* Public */,
      42,    0,  283,    2, 0x22 /* Public | MethodCloned */,
      44,    1,  284,    2, 0x02 /* Public */,
      44,    0,  287,    2, 0x22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,    8,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    7,    8,
    QMetaType::Void, 0x80000000 | 12,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 16,   15,   17,
    QMetaType::Void, QMetaType::QModelIndex, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 16,   19,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 31,   30,   32,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 29, 0x80000000 | 31,   30,   32,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QModelIndex,   15,
    QMetaType::Bool, QMetaType::Int, QMetaType::QModelIndex,   36,   37,
    QMetaType::Bool, QMetaType::Int, QMetaType::QModelIndex,   39,   37,
    QMetaType::Bool, QMetaType::Int, QMetaType::QModelIndex,   36,   37,
    QMetaType::Bool, QMetaType::Int, QMetaType::QModelIndex,   39,   37,
    0x80000000 | 43, QMetaType::Int,   39,
    0x80000000 | 43,
    0x80000000 | 43, QMetaType::Int,   36,
    0x80000000 | 43,

 // properties: name, type, flags
      13, 0x80000000 | 12, 0x0049510b,
      45, QMetaType::Bool, 0x00484001,
      46, QMetaType::QModelIndex, 0x00484001,
      19, 0x80000000 | 3, 0x00484009,
      47, 0x80000000 | 43, 0x00484009,

 // properties: notify_signal_id
       4,
       0,
       1,
       0,
       0,

 // enums: name, flags, count, data
      48, 0x1,   11,  312,

 // enum data: key, value
      49, uint(QItemSelectionModel::NoUpdate),
      50, uint(QItemSelectionModel::Clear),
      51, uint(QItemSelectionModel::Select),
      52, uint(QItemSelectionModel::Deselect),
      53, uint(QItemSelectionModel::Toggle),
      54, uint(QItemSelectionModel::Current),
      55, uint(QItemSelectionModel::Rows),
      56, uint(QItemSelectionModel::Columns),
      57, uint(QItemSelectionModel::SelectCurrent),
      58, uint(QItemSelectionModel::ToggleCurrent),
      59, uint(QItemSelectionModel::ClearAndSelect),

       0        // eod
};

void QItemSelectionModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QItemSelectionModel *_t = static_cast<QItemSelectionModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 1: _t->currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 2: _t->currentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 3: _t->currentColumnChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->modelChanged((*reinterpret_cast< QAbstractItemModel*(*)>(_a[1]))); break;
        case 5: _t->setCurrentIndex((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 6: _t->select((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 7: _t->select((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< QItemSelectionModel::SelectionFlags(*)>(_a[2]))); break;
        case 8: _t->clear(); break;
        case 9: _t->reset(); break;
        case 10: _t->clearSelection(); break;
        case 11: _t->clearCurrentIndex(); break;
        case 12: _t->d_func()->_q_columnsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 13: _t->d_func()->_q_rowsAboutToBeRemoved((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 14: _t->d_func()->_q_columnsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 15: _t->d_func()->_q_rowsAboutToBeInserted((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 16: _t->d_func()->_q_layoutAboutToBeChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 17: _t->d_func()->_q_layoutAboutToBeChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1]))); break;
        case 18: _t->d_func()->_q_layoutAboutToBeChanged(); break;
        case 19: _t->d_func()->_q_layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1])),(*reinterpret_cast< QAbstractItemModel::LayoutChangeHint(*)>(_a[2]))); break;
        case 20: _t->d_func()->_q_layoutChanged((*reinterpret_cast< const QList<QPersistentModelIndex>(*)>(_a[1]))); break;
        case 21: _t->d_func()->_q_layoutChanged(); break;
        case 22: { bool _r = _t->isSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 23: { bool _r = _t->isRowSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 24: { bool _r = _t->isColumnSelected((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 25: { bool _r = _t->rowIntersectsSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 26: { bool _r = _t->columnIntersectsSelection((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: { QModelIndexList _r = _t->selectedRows((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        case 28: { QModelIndexList _r = _t->selectedRows();
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        case 29: { QModelIndexList _r = _t->selectedColumns((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        case 30: { QModelIndexList _r = _t->selectedColumns();
            if (_a[0]) *reinterpret_cast< QModelIndexList*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QPersistentModelIndex> >(); break;
            }
            break;
        case 20:
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
            typedef void (QItemSelectionModel::*_t)(const QItemSelection & , const QItemSelection & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QItemSelectionModel::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QItemSelectionModel::*_t)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QItemSelectionModel::currentChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QItemSelectionModel::*_t)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QItemSelectionModel::currentRowChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QItemSelectionModel::*_t)(const QModelIndex & , const QModelIndex & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QItemSelectionModel::currentColumnChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QItemSelectionModel::*_t)(QAbstractItemModel * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QItemSelectionModel::modelChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractItemModel* >(); break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QModelIndexList >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QItemSelectionModel *_t = static_cast<QItemSelectionModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractItemModel**>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hasSelection(); break;
        case 2: *reinterpret_cast< QModelIndex*>(_v) = _t->currentIndex(); break;
        case 3: *reinterpret_cast< QItemSelection*>(_v) = _t->selection(); break;
        case 4: *reinterpret_cast< QModelIndexList*>(_v) = _t->selectedIndexes(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QItemSelectionModel *_t = static_cast<QItemSelectionModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QAbstractItemModel**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QItemSelectionModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QItemSelectionModel.data,
      qt_meta_data_QItemSelectionModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QItemSelectionModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QItemSelectionModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QItemSelectionModel.stringdata0))
        return static_cast<void*>(const_cast< QItemSelectionModel*>(this));
    return QObject::qt_metacast(_clname);
}

int QItemSelectionModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QItemSelectionModel::selectionChanged(const QItemSelection & _t1, const QItemSelection & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QItemSelectionModel::currentChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QItemSelectionModel::currentRowChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QItemSelectionModel::currentColumnChanged(const QModelIndex & _t1, const QModelIndex & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QItemSelectionModel::modelChanged(QAbstractItemModel * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
