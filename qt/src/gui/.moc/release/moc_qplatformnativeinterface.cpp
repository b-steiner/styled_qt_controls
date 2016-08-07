/****************************************************************************
** Meta object code from reading C++ file 'qplatformnativeinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformnativeinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformnativeinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformNativeInterface_t {
    QByteArrayData data[6];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformNativeInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformNativeInterface_t qt_meta_stringdata_QPlatformNativeInterface = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QPlatformNativeInterface"
QT_MOC_LITERAL(1, 25, 21), // "windowPropertyChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 16), // "QPlatformWindow*"
QT_MOC_LITERAL(4, 65, 6), // "window"
QT_MOC_LITERAL(5, 72, 12) // "propertyName"

    },
    "QPlatformNativeInterface\0windowPropertyChanged\0"
    "\0QPlatformWindow*\0window\0propertyName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformNativeInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,

       0        // eod
};

void QPlatformNativeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformNativeInterface *_t = static_cast<QPlatformNativeInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowPropertyChanged((*reinterpret_cast< QPlatformWindow*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformNativeInterface::*_t)(QPlatformWindow * , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformNativeInterface::windowPropertyChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QPlatformNativeInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformNativeInterface.data,
      qt_meta_data_QPlatformNativeInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformNativeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformNativeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformNativeInterface.stringdata0))
        return static_cast<void*>(const_cast< QPlatformNativeInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformNativeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QPlatformNativeInterface::windowPropertyChanged(QPlatformWindow * _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
