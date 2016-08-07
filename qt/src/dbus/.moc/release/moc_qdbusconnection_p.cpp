/****************************************************************************
** Meta object code from reading C++ file 'qdbusconnection_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdbusconnection_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusconnection_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusConnectionPrivate_t {
    QByteArrayData data[44];
    char stringdata0[630];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusConnectionPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusConnectionPrivate_t qt_meta_stringdata_QDBusConnectionPrivate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QDBusConnectionPrivate"
QT_MOC_LITERAL(1, 23, 21), // "dispatchStatusChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 16), // "spyHooksFinished"
QT_MOC_LITERAL(4, 63, 12), // "QDBusMessage"
QT_MOC_LITERAL(5, 76, 3), // "msg"
QT_MOC_LITERAL(6, 80, 19), // "messageNeedsSending"
QT_MOC_LITERAL(7, 100, 24), // "QDBusPendingCallPrivate*"
QT_MOC_LITERAL(8, 125, 5), // "pcall"
QT_MOC_LITERAL(9, 131, 7), // "timeout"
QT_MOC_LITERAL(10, 139, 21), // "signalNeedsConnecting"
QT_MOC_LITERAL(11, 161, 3), // "key"
QT_MOC_LITERAL(12, 165, 34), // "QDBusConnectionPrivate::Signa..."
QT_MOC_LITERAL(13, 200, 4), // "hook"
QT_MOC_LITERAL(14, 205, 24), // "signalNeedsDisconnecting"
QT_MOC_LITERAL(15, 230, 19), // "serviceOwnerChanged"
QT_MOC_LITERAL(16, 250, 4), // "name"
QT_MOC_LITERAL(17, 255, 8), // "oldOwner"
QT_MOC_LITERAL(18, 264, 8), // "newOwner"
QT_MOC_LITERAL(19, 273, 22), // "callWithCallbackFailed"
QT_MOC_LITERAL(20, 296, 10), // "QDBusError"
QT_MOC_LITERAL(21, 307, 5), // "error"
QT_MOC_LITERAL(22, 313, 7), // "message"
QT_MOC_LITERAL(23, 321, 19), // "newServerConnection"
QT_MOC_LITERAL(24, 341, 23), // "QDBusConnectionPrivate*"
QT_MOC_LITERAL(25, 365, 13), // "newConnection"
QT_MOC_LITERAL(26, 379, 10), // "doDispatch"
QT_MOC_LITERAL(27, 390, 10), // "socketRead"
QT_MOC_LITERAL(28, 401, 11), // "socketWrite"
QT_MOC_LITERAL(29, 413, 15), // "objectDestroyed"
QT_MOC_LITERAL(30, 429, 1), // "o"
QT_MOC_LITERAL(31, 431, 11), // "relaySignal"
QT_MOC_LITERAL(32, 443, 3), // "obj"
QT_MOC_LITERAL(33, 447, 18), // "const QMetaObject*"
QT_MOC_LITERAL(34, 466, 8), // "signalId"
QT_MOC_LITERAL(35, 475, 4), // "args"
QT_MOC_LITERAL(36, 480, 13), // "addSignalHook"
QT_MOC_LITERAL(37, 494, 10), // "SignalHook"
QT_MOC_LITERAL(38, 505, 16), // "removeSignalHook"
QT_MOC_LITERAL(39, 522, 25), // "serviceOwnerChangedNoLock"
QT_MOC_LITERAL(40, 548, 21), // "registerServiceNoLock"
QT_MOC_LITERAL(41, 570, 11), // "serviceName"
QT_MOC_LITERAL(42, 582, 23), // "unregisterServiceNoLock"
QT_MOC_LITERAL(43, 606, 23) // "handleDBusDisconnection"

    },
    "QDBusConnectionPrivate\0dispatchStatusChanged\0"
    "\0spyHooksFinished\0QDBusMessage\0msg\0"
    "messageNeedsSending\0QDBusPendingCallPrivate*\0"
    "pcall\0timeout\0signalNeedsConnecting\0"
    "key\0QDBusConnectionPrivate::SignalHook\0"
    "hook\0signalNeedsDisconnecting\0"
    "serviceOwnerChanged\0name\0oldOwner\0"
    "newOwner\0callWithCallbackFailed\0"
    "QDBusError\0error\0message\0newServerConnection\0"
    "QDBusConnectionPrivate*\0newConnection\0"
    "doDispatch\0socketRead\0socketWrite\0"
    "objectDestroyed\0o\0relaySignal\0obj\0"
    "const QMetaObject*\0signalId\0args\0"
    "addSignalHook\0SignalHook\0removeSignalHook\0"
    "serviceOwnerChangedNoLock\0"
    "registerServiceNoLock\0serviceName\0"
    "unregisterServiceNoLock\0handleDBusDisconnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusConnectionPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06 /* Public */,
       3,    1,  115,    2, 0x06 /* Public */,
       6,    3,  118,    2, 0x06 /* Public */,
       6,    2,  125,    2, 0x26 /* Public | MethodCloned */,
      10,    2,  130,    2, 0x06 /* Public */,
      14,    2,  135,    2, 0x06 /* Public */,
      15,    3,  140,    2, 0x06 /* Public */,
      19,    2,  147,    2, 0x06 /* Public */,
      23,    1,  152,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    0,  155,    2, 0x0a /* Public */,
      27,    1,  156,    2, 0x0a /* Public */,
      28,    1,  159,    2, 0x0a /* Public */,
      29,    1,  162,    2, 0x0a /* Public */,
      31,    4,  165,    2, 0x0a /* Public */,
      36,    2,  174,    2, 0x0a /* Public */,
      38,    2,  179,    2, 0x0a /* Public */,
      39,    3,  184,    2, 0x08 /* Private */,
      40,    1,  191,    2, 0x08 /* Private */,
      42,    1,  194,    2, 0x08 /* Private */,
      43,    0,  197,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::VoidStar, QMetaType::Int,    8,    5,    9,
    QMetaType::Void, 0x80000000 | 7, QMetaType::VoidStar,    8,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 12,   11,   13,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,
    QMetaType::Void, 0x80000000 | 20, 0x80000000 | 4,   21,   22,
    QMetaType::Void, 0x80000000 | 24,   25,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QObjectStar,   30,
    QMetaType::Void, QMetaType::QObjectStar, 0x80000000 | 33, QMetaType::Int, QMetaType::QVariantList,   32,    2,   34,   35,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 37,   11,   13,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 37,   11,   13,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   16,   17,   18,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void,

       0        // eod
};

void QDBusConnectionPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusConnectionPrivate *_t = static_cast<QDBusConnectionPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dispatchStatusChanged(); break;
        case 1: _t->spyHooksFinished((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 2: _t->messageNeedsSending((*reinterpret_cast< QDBusPendingCallPrivate*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->messageNeedsSending((*reinterpret_cast< QDBusPendingCallPrivate*(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2]))); break;
        case 4: _t->signalNeedsConnecting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusConnectionPrivate::SignalHook(*)>(_a[2]))); break;
        case 5: { bool _r = _t->signalNeedsDisconnecting((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QDBusConnectionPrivate::SignalHook(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: _t->serviceOwnerChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: _t->callWithCallbackFailed((*reinterpret_cast< const QDBusError(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
        case 8: _t->newServerConnection((*reinterpret_cast< QDBusConnectionPrivate*(*)>(_a[1]))); break;
        case 9: _t->doDispatch(); break;
        case 10: _t->socketRead((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->socketWrite((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->objectDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 13: _t->relaySignal((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< const QMetaObject*(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< const QVariantList(*)>(_a[4]))); break;
        case 14: _t->addSignalHook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SignalHook(*)>(_a[2]))); break;
        case 15: { bool _r = _t->removeSignalHook((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const SignalHook(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 16: _t->serviceOwnerChangedNoLock((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 17: _t->registerServiceNoLock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->unregisterServiceNoLock((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->handleDBusDisconnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusError >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMessage >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusConnectionPrivate* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusConnectionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::dispatchStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(const QDBusMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::spyHooksFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(QDBusPendingCallPrivate * , void * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::messageNeedsSending)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(const QString & , const QDBusConnectionPrivate::SignalHook & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::signalNeedsConnecting)) {
                *result = 4;
                return;
            }
        }
        {
            typedef bool (QDBusConnectionPrivate::*_t)(const QString & , const QDBusConnectionPrivate::SignalHook & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::signalNeedsDisconnecting)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::serviceOwnerChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(const QDBusError & , const QDBusMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::callWithCallbackFailed)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QDBusConnectionPrivate::*_t)(QDBusConnectionPrivate * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusConnectionPrivate::newServerConnection)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject QDBusConnectionPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDBusConnectionPrivate.data,
      qt_meta_data_QDBusConnectionPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusConnectionPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusConnectionPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusConnectionPrivate.stringdata0))
        return static_cast<void*>(const_cast< QDBusConnectionPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QDBusConnectionPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void QDBusConnectionPrivate::dispatchStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QDBusConnectionPrivate::spyHooksFinished(const QDBusMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusConnectionPrivate::messageNeedsSending(QDBusPendingCallPrivate * _t1, void * _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void QDBusConnectionPrivate::signalNeedsConnecting(const QString & _t1, const QDBusConnectionPrivate::SignalHook & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
bool QDBusConnectionPrivate::signalNeedsDisconnecting(const QString & _t1, const QDBusConnectionPrivate::SignalHook & _t2)
{
    bool _t0 = bool();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
    return _t0;
}

// SIGNAL 6
void QDBusConnectionPrivate::serviceOwnerChanged(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QDBusConnectionPrivate::callWithCallbackFailed(const QDBusError & _t1, const QDBusMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QDBusConnectionPrivate::newServerConnection(QDBusConnectionPrivate * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
