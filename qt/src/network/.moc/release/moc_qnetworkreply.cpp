/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreply.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkreply.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreply.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkReply_t {
    QByteArrayData data[50];
    char stringdata0[956];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkReply_t qt_meta_stringdata_QNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QNetworkReply"
QT_MOC_LITERAL(1, 14, 15), // "metaDataChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "finished"
QT_MOC_LITERAL(4, 40, 5), // "error"
QT_MOC_LITERAL(5, 46, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 74, 10), // "redirected"
QT_MOC_LITERAL(7, 85, 3), // "url"
QT_MOC_LITERAL(8, 89, 14), // "uploadProgress"
QT_MOC_LITERAL(9, 104, 9), // "bytesSent"
QT_MOC_LITERAL(10, 114, 10), // "bytesTotal"
QT_MOC_LITERAL(11, 125, 16), // "downloadProgress"
QT_MOC_LITERAL(12, 142, 13), // "bytesReceived"
QT_MOC_LITERAL(13, 156, 5), // "abort"
QT_MOC_LITERAL(14, 162, 15), // "ignoreSslErrors"
QT_MOC_LITERAL(15, 178, 12), // "NetworkError"
QT_MOC_LITERAL(16, 191, 7), // "NoError"
QT_MOC_LITERAL(17, 199, 22), // "ConnectionRefusedError"
QT_MOC_LITERAL(18, 222, 21), // "RemoteHostClosedError"
QT_MOC_LITERAL(19, 244, 17), // "HostNotFoundError"
QT_MOC_LITERAL(20, 262, 12), // "TimeoutError"
QT_MOC_LITERAL(21, 275, 22), // "OperationCanceledError"
QT_MOC_LITERAL(22, 298, 23), // "SslHandshakeFailedError"
QT_MOC_LITERAL(23, 322, 28), // "TemporaryNetworkFailureError"
QT_MOC_LITERAL(24, 351, 25), // "NetworkSessionFailedError"
QT_MOC_LITERAL(25, 377, 32), // "BackgroundRequestNotAllowedError"
QT_MOC_LITERAL(26, 410, 21), // "TooManyRedirectsError"
QT_MOC_LITERAL(27, 432, 21), // "InsecureRedirectError"
QT_MOC_LITERAL(28, 454, 19), // "UnknownNetworkError"
QT_MOC_LITERAL(29, 474, 27), // "ProxyConnectionRefusedError"
QT_MOC_LITERAL(30, 502, 26), // "ProxyConnectionClosedError"
QT_MOC_LITERAL(31, 529, 18), // "ProxyNotFoundError"
QT_MOC_LITERAL(32, 548, 17), // "ProxyTimeoutError"
QT_MOC_LITERAL(33, 566, 32), // "ProxyAuthenticationRequiredError"
QT_MOC_LITERAL(34, 599, 17), // "UnknownProxyError"
QT_MOC_LITERAL(35, 617, 19), // "ContentAccessDenied"
QT_MOC_LITERAL(36, 637, 33), // "ContentOperationNotPermittedE..."
QT_MOC_LITERAL(37, 671, 20), // "ContentNotFoundError"
QT_MOC_LITERAL(38, 692, 27), // "AuthenticationRequiredError"
QT_MOC_LITERAL(39, 720, 18), // "ContentReSendError"
QT_MOC_LITERAL(40, 739, 20), // "ContentConflictError"
QT_MOC_LITERAL(41, 760, 16), // "ContentGoneError"
QT_MOC_LITERAL(42, 777, 19), // "UnknownContentError"
QT_MOC_LITERAL(43, 797, 20), // "ProtocolUnknownError"
QT_MOC_LITERAL(44, 818, 29), // "ProtocolInvalidOperationError"
QT_MOC_LITERAL(45, 848, 15), // "ProtocolFailure"
QT_MOC_LITERAL(46, 864, 19), // "InternalServerError"
QT_MOC_LITERAL(47, 884, 28), // "OperationNotImplementedError"
QT_MOC_LITERAL(48, 913, 23), // "ServiceUnavailableError"
QT_MOC_LITERAL(49, 937, 18) // "UnknownServerError"

    },
    "QNetworkReply\0metaDataChanged\0\0finished\0"
    "error\0QNetworkReply::NetworkError\0"
    "redirected\0url\0uploadProgress\0bytesSent\0"
    "bytesTotal\0downloadProgress\0bytesReceived\0"
    "abort\0ignoreSslErrors\0NetworkError\0"
    "NoError\0ConnectionRefusedError\0"
    "RemoteHostClosedError\0HostNotFoundError\0"
    "TimeoutError\0OperationCanceledError\0"
    "SslHandshakeFailedError\0"
    "TemporaryNetworkFailureError\0"
    "NetworkSessionFailedError\0"
    "BackgroundRequestNotAllowedError\0"
    "TooManyRedirectsError\0InsecureRedirectError\0"
    "UnknownNetworkError\0ProxyConnectionRefusedError\0"
    "ProxyConnectionClosedError\0"
    "ProxyNotFoundError\0ProxyTimeoutError\0"
    "ProxyAuthenticationRequiredError\0"
    "UnknownProxyError\0ContentAccessDenied\0"
    "ContentOperationNotPermittedError\0"
    "ContentNotFoundError\0AuthenticationRequiredError\0"
    "ContentReSendError\0ContentConflictError\0"
    "ContentGoneError\0UnknownContentError\0"
    "ProtocolUnknownError\0ProtocolInvalidOperationError\0"
    "ProtocolFailure\0InternalServerError\0"
    "OperationNotImplementedError\0"
    "ServiceUnavailableError\0UnknownServerError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       1,   74, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    1,   56,    2, 0x06 /* Public */,
       6,    1,   59,    2, 0x06 /* Public */,
       8,    2,   62,    2, 0x06 /* Public */,
      11,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   72,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
      15, 0x0,   34,   78,

 // enum data: key, value
      16, uint(QNetworkReply::NoError),
      17, uint(QNetworkReply::ConnectionRefusedError),
      18, uint(QNetworkReply::RemoteHostClosedError),
      19, uint(QNetworkReply::HostNotFoundError),
      20, uint(QNetworkReply::TimeoutError),
      21, uint(QNetworkReply::OperationCanceledError),
      22, uint(QNetworkReply::SslHandshakeFailedError),
      23, uint(QNetworkReply::TemporaryNetworkFailureError),
      24, uint(QNetworkReply::NetworkSessionFailedError),
      25, uint(QNetworkReply::BackgroundRequestNotAllowedError),
      26, uint(QNetworkReply::TooManyRedirectsError),
      27, uint(QNetworkReply::InsecureRedirectError),
      28, uint(QNetworkReply::UnknownNetworkError),
      29, uint(QNetworkReply::ProxyConnectionRefusedError),
      30, uint(QNetworkReply::ProxyConnectionClosedError),
      31, uint(QNetworkReply::ProxyNotFoundError),
      32, uint(QNetworkReply::ProxyTimeoutError),
      33, uint(QNetworkReply::ProxyAuthenticationRequiredError),
      34, uint(QNetworkReply::UnknownProxyError),
      35, uint(QNetworkReply::ContentAccessDenied),
      36, uint(QNetworkReply::ContentOperationNotPermittedError),
      37, uint(QNetworkReply::ContentNotFoundError),
      38, uint(QNetworkReply::AuthenticationRequiredError),
      39, uint(QNetworkReply::ContentReSendError),
      40, uint(QNetworkReply::ContentConflictError),
      41, uint(QNetworkReply::ContentGoneError),
      42, uint(QNetworkReply::UnknownContentError),
      43, uint(QNetworkReply::ProtocolUnknownError),
      44, uint(QNetworkReply::ProtocolInvalidOperationError),
      45, uint(QNetworkReply::ProtocolFailure),
      46, uint(QNetworkReply::InternalServerError),
      47, uint(QNetworkReply::OperationNotImplementedError),
      48, uint(QNetworkReply::ServiceUnavailableError),
      49, uint(QNetworkReply::UnknownServerError),

       0        // eod
};

void QNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReply *_t = static_cast<QNetworkReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->metaDataChanged(); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 3: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->uploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 5: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->abort(); break;
        case 7: _t->ignoreSslErrors(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::metaDataChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(QNetworkReply::NetworkError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::redirected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::uploadProgress)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReply::downloadProgress)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QNetworkReply::staticMetaObject = {
    { &QIODevice::staticMetaObject, qt_meta_stringdata_QNetworkReply.data,
      qt_meta_data_QNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReply.stringdata0))
        return static_cast<void*>(const_cast< QNetworkReply*>(this));
    return QIODevice::qt_metacast(_clname);
}

int QNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QNetworkReply::metaDataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QNetworkReply::error(QNetworkReply::NetworkError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkReply::redirected(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkReply::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNetworkReply::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
