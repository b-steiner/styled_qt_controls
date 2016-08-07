/****************************************************************************
** Meta object code from reading C++ file 'qabstractanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../animation/qabstractanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractAnimation_t {
    QByteArrayData data[32];
    char stringdata0[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractAnimation_t qt_meta_stringdata_QAbstractAnimation = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QAbstractAnimation"
QT_MOC_LITERAL(1, 19, 8), // "finished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "stateChanged"
QT_MOC_LITERAL(4, 42, 25), // "QAbstractAnimation::State"
QT_MOC_LITERAL(5, 68, 8), // "newState"
QT_MOC_LITERAL(6, 77, 8), // "oldState"
QT_MOC_LITERAL(7, 86, 18), // "currentLoopChanged"
QT_MOC_LITERAL(8, 105, 11), // "currentLoop"
QT_MOC_LITERAL(9, 117, 16), // "directionChanged"
QT_MOC_LITERAL(10, 134, 29), // "QAbstractAnimation::Direction"
QT_MOC_LITERAL(11, 164, 5), // "start"
QT_MOC_LITERAL(12, 170, 34), // "QAbstractAnimation::DeletionP..."
QT_MOC_LITERAL(13, 205, 6), // "policy"
QT_MOC_LITERAL(14, 212, 5), // "pause"
QT_MOC_LITERAL(15, 218, 6), // "resume"
QT_MOC_LITERAL(16, 225, 9), // "setPaused"
QT_MOC_LITERAL(17, 235, 4), // "stop"
QT_MOC_LITERAL(18, 240, 14), // "setCurrentTime"
QT_MOC_LITERAL(19, 255, 5), // "msecs"
QT_MOC_LITERAL(20, 261, 5), // "state"
QT_MOC_LITERAL(21, 267, 5), // "State"
QT_MOC_LITERAL(22, 273, 9), // "loopCount"
QT_MOC_LITERAL(23, 283, 11), // "currentTime"
QT_MOC_LITERAL(24, 295, 9), // "direction"
QT_MOC_LITERAL(25, 305, 9), // "Direction"
QT_MOC_LITERAL(26, 315, 8), // "duration"
QT_MOC_LITERAL(27, 324, 7), // "Forward"
QT_MOC_LITERAL(28, 332, 8), // "Backward"
QT_MOC_LITERAL(29, 341, 7), // "Stopped"
QT_MOC_LITERAL(30, 349, 6), // "Paused"
QT_MOC_LITERAL(31, 356, 7) // "Running"

    },
    "QAbstractAnimation\0finished\0\0stateChanged\0"
    "QAbstractAnimation::State\0newState\0"
    "oldState\0currentLoopChanged\0currentLoop\0"
    "directionChanged\0QAbstractAnimation::Direction\0"
    "start\0QAbstractAnimation::DeletionPolicy\0"
    "policy\0pause\0resume\0setPaused\0stop\0"
    "setCurrentTime\0msecs\0state\0State\0"
    "loopCount\0currentTime\0direction\0"
    "Direction\0duration\0Forward\0Backward\0"
    "Stopped\0Paused\0Running"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       6,   94, // properties
       2,  118, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    2,   70,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       9,    1,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   81,    2, 0x0a /* Public */,
      11,    0,   84,    2, 0x2a /* Public | MethodCloned */,
      14,    0,   85,    2, 0x0a /* Public */,
      15,    0,   86,    2, 0x0a /* Public */,
      16,    1,   87,    2, 0x0a /* Public */,
      17,    0,   90,    2, 0x0a /* Public */,
      18,    1,   91,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, 0x80000000 | 10,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,

 // properties: name, type, flags
      20, 0x80000000 | 21, 0x00495009,
      22, QMetaType::Int, 0x00095103,
      23, QMetaType::Int, 0x00095103,
       8, QMetaType::Int, 0x00495001,
      24, 0x80000000 | 25, 0x0049510b,
      26, QMetaType::Int, 0x00095001,

 // properties: notify_signal_id
       1,
       0,
       0,
       2,
       3,
       0,

 // enums: name, flags, count, data
      25, 0x0,    2,  126,
      21, 0x0,    3,  130,

 // enum data: key, value
      27, uint(QAbstractAnimation::Forward),
      28, uint(QAbstractAnimation::Backward),
      29, uint(QAbstractAnimation::Stopped),
      30, uint(QAbstractAnimation::Paused),
      31, uint(QAbstractAnimation::Running),

       0        // eod
};

void QAbstractAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractAnimation *_t = static_cast<QAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->stateChanged((*reinterpret_cast< QAbstractAnimation::State(*)>(_a[1])),(*reinterpret_cast< QAbstractAnimation::State(*)>(_a[2]))); break;
        case 2: _t->currentLoopChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->directionChanged((*reinterpret_cast< QAbstractAnimation::Direction(*)>(_a[1]))); break;
        case 4: _t->start((*reinterpret_cast< QAbstractAnimation::DeletionPolicy(*)>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->pause(); break;
        case 7: _t->resume(); break;
        case 8: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->stop(); break;
        case 10: _t->setCurrentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractAnimation::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractAnimation::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractAnimation::*_t)(QAbstractAnimation::State , QAbstractAnimation::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractAnimation::stateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractAnimation::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractAnimation::currentLoopChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractAnimation::*_t)(QAbstractAnimation::Direction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractAnimation::directionChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractAnimation *_t = static_cast<QAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentLoop(); break;
        case 4: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractAnimation *_t = static_cast<QAbstractAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractAnimation::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractAnimation.data,
      qt_meta_data_QAbstractAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractAnimation.stringdata0))
        return static_cast<void*>(const_cast< QAbstractAnimation*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractAnimation::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QAbstractAnimation::stateChanged(QAbstractAnimation::State _t1, QAbstractAnimation::State _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QAbstractAnimation::currentLoopChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractAnimation::directionChanged(QAbstractAnimation::Direction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QAnimationDriver_t {
    QByteArrayData data[4];
    char stringdata0[34];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAnimationDriver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAnimationDriver_t qt_meta_stringdata_QAnimationDriver = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QAnimationDriver"
QT_MOC_LITERAL(1, 17, 7), // "started"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 7) // "stopped"

    },
    "QAnimationDriver\0started\0\0stopped"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAnimationDriver[] = {

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
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QAnimationDriver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAnimationDriver *_t = static_cast<QAnimationDriver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->stopped(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAnimationDriver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAnimationDriver::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAnimationDriver::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAnimationDriver::stopped)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QAnimationDriver::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAnimationDriver.data,
      qt_meta_data_QAnimationDriver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAnimationDriver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAnimationDriver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAnimationDriver.stringdata0))
        return static_cast<void*>(const_cast< QAnimationDriver*>(this));
    return QObject::qt_metacast(_clname);
}

int QAnimationDriver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QAnimationDriver::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QAnimationDriver::stopped()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
