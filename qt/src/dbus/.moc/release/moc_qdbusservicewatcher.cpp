/****************************************************************************
** Meta object code from reading C++ file 'qdbusservicewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdbusservicewatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusservicewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusServiceWatcher_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusServiceWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusServiceWatcher_t qt_meta_stringdata_QDBusServiceWatcher = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QDBusServiceWatcher"
QT_MOC_LITERAL(1, 20, 17), // "serviceRegistered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "service"
QT_MOC_LITERAL(4, 47, 19), // "serviceUnregistered"
QT_MOC_LITERAL(5, 67, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(6, 87, 8), // "oldOwner"
QT_MOC_LITERAL(7, 96, 8), // "newOwner"
QT_MOC_LITERAL(8, 105, 22), // "_q_serviceOwnerChanged"
QT_MOC_LITERAL(9, 128, 15), // "watchedServices"
QT_MOC_LITERAL(10, 144, 9), // "watchMode"
QT_MOC_LITERAL(11, 154, 9) // "WatchMode"

    },
    "QDBusServiceWatcher\0serviceRegistered\0"
    "\0service\0serviceUnregistered\0"
    "serviceOwnerChanged\0oldOwner\0newOwner\0"
    "_q_serviceOwnerChanged\0watchedServices\0"
    "watchMode\0WatchMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusServiceWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    3,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00095103,
      10, 0x80000000 | 11, 0x0009510b,

       0        // eod
};

void QDBusServiceWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusServiceWatcher *_t = static_cast<QDBusServiceWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->serviceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_serviceOwnerChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusServiceWatcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusServiceWatcher::serviceRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusServiceWatcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusServiceWatcher::serviceUnregistered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusServiceWatcher::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusServiceWatcher::serviceOwnerChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDBusServiceWatcher *_t = static_cast<QDBusServiceWatcher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->watchedServices(); break;
        case 1: *reinterpret_cast< WatchMode*>(_v) = _t->watchMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDBusServiceWatcher *_t = static_cast<QDBusServiceWatcher *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWatchedServices(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setWatchMode(*reinterpret_cast< WatchMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDBusServiceWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDBusServiceWatcher.data,
      qt_meta_data_QDBusServiceWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusServiceWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusServiceWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusServiceWatcher.stringdata0))
        return static_cast<void*>(const_cast< QDBusServiceWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int QDBusServiceWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDBusServiceWatcher::serviceRegistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDBusServiceWatcher::serviceUnregistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusServiceWatcher::serviceOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
