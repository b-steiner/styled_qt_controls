/****************************************************************************
** Meta object code from reading C++ file 'qdbuspendingcall_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qdbuspendingcall_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbuspendingcall_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusPendingCallWatcherHelper_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusPendingCallWatcherHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusPendingCallWatcherHelper_t qt_meta_stringdata_QDBusPendingCallWatcherHelper = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QDBusPendingCallWatcherHelper"
QT_MOC_LITERAL(1, 30, 8), // "finished"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 5), // "reply"
QT_MOC_LITERAL(4, 46, 12), // "QDBusMessage"
QT_MOC_LITERAL(5, 59, 3), // "msg"
QT_MOC_LITERAL(6, 63, 5), // "error"
QT_MOC_LITERAL(7, 69, 10) // "QDBusError"

    },
    "QDBusPendingCallWatcherHelper\0finished\0"
    "\0reply\0QDBusMessage\0msg\0error\0QDBusError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusPendingCallWatcherHelper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,
       6,    2,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 4,    6,    5,

       0        // eod
};

void QDBusPendingCallWatcherHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusPendingCallWatcherHelper *_t = static_cast<QDBusPendingCallWatcherHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->reply((*reinterpret_cast< const QDBusMessage(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< const QDBusError(*)>(_a[1])),(*reinterpret_cast< const QDBusMessage(*)>(_a[2]))); break;
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
        case 2:
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
            typedef void (QDBusPendingCallWatcherHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusPendingCallWatcherHelper::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusPendingCallWatcherHelper::*_t)(const QDBusMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusPendingCallWatcherHelper::reply)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusPendingCallWatcherHelper::*_t)(const QDBusError & , const QDBusMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusPendingCallWatcherHelper::error)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QDBusPendingCallWatcherHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDBusPendingCallWatcherHelper.data,
      qt_meta_data_QDBusPendingCallWatcherHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusPendingCallWatcherHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusPendingCallWatcherHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusPendingCallWatcherHelper.stringdata0))
        return static_cast<void*>(const_cast< QDBusPendingCallWatcherHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int QDBusPendingCallWatcherHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QDBusPendingCallWatcherHelper::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QDBusPendingCallWatcherHelper::reply(const QDBusMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusPendingCallWatcherHelper::error(const QDBusError & _t1, const QDBusMessage & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
