/****************************************************************************
** Meta object code from reading C++ file 'qdbusconnectionmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdbusconnectionmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusconnectionmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusConnectionManager_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusConnectionManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusConnectionManager_t qt_meta_stringdata_QDBusConnectionManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QDBusConnectionManager"
QT_MOC_LITERAL(1, 23, 19), // "connectionRequested"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 22), // "ConnectionRequestData*"
QT_MOC_LITERAL(4, 67, 15), // "serverRequested"
QT_MOC_LITERAL(5, 83, 7), // "address"
QT_MOC_LITERAL(6, 91, 6) // "server"

    },
    "QDBusConnectionManager\0connectionRequested\0"
    "\0ConnectionRequestData*\0serverRequested\0"
    "address\0server"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusConnectionManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::VoidStar,    5,    6,

       0        // eod
};

void QDBusConnectionManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusConnectionManager *_t = static_cast<QDBusConnectionManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionRequested((*reinterpret_cast< ConnectionRequestData*(*)>(_a[1]))); break;
        case 1: _t->serverRequested((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusConnectionManager::*_t)(ConnectionRequestData * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionManager::connectionRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusConnectionManager::*_t)(const QString & , void * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionManager::serverRequested)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QDBusConnectionManager::staticMetaObject = {
    { &QDaemonThread::staticMetaObject, qt_meta_stringdata_QDBusConnectionManager.data,
      qt_meta_data_QDBusConnectionManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusConnectionManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusConnectionManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusConnectionManager.stringdata0))
        return static_cast<void*>(const_cast< QDBusConnectionManager*>(this));
    return QDaemonThread::qt_metacast(_clname);
}

int QDBusConnectionManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDaemonThread::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QDBusConnectionManager::connectionRequested(ConnectionRequestData * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDBusConnectionManager::serverRequested(const QString & _t1, void * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
