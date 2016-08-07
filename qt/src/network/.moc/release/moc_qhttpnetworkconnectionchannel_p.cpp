/****************************************************************************
** Meta object code from reading C++ file 'qhttpnetworkconnectionchannel_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qhttpnetworkconnectionchannel_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpnetworkconnectionchannel_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpNetworkConnectionChannel_t {
    QByteArrayData data[16];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpNetworkConnectionChannel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpNetworkConnectionChannel_t qt_meta_stringdata_QHttpNetworkConnectionChannel = {
    {
QT_MOC_LITERAL(0, 0, 29), // "QHttpNetworkConnectionChannel"
QT_MOC_LITERAL(1, 30, 15), // "_q_receiveReply"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 15), // "_q_bytesWritten"
QT_MOC_LITERAL(4, 63, 5), // "bytes"
QT_MOC_LITERAL(5, 69, 12), // "_q_readyRead"
QT_MOC_LITERAL(6, 82, 15), // "_q_disconnected"
QT_MOC_LITERAL(7, 98, 12), // "_q_connected"
QT_MOC_LITERAL(8, 111, 8), // "_q_error"
QT_MOC_LITERAL(9, 120, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(10, 149, 30), // "_q_proxyAuthenticationRequired"
QT_MOC_LITERAL(11, 180, 13), // "QNetworkProxy"
QT_MOC_LITERAL(12, 194, 5), // "proxy"
QT_MOC_LITERAL(13, 200, 15), // "QAuthenticator*"
QT_MOC_LITERAL(14, 216, 4), // "auth"
QT_MOC_LITERAL(15, 221, 22) // "_q_uploadDataReadyRead"

    },
    "QHttpNetworkConnectionChannel\0"
    "_q_receiveReply\0\0_q_bytesWritten\0bytes\0"
    "_q_readyRead\0_q_disconnected\0_q_connected\0"
    "_q_error\0QAbstractSocket::SocketError\0"
    "_q_proxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0QAuthenticator*\0"
    "auth\0_q_uploadDataReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpNetworkConnectionChannel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    1,   55,    2, 0x09 /* Protected */,
       5,    0,   58,    2, 0x09 /* Protected */,
       6,    0,   59,    2, 0x09 /* Protected */,
       7,    0,   60,    2, 0x09 /* Protected */,
       8,    1,   61,    2, 0x09 /* Protected */,
      10,    2,   64,    2, 0x09 /* Protected */,
      15,    0,   69,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void,

       0        // eod
};

void QHttpNetworkConnectionChannel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpNetworkConnectionChannel *_t = static_cast<QHttpNetworkConnectionChannel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_q_receiveReply(); break;
        case 1: _t->_q_bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 2: _t->_q_readyRead(); break;
        case 3: _t->_q_disconnected(); break;
        case 4: _t->_q_connected(); break;
        case 5: _t->_q_error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 6: _t->_q_proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 7: _t->_q_uploadDataReadyRead(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    }
}

const QMetaObject QHttpNetworkConnectionChannel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpNetworkConnectionChannel.data,
      qt_meta_data_QHttpNetworkConnectionChannel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHttpNetworkConnectionChannel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpNetworkConnectionChannel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpNetworkConnectionChannel.stringdata0))
        return static_cast<void*>(const_cast< QHttpNetworkConnectionChannel*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpNetworkConnectionChannel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
