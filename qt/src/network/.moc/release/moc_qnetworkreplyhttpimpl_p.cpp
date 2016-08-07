/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreplyhttpimpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkreplyhttpimpl_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreplyhttpimpl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkReplyHttpImpl_t {
    QByteArrayData data[52];
    char stringdata0[961];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkReplyHttpImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkReplyHttpImpl_t qt_meta_stringdata_QNetworkReplyHttpImpl = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QNetworkReplyHttpImpl"
QT_MOC_LITERAL(1, 22, 16), // "startHttpRequest"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 16), // "abortHttpRequest"
QT_MOC_LITERAL(4, 57, 21), // "readBufferSizeChanged"
QT_MOC_LITERAL(5, 79, 4), // "size"
QT_MOC_LITERAL(6, 84, 15), // "readBufferFreed"
QT_MOC_LITERAL(7, 100, 29), // "startHttpRequestSynchronously"
QT_MOC_LITERAL(8, 130, 14), // "haveUploadData"
QT_MOC_LITERAL(9, 145, 3), // "pos"
QT_MOC_LITERAL(10, 149, 9), // "dataArray"
QT_MOC_LITERAL(11, 159, 9), // "dataAtEnd"
QT_MOC_LITERAL(12, 169, 8), // "dataSize"
QT_MOC_LITERAL(13, 178, 17), // "_q_startOperation"
QT_MOC_LITERAL(14, 196, 5), // "start"
QT_MOC_LITERAL(15, 202, 15), // "QNetworkRequest"
QT_MOC_LITERAL(16, 218, 21), // "_q_cacheLoadReadyRead"
QT_MOC_LITERAL(17, 240, 21), // "_q_bufferOutgoingData"
QT_MOC_LITERAL(18, 262, 29), // "_q_bufferOutgoingDataFinished"
QT_MOC_LITERAL(19, 292, 26), // "_q_networkSessionConnected"
QT_MOC_LITERAL(20, 319, 23), // "_q_networkSessionFailed"
QT_MOC_LITERAL(21, 343, 29), // "_q_networkSessionStateChanged"
QT_MOC_LITERAL(22, 373, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(23, 396, 37), // "_q_networkSessionUsagePolicie..."
QT_MOC_LITERAL(24, 434, 30), // "QNetworkSession::UsagePolicies"
QT_MOC_LITERAL(25, 465, 11), // "_q_finished"
QT_MOC_LITERAL(26, 477, 8), // "_q_error"
QT_MOC_LITERAL(27, 486, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(28, 514, 17), // "replyDownloadData"
QT_MOC_LITERAL(29, 532, 13), // "replyFinished"
QT_MOC_LITERAL(30, 546, 21), // "replyDownloadMetaData"
QT_MOC_LITERAL(31, 568, 36), // "QList<QPair<QByteArray,QByteA..."
QT_MOC_LITERAL(32, 605, 20), // "QSharedPointer<char>"
QT_MOC_LITERAL(33, 626, 25), // "replyDownloadProgressSlot"
QT_MOC_LITERAL(34, 652, 26), // "httpAuthenticationRequired"
QT_MOC_LITERAL(35, 679, 19), // "QHttpNetworkRequest"
QT_MOC_LITERAL(36, 699, 15), // "QAuthenticator*"
QT_MOC_LITERAL(37, 715, 9), // "httpError"
QT_MOC_LITERAL(38, 725, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(39, 753, 13), // "QNetworkProxy"
QT_MOC_LITERAL(40, 767, 5), // "proxy"
QT_MOC_LITERAL(41, 773, 4), // "auth"
QT_MOC_LITERAL(42, 778, 19), // "resetUploadDataSlot"
QT_MOC_LITERAL(43, 798, 5), // "bool*"
QT_MOC_LITERAL(44, 804, 1), // "r"
QT_MOC_LITERAL(45, 806, 18), // "wantUploadDataSlot"
QT_MOC_LITERAL(46, 825, 18), // "sentUploadDataSlot"
QT_MOC_LITERAL(47, 844, 29), // "uploadByteDeviceReadyReadSlot"
QT_MOC_LITERAL(48, 874, 23), // "emitReplyUploadProgress"
QT_MOC_LITERAL(49, 898, 30), // "_q_cacheSaveDeviceAboutToClose"
QT_MOC_LITERAL(50, 929, 18), // "_q_metaDataChanged"
QT_MOC_LITERAL(51, 948, 12) // "onRedirected"

    },
    "QNetworkReplyHttpImpl\0startHttpRequest\0"
    "\0abortHttpRequest\0readBufferSizeChanged\0"
    "size\0readBufferFreed\0startHttpRequestSynchronously\0"
    "haveUploadData\0pos\0dataArray\0dataAtEnd\0"
    "dataSize\0_q_startOperation\0start\0"
    "QNetworkRequest\0_q_cacheLoadReadyRead\0"
    "_q_bufferOutgoingData\0"
    "_q_bufferOutgoingDataFinished\0"
    "_q_networkSessionConnected\0"
    "_q_networkSessionFailed\0"
    "_q_networkSessionStateChanged\0"
    "QNetworkSession::State\0"
    "_q_networkSessionUsagePoliciesChanged\0"
    "QNetworkSession::UsagePolicies\0"
    "_q_finished\0_q_error\0QNetworkReply::NetworkError\0"
    "replyDownloadData\0replyFinished\0"
    "replyDownloadMetaData\0"
    "QList<QPair<QByteArray,QByteArray> >\0"
    "QSharedPointer<char>\0replyDownloadProgressSlot\0"
    "httpAuthenticationRequired\0"
    "QHttpNetworkRequest\0QAuthenticator*\0"
    "httpError\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0auth\0resetUploadDataSlot\0"
    "bool*\0r\0wantUploadDataSlot\0"
    "sentUploadDataSlot\0uploadByteDeviceReadyReadSlot\0"
    "emitReplyUploadProgress\0"
    "_q_cacheSaveDeviceAboutToClose\0"
    "_q_metaDataChanged\0onRedirected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkReplyHttpImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  174,    2, 0x06 /* Public */,
       3,    0,  175,    2, 0x06 /* Public */,
       4,    1,  176,    2, 0x06 /* Public */,
       6,    1,  179,    2, 0x06 /* Public */,
       7,    0,  182,    2, 0x06 /* Public */,
       8,    4,  183,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  192,    2, 0x0a /* Public */,
      14,    1,  193,    2, 0x0a /* Public */,
      16,    0,  196,    2, 0x0a /* Public */,
      17,    0,  197,    2, 0x0a /* Public */,
      18,    0,  198,    2, 0x0a /* Public */,
      19,    0,  199,    2, 0x0a /* Public */,
      20,    0,  200,    2, 0x0a /* Public */,
      21,    1,  201,    2, 0x0a /* Public */,
      23,    1,  204,    2, 0x0a /* Public */,
      25,    0,  207,    2, 0x0a /* Public */,
      26,    2,  208,    2, 0x0a /* Public */,
      28,    1,  213,    2, 0x0a /* Public */,
      29,    0,  216,    2, 0x0a /* Public */,
      30,    7,  217,    2, 0x0a /* Public */,
      33,    2,  232,    2, 0x0a /* Public */,
      34,    2,  237,    2, 0x0a /* Public */,
      37,    2,  242,    2, 0x0a /* Public */,
      38,    2,  247,    2, 0x0a /* Public */,
      42,    1,  252,    2, 0x0a /* Public */,
      45,    1,  255,    2, 0x0a /* Public */,
      46,    2,  258,    2, 0x0a /* Public */,
      47,    0,  263,    2, 0x0a /* Public */,
      48,    2,  264,    2, 0x0a /* Public */,
      49,    0,  269,    2, 0x0a /* Public */,
      50,    0,  270,    2, 0x0a /* Public */,
      51,    3,  271,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray, QMetaType::Bool, QMetaType::LongLong,    9,   10,   11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 15,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22,    2,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 31, QMetaType::Int, QMetaType::QString, QMetaType::Bool, 0x80000000 | 32, QMetaType::LongLong, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 36,    2,    2,
    QMetaType::Void, 0x80000000 | 27, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 39, 0x80000000 | 36,   40,   41,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void QNetworkReplyHttpImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReplyHttpImpl *_t = static_cast<QNetworkReplyHttpImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startHttpRequest(); break;
        case 1: _t->abortHttpRequest(); break;
        case 2: _t->readBufferSizeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->readBufferFreed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: _t->startHttpRequestSynchronously(); break;
        case 5: _t->haveUploadData((*reinterpret_cast< const qint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        case 6: _t->d_func()->_q_startOperation(); break;
        case 7: { bool _r = _t->d_func()->start((*reinterpret_cast< const QNetworkRequest(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 8: _t->d_func()->_q_cacheLoadReadyRead(); break;
        case 9: _t->d_func()->_q_bufferOutgoingData(); break;
        case 10: _t->d_func()->_q_bufferOutgoingDataFinished(); break;
        case 11: _t->d_func()->_q_networkSessionConnected(); break;
        case 12: _t->d_func()->_q_networkSessionFailed(); break;
        case 13: _t->d_func()->_q_networkSessionStateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_networkSessionUsagePoliciesChanged((*reinterpret_cast< QNetworkSession::UsagePolicies(*)>(_a[1]))); break;
        case 15: _t->d_func()->_q_finished(); break;
        case 16: _t->d_func()->_q_error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 17: _t->d_func()->replyDownloadData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 18: _t->d_func()->replyFinished(); break;
        case 19: _t->d_func()->replyDownloadMetaData((*reinterpret_cast< QList<QPair<QByteArray,QByteArray> >(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QSharedPointer<char>(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 20: _t->d_func()->replyDownloadProgressSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 21: _t->d_func()->httpAuthenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 22: _t->d_func()->httpError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 23: _t->d_func()->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 24: _t->d_func()->resetUploadDataSlot((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 25: _t->d_func()->wantUploadDataSlot((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 26: _t->d_func()->sentUploadDataSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 27: _t->d_func()->uploadByteDeviceReadyReadSlot(); break;
        case 28: _t->d_func()->emitReplyUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 29: _t->d_func()->_q_cacheSaveDeviceAboutToClose(); break;
        case 30: _t->d_func()->_q_metaDataChanged(); break;
        case 31: _t->d_func()->onRedirected((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkRequest >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::UsagePolicies >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 21:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkReplyHttpImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::startHttpRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkReplyHttpImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::abortHttpRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkReplyHttpImpl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::readBufferSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkReplyHttpImpl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::readBufferFreed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkReplyHttpImpl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::startHttpRequestSynchronously)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNetworkReplyHttpImpl::*_t)(const qint64 , const QByteArray & , bool , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkReplyHttpImpl::haveUploadData)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QNetworkReplyHttpImpl::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_QNetworkReplyHttpImpl.data,
      qt_meta_data_QNetworkReplyHttpImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkReplyHttpImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReplyHttpImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReplyHttpImpl.stringdata0))
        return static_cast<void*>(const_cast< QNetworkReplyHttpImpl*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int QNetworkReplyHttpImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}

// SIGNAL 0
void QNetworkReplyHttpImpl::startHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QNetworkReplyHttpImpl::abortHttpRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QNetworkReplyHttpImpl::readBufferSizeChanged(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkReplyHttpImpl::readBufferFreed(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNetworkReplyHttpImpl::startHttpRequestSynchronously()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QNetworkReplyHttpImpl::haveUploadData(const qint64 _t1, const QByteArray & _t2, bool _t3, qint64 _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
