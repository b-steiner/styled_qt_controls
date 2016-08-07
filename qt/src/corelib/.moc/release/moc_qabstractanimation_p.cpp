/****************************************************************************
** Meta object code from reading C++ file 'qabstractanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../animation/qabstractanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDefaultAnimationDriver_t {
    QByteArrayData data[4];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDefaultAnimationDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDefaultAnimationDriver_t qt_meta_stringdata_QDefaultAnimationDriver = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QDefaultAnimationDriver"
QT_MOC_LITERAL(1, 24, 10), // "startTimer"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 9) // "stopTimer"

    },
    "QDefaultAnimationDriver\0startTimer\0\0"
    "stopTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDefaultAnimationDriver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QDefaultAnimationDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDefaultAnimationDriver *_t = static_cast<QDefaultAnimationDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startTimer(); break;
        case 1: _t->stopTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QDefaultAnimationDriver::staticMetaObject = {
    { &QAnimationDriver::staticMetaObject, qt_meta_stringdata_QDefaultAnimationDriver.data,
      qt_meta_data_QDefaultAnimationDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDefaultAnimationDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDefaultAnimationDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDefaultAnimationDriver.stringdata0))
        return static_cast<void*>(const_cast< QDefaultAnimationDriver*>(this));
    return QAnimationDriver::qt_metacast(_clname);
}

int QDefaultAnimationDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAnimationDriver::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_QAbstractAnimationTimer_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractAnimationTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractAnimationTimer_t qt_meta_stringdata_QAbstractAnimationTimer = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QAbstractAnimationTimer"

    },
    "QAbstractAnimationTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractAnimationTimer[] = {

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

void QAbstractAnimationTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAbstractAnimationTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAnimationTimer.data,
      qt_meta_data_QAbstractAnimationTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractAnimationTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAnimationTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAnimationTimer.stringdata0))
        return static_cast<void*>(const_cast< QAbstractAnimationTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractAnimationTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QUnifiedTimer_t {
    QByteArrayData data[4];
    char stringdata0[37];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QUnifiedTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QUnifiedTimer_t qt_meta_stringdata_QUnifiedTimer = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QUnifiedTimer"
QT_MOC_LITERAL(1, 14, 11), // "startTimers"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9) // "stopTimer"

    },
    "QUnifiedTimer\0startTimers\0\0stopTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QUnifiedTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QUnifiedTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QUnifiedTimer *_t = static_cast<QUnifiedTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startTimers(); break;
        case 1: _t->stopTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QUnifiedTimer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QUnifiedTimer.data,
      qt_meta_data_QUnifiedTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QUnifiedTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUnifiedTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QUnifiedTimer.stringdata0))
        return static_cast<void*>(const_cast< QUnifiedTimer*>(this));
    return QObject::qt_metacast(_clname);
}

int QUnifiedTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
struct qt_meta_stringdata_QAnimationTimer_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAnimationTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAnimationTimer_t qt_meta_stringdata_QAnimationTimer = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QAnimationTimer"
QT_MOC_LITERAL(1, 16, 15), // "startAnimations"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 9) // "stopTimer"

    },
    "QAnimationTimer\0startAnimations\0\0"
    "stopTimer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAnimationTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QAnimationTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAnimationTimer *_t = static_cast<QAnimationTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startAnimations(); break;
        case 1: _t->stopTimer(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QAnimationTimer::staticMetaObject = {
    { &QAbstractAnimationTimer::staticMetaObject, qt_meta_stringdata_QAnimationTimer.data,
      qt_meta_data_QAnimationTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAnimationTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAnimationTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAnimationTimer.stringdata0))
        return static_cast<void*>(const_cast< QAnimationTimer*>(this));
    return QAbstractAnimationTimer::qt_metacast(_clname);
}

int QAnimationTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimationTimer::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
