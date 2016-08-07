/****************************************************************************
** Meta object code from reading C++ file 'qstatemachine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qstatemachine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstatemachine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStateMachine_t {
    QByteArrayData data[18];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStateMachine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStateMachine_t qt_meta_stringdata_QStateMachine = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QStateMachine"
QT_MOC_LITERAL(1, 14, 7), // "started"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "stopped"
QT_MOC_LITERAL(4, 31, 14), // "runningChanged"
QT_MOC_LITERAL(5, 46, 7), // "running"
QT_MOC_LITERAL(6, 54, 5), // "start"
QT_MOC_LITERAL(7, 60, 4), // "stop"
QT_MOC_LITERAL(8, 65, 10), // "setRunning"
QT_MOC_LITERAL(9, 76, 8), // "_q_start"
QT_MOC_LITERAL(10, 85, 10), // "_q_process"
QT_MOC_LITERAL(11, 96, 20), // "_q_animationFinished"
QT_MOC_LITERAL(12, 117, 25), // "_q_startDelayedEventTimer"
QT_MOC_LITERAL(13, 143, 24), // "_q_killDelayedEventTimer"
QT_MOC_LITERAL(14, 168, 11), // "errorString"
QT_MOC_LITERAL(15, 180, 19), // "globalRestorePolicy"
QT_MOC_LITERAL(16, 200, 21), // "QState::RestorePolicy"
QT_MOC_LITERAL(17, 222, 8) // "animated"

    },
    "QStateMachine\0started\0\0stopped\0"
    "runningChanged\0running\0start\0stop\0"
    "setRunning\0_q_start\0_q_process\0"
    "_q_animationFinished\0_q_startDelayedEventTimer\0"
    "_q_killDelayedEventTimer\0errorString\0"
    "globalRestorePolicy\0QState::RestorePolicy\0"
    "animated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStateMachine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       4,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   74,    2, 0x0a /* Public */,
       7,    0,   75,    2, 0x0a /* Public */,
       8,    1,   76,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    0,   80,    2, 0x08 /* Private */,
      11,    0,   81,    2, 0x08 /* Private */,
      12,    2,   82,    2, 0x08 /* Private */,
      13,    2,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095001,
      15, 0x80000000 | 16, 0x0009510b,
       5, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       2,
       0,

       0        // eod
};

void QStateMachine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStateMachine *_t = static_cast<QStateMachine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->stopped(QPrivateSignal()); break;
        case 2: _t->runningChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->stop(); break;
        case 5: _t->setRunning((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_start(); break;
        case 7: _t->d_func()->_q_process(); break;
        case 8: _t->d_func()->_q_animationFinished(); break;
        case 9: _t->d_func()->_q_startDelayedEventTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->d_func()->_q_killDelayedEventTimer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QStateMachine::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStateMachine::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QStateMachine::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStateMachine::stopped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QStateMachine::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStateMachine::runningChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QStateMachine *_t = static_cast<QStateMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 1: *reinterpret_cast< QState::RestorePolicy*>(_v) = _t->globalRestorePolicy(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRunning(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isAnimated(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QStateMachine *_t = static_cast<QStateMachine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setGlobalRestorePolicy(*reinterpret_cast< QState::RestorePolicy*>(_v)); break;
        case 2: _t->setRunning(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAnimated(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QStateMachine[] = {
        &QState::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QStateMachine::staticMetaObject = {
    { &QState::staticMetaObject, qt_meta_stringdata_QStateMachine.data,
      qt_meta_data_QStateMachine,  qt_static_metacall, qt_meta_extradata_QStateMachine, Q_NULLPTR}
};


const QMetaObject *QStateMachine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStateMachine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QStateMachine.stringdata0))
        return static_cast<void*>(const_cast< QStateMachine*>(this));
    return QState::qt_metacast(_clname);
}

int QStateMachine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QState::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QStateMachine::started(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QStateMachine::stopped(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QStateMachine::runningChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
