/****************************************************************************
** Meta object code from reading C++ file 'qnetworkconfigmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bearer/qnetworkconfigmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkconfigmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkConfigurationManager_t {
    QByteArrayData data[11];
    char stringdata0[185];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkConfigurationManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkConfigurationManager_t qt_meta_stringdata_QNetworkConfigurationManager = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QNetworkConfigurationManager"
QT_MOC_LITERAL(1, 29, 18), // "configurationAdded"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(4, 71, 6), // "config"
QT_MOC_LITERAL(5, 78, 20), // "configurationRemoved"
QT_MOC_LITERAL(6, 99, 20), // "configurationChanged"
QT_MOC_LITERAL(7, 120, 18), // "onlineStateChanged"
QT_MOC_LITERAL(8, 139, 8), // "isOnline"
QT_MOC_LITERAL(9, 148, 15), // "updateCompleted"
QT_MOC_LITERAL(10, 164, 20) // "updateConfigurations"

    },
    "QNetworkConfigurationManager\0"
    "configurationAdded\0\0QNetworkConfiguration\0"
    "config\0configurationRemoved\0"
    "configurationChanged\0onlineStateChanged\0"
    "isOnline\0updateCompleted\0updateConfigurations"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkConfigurationManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    1,   53,    2, 0x06 /* Public */,
       9,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,   57,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QNetworkConfigurationManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkConfigurationManager *_t = static_cast<QNetworkConfigurationManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 3: _t->onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->updateCompleted(); break;
        case 5: _t->updateConfigurations(); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkConfigurationManager::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManager::configurationAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManager::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManager::configurationRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManager::*_t)(const QNetworkConfiguration & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManager::configurationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManager::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManager::onlineStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkConfigurationManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkConfigurationManager::updateCompleted)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QNetworkConfigurationManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkConfigurationManager.data,
      qt_meta_data_QNetworkConfigurationManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkConfigurationManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkConfigurationManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkConfigurationManager.stringdata0))
        return static_cast<void*>(const_cast< QNetworkConfigurationManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkConfigurationManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QNetworkConfigurationManager::configurationAdded(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkConfigurationManager::configurationRemoved(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkConfigurationManager::configurationChanged(const QNetworkConfiguration & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkConfigurationManager::onlineStateChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkConfigurationManager::updateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
