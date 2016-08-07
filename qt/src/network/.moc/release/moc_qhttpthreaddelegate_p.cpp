/****************************************************************************
** Meta object code from reading C++ file 'qhttpthreaddelegate_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qhttpthreaddelegate_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpthreaddelegate_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpThreadDelegate_t {
    QByteArrayData data[42];
    char stringdata0[746];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpThreadDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpThreadDelegate_t qt_meta_stringdata_QHttpThreadDelegate = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QHttpThreadDelegate"
QT_MOC_LITERAL(1, 20, 22), // "authenticationRequired"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "QHttpNetworkRequest"
QT_MOC_LITERAL(4, 64, 7), // "request"
QT_MOC_LITERAL(5, 72, 15), // "QAuthenticator*"
QT_MOC_LITERAL(6, 88, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(7, 116, 13), // "QNetworkProxy"
QT_MOC_LITERAL(8, 130, 16), // "downloadMetaData"
QT_MOC_LITERAL(9, 147, 36), // "QList<QPair<QByteArray,QByteA..."
QT_MOC_LITERAL(10, 184, 20), // "QSharedPointer<char>"
QT_MOC_LITERAL(11, 205, 16), // "downloadProgress"
QT_MOC_LITERAL(12, 222, 12), // "downloadData"
QT_MOC_LITERAL(13, 235, 5), // "error"
QT_MOC_LITERAL(14, 241, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 269, 16), // "downloadFinished"
QT_MOC_LITERAL(16, 286, 10), // "redirected"
QT_MOC_LITERAL(17, 297, 3), // "url"
QT_MOC_LITERAL(18, 301, 10), // "httpStatus"
QT_MOC_LITERAL(19, 312, 20), // "maxRedirectsRemainig"
QT_MOC_LITERAL(20, 333, 12), // "startRequest"
QT_MOC_LITERAL(21, 346, 12), // "abortRequest"
QT_MOC_LITERAL(22, 359, 21), // "readBufferSizeChanged"
QT_MOC_LITERAL(23, 381, 4), // "size"
QT_MOC_LITERAL(24, 386, 15), // "readBufferFreed"
QT_MOC_LITERAL(25, 402, 25), // "startRequestSynchronously"
QT_MOC_LITERAL(26, 428, 13), // "readyReadSlot"
QT_MOC_LITERAL(27, 442, 12), // "finishedSlot"
QT_MOC_LITERAL(28, 455, 21), // "finishedWithErrorSlot"
QT_MOC_LITERAL(29, 477, 9), // "errorCode"
QT_MOC_LITERAL(30, 487, 6), // "detail"
QT_MOC_LITERAL(31, 494, 23), // "synchronousFinishedSlot"
QT_MOC_LITERAL(32, 518, 32), // "synchronousFinishedWithErrorSlot"
QT_MOC_LITERAL(33, 551, 17), // "headerChangedSlot"
QT_MOC_LITERAL(34, 569, 28), // "synchronousHeaderChangedSlot"
QT_MOC_LITERAL(35, 598, 20), // "dataReadProgressSlot"
QT_MOC_LITERAL(36, 619, 4), // "done"
QT_MOC_LITERAL(37, 624, 5), // "total"
QT_MOC_LITERAL(38, 630, 20), // "cacheCredentialsSlot"
QT_MOC_LITERAL(39, 651, 13), // "authenticator"
QT_MOC_LITERAL(40, 665, 37), // "synchronousAuthenticationRequ..."
QT_MOC_LITERAL(41, 703, 42) // "synchronousProxyAuthenticatio..."

    },
    "QHttpThreadDelegate\0authenticationRequired\0"
    "\0QHttpNetworkRequest\0request\0"
    "QAuthenticator*\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0downloadMetaData\0"
    "QList<QPair<QByteArray,QByteArray> >\0"
    "QSharedPointer<char>\0downloadProgress\0"
    "downloadData\0error\0QNetworkReply::NetworkError\0"
    "downloadFinished\0redirected\0url\0"
    "httpStatus\0maxRedirectsRemainig\0"
    "startRequest\0abortRequest\0"
    "readBufferSizeChanged\0size\0readBufferFreed\0"
    "startRequestSynchronously\0readyReadSlot\0"
    "finishedSlot\0finishedWithErrorSlot\0"
    "errorCode\0detail\0synchronousFinishedSlot\0"
    "synchronousFinishedWithErrorSlot\0"
    "headerChangedSlot\0synchronousHeaderChangedSlot\0"
    "dataReadProgressSlot\0done\0total\0"
    "cacheCredentialsSlot\0authenticator\0"
    "synchronousAuthenticationRequiredSlot\0"
    "synchronousProxyAuthenticationRequiredSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpThreadDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  144,    2, 0x06 /* Public */,
       6,    2,  149,    2, 0x06 /* Public */,
       8,    7,  154,    2, 0x06 /* Public */,
      11,    2,  169,    2, 0x06 /* Public */,
      12,    1,  174,    2, 0x06 /* Public */,
      13,    2,  177,    2, 0x06 /* Public */,
      15,    0,  182,    2, 0x06 /* Public */,
      16,    3,  183,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      20,    0,  190,    2, 0x0a /* Public */,
      21,    0,  191,    2, 0x0a /* Public */,
      22,    1,  192,    2, 0x0a /* Public */,
      24,    1,  195,    2, 0x0a /* Public */,
      25,    0,  198,    2, 0x0a /* Public */,
      26,    0,  199,    2, 0x09 /* Protected */,
      27,    0,  200,    2, 0x09 /* Protected */,
      28,    2,  201,    2, 0x09 /* Protected */,
      28,    1,  206,    2, 0x29 /* Protected | MethodCloned */,
      31,    0,  209,    2, 0x09 /* Protected */,
      32,    2,  210,    2, 0x09 /* Protected */,
      32,    1,  215,    2, 0x29 /* Protected | MethodCloned */,
      33,    0,  218,    2, 0x09 /* Protected */,
      34,    0,  219,    2, 0x09 /* Protected */,
      35,    2,  220,    2, 0x09 /* Protected */,
      38,    2,  225,    2, 0x09 /* Protected */,
      40,    2,  230,    2, 0x09 /* Protected */,
      41,    2,  235,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::QString, QMetaType::Bool, 0x80000000 | 10, QMetaType::LongLong, QMetaType::Bool,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   17,   18,   19,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,   23,
    QMetaType::Void, QMetaType::LongLong,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   29,   30,
    QMetaType::Void, 0x80000000 | 14,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14, QMetaType::QString,   29,   30,
    QMetaType::Void, 0x80000000 | 14,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   36,   37,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,   39,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    2,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 5,    2,    2,

       0        // eod
};

void QHttpThreadDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpThreadDelegate *_t = static_cast<QHttpThreadDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->authenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->downloadMetaData((*reinterpret_cast< const QList<QPair<QByteArray,QByteArray> >(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4])),(*reinterpret_cast< QSharedPointer<char>(*)>(_a[5])),(*reinterpret_cast< qint64(*)>(_a[6])),(*reinterpret_cast< bool(*)>(_a[7]))); break;
        case 3: _t->downloadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->downloadData((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->downloadFinished(); break;
        case 7: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->startRequest(); break;
        case 9: _t->abortRequest(); break;
        case 10: _t->readBufferSizeChanged((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 11: _t->readBufferFreed((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 12: _t->startRequestSynchronously(); break;
        case 13: _t->readyReadSlot(); break;
        case 14: _t->finishedSlot(); break;
        case 15: _t->finishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 16: _t->finishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 17: _t->synchronousFinishedSlot(); break;
        case 18: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 19: _t->synchronousFinishedWithErrorSlot((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 20: _t->headerChangedSlot(); break;
        case 21: _t->synchronousHeaderChangedSlot(); break;
        case 22: _t->dataReadProgressSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 23: _t->cacheCredentialsSlot((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 24: _t->synchronousAuthenticationRequiredSlot((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 25: _t->synchronousProxyAuthenticationRequiredSlot((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QSharedPointer<char> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 19:
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 25:
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
            typedef void (QHttpThreadDelegate::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::authenticationRequired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::proxyAuthenticationRequired)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(const QList<QPair<QByteArray,QByteArray> > & , int , const QString & , bool , QSharedPointer<char> , qint64 , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::downloadMetaData)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::downloadProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::downloadData)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(QNetworkReply::NetworkError , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::error)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::downloadFinished)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QHttpThreadDelegate::*_t)(const QUrl & , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpThreadDelegate::redirected)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QHttpThreadDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpThreadDelegate.data,
      qt_meta_data_QHttpThreadDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHttpThreadDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpThreadDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpThreadDelegate.stringdata0))
        return static_cast<void*>(const_cast< QHttpThreadDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpThreadDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}

// SIGNAL 0
void QHttpThreadDelegate::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QHttpThreadDelegate::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QHttpThreadDelegate::downloadMetaData(const QList<QPair<QByteArray,QByteArray> > & _t1, int _t2, const QString & _t3, bool _t4, QSharedPointer<char> _t5, qint64 _t6, bool _t7)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)), const_cast<void*>(reinterpret_cast<const void*>(&_t6)), const_cast<void*>(reinterpret_cast<const void*>(&_t7)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QHttpThreadDelegate::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QHttpThreadDelegate::downloadData(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QHttpThreadDelegate::error(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttpThreadDelegate::downloadFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QHttpThreadDelegate::redirected(const QUrl & _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
struct qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl_t {
    QByteArrayData data[13];
    char stringdata0[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl_t qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl = {
    {
QT_MOC_LITERAL(0, 0, 41), // "QNonContiguousByteDeviceThrea..."
QT_MOC_LITERAL(1, 42, 8), // "wantData"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 13), // "processedData"
QT_MOC_LITERAL(4, 66, 3), // "pos"
QT_MOC_LITERAL(5, 70, 6), // "amount"
QT_MOC_LITERAL(6, 77, 9), // "resetData"
QT_MOC_LITERAL(7, 87, 5), // "bool*"
QT_MOC_LITERAL(8, 93, 1), // "b"
QT_MOC_LITERAL(9, 95, 12), // "haveDataSlot"
QT_MOC_LITERAL(10, 108, 9), // "dataArray"
QT_MOC_LITERAL(11, 118, 9), // "dataAtEnd"
QT_MOC_LITERAL(12, 128, 8) // "dataSize"

    },
    "QNonContiguousByteDeviceThreadForwardImpl\0"
    "wantData\0\0processedData\0pos\0amount\0"
    "resetData\0bool*\0b\0haveDataSlot\0dataArray\0"
    "dataAtEnd\0dataSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNonContiguousByteDeviceThreadForwardImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    2,   37,    2, 0x06 /* Public */,
       6,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    4,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::QByteArray, QMetaType::Bool, QMetaType::LongLong,    4,   10,   11,   12,

       0        // eod
};

void QNonContiguousByteDeviceThreadForwardImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNonContiguousByteDeviceThreadForwardImpl *_t = static_cast<QNonContiguousByteDeviceThreadForwardImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->wantData((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->processedData((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->resetData((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 3: _t->haveDataSlot((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< const QByteArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< qint64(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNonContiguousByteDeviceThreadForwardImpl::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNonContiguousByteDeviceThreadForwardImpl::wantData)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNonContiguousByteDeviceThreadForwardImpl::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNonContiguousByteDeviceThreadForwardImpl::processedData)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNonContiguousByteDeviceThreadForwardImpl::*_t)(bool * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNonContiguousByteDeviceThreadForwardImpl::resetData)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject QNonContiguousByteDeviceThreadForwardImpl::staticMetaObject = {
    { &QNonContiguousByteDevice::staticMetaObject, qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl.data,
      qt_meta_data_QNonContiguousByteDeviceThreadForwardImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNonContiguousByteDeviceThreadForwardImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNonContiguousByteDeviceThreadForwardImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNonContiguousByteDeviceThreadForwardImpl.stringdata0))
        return static_cast<void*>(const_cast< QNonContiguousByteDeviceThreadForwardImpl*>(this));
    return QNonContiguousByteDevice::qt_metacast(_clname);
}

int QNonContiguousByteDeviceThreadForwardImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNonContiguousByteDevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QNonContiguousByteDeviceThreadForwardImpl::wantData(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNonContiguousByteDeviceThreadForwardImpl::processedData(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNonContiguousByteDeviceThreadForwardImpl::resetData(bool * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
