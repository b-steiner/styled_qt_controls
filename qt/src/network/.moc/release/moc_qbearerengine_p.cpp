/****************************************************************************
** Meta object code from reading C++ file 'qbearerengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bearer/qbearerengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbearerengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBearerEngine_t {
    QByteArrayData data[8];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBearerEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBearerEngine_t qt_meta_stringdata_QBearerEngine = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QBearerEngine"
QT_MOC_LITERAL(1, 14, 18), // "configurationAdded"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 35), // "QNetworkConfigurationPrivateP..."
QT_MOC_LITERAL(4, 70, 6), // "config"
QT_MOC_LITERAL(5, 77, 20), // "configurationRemoved"
QT_MOC_LITERAL(6, 98, 20), // "configurationChanged"
QT_MOC_LITERAL(7, 119, 15) // "updateCompleted"

    },
    "QBearerEngine\0configurationAdded\0\0"
    "QNetworkConfigurationPrivatePointer\0"
    "config\0configurationRemoved\0"
    "configurationChanged\0updateCompleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBearerEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       7,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QBearerEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBearerEngine *_t = static_cast<QBearerEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->configurationAdded((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 1: _t->configurationRemoved((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 2: _t->configurationChanged((*reinterpret_cast< QNetworkConfigurationPrivatePointer(*)>(_a[1]))); break;
        case 3: _t->updateCompleted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkConfigurationPrivatePointer >(); break;
            }
            break;
        case 2:
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
            typedef void (QBearerEngine::*_t)(QNetworkConfigurationPrivatePointer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBearerEngine::configurationAdded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QBearerEngine::*_t)(QNetworkConfigurationPrivatePointer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBearerEngine::configurationRemoved)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QBearerEngine::*_t)(QNetworkConfigurationPrivatePointer );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBearerEngine::configurationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QBearerEngine::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBearerEngine::updateCompleted)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QBearerEngine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBearerEngine.data,
      qt_meta_data_QBearerEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBearerEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBearerEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBearerEngine.stringdata0))
        return static_cast<void*>(const_cast< QBearerEngine*>(this));
    return QObject::qt_metacast(_clname);
}

int QBearerEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QBearerEngine::configurationAdded(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QBearerEngine::configurationRemoved(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QBearerEngine::configurationChanged(QNetworkConfigurationPrivatePointer _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QBearerEngine::updateCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
