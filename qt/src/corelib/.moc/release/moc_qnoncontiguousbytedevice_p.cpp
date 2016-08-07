/****************************************************************************
** Meta object code from reading C++ file 'qnoncontiguousbytedevice_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qnoncontiguousbytedevice_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnoncontiguousbytedevice_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNonContiguousByteDevice_t {
    QByteArrayData data[6];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNonContiguousByteDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNonContiguousByteDevice_t qt_meta_stringdata_QNonContiguousByteDevice = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QNonContiguousByteDevice"
QT_MOC_LITERAL(1, 25, 9), // "readyRead"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 12), // "readProgress"
QT_MOC_LITERAL(4, 49, 7), // "current"
QT_MOC_LITERAL(5, 57, 5) // "total"

    },
    "QNonContiguousByteDevice\0readyRead\0\0"
    "readProgress\0current\0total"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNonContiguousByteDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    2,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

void QNonContiguousByteDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNonContiguousByteDevice *_t = static_cast<QNonContiguousByteDevice *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->readProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNonContiguousByteDevice::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNonContiguousByteDevice::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNonContiguousByteDevice::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNonContiguousByteDevice::readProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QNonContiguousByteDevice::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDevice.data,
      qt_meta_data_QNonContiguousByteDevice,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNonContiguousByteDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDevice.stringdata0))
        return static_cast<void*>(const_cast< QNonContiguousByteDevice*>(this));
    return QObject::qt_metacast(_clname);
}

int QNonContiguousByteDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QNonContiguousByteDevice::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNonContiguousByteDevice::readProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl_t {
    QByteArrayData data[1];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl_t qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl = {
    {
QT_MOC_LITERAL(0, 0, 36) // "QNonContiguousByteDeviceIoDev..."

    },
    "QNonContiguousByteDeviceIoDeviceImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNonContiguousByteDeviceIoDeviceImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QNonContiguousByteDeviceIoDeviceImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNonContiguousByteDeviceIoDeviceImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl.data,
      qt_meta_data_QNonContiguousByteDeviceIoDeviceImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNonContiguousByteDeviceIoDeviceImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceIoDeviceImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceIoDeviceImpl.stringdata0))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceIoDeviceImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceIoDeviceImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl_t {
    QByteArrayData data[1];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl_t qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl = {
    {
QT_MOC_LITERAL(0, 0, 34) // "QNonContiguousByteDeviceBuffe..."

    },
    "QNonContiguousByteDeviceBufferImpl"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNonContiguousByteDeviceBufferImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QNonContiguousByteDeviceBufferImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNonContiguousByteDeviceBufferImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl.data,
      qt_meta_data_QNonContiguousByteDeviceBufferImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNonContiguousByteDeviceBufferImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceBufferImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceBufferImpl.stringdata0))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceBufferImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceBufferImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
