/****************************************************************************
** Meta object code from reading C++ file 'qsqltablemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../models/qsqltablemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsqltablemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSqlTableModel_t {
    QByteArrayData data[15];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSqlTableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSqlTableModel_t qt_meta_stringdata_QSqlTableModel = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QSqlTableModel"
QT_MOC_LITERAL(1, 15, 11), // "primeInsert"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 3), // "row"
QT_MOC_LITERAL(4, 32, 11), // "QSqlRecord&"
QT_MOC_LITERAL(5, 44, 6), // "record"
QT_MOC_LITERAL(6, 51, 12), // "beforeInsert"
QT_MOC_LITERAL(7, 64, 12), // "beforeUpdate"
QT_MOC_LITERAL(8, 77, 12), // "beforeDelete"
QT_MOC_LITERAL(9, 90, 6), // "select"
QT_MOC_LITERAL(10, 97, 9), // "selectRow"
QT_MOC_LITERAL(11, 107, 6), // "submit"
QT_MOC_LITERAL(12, 114, 6), // "revert"
QT_MOC_LITERAL(13, 121, 9), // "submitAll"
QT_MOC_LITERAL(14, 131, 9) // "revertAll"

    },
    "QSqlTableModel\0primeInsert\0\0row\0"
    "QSqlRecord&\0record\0beforeInsert\0"
    "beforeUpdate\0beforeDelete\0select\0"
    "selectRow\0submit\0revert\0submitAll\0"
    "revertAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSqlTableModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       6,    1,   69,    2, 0x06 /* Public */,
       7,    2,   72,    2, 0x06 /* Public */,
       8,    1,   77,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   80,    2, 0x0a /* Public */,
      10,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x0a /* Public */,
      12,    0,   85,    2, 0x0a /* Public */,
      13,    0,   86,    2, 0x0a /* Public */,
      14,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::Int,    3,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,

       0        // eod
};

void QSqlTableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSqlTableModel *_t = static_cast<QSqlTableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->primeInsert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSqlRecord(*)>(_a[2]))); break;
        case 1: _t->beforeInsert((*reinterpret_cast< QSqlRecord(*)>(_a[1]))); break;
        case 2: _t->beforeUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QSqlRecord(*)>(_a[2]))); break;
        case 3: _t->beforeDelete((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->select();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = _t->selectRow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = _t->submit();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: _t->revert(); break;
        case 8: { bool _r = _t->submitAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->revertAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSqlTableModel::*_t)(int , QSqlRecord & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSqlTableModel::primeInsert)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSqlTableModel::*_t)(QSqlRecord & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSqlTableModel::beforeInsert)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSqlTableModel::*_t)(int , QSqlRecord & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSqlTableModel::beforeUpdate)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSqlTableModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSqlTableModel::beforeDelete)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QSqlTableModel::staticMetaObject = {
    { &QSqlQueryModel::staticMetaObject, qt_meta_stringdata_QSqlTableModel.data,
      qt_meta_data_QSqlTableModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSqlTableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSqlTableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSqlTableModel.stringdata0))
        return static_cast<void*>(const_cast< QSqlTableModel*>(this));
    return QSqlQueryModel::qt_metacast(_clname);
}

int QSqlTableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSqlQueryModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QSqlTableModel::primeInsert(int _t1, QSqlRecord & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSqlTableModel::beforeInsert(QSqlRecord & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSqlTableModel::beforeUpdate(int _t1, QSqlRecord & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSqlTableModel::beforeDelete(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
