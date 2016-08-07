/****************************************************************************
** Meta object code from reading C++ file 'qdial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qdial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDial_t {
    QByteArrayData data[10];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDial_t qt_meta_stringdata_QDial = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QDial"
QT_MOC_LITERAL(1, 6, 17), // "setNotchesVisible"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 7), // "visible"
QT_MOC_LITERAL(4, 33, 11), // "setWrapping"
QT_MOC_LITERAL(5, 45, 2), // "on"
QT_MOC_LITERAL(6, 48, 8), // "wrapping"
QT_MOC_LITERAL(7, 57, 9), // "notchSize"
QT_MOC_LITERAL(8, 67, 11), // "notchTarget"
QT_MOC_LITERAL(9, 79, 14) // "notchesVisible"

    },
    "QDial\0setNotchesVisible\0\0visible\0"
    "setWrapping\0on\0wrapping\0notchSize\0"
    "notchTarget\0notchesVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDial[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       4,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // properties: name, type, flags
       6, QMetaType::Bool, 0x00095103,
       7, QMetaType::Int, 0x00095001,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QDial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDial *_t = static_cast<QDial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setNotchesVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setWrapping((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDial *_t = static_cast<QDial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->wrapping(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->notchSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->notchTarget(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->notchesVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDial *_t = static_cast<QDial *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWrapping(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNotchTarget(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setNotchesVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDial::staticMetaObject = {
    { &QAbstractSlider::staticMetaObject, qt_meta_stringdata_QDial.data,
      qt_meta_data_QDial,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDial::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDial.stringdata0))
        return static_cast<void*>(const_cast< QDial*>(this));
    return QAbstractSlider::qt_metacast(_clname);
}

int QDial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
