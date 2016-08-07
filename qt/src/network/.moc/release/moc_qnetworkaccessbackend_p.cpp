/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkaccessbackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkAccessBackend_t {
    QByteArrayData data[26];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkAccessBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkAccessBackend_t qt_meta_stringdata_QNetworkAccessBackend = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QNetworkAccessBackend"
QT_MOC_LITERAL(1, 22, 19), // "writeDownstreamData"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 10), // "QIODevice*"
QT_MOC_LITERAL(4, 54, 4), // "data"
QT_MOC_LITERAL(5, 59, 8), // "finished"
QT_MOC_LITERAL(6, 68, 5), // "error"
QT_MOC_LITERAL(7, 74, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(8, 102, 4), // "code"
QT_MOC_LITERAL(9, 107, 11), // "errorString"
QT_MOC_LITERAL(10, 119, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(11, 147, 13), // "QNetworkProxy"
QT_MOC_LITERAL(12, 161, 5), // "proxy"
QT_MOC_LITERAL(13, 167, 15), // "QAuthenticator*"
QT_MOC_LITERAL(14, 183, 4), // "auth"
QT_MOC_LITERAL(15, 188, 22), // "authenticationRequired"
QT_MOC_LITERAL(16, 211, 15), // "metaDataChanged"
QT_MOC_LITERAL(17, 227, 20), // "redirectionRequested"
QT_MOC_LITERAL(18, 248, 11), // "destination"
QT_MOC_LITERAL(19, 260, 9), // "encrypted"
QT_MOC_LITERAL(20, 270, 9), // "sslErrors"
QT_MOC_LITERAL(21, 280, 16), // "QList<QSslError>"
QT_MOC_LITERAL(22, 297, 6), // "errors"
QT_MOC_LITERAL(23, 304, 23), // "emitReplyUploadProgress"
QT_MOC_LITERAL(24, 328, 9), // "bytesSent"
QT_MOC_LITERAL(25, 338, 10) // "bytesTotal"

    },
    "QNetworkAccessBackend\0writeDownstreamData\0"
    "\0QIODevice*\0data\0finished\0error\0"
    "QNetworkReply::NetworkError\0code\0"
    "errorString\0proxyAuthenticationRequired\0"
    "QNetworkProxy\0proxy\0QAuthenticator*\0"
    "auth\0authenticationRequired\0metaDataChanged\0"
    "redirectionRequested\0destination\0"
    "encrypted\0sslErrors\0QList<QSslError>\0"
    "errors\0emitReplyUploadProgress\0bytesSent\0"
    "bytesTotal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkAccessBackend[] = {

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
       1,    1,   64,    2, 0x0a /* Public */,
       5,    0,   67,    2, 0x09 /* Protected */,
       6,    2,   68,    2, 0x09 /* Protected */,
      10,    2,   73,    2, 0x09 /* Protected */,
      15,    1,   78,    2, 0x09 /* Protected */,
      16,    0,   81,    2, 0x09 /* Protected */,
      17,    1,   82,    2, 0x09 /* Protected */,
      19,    0,   85,    2, 0x09 /* Protected */,
      20,    1,   86,    2, 0x09 /* Protected */,
      23,    2,   89,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 13,   12,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   24,   25,

       0        // eod
};

void QNetworkAccessBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkAccessBackend *_t = static_cast<QNetworkAccessBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeDownstreamData((*reinterpret_cast< QIODevice*(*)>(_a[1]))); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 4: _t->authenticationRequired((*reinterpret_cast< QAuthenticator*(*)>(_a[1]))); break;
        case 5: _t->metaDataChanged(); break;
        case 6: _t->redirectionRequested((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->encrypted(); break;
        case 8: _t->sslErrors((*reinterpret_cast< const QList<QSslError>(*)>(_a[1]))); break;
        case 9: _t->emitReplyUploadProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QIODevice* >(); break;
            }
            break;
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
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkProxy >(); break;
            }
            break;
        }
    }
}

const QMetaObject QNetworkAccessBackend::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkAccessBackend.data,
      qt_meta_data_QNetworkAccessBackend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkAccessBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessBackend.stringdata0))
        return static_cast<void*>(const_cast< QNetworkAccessBackend*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkAccessBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
