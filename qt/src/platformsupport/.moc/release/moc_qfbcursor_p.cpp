/****************************************************************************
** Meta object code from reading C++ file 'qfbcursor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fbconvenience/qfbcursor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfbcursor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFbCursorDeviceListener_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFbCursorDeviceListener_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFbCursorDeviceListener_t qt_meta_stringdata_QFbCursorDeviceListener = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QFbCursorDeviceListener"
QT_MOC_LITERAL(1, 24, 19), // "onDeviceListChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 31), // "QInputDeviceManager::DeviceType"
QT_MOC_LITERAL(4, 77, 4) // "type"

    },
    "QFbCursorDeviceListener\0onDeviceListChanged\0"
    "\0QInputDeviceManager::DeviceType\0type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFbCursorDeviceListener[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QFbCursorDeviceListener::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFbCursorDeviceListener *_t = static_cast<QFbCursorDeviceListener *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDeviceListChanged((*reinterpret_cast< QInputDeviceManager::DeviceType(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QInputDeviceManager::DeviceType >(); break;
            }
            break;
        }
    }
}

const QMetaObject QFbCursorDeviceListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFbCursorDeviceListener.data,
      qt_meta_data_QFbCursorDeviceListener,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFbCursorDeviceListener::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFbCursorDeviceListener::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFbCursorDeviceListener.stringdata0))
        return static_cast<void*>(const_cast< QFbCursorDeviceListener*>(this));
    return QObject::qt_metacast(_clname);
}

int QFbCursorDeviceListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_QFbCursor_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFbCursor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFbCursor_t qt_meta_stringdata_QFbCursor = {
    {
QT_MOC_LITERAL(0, 0, 9) // "QFbCursor"

    },
    "QFbCursor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFbCursor[] = {

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

void QFbCursor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QFbCursor::staticMetaObject = {
    { &QPlatformCursor::staticMetaObject, qt_meta_stringdata_QFbCursor.data,
      qt_meta_data_QFbCursor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFbCursor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFbCursor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFbCursor.stringdata0))
        return static_cast<void*>(const_cast< QFbCursor*>(this));
    return QPlatformCursor::qt_metacast(_clname);
}

int QFbCursor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformCursor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
