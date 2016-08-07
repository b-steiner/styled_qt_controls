/****************************************************************************
** Meta object code from reading C++ file 'qnetworkreplyimpl_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qnetworkreplyimpl_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qnetworkreplyimpl_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QNetworkReplyImpl_t {
    QByteArrayData data[13];
    char stringdata0[306];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNetworkReplyImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNetworkReplyImpl_t qt_meta_stringdata_QNetworkReplyImpl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QNetworkReplyImpl"
QT_MOC_LITERAL(1, 18, 17), // "_q_startOperation"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 16), // "_q_copyReadyRead"
QT_MOC_LITERAL(4, 54, 26), // "_q_copyReadChannelFinished"
QT_MOC_LITERAL(5, 81, 21), // "_q_bufferOutgoingData"
QT_MOC_LITERAL(6, 103, 29), // "_q_bufferOutgoingDataFinished"
QT_MOC_LITERAL(7, 133, 26), // "_q_networkSessionConnected"
QT_MOC_LITERAL(8, 160, 23), // "_q_networkSessionFailed"
QT_MOC_LITERAL(9, 184, 29), // "_q_networkSessionStateChanged"
QT_MOC_LITERAL(10, 214, 22), // "QNetworkSession::State"
QT_MOC_LITERAL(11, 237, 37), // "_q_networkSessionUsagePolicie..."
QT_MOC_LITERAL(12, 275, 30) // "QNetworkSession::UsagePolicies"

    },
    "QNetworkReplyImpl\0_q_startOperation\0"
    "\0_q_copyReadyRead\0_q_copyReadChannelFinished\0"
    "_q_bufferOutgoingData\0"
    "_q_bufferOutgoingDataFinished\0"
    "_q_networkSessionConnected\0"
    "_q_networkSessionFailed\0"
    "_q_networkSessionStateChanged\0"
    "QNetworkSession::State\0"
    "_q_networkSessionUsagePoliciesChanged\0"
    "QNetworkSession::UsagePolicies"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNetworkReplyImpl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      11,    1,   69,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void, 0x80000000 | 12,    2,

       0        // eod
};

void QNetworkReplyImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNetworkReplyImpl *_t = static_cast<QNetworkReplyImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_startOperation(); break;
        case 1: _t->d_func()->_q_copyReadyRead(); break;
        case 2: _t->d_func()->_q_copyReadChannelFinished(); break;
        case 3: _t->d_func()->_q_bufferOutgoingData(); break;
        case 4: _t->d_func()->_q_bufferOutgoingDataFinished(); break;
        case 5: _t->d_func()->_q_networkSessionConnected(); break;
        case 6: _t->d_func()->_q_networkSessionFailed(); break;
        case 7: _t->d_func()->_q_networkSessionStateChanged((*reinterpret_cast< QNetworkSession::State(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_networkSessionUsagePoliciesChanged((*reinterpret_cast< QNetworkSession::UsagePolicies(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::State >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkSession::UsagePolicies >(); break;
            }
            break;
        }
    }
}

const QMetaObject QNetworkReplyImpl::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_QNetworkReplyImpl.data,
      qt_meta_data_QNetworkReplyImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNetworkReplyImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNetworkReplyImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNetworkReplyImpl.stringdata0))
        return static_cast<void*>(const_cast< QNetworkReplyImpl*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int QNetworkReplyImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_QDisabledNetworkReply_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDisabledNetworkReply_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDisabledNetworkReply_t qt_meta_stringdata_QDisabledNetworkReply = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QDisabledNetworkReply"

    },
    "QDisabledNetworkReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDisabledNetworkReply[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QDisabledNetworkReply::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDisabledNetworkReply::staticMetaObject = {
    { &QNetworkReply::staticMetaObject, qt_meta_stringdata_QDisabledNetworkReply.data,
      qt_meta_data_QDisabledNetworkReply,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDisabledNetworkReply::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDisabledNetworkReply::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDisabledNetworkReply.stringdata0))
        return static_cast<void*>(const_cast< QDisabledNetworkReply*>(this));
    return QNetworkReply::qt_metacast(_clname);
}

int QDisabledNetworkReply::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNetworkReply::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
