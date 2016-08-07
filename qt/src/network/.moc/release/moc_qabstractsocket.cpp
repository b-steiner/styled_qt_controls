/****************************************************************************
** Meta object code from reading C++ file 'qabstractsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/qabstractsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractSocket_t {
    QByteArrayData data[70];
    char stringdata0[1285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractSocket_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractSocket_t qt_meta_stringdata_QAbstractSocket = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QAbstractSocket"
QT_MOC_LITERAL(1, 16, 9), // "hostFound"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "connected"
QT_MOC_LITERAL(4, 37, 12), // "disconnected"
QT_MOC_LITERAL(5, 50, 12), // "stateChanged"
QT_MOC_LITERAL(6, 63, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(7, 92, 5), // "error"
QT_MOC_LITERAL(8, 98, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(9, 127, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(10, 155, 13), // "QNetworkProxy"
QT_MOC_LITERAL(11, 169, 5), // "proxy"
QT_MOC_LITERAL(12, 175, 15), // "QAuthenticator*"
QT_MOC_LITERAL(13, 191, 13), // "authenticator"
QT_MOC_LITERAL(14, 205, 23), // "_q_connectToNextAddress"
QT_MOC_LITERAL(15, 229, 18), // "_q_startConnecting"
QT_MOC_LITERAL(16, 248, 9), // "QHostInfo"
QT_MOC_LITERAL(17, 258, 25), // "_q_abortConnectionAttempt"
QT_MOC_LITERAL(18, 284, 17), // "_q_testConnection"
QT_MOC_LITERAL(19, 302, 18), // "_q_forceDisconnect"
QT_MOC_LITERAL(20, 321, 10), // "SocketType"
QT_MOC_LITERAL(21, 332, 9), // "TcpSocket"
QT_MOC_LITERAL(22, 342, 9), // "UdpSocket"
QT_MOC_LITERAL(23, 352, 17), // "UnknownSocketType"
QT_MOC_LITERAL(24, 370, 20), // "NetworkLayerProtocol"
QT_MOC_LITERAL(25, 391, 12), // "IPv4Protocol"
QT_MOC_LITERAL(26, 404, 12), // "IPv6Protocol"
QT_MOC_LITERAL(27, 417, 13), // "AnyIPProtocol"
QT_MOC_LITERAL(28, 431, 27), // "UnknownNetworkLayerProtocol"
QT_MOC_LITERAL(29, 459, 11), // "SocketError"
QT_MOC_LITERAL(30, 471, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(31, 494, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(32, 516, 17), // "HostNotFoundError"
QT_MOC_LITERAL(33, 534, 17), // "SocketAccessError"
QT_MOC_LITERAL(34, 552, 19), // "SocketResourceError"
QT_MOC_LITERAL(35, 572, 18), // "SocketTimeoutError"
QT_MOC_LITERAL(36, 591, 21), // "DatagramTooLargeError"
QT_MOC_LITERAL(37, 613, 12), // "NetworkError"
QT_MOC_LITERAL(38, 626, 17), // "AddressInUseError"
QT_MOC_LITERAL(39, 644, 30), // "SocketAddressNotAvailableError"
QT_MOC_LITERAL(40, 675, 31), // "UnsupportedSocketOperationError"
QT_MOC_LITERAL(41, 707, 30), // "UnfinishedSocketOperationError"
QT_MOC_LITERAL(42, 738, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(43, 771, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(44, 795, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(45, 823, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(46, 850, 27), // "ProxyConnectionTimeoutError"
QT_MOC_LITERAL(47, 878, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(48, 897, 18), // "ProxyProtocolError"
QT_MOC_LITERAL(49, 916, 14), // "OperationError"
QT_MOC_LITERAL(50, 931, 16), // "SslInternalError"
QT_MOC_LITERAL(51, 948, 23), // "SslInvalidUserDataError"
QT_MOC_LITERAL(52, 972, 14), // "TemporaryError"
QT_MOC_LITERAL(53, 987, 18), // "UnknownSocketError"
QT_MOC_LITERAL(54, 1006, 11), // "SocketState"
QT_MOC_LITERAL(55, 1018, 16), // "UnconnectedState"
QT_MOC_LITERAL(56, 1035, 15), // "HostLookupState"
QT_MOC_LITERAL(57, 1051, 15), // "ConnectingState"
QT_MOC_LITERAL(58, 1067, 14), // "ConnectedState"
QT_MOC_LITERAL(59, 1082, 10), // "BoundState"
QT_MOC_LITERAL(60, 1093, 14), // "ListeningState"
QT_MOC_LITERAL(61, 1108, 12), // "ClosingState"
QT_MOC_LITERAL(62, 1121, 12), // "SocketOption"
QT_MOC_LITERAL(63, 1134, 14), // "LowDelayOption"
QT_MOC_LITERAL(64, 1149, 15), // "KeepAliveOption"
QT_MOC_LITERAL(65, 1165, 18), // "MulticastTtlOption"
QT_MOC_LITERAL(66, 1184, 23), // "MulticastLoopbackOption"
QT_MOC_LITERAL(67, 1208, 19), // "TypeOfServiceOption"
QT_MOC_LITERAL(68, 1228, 26), // "SendBufferSizeSocketOption"
QT_MOC_LITERAL(69, 1255, 29) // "ReceiveBufferSizeSocketOption"

    },
    "QAbstractSocket\0hostFound\0\0connected\0"
    "disconnected\0stateChanged\0"
    "QAbstractSocket::SocketState\0error\0"
    "QAbstractSocket::SocketError\0"
    "proxyAuthenticationRequired\0QNetworkProxy\0"
    "proxy\0QAuthenticator*\0authenticator\0"
    "_q_connectToNextAddress\0_q_startConnecting\0"
    "QHostInfo\0_q_abortConnectionAttempt\0"
    "_q_testConnection\0_q_forceDisconnect\0"
    "SocketType\0TcpSocket\0UdpSocket\0"
    "UnknownSocketType\0NetworkLayerProtocol\0"
    "IPv4Protocol\0IPv6Protocol\0AnyIPProtocol\0"
    "UnknownNetworkLayerProtocol\0SocketError\0"
    "ConnectionRefusedError\0RemoteHostClosedError\0"
    "HostNotFoundError\0SocketAccessError\0"
    "SocketResourceError\0SocketTimeoutError\0"
    "DatagramTooLargeError\0NetworkError\0"
    "AddressInUseError\0SocketAddressNotAvailableError\0"
    "UnsupportedSocketOperationError\0"
    "UnfinishedSocketOperationError\0"
    "ProxyAuthenticationRequiredError\0"
    "SslHandshakeFailedError\0"
    "ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyConnectionTimeoutError\0"
    "ProxyNotFoundError\0ProxyProtocolError\0"
    "OperationError\0SslInternalError\0"
    "SslInvalidUserDataError\0TemporaryError\0"
    "UnknownSocketError\0SocketState\0"
    "UnconnectedState\0HostLookupState\0"
    "ConnectingState\0ConnectedState\0"
    "BoundState\0ListeningState\0ClosingState\0"
    "SocketOption\0LowDelayOption\0KeepAliveOption\0"
    "MulticastTtlOption\0MulticastLoopbackOption\0"
    "TypeOfServiceOption\0SendBufferSizeSocketOption\0"
    "ReceiveBufferSizeSocketOption"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractSocket[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       5,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    0,   71,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    1,   75,    2, 0x06 /* Public */,
       9,    2,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,   83,    2, 0x08 /* Private */,
      15,    1,   84,    2, 0x08 /* Private */,
      17,    0,   87,    2, 0x08 /* Private */,
      18,    0,   88,    2, 0x08 /* Private */,
      19,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      20, 0x0,    3,  110,
      24, 0x0,    4,  116,
      29, 0x0,   24,  124,
      54, 0x0,    7,  172,
      62, 0x0,    7,  186,

 // enum data: key, value
      21, uint(QAbstractSocket::TcpSocket),
      22, uint(QAbstractSocket::UdpSocket),
      23, uint(QAbstractSocket::UnknownSocketType),
      25, uint(QAbstractSocket::IPv4Protocol),
      26, uint(QAbstractSocket::IPv6Protocol),
      27, uint(QAbstractSocket::AnyIPProtocol),
      28, uint(QAbstractSocket::UnknownNetworkLayerProtocol),
      30, uint(QAbstractSocket::ConnectionRefusedError),
      31, uint(QAbstractSocket::RemoteHostClosedError),
      32, uint(QAbstractSocket::HostNotFoundError),
      33, uint(QAbstractSocket::SocketAccessError),
      34, uint(QAbstractSocket::SocketResourceError),
      35, uint(QAbstractSocket::SocketTimeoutError),
      36, uint(QAbstractSocket::DatagramTooLargeError),
      37, uint(QAbstractSocket::NetworkError),
      38, uint(QAbstractSocket::AddressInUseError),
      39, uint(QAbstractSocket::SocketAddressNotAvailableError),
      40, uint(QAbstractSocket::UnsupportedSocketOperationError),
      41, uint(QAbstractSocket::UnfinishedSocketOperationError),
      42, uint(QAbstractSocket::ProxyAuthenticationRequiredError),
      43, uint(QAbstractSocket::SslHandshakeFailedError),
      44, uint(QAbstractSocket::ProxyConnectionRefusedError),
      45, uint(QAbstractSocket::ProxyConnectionClosedError),
      46, uint(QAbstractSocket::ProxyConnectionTimeoutError),
      47, uint(QAbstractSocket::ProxyNotFoundError),
      48, uint(QAbstractSocket::ProxyProtocolError),
      49, uint(QAbstractSocket::OperationError),
      50, uint(QAbstractSocket::SslInternalError),
      51, uint(QAbstractSocket::SslInvalidUserDataError),
      52, uint(QAbstractSocket::TemporaryError),
      53, uint(QAbstractSocket::UnknownSocketError),
      55, uint(QAbstractSocket::UnconnectedState),
      56, uint(QAbstractSocket::HostLookupState),
      57, uint(QAbstractSocket::ConnectingState),
      58, uint(QAbstractSocket::ConnectedState),
      59, uint(QAbstractSocket::BoundState),
      60, uint(QAbstractSocket::ListeningState),
      61, uint(QAbstractSocket::ClosingState),
      63, uint(QAbstractSocket::LowDelayOption),
      64, uint(QAbstractSocket::KeepAliveOption),
      65, uint(QAbstractSocket::MulticastTtlOption),
      66, uint(QAbstractSocket::MulticastLoopbackOption),
      67, uint(QAbstractSocket::TypeOfServiceOption),
      68, uint(QAbstractSocket::SendBufferSizeSocketOption),
      69, uint(QAbstractSocket::ReceiveBufferSizeSocketOption),

       0        // eod
};

void QAbstractSocket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractSocket *_t = static_cast<QAbstractSocket *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->hostFound(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->stateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_connectToNextAddress(); break;
        case 7: _t->d_func()->_q_startConnecting((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_abortConnectionAttempt(); break;
        case 9: _t->d_func()->_q_testConnection(); break;
        case 10: _t->d_func()->_q_forceDisconnect(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::hostFound)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::connected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractSocket::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::disconnected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractSocket::*_t)(QAbstractSocket::SocketState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractSocket::*_t)(QAbstractSocket::SocketError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::error)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAbstractSocket::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSocket::proxyAuthenticationRequired)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QAbstractSocket::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QAbstractSocket.data,
      qt_meta_data_QAbstractSocket,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractSocket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSocket::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractSocket.stringdata0))
        return static_cast<void*>(const_cast< QAbstractSocket*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QAbstractSocket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QAbstractSocket::hostFound()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QAbstractSocket::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QAbstractSocket::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QAbstractSocket::stateChanged(QAbstractSocket::SocketState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractSocket::error(QAbstractSocket::SocketError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractSocket::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
