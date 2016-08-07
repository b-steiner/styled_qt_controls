/****************************************************************************
** Meta object code from reading C++ file 'qnetworkaccessmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkaccessmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkaccessmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkAccessManager_t {
    QByteArrayData data[32];
    char stringdata0[671];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkAccessManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkAccessManager_t qt_meta_stringdata_QNetworkAccessManager = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QNetworkAccessManager"
QT_MOC_LITERAL(1, 22, 27), // "proxyAuthenticationRequired"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 13), // "QNetworkProxy"
QT_MOC_LITERAL(4, 65, 5), // "proxy"
QT_MOC_LITERAL(5, 71, 15), // "QAuthenticator*"
QT_MOC_LITERAL(6, 87, 13), // "authenticator"
QT_MOC_LITERAL(7, 101, 22), // "authenticationRequired"
QT_MOC_LITERAL(8, 124, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 139, 5), // "reply"
QT_MOC_LITERAL(10, 145, 8), // "finished"
QT_MOC_LITERAL(11, 154, 23), // "networkSessionConnected"
QT_MOC_LITERAL(12, 178, 24), // "networkAccessibleChanged"
QT_MOC_LITERAL(13, 203, 43), // "QNetworkAccessManager::Networ..."
QT_MOC_LITERAL(14, 247, 10), // "accessible"
QT_MOC_LITERAL(15, 258, 30), // "supportedSchemesImplementation"
QT_MOC_LITERAL(16, 289, 16), // "_q_replyFinished"
QT_MOC_LITERAL(17, 306, 17), // "_q_replyEncrypted"
QT_MOC_LITERAL(18, 324, 17), // "_q_replySslErrors"
QT_MOC_LITERAL(19, 342, 16), // "QList<QSslError>"
QT_MOC_LITERAL(20, 359, 42), // "_q_replyPreSharedKeyAuthentic..."
QT_MOC_LITERAL(21, 402, 30), // "QSslPreSharedKeyAuthenticator*"
QT_MOC_LITERAL(22, 433, 23), // "_q_networkSessionClosed"
QT_MOC_LITERAL(23, 457, 29), // "_q_networkSessionStateChanged"
QT_MOC_LITERAL(24, 487, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(25, 510, 21), // "_q_onlineStateChanged"
QT_MOC_LITERAL(26, 532, 23), // "_q_configurationChanged"
QT_MOC_LITERAL(27, 556, 21), // "QNetworkConfiguration"
QT_MOC_LITERAL(28, 578, 23), // "_q_networkSessionFailed"
QT_MOC_LITERAL(29, 602, 29), // "QNetworkSession::SessionError"
QT_MOC_LITERAL(30, 632, 17), // "networkAccessible"
QT_MOC_LITERAL(31, 650, 20) // "NetworkAccessibility"

    },
    "QNetworkAccessManager\0proxyAuthenticationRequired\0"
    "\0QNetworkProxy\0proxy\0QAuthenticator*\0"
    "authenticator\0authenticationRequired\0"
    "QNetworkReply*\0reply\0finished\0"
    "networkSessionConnected\0"
    "networkAccessibleChanged\0"
    "QNetworkAccessManager::NetworkAccessibility\0"
    "accessible\0supportedSchemesImplementation\0"
    "_q_replyFinished\0_q_replyEncrypted\0"
    "_q_replySslErrors\0QList<QSslError>\0"
    "_q_replyPreSharedKeyAuthenticationRequired\0"
    "QSslPreSharedKeyAuthenticator*\0"
    "_q_networkSessionClosed\0"
    "_q_networkSessionStateChanged\0"
    "QNetworkSession::State\0_q_onlineStateChanged\0"
    "_q_configurationChanged\0QNetworkConfiguration\0"
    "_q_networkSessionFailed\0"
    "QNetworkSession::SessionError\0"
    "networkAccessible\0NetworkAccessibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkAccessManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       1,  128, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   89,    2, 0x06 /* Public */,
       7,    2,   94,    2, 0x06 /* Public */,
      10,    1,   99,    2, 0x06 /* Public */,
      11,    0,  102,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,  106,    2, 0x09 /* Protected */,
      16,    0,  107,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    1,  109,    2, 0x08 /* Private */,
      20,    1,  112,    2, 0x08 /* Private */,
      22,    0,  115,    2, 0x08 /* Private */,
      23,    1,  116,    2, 0x08 /* Private */,
      25,    1,  119,    2, 0x08 /* Private */,
      26,    1,  122,    2, 0x08 /* Private */,
      28,    1,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 5,    9,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::QStringList,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,    2,
    QMetaType::Void, 0x80000000 | 21,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 27,    2,
    QMetaType::Void, 0x80000000 | 29,    2,

 // properties: name, type, flags
      30, 0x80000000 | 31, 0x0049510b,

 // properties: notify_signal_id
       4,

       0        // eod
};

void QNetworkAccessManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkAccessManager *_t = static_cast<QNetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->proxyAuthenticationRequired((*reinterpret_cast< const QNetworkProxy(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 1: _t->authenticationRequired((*reinterpret_cast< QNetworkReply*(*)>(_a[1])),(*reinterpret_cast< QAuthenticator*(*)>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->networkSessionConnected(); break;
        case 4: _t->networkAccessibleChanged((*reinterpret_cast< QNetworkAccessManager::NetworkAccessibility(*)>(_a[1]))); break;
        case 5: { QStringList _r = _t->supportedSchemesImplementation();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = _r; }  break;
        case 6: _t->d_func()->_q_replyFinished(); break;
        case 7: _t->d_func()->_q_replyEncrypted(); break;
        case 8: _t->d_func()->_q_replySslErrors((*reinterpret_cast< QList<QSslError>(*)>(_a[1]))); break;
        case 9: _t->d_func()->_q_replyPreSharedKeyAuthenticationRequired((*reinterpret_cast< QSslPreSharedKeyAuthenticator*(*)>(_a[1]))); break;
        case 10: _t->d_func()->_q_networkSessionClosed(); break;
        case 11: _t->d_func()->_q_networkSessionStateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_onlineStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_configurationChanged((*reinterpret_cast< const QNetworkConfiguration(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_networkSessionFailed((*reinterpret_cast< QNetworkSession::SessionError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNetworkAccessManager::*_t)(const QNetworkProxy & , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkAccessManager::proxyAuthenticationRequired)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNetworkAccessManager::*_t)(QNetworkReply * , QAuthenticator * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkAccessManager::authenticationRequired)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNetworkAccessManager::*_t)(QNetworkReply * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkAccessManager::finished)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNetworkAccessManager::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkAccessManager::networkSessionConnected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNetworkAccessManager::*_t)(QNetworkAccessManager::NetworkAccessibility );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNetworkAccessManager::networkAccessibleChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QNetworkAccessManager *_t = static_cast<QNetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< NetworkAccessibility*>(_v) = _t->networkAccessible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QNetworkAccessManager *_t = static_cast<QNetworkAccessManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNetworkAccessible(*reinterpret_cast< NetworkAccessibility*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QNetworkAccessManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QNetworkAccessManager.data,
      qt_meta_data_QNetworkAccessManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkAccessManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkAccessManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkAccessManager.stringdata0))
        return static_cast<void*>(const_cast< QNetworkAccessManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QNetworkAccessManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNetworkAccessManager::authenticationRequired(QNetworkReply * _t1, QAuthenticator * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNetworkAccessManager::finished(QNetworkReply * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNetworkAccessManager::networkSessionConnected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QNetworkAccessManager::networkAccessibleChanged(QNetworkAccessManager::NetworkAccessibility _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
