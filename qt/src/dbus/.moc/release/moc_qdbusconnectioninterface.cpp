/****************************************************************************
** Meta object code from reading C++ file 'qdbusconnectioninterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdbusconnectioninterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusconnectioninterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusConnectionInterface_t {
    QByteArrayData data[45];
    char stringdata0[730];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusConnectionInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusConnectionInterface_t qt_meta_stringdata_QDBusConnectionInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QDBusConnectionInterface"
QT_MOC_LITERAL(1, 25, 17), // "serviceRegistered"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 7), // "service"
QT_MOC_LITERAL(4, 52, 19), // "serviceUnregistered"
QT_MOC_LITERAL(5, 72, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(6, 92, 4), // "name"
QT_MOC_LITERAL(7, 97, 8), // "oldOwner"
QT_MOC_LITERAL(8, 106, 8), // "newOwner"
QT_MOC_LITERAL(9, 115, 22), // "callWithCallbackFailed"
QT_MOC_LITERAL(10, 138, 10), // "QDBusError"
QT_MOC_LITERAL(11, 149, 5), // "error"
QT_MOC_LITERAL(12, 155, 12), // "QDBusMessage"
QT_MOC_LITERAL(13, 168, 4), // "call"
QT_MOC_LITERAL(14, 173, 12), // "NameAcquired"
QT_MOC_LITERAL(15, 186, 8), // "NameLost"
QT_MOC_LITERAL(16, 195, 16), // "NameOwnerChanged"
QT_MOC_LITERAL(17, 212, 22), // "registeredServiceNames"
QT_MOC_LITERAL(18, 235, 23), // "QDBusReply<QStringList>"
QT_MOC_LITERAL(19, 259, 19), // "isServiceRegistered"
QT_MOC_LITERAL(20, 279, 16), // "QDBusReply<bool>"
QT_MOC_LITERAL(21, 296, 11), // "serviceName"
QT_MOC_LITERAL(22, 308, 12), // "serviceOwner"
QT_MOC_LITERAL(23, 321, 19), // "QDBusReply<QString>"
QT_MOC_LITERAL(24, 341, 17), // "unregisterService"
QT_MOC_LITERAL(25, 359, 15), // "registerService"
QT_MOC_LITERAL(26, 375, 58), // "QDBusReply<QDBusConnectionInt..."
QT_MOC_LITERAL(27, 434, 19), // "ServiceQueueOptions"
QT_MOC_LITERAL(28, 454, 7), // "qoption"
QT_MOC_LITERAL(29, 462, 25), // "ServiceReplacementOptions"
QT_MOC_LITERAL(30, 488, 7), // "roption"
QT_MOC_LITERAL(31, 496, 10), // "servicePid"
QT_MOC_LITERAL(32, 507, 16), // "QDBusReply<uint>"
QT_MOC_LITERAL(33, 524, 10), // "serviceUid"
QT_MOC_LITERAL(34, 535, 12), // "startService"
QT_MOC_LITERAL(35, 548, 16), // "QDBusReply<void>"
QT_MOC_LITERAL(36, 565, 16), // "DontQueueService"
QT_MOC_LITERAL(37, 582, 12), // "QueueService"
QT_MOC_LITERAL(38, 595, 22), // "ReplaceExistingService"
QT_MOC_LITERAL(39, 618, 20), // "DontAllowReplacement"
QT_MOC_LITERAL(40, 639, 16), // "AllowReplacement"
QT_MOC_LITERAL(41, 656, 20), // "RegisterServiceReply"
QT_MOC_LITERAL(42, 677, 20), // "ServiceNotRegistered"
QT_MOC_LITERAL(43, 698, 17), // "ServiceRegistered"
QT_MOC_LITERAL(44, 716, 13) // "ServiceQueued"

    },
    "QDBusConnectionInterface\0serviceRegistered\0"
    "\0service\0serviceUnregistered\0"
    "serviceOwnerChanged\0name\0oldOwner\0"
    "newOwner\0callWithCallbackFailed\0"
    "QDBusError\0error\0QDBusMessage\0call\0"
    "NameAcquired\0NameLost\0NameOwnerChanged\0"
    "registeredServiceNames\0QDBusReply<QStringList>\0"
    "isServiceRegistered\0QDBusReply<bool>\0"
    "serviceName\0serviceOwner\0QDBusReply<QString>\0"
    "unregisterService\0registerService\0"
    "QDBusReply<QDBusConnectionInterface::RegisterServiceReply>\0"
    "ServiceQueueOptions\0qoption\0"
    "ServiceReplacementOptions\0roption\0"
    "servicePid\0QDBusReply<uint>\0serviceUid\0"
    "startService\0QDBusReply<void>\0"
    "DontQueueService\0QueueService\0"
    "ReplaceExistingService\0DontAllowReplacement\0"
    "AllowReplacement\0RegisterServiceReply\0"
    "ServiceNotRegistered\0ServiceRegistered\0"
    "ServiceQueued"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusConnectionInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       1,  164, // properties
       3,  167, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       4,    1,  102,    2, 0x06 /* Public */,
       5,    3,  105,    2, 0x06 /* Public */,
       9,    2,  112,    2, 0x06 /* Public */,
      14,    1,  117,    2, 0x06 /* Public */,
      15,    1,  120,    2, 0x06 /* Public */,
      16,    3,  123,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  130,    2, 0x0a /* Public */,
      19,    1,  131,    2, 0x0a /* Public */,
      22,    1,  134,    2, 0x0a /* Public */,
      24,    1,  137,    2, 0x0a /* Public */,
      25,    3,  140,    2, 0x0a /* Public */,
      25,    2,  147,    2, 0x2a /* Public | MethodCloned */,
      25,    1,  152,    2, 0x2a /* Public | MethodCloned */,
      31,    1,  155,    2, 0x0a /* Public */,
      33,    1,  158,    2, 0x0a /* Public */,
      34,    1,  161,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,

 // slots: parameters
    0x80000000 | 18,
    0x80000000 | 20, QMetaType::QString,   21,
    0x80000000 | 23, QMetaType::QString,    6,
    0x80000000 | 20, QMetaType::QString,   21,
    0x80000000 | 26, QMetaType::QString, 0x80000000 | 27, 0x80000000 | 29,   21,   28,   30,
    0x80000000 | 26, QMetaType::QString, 0x80000000 | 27,   21,   28,
    0x80000000 | 26, QMetaType::QString,   21,
    0x80000000 | 32, QMetaType::QString,   21,
    0x80000000 | 32, QMetaType::QString,   21,
    0x80000000 | 35, QMetaType::QString,    6,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00095009,

 // enums: name, flags, count, data
      27, 0x0,    3,  179,
      29, 0x0,    2,  185,
      41, 0x0,    3,  189,

 // enum data: key, value
      36, uint(QDBusConnectionInterface::DontQueueService),
      37, uint(QDBusConnectionInterface::QueueService),
      38, uint(QDBusConnectionInterface::ReplaceExistingService),
      39, uint(QDBusConnectionInterface::DontAllowReplacement),
      40, uint(QDBusConnectionInterface::AllowReplacement),
      42, uint(QDBusConnectionInterface::ServiceNotRegistered),
      43, uint(QDBusConnectionInterface::ServiceRegistered),
      44, uint(QDBusConnectionInterface::ServiceQueued),

       0        // eod
};

void QDBusConnectionInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusConnectionInterface *_t = static_cast<QDBusConnectionInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->serviceRegistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->serviceUnregistered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->callWithCallbackFailed((*reinterpret_cast< const QDBusError(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 4: _t->NameAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->NameLost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->NameOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { QDBusReply<QStringList> _r = _t->registeredServiceNames();
            if (_a[0]) *reinterpret_cast< QDBusReply<QStringList>*>(_a[0]) = _r; }  break;
        case 8: { QDBusReply<bool> _r = _t->isServiceRegistered((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<bool>*>(_a[0]) = _r; }  break;
        case 9: { QDBusReply<QString> _r = _t->serviceOwner((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = _r; }  break;
        case 10: { QDBusReply<bool> _r = _t->unregisterService((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<bool>*>(_a[0]) = _r; }  break;
        case 11: { QDBusReply<QDBusConnectionInterface::RegisterServiceReply> _r = _t->registerService((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ServiceQueueOptions(*)>(_a[2])),(*reinterpret_cast< ServiceReplacementOptions(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QDBusConnectionInterface::RegisterServiceReply>*>(_a[0]) = _r; }  break;
        case 12: { QDBusReply<QDBusConnectionInterface::RegisterServiceReply> _r = _t->registerService((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< ServiceQueueOptions(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QDBusConnectionInterface::RegisterServiceReply>*>(_a[0]) = _r; }  break;
        case 13: { QDBusReply<QDBusConnectionInterface::RegisterServiceReply> _r = _t->registerService((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QDBusConnectionInterface::RegisterServiceReply>*>(_a[0]) = _r; }  break;
        case 14: { QDBusReply<uint> _r = _t->servicePid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<uint>*>(_a[0]) = _r; }  break;
        case 15: { QDBusReply<uint> _r = _t->serviceUid((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<uint>*>(_a[0]) = _r; }  break;
        case 16: { QDBusReply<void> _r = _t->startService((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusReply<void>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusError >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::serviceRegistered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::serviceUnregistered)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::serviceOwnerChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QDBusError & , const QDBusMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::callWithCallbackFailed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::NameAcquired)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::NameLost)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDBusConnectionInterface::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionInterface::NameOwnerChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDBusConnectionInterface *_t = static_cast<QDBusConnectionInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDBusReply<QStringList>*>(_v) = _t->registeredServiceNames(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDBusConnectionInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QDBusConnectionInterface.data,
      qt_meta_data_QDBusConnectionInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusConnectionInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusConnectionInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusConnectionInterface.stringdata0))
        return static_cast<void*>(const_cast< QDBusConnectionInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QDBusConnectionInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDBusConnectionInterface::serviceRegistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDBusConnectionInterface::serviceUnregistered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusConnectionInterface::serviceOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDBusConnectionInterface::callWithCallbackFailed(const QDBusError & _t1, const QDBusMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QDBusConnectionInterface::NameAcquired(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QDBusConnectionInterface::NameLost(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QDBusConnectionInterface::NameOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
