/****************************************************************************
** Meta object code from reading C++ file 'qcoreapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qcoreapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcoreapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCoreApplication_t {
    QByteArrayData data[13];
    char stringdata0[221];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCoreApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCoreApplication_t qt_meta_stringdata_QCoreApplication = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QCoreApplication"
QT_MOC_LITERAL(1, 17, 11), // "aboutToQuit"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "organizationNameChanged"
QT_MOC_LITERAL(4, 54, 25), // "organizationDomainChanged"
QT_MOC_LITERAL(5, 80, 22), // "applicationNameChanged"
QT_MOC_LITERAL(6, 103, 25), // "applicationVersionChanged"
QT_MOC_LITERAL(7, 129, 4), // "quit"
QT_MOC_LITERAL(8, 134, 15), // "applicationName"
QT_MOC_LITERAL(9, 150, 18), // "applicationVersion"
QT_MOC_LITERAL(10, 169, 16), // "organizationName"
QT_MOC_LITERAL(11, 186, 18), // "organizationDomain"
QT_MOC_LITERAL(12, 205, 15) // "quitLockEnabled"

    },
    "QCoreApplication\0aboutToQuit\0\0"
    "organizationNameChanged\0"
    "organizationDomainChanged\0"
    "applicationNameChanged\0applicationVersionChanged\0"
    "quit\0applicationName\0applicationVersion\0"
    "organizationName\0organizationDomain\0"
    "quitLockEnabled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCoreApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00495103,
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       3,
       4,
       1,
       2,
       0,

       0        // eod
};

void QCoreApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCoreApplication *_t = static_cast<QCoreApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToQuit(QPrivateSignal()); break;
        case 1: _t->organizationNameChanged(); break;
        case 2: _t->organizationDomainChanged(); break;
        case 3: _t->applicationNameChanged(); break;
        case 4: _t->applicationVersionChanged(); break;
        case 5: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCoreApplication::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCoreApplication::aboutToQuit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCoreApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCoreApplication::organizationNameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCoreApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCoreApplication::organizationDomainChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCoreApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCoreApplication::applicationNameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QCoreApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCoreApplication::applicationVersionChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QCoreApplication *_t = static_cast<QCoreApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->applicationName(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationVersion(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->organizationName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->organizationDomain(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isQuitLockEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QCoreApplication *_t = static_cast<QCoreApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setApplicationName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setApplicationVersion(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setOrganizationName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOrganizationDomain(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setQuitLockEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QCoreApplication::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QCoreApplication.data,
      qt_meta_data_QCoreApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCoreApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCoreApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCoreApplication.stringdata0))
        return static_cast<void*>(const_cast< QCoreApplication*>(this));
    return QObject::qt_metacast(_clname);
}

int QCoreApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QCoreApplication::aboutToQuit(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QCoreApplication::organizationNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QCoreApplication::organizationDomainChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QCoreApplication::applicationNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QCoreApplication::applicationVersionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
