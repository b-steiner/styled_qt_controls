/****************************************************************************
** Meta object code from reading C++ file 'qnetworksession_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bearer/qnetworksession_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworksession_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkSessionPrivate_t {
    QByteArrayData data[16];
    char stringdata0[283];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkSessionPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkSessionPrivate_t qt_meta_stringdata_QNetworkSessionPrivate = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QNetworkSessionPrivate"
QT_MOC_LITERAL(1, 23, 25), // "quitPendingWaitsForOpened"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 5), // "error"
QT_MOC_LITERAL(4, 56, 29), // "QNetworkSession::SessionError"
QT_MOC_LITERAL(5, 86, 12), // "stateChanged"
QT_MOC_LITERAL(6, 99, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(7, 122, 5), // "state"
QT_MOC_LITERAL(8, 128, 6), // "closed"
QT_MOC_LITERAL(9, 135, 25), // "newConfigurationActivated"
QT_MOC_LITERAL(10, 161, 29), // "preferredConfigurationChanged"
QT_MOC_LITERAL(11, 191, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(12, 213, 6), // "config"
QT_MOC_LITERAL(13, 220, 10), // "isSeamless"
QT_MOC_LITERAL(14, 231, 20), // "usagePoliciesChanged"
QT_MOC_LITERAL(15, 252, 30) // "QNetworkSession::UsagePolicies"

    },
    "QNetworkSessionPrivate\0quitPendingWaitsForOpened\0"
    "\0error\0QNetworkSession::SessionError\0"
    "stateChanged\0QNetworkSession::State\0"
    "state\0closed\0newConfigurationActivated\0"
    "preferredConfigurationChanged\0"
    "QNetworkConfiguration\0config\0isSeamless\0"
    "usagePoliciesChanged\0"
    "QNetworkSession::UsagePolicies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkSessionPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    1,   50,    2, 0x06 /* Public */,
       5,    1,   53,    2, 0x06 /* Public */,
       8,    0,   56,    2, 0x06 /* Public */,
       9,    0,   57,    2, 0x06 /* Public */,
      10,    2,   58,    2, 0x06 /* Public */,
      14,    1,   63,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    3,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,   13,
    QMetaType::Void, 0x80000000 | 15,    2,

       0        // eod
};

void QNetworkSessionPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkSessionPrivate *_t = static_cast<QNetworkSessionPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->quitPendingWaitsForOpened(); break;
        case 1: _t->error((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        case 2: _t->stateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 3: _t->closed(); break;
        case 4: _t->newConfigurationActivated(); break;
        case 5: _t->preferredConfigurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 6: _t->usagePoliciesChanged((*reinterpret_cast< QNetworkSession::UsagePolicies(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::SessionError >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::UsagePolicies >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkSessionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::quitPendingWaitsForOpened)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)(QNetworkSession::SessionError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::error)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)(QNetworkSession::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::closed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::newConfigurationActivated)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)(const QNetworkConfiguration & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::preferredConfigurationChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNetworkSessionPrivate::*_t)(QNetworkSession::UsagePolicies );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkSessionPrivate::usagePoliciesChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QNetworkSessionPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkSessionPrivate.data,
      qt_meta_data_QNetworkSessionPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkSessionPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkSessionPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkSessionPrivate.stringdata0))
        return static_cast<void*>(const_cast< QNetworkSessionPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkSessionPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QNetworkSessionPrivate::quitPendingWaitsForOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNetworkSessionPrivate::error(QNetworkSession::SessionError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkSessionPrivate::stateChanged(QNetworkSession::State _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkSessionPrivate::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QNetworkSessionPrivate::newConfigurationActivated()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QNetworkSessionPrivate::preferredConfigurationChanged(const QNetworkConfiguration & _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QNetworkSessionPrivate::usagePoliciesChanged(QNetworkSession::UsagePolicies _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
