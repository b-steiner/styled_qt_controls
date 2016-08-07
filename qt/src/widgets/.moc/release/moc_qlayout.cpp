/****************************************************************************
** Meta object code from reading C++ file 'qlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLayout_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLayout_t qt_meta_stringdata_QLayout = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QLayout"
QT_MOC_LITERAL(1, 8, 6), // "margin"
QT_MOC_LITERAL(2, 15, 7), // "spacing"
QT_MOC_LITERAL(3, 23, 14), // "sizeConstraint"
QT_MOC_LITERAL(4, 38, 14), // "SizeConstraint"
QT_MOC_LITERAL(5, 53, 20), // "SetDefaultConstraint"
QT_MOC_LITERAL(6, 74, 15), // "SetNoConstraint"
QT_MOC_LITERAL(7, 90, 14), // "SetMinimumSize"
QT_MOC_LITERAL(8, 105, 12), // "SetFixedSize"
QT_MOC_LITERAL(9, 118, 14), // "SetMaximumSize"
QT_MOC_LITERAL(10, 133, 16) // "SetMinAndMaxSize"

    },
    "QLayout\0margin\0spacing\0sizeConstraint\0"
    "SizeConstraint\0SetDefaultConstraint\0"
    "SetNoConstraint\0SetMinimumSize\0"
    "SetFixedSize\0SetMaximumSize\0"
    "SetMinAndMaxSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   23, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       2, QMetaType::Int, 0x00095103,
       3, 0x80000000 | 4, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x0,    6,   27,

 // enum data: key, value
       5, uint(QLayout::SetDefaultConstraint),
       6, uint(QLayout::SetNoConstraint),
       7, uint(QLayout::SetMinimumSize),
       8, uint(QLayout::SetFixedSize),
       9, uint(QLayout::SetMaximumSize),
      10, uint(QLayout::SetMinAndMaxSize),

       0        // eod
};

void QLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QLayout *_t = static_cast<QLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->margin(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->spacing(); break;
        case 2: *reinterpret_cast< SizeConstraint*>(_v) = _t->sizeConstraint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLayout *_t = static_cast<QLayout *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMargin(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSizeConstraint(*reinterpret_cast< SizeConstraint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLayout.data,
      qt_meta_data_QLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLayout.stringdata0))
        return static_cast<void*>(const_cast< QLayout*>(this));
    if (!strcmp(_clname, "QLayoutItem"))
        return static_cast< QLayoutItem*>(const_cast< QLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int QLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
