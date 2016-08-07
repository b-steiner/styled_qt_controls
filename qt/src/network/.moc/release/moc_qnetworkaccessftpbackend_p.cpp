/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessftpbackend_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkaccessftpbackend_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessftpbackend_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkAccessFtpBackend_t {
    QByteArrayData data[10];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkAccessFtpBackend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkAccessFtpBackend_t qt_meta_stringdata_QNetworkAccessFtpBackend = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QNetworkAccessFtpBackend"
QT_MOC_LITERAL(1, 25, 18), // "ftpConnectionReady"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 37), // "QNetworkAccessCache::Cacheabl..."
QT_MOC_LITERAL(4, 83, 6), // "object"
QT_MOC_LITERAL(5, 90, 7), // "ftpDone"
QT_MOC_LITERAL(6, 98, 12), // "ftpReadyRead"
QT_MOC_LITERAL(7, 111, 18), // "ftpRawCommandReply"
QT_MOC_LITERAL(8, 130, 4), // "code"
QT_MOC_LITERAL(9, 135, 4) // "text"

    },
    "QNetworkAccessFtpBackend\0ftpConnectionReady\0"
    "\0QNetworkAccessCache::CacheableObject*\0"
    "object\0ftpDone\0ftpReadyRead\0"
    "ftpRawCommandReply\0code\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkAccessFtpBackend[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    0,   37,    2, 0x0a /* Public */,
       6,    0,   38,    2, 0x0a /* Public */,
       7,    2,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    8,    9,

       0        // eod
};

void QNetworkAccessFtpBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkAccessFtpBackend *_t = static_cast<QNetworkAccessFtpBackend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ftpConnectionReady((*reinterpret_cast< QNetworkAccessCache::CacheableObject*(*)>(_a[1]))); break;
        case 1: _t->ftpDone(); break;
        case 2: _t->ftpReadyRead(); break;
        case 3: _t->ftpRawCommandReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkAccessCache::CacheableObject* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QNetworkAccessFtpBackend::staticMetaObject = {
    { &QNetworkAccessBackend::staticMetaObject, qt_meta_stringdata_QNetworkAccessFtpBackend.data,
      qt_meta_data_QNetworkAccessFtpBackend,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkAccessFtpBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessFtpBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessFtpBackend.stringdata0))
        return static_cast<void*>(const_cast< QNetworkAccessFtpBackend*>(this));
    return QNetworkAccessBackend::qt_metacast(_clname);
}

int QNetworkAccessFtpBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkAccessBackend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
