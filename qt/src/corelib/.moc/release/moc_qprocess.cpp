/****************************************************************************
** Meta object code from reading C++ file 'qprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QProcess_t {
    QByteArrayData data[48];
    char stringdata0[682];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProcess_t qt_meta_stringdata_QProcess = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QProcess"
QT_MOC_LITERAL(1, 9, 7), // "started"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 8), // "finished"
QT_MOC_LITERAL(4, 27, 8), // "exitCode"
QT_MOC_LITERAL(5, 36, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 57, 10), // "exitStatus"
QT_MOC_LITERAL(7, 68, 5), // "error"
QT_MOC_LITERAL(8, 74, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(9, 97, 13), // "errorOccurred"
QT_MOC_LITERAL(10, 111, 12), // "stateChanged"
QT_MOC_LITERAL(11, 124, 22), // "QProcess::ProcessState"
QT_MOC_LITERAL(12, 147, 5), // "state"
QT_MOC_LITERAL(13, 153, 23), // "readyReadStandardOutput"
QT_MOC_LITERAL(14, 177, 22), // "readyReadStandardError"
QT_MOC_LITERAL(15, 200, 9), // "terminate"
QT_MOC_LITERAL(16, 210, 4), // "kill"
QT_MOC_LITERAL(17, 215, 24), // "_q_canReadStandardOutput"
QT_MOC_LITERAL(18, 240, 23), // "_q_canReadStandardError"
QT_MOC_LITERAL(19, 264, 11), // "_q_canWrite"
QT_MOC_LITERAL(20, 276, 22), // "_q_startupNotification"
QT_MOC_LITERAL(21, 299, 14), // "_q_processDied"
QT_MOC_LITERAL(22, 314, 12), // "ProcessError"
QT_MOC_LITERAL(23, 327, 13), // "FailedToStart"
QT_MOC_LITERAL(24, 341, 7), // "Crashed"
QT_MOC_LITERAL(25, 349, 8), // "Timedout"
QT_MOC_LITERAL(26, 358, 9), // "ReadError"
QT_MOC_LITERAL(27, 368, 10), // "WriteError"
QT_MOC_LITERAL(28, 379, 12), // "UnknownError"
QT_MOC_LITERAL(29, 392, 12), // "ProcessState"
QT_MOC_LITERAL(30, 405, 10), // "NotRunning"
QT_MOC_LITERAL(31, 416, 8), // "Starting"
QT_MOC_LITERAL(32, 425, 7), // "Running"
QT_MOC_LITERAL(33, 433, 14), // "ProcessChannel"
QT_MOC_LITERAL(34, 448, 14), // "StandardOutput"
QT_MOC_LITERAL(35, 463, 13), // "StandardError"
QT_MOC_LITERAL(36, 477, 18), // "ProcessChannelMode"
QT_MOC_LITERAL(37, 496, 16), // "SeparateChannels"
QT_MOC_LITERAL(38, 513, 14), // "MergedChannels"
QT_MOC_LITERAL(39, 528, 17), // "ForwardedChannels"
QT_MOC_LITERAL(40, 546, 22), // "ForwardedOutputChannel"
QT_MOC_LITERAL(41, 569, 21), // "ForwardedErrorChannel"
QT_MOC_LITERAL(42, 591, 16), // "InputChannelMode"
QT_MOC_LITERAL(43, 608, 19), // "ManagedInputChannel"
QT_MOC_LITERAL(44, 628, 21), // "ForwardedInputChannel"
QT_MOC_LITERAL(45, 650, 10), // "ExitStatus"
QT_MOC_LITERAL(46, 661, 10), // "NormalExit"
QT_MOC_LITERAL(47, 672, 9) // "CrashExit"

    },
    "QProcess\0started\0\0finished\0exitCode\0"
    "QProcess::ExitStatus\0exitStatus\0error\0"
    "QProcess::ProcessError\0errorOccurred\0"
    "stateChanged\0QProcess::ProcessState\0"
    "state\0readyReadStandardOutput\0"
    "readyReadStandardError\0terminate\0kill\0"
    "_q_canReadStandardOutput\0"
    "_q_canReadStandardError\0_q_canWrite\0"
    "_q_startupNotification\0_q_processDied\0"
    "ProcessError\0FailedToStart\0Crashed\0"
    "Timedout\0ReadError\0WriteError\0"
    "UnknownError\0ProcessState\0NotRunning\0"
    "Starting\0Running\0ProcessChannel\0"
    "StandardOutput\0StandardError\0"
    "ProcessChannelMode\0SeparateChannels\0"
    "MergedChannels\0ForwardedChannels\0"
    "ForwardedOutputChannel\0ForwardedErrorChannel\0"
    "InputChannelMode\0ManagedInputChannel\0"
    "ForwardedInputChannel\0ExitStatus\0"
    "NormalExit\0CrashExit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       6,  116, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    1,   90,    2, 0x06 /* Public */,
       3,    2,   93,    2, 0x06 /* Public */,
       7,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      13,    0,  107,    2, 0x06 /* Public */,
      14,    0,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  109,    2, 0x0a /* Public */,
      16,    0,  110,    2, 0x0a /* Public */,
      17,    0,  111,    2, 0x08 /* Private */,
      18,    0,  112,    2, 0x08 /* Private */,
      19,    0,  113,    2, 0x08 /* Private */,
      20,    0,  114,    2, 0x08 /* Private */,
      21,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 8,    7,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,

 // enums: name, flags, count, data
      22, 0x0,    6,  140,
      29, 0x0,    3,  152,
      33, 0x0,    2,  158,
      36, 0x0,    5,  162,
      42, 0x0,    2,  172,
      45, 0x0,    2,  176,

 // enum data: key, value
      23, uint(QProcess::FailedToStart),
      24, uint(QProcess::Crashed),
      25, uint(QProcess::Timedout),
      26, uint(QProcess::ReadError),
      27, uint(QProcess::WriteError),
      28, uint(QProcess::UnknownError),
      30, uint(QProcess::NotRunning),
      31, uint(QProcess::Starting),
      32, uint(QProcess::Running),
      34, uint(QProcess::StandardOutput),
      35, uint(QProcess::StandardError),
      37, uint(QProcess::SeparateChannels),
      38, uint(QProcess::MergedChannels),
      39, uint(QProcess::ForwardedChannels),
      40, uint(QProcess::ForwardedOutputChannel),
      41, uint(QProcess::ForwardedErrorChannel),
      43, uint(QProcess::ManagedInputChannel),
      44, uint(QProcess::ForwardedInputChannel),
      46, uint(QProcess::NormalExit),
      47, uint(QProcess::CrashExit),

       0        // eod
};

void QProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProcess *_t = static_cast<QProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(QPrivateSignal()); break;
        case 1: _t->finished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 4: _t->errorOccurred((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 5: _t->stateChanged((*reinterpret_cast< QProcess::ProcessState(*)>(_a[1])), QPrivateSignal()); break;
        case 6: _t->readyReadStandardOutput(QPrivateSignal()); break;
        case 7: _t->readyReadStandardError(QPrivateSignal()); break;
        case 8: _t->terminate(); break;
        case 9: _t->kill(); break;
        case 10: { bool _r = _t->d_func()->_q_canReadStandardOutput();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: { bool _r = _t->d_func()->_q_canReadStandardError();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 12: { bool _r = _t->d_func()->_q_canWrite();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: { bool _r = _t->d_func()->_q_startupNotification();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 14: { bool _r = _t->d_func()->_q_processDied();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::error)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(QProcess::ProcessError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::errorOccurred)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(QProcess::ProcessState , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::stateChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::readyReadStandardOutput)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QProcess::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProcess::readyReadStandardError)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QProcess::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QProcess.data,
      qt_meta_data_QProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QProcess.stringdata0))
        return static_cast<void*>(const_cast< QProcess*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QProcess::started(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QProcess::finished(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QProcess::finished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QProcess::error(QProcess::ProcessError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QProcess::errorOccurred(QProcess::ProcessError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QProcess::stateChanged(QProcess::ProcessState _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QProcess::readyReadStandardOutput(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QProcess::readyReadStandardError(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
