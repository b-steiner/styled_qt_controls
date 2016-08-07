/****************************************************************************
** Meta object code from reading C++ file 'qnetworkconfigmanager_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bearer/qnetworkconfigmanager_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkconfigmanager_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkConfigurationManagerPrivate_t {
    QByteArrayData data[16];
    char stringdata0[290];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkConfigurationManagerPrivate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkConfigurationManagerPrivate_t qt_meta_stringdata_QNetworkConfigurationManagerPrivate = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QNetworkConfigurationManagerP..."
QT_MOC_LITERAL(1, 36, 18), // "configurationAdded"
QT_MOC_LITERAL(2, 55, 0), // ""
QT_MOC_LITERAL(3, 56, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(4, 78, 6), // "config"
QT_MOC_LITERAL(5, 85, 20), // "configurationRemoved"
QT_MOC_LITERAL(6, 106, 20), // "configurationChanged"
QT_MOC_LITERAL(7, 127, 27), // "configurationUpdateComplete"
QT_MOC_LITERAL(8, 155, 18), // "onlineStateChanged"
QT_MOC_LITERAL(9, 174, 8), // "isOnline"
QT_MOC_LITERAL(10, 183, 20), // "updateConfigurations"
QT_MOC_LITERAL(11, 204, 20), // "addPreAndPostRoutine"
QT_MOC_LITERAL(12, 225, 35), // "QNetworkConfigurationPrivateP..."
QT_MOC_LITERAL(13, 261, 3), // "ptr"
QT_MOC_LITERAL(14, 265, 11), // "pollEngines"
QT_MOC_LITERAL(15, 277, 12) // "startPolling"

    },
    "QNetworkConfigurationManagerPrivate\0"
    "configurationAdded\0\0QNetworkConfiguration\0"
    "config\0configurationRemoved\0"
    "configurationChanged\0configurationUpdateComplete\0"
    "onlineStateChanged\0isOnline\0"
    "updateConfigurations\0addPreAndPostRoutine\0"
    "QNetworkConfigurationPrivatePointer\0"
    "ptr\0pollEngines\0startPolling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkConfigurationManagerPrivate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       5,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,
       7,    0,   83,    2, 0x06 /* Public */,
       8,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   87,    2, 0x0a /* Public */,
      11,    0,   88,    2, 0x0a /* Public */,
       1,    1,   89,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       6,    1,   95,    2, 0x08 /* Private */,
      14,    0,   98,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      15,    0,   99,    2, 0x00 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

       0        // eod
};

void QNetworkConfigurationManagerPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkConfigurationManagerPrivate *_t = static_cast<QNetworkConfigurationManagerPrivate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->configurationUpdateComplete(); break;
        case 4: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->updateConfigurations(); break;
        case 6: _t->addPreAndPostRoutine(); break;
        case 7: _t->configurationAdded((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 8: _t->configurationRemoved((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 9: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 10: _t->pollEngines(); break;
        case 11: _t->startPolling(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfiguration >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkConfigurationManagerPrivate::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManagerPrivate::configurationAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManagerPrivate::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManagerPrivate::configurationRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManagerPrivate::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManagerPrivate::configurationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManagerPrivate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManagerPrivate::configurationUpdateComplete)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManagerPrivate::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManagerPrivate::onlineStateChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QNetworkConfigurationManagerPrivate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkConfigurationManagerPrivate.data,
      qt_meta_data_QNetworkConfigurationManagerPrivate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkConfigurationManagerPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkConfigurationManagerPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkConfigurationManagerPrivate.stringdata0))
        return static_cast<void*>(const_cast< QNetworkConfigurationManagerPrivate*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkConfigurationManagerPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QNetworkConfigurationManagerPrivate::configurationAdded(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkConfigurationManagerPrivate::configurationRemoved(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkConfigurationManagerPrivate::configurationChanged(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkConfigurationManagerPrivate::configurationUpdateComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QNetworkConfigurationManagerPrivate::onlineStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
