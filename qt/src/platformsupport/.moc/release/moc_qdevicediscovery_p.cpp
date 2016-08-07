/****************************************************************************
** Meta object code from reading C++ file 'qdevicediscovery_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../devicediscovery/qdevicediscovery_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdevicediscovery_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDeviceDiscovery_t {
    QByteArrayData data[17];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDeviceDiscovery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDeviceDiscovery_t qt_meta_stringdata_QDeviceDiscovery = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDeviceDiscovery"
QT_MOC_LITERAL(1, 17, 14), // "deviceDetected"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "deviceNode"
QT_MOC_LITERAL(4, 44, 13), // "deviceRemoved"
QT_MOC_LITERAL(5, 58, 11), // "QDeviceType"
QT_MOC_LITERAL(6, 70, 14), // "Device_Unknown"
QT_MOC_LITERAL(7, 85, 12), // "Device_Mouse"
QT_MOC_LITERAL(8, 98, 15), // "Device_Touchpad"
QT_MOC_LITERAL(9, 114, 18), // "Device_Touchscreen"
QT_MOC_LITERAL(10, 133, 15), // "Device_Keyboard"
QT_MOC_LITERAL(11, 149, 10), // "Device_DRM"
QT_MOC_LITERAL(12, 160, 21), // "Device_DRM_PrimaryGPU"
QT_MOC_LITERAL(13, 182, 13), // "Device_Tablet"
QT_MOC_LITERAL(14, 196, 15), // "Device_Joystick"
QT_MOC_LITERAL(15, 212, 16), // "Device_InputMask"
QT_MOC_LITERAL(16, 229, 16) // "Device_VideoMask"

    },
    "QDeviceDiscovery\0deviceDetected\0\0"
    "deviceNode\0deviceRemoved\0QDeviceType\0"
    "Device_Unknown\0Device_Mouse\0Device_Touchpad\0"
    "Device_Touchscreen\0Device_Keyboard\0"
    "Device_DRM\0Device_DRM_PrimaryGPU\0"
    "Device_Tablet\0Device_Joystick\0"
    "Device_InputMask\0Device_VideoMask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDeviceDiscovery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   30, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // enums: name, flags, count, data
       5, 0x0,   11,   34,

 // enum data: key, value
       6, uint(QDeviceDiscovery::Device_Unknown),
       7, uint(QDeviceDiscovery::Device_Mouse),
       8, uint(QDeviceDiscovery::Device_Touchpad),
       9, uint(QDeviceDiscovery::Device_Touchscreen),
      10, uint(QDeviceDiscovery::Device_Keyboard),
      11, uint(QDeviceDiscovery::Device_DRM),
      12, uint(QDeviceDiscovery::Device_DRM_PrimaryGPU),
      13, uint(QDeviceDiscovery::Device_Tablet),
      14, uint(QDeviceDiscovery::Device_Joystick),
      15, uint(QDeviceDiscovery::Device_InputMask),
      16, uint(QDeviceDiscovery::Device_VideoMask),

       0        // eod
};

void QDeviceDiscovery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDeviceDiscovery *_t = static_cast<QDeviceDiscovery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceDetected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->deviceRemoved((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDeviceDiscovery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDeviceDiscovery::deviceDetected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDeviceDiscovery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDeviceDiscovery::deviceRemoved)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QDeviceDiscovery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDeviceDiscovery.data,
      qt_meta_data_QDeviceDiscovery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDeviceDiscovery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDeviceDiscovery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDeviceDiscovery.stringdata0))
        return static_cast<void*>(const_cast< QDeviceDiscovery*>(this));
    return QObject::qt_metacast(_clname);
}

int QDeviceDiscovery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QDeviceDiscovery::deviceDetected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDeviceDiscovery::deviceRemoved(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
