/****************************************************************************
** Meta object code from reading C++ file 'qhttpnetworkreply_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qhttpnetworkreply_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpnetworkreply_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpNetworkReply_t {
    QByteArrayData data[26];
    char stringdata0[354];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpNetworkReply_t qt_meta_stringdata_QHttpNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QHttpNetworkReply"
QT_MOC_LITERAL(1, 18, 9), // "readyRead"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "finished"
QT_MOC_LITERAL(4, 38, 17), // "finishedWithError"
QT_MOC_LITERAL(5, 56, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(6, 84, 9), // "errorCode"
QT_MOC_LITERAL(7, 94, 6), // "detail"
QT_MOC_LITERAL(8, 101, 13), // "headerChanged"
QT_MOC_LITERAL(9, 115, 16), // "dataReadProgress"
QT_MOC_LITERAL(10, 132, 4), // "done"
QT_MOC_LITERAL(11, 137, 5), // "total"
QT_MOC_LITERAL(12, 143, 16), // "dataSendProgress"
QT_MOC_LITERAL(13, 160, 16), // "cacheCredentials"
QT_MOC_LITERAL(14, 177, 19), // "QHttpNetworkRequest"
QT_MOC_LITERAL(15, 197, 7), // "request"
QT_MOC_LITERAL(16, 205, 15), // "QAuthenticator*"
QT_MOC_LITERAL(17, 221, 13), // "authenticator"
QT_MOC_LITERAL(18, 235, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(19, 263, 13), // "QNetworkProxy"
QT_MOC_LITERAL(20, 277, 5), // "proxy"
QT_MOC_LITERAL(21, 283, 22), // "authenticationRequired"
QT_MOC_LITERAL(22, 306, 10), // "redirected"
QT_MOC_LITERAL(23, 317, 3), // "url"
QT_MOC_LITERAL(24, 321, 10), // "httpStatus"
QT_MOC_LITERAL(25, 332, 21) // "maxRedirectsRemaining"

    },
    "QHttpNetworkReply\0readyRead\0\0finished\0"
    "finishedWithError\0QNetworkReply::NetworkError\0"
    "errorCode\0detail\0headerChanged\0"
    "dataReadProgress\0done\0total\0"
    "dataSendProgress\0cacheCredentials\0"
    "QHttpNetworkRequest\0request\0QAuthenticator*\0"
    "authenticator\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0authenticationRequired\0"
    "redirected\0url\0httpStatus\0"
    "maxRedirectsRemaining"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    2,   71,    2, 0x06 /* Public */,
       4,    1,   76,    2, 0x26 /* Public | MethodCloned */,
       8,    0,   79,    2, 0x06 /* Public */,
       9,    2,   80,    2, 0x06 /* Public */,
      12,    2,   85,    2, 0x06 /* Public */,
      13,    2,   90,    2, 0x06 /* Public */,
      18,    2,   95,    2, 0x06 /* Public */,
      21,    2,  100,    2, 0x06 /* Public */,
      22,    3,  105,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, QMetaType::QString,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   10,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   10,   11,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 16,   20,   17,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 16,   15,   17,
    QMetaType::Void, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   23,   24,   25,

       0        // eod
};

void QHttpNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpNetworkReply *_t = static_cast<QHttpNetworkReply *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readyRead(); break;
        case 1: _t->finished(); break;
        case 2: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->finishedWithError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 4: _t->headerChanged(); break;
        case 5: _t->dataReadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 6: _t->dataSendProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 7: _t->cacheCredentials((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 8: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 9: _t->authenticationRequired((*reinterpret_cast< const QHttpNetworkRequest(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 10: _t->redirected((*reinterpret_cast< const QUrl(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
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
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHttpNetworkRequest >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::readyRead)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(QNetworkReply::NetworkError , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::finishedWithError)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::headerChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataReadProgress)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::dataSendProgress)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::cacheCredentials)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::proxyAuthenticationRequired)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QHttpNetworkRequest & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::authenticationRequired)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QHttpNetworkReply::*_t)(const QUrl & , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHttpNetworkReply::redirected)) {
                *result = 10;
                return;
            }
        }
    }
}

const QMetaObject QHttpNetworkReply::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHttpNetworkReply.data,
      qt_meta_data_QHttpNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHttpNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpNetworkReply.stringdata0))
        return static_cast<void*>(const_cast< QHttpNetworkReply*>(this));
    if (!strcmp(_clname, "QHttpNetworkHeader"))
        return static_cast< QHttpNetworkHeader*>(const_cast< QHttpNetworkReply*>(this));
    return QObject::qt_metacast(_clname);
}

int QHttpNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void QHttpNetworkReply::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QHttpNetworkReply::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QHttpNetworkReply::finishedWithError(QNetworkReply::NetworkError _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void QHttpNetworkReply::headerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QHttpNetworkReply::dataReadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QHttpNetworkReply::dataSendProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QHttpNetworkReply::cacheCredentials(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QHttpNetworkReply::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QHttpNetworkReply::authenticationRequired(const QHttpNetworkRequest & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QHttpNetworkReply::redirected(const QUrl & _t1, int _t2, int _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}
QT_END_MOC_NAMESPACE
