/****************************************************************************
** Meta object code from reading C++ file 'qsocks5socketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/qsocks5socketengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsocks5socketengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSocks5SocketEngine_t {
    QByteArrayData data[14];
    char stringdata0[376];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSocks5SocketEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSocks5SocketEngine_t qt_meta_stringdata_QSocks5SocketEngine = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QSocks5SocketEngine"
QT_MOC_LITERAL(1, 20, 25), // "_q_controlSocketConnected"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 32), // "_q_controlSocketReadNotification"
QT_MOC_LITERAL(4, 80, 21), // "_q_controlSocketError"
QT_MOC_LITERAL(5, 102, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(6, 131, 28), // "_q_udpSocketReadNotification"
QT_MOC_LITERAL(7, 160, 28), // "_q_controlSocketBytesWritten"
QT_MOC_LITERAL(8, 189, 30), // "_q_emitPendingReadNotification"
QT_MOC_LITERAL(9, 220, 31), // "_q_emitPendingWriteNotification"
QT_MOC_LITERAL(10, 252, 36), // "_q_emitPendingConnectionNotif..."
QT_MOC_LITERAL(11, 289, 28), // "_q_controlSocketDisconnected"
QT_MOC_LITERAL(12, 318, 28), // "_q_controlSocketStateChanged"
QT_MOC_LITERAL(13, 347, 28) // "QAbstractSocket::SocketState"

    },
    "QSocks5SocketEngine\0_q_controlSocketConnected\0"
    "\0_q_controlSocketReadNotification\0"
    "_q_controlSocketError\0"
    "QAbstractSocket::SocketError\0"
    "_q_udpSocketReadNotification\0"
    "_q_controlSocketBytesWritten\0"
    "_q_emitPendingReadNotification\0"
    "_q_emitPendingWriteNotification\0"
    "_q_emitPendingConnectionNotification\0"
    "_q_controlSocketDisconnected\0"
    "_q_controlSocketStateChanged\0"
    "QAbstractSocket::SocketState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSocks5SocketEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    1,   66,    2, 0x08 /* Private */,
       6,    0,   69,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    0,   72,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,

       0        // eod
};

void QSocks5SocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSocks5SocketEngine *_t = static_cast<QSocks5SocketEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_controlSocketConnected(); break;
        case 1: _t->d_func()->_q_controlSocketReadNotification(); break;
        case 2: _t->d_func()->_q_controlSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_udpSocketReadNotification(); break;
        case 4: _t->d_func()->_q_controlSocketBytesWritten(); break;
        case 5: _t->d_func()->_q_emitPendingReadNotification(); break;
        case 6: _t->d_func()->_q_emitPendingWriteNotification(); break;
        case 7: _t->d_func()->_q_emitPendingConnectionNotification(); break;
        case 8: _t->d_func()->_q_controlSocketDisconnected(); break;
        case 9: _t->d_func()->_q_controlSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject QSocks5SocketEngine::staticMetaObject = {
    { &QAbstractSocketEngine::staticMetaObject, qt_meta_stringdata_QSocks5SocketEngine.data,
      qt_meta_data_QSocks5SocketEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSocks5SocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSocks5SocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSocks5SocketEngine.stringdata0))
        return static_cast<void*>(const_cast< QSocks5SocketEngine*>(this));
    return QAbstractSocketEngine::qt_metacast(_clname);
}

int QSocks5SocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocketEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
