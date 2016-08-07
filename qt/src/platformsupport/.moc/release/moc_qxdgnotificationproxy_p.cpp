/****************************************************************************
** Meta object code from reading C++ file 'qxdgnotificationproxy_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbustray/qxdgnotificationproxy_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qxdgnotificationproxy_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QXdgNotificationInterface_t {
    QByteArrayData data[28];
    char stringdata0[387];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QXdgNotificationInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QXdgNotificationInterface_t qt_meta_stringdata_QXdgNotificationInterface = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QXdgNotificationInterface"
QT_MOC_LITERAL(1, 26, 13), // "ActionInvoked"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 2), // "id"
QT_MOC_LITERAL(4, 44, 10), // "action_key"
QT_MOC_LITERAL(5, 55, 18), // "NotificationClosed"
QT_MOC_LITERAL(6, 74, 6), // "reason"
QT_MOC_LITERAL(7, 81, 17), // "closeNotification"
QT_MOC_LITERAL(8, 99, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(9, 119, 15), // "getCapabilities"
QT_MOC_LITERAL(10, 135, 30), // "QDBusPendingReply<QStringList>"
QT_MOC_LITERAL(11, 166, 20), // "getServerInformation"
QT_MOC_LITERAL(12, 187, 50), // "QDBusPendingReply<QString,QSt..."
QT_MOC_LITERAL(13, 238, 19), // "QDBusReply<QString>"
QT_MOC_LITERAL(14, 258, 8), // "QString&"
QT_MOC_LITERAL(15, 267, 6), // "vendor"
QT_MOC_LITERAL(16, 274, 7), // "version"
QT_MOC_LITERAL(17, 282, 11), // "specVersion"
QT_MOC_LITERAL(18, 294, 6), // "notify"
QT_MOC_LITERAL(19, 301, 23), // "QDBusPendingReply<uint>"
QT_MOC_LITERAL(20, 325, 7), // "appName"
QT_MOC_LITERAL(21, 333, 10), // "replacesId"
QT_MOC_LITERAL(22, 344, 7), // "appIcon"
QT_MOC_LITERAL(23, 352, 7), // "summary"
QT_MOC_LITERAL(24, 360, 4), // "body"
QT_MOC_LITERAL(25, 365, 7), // "actions"
QT_MOC_LITERAL(26, 373, 5), // "hints"
QT_MOC_LITERAL(27, 379, 7) // "timeout"

    },
    "QXdgNotificationInterface\0ActionInvoked\0"
    "\0id\0action_key\0NotificationClosed\0"
    "reason\0closeNotification\0QDBusPendingReply<>\0"
    "getCapabilities\0QDBusPendingReply<QStringList>\0"
    "getServerInformation\0"
    "QDBusPendingReply<QString,QString,QString,QString>\0"
    "QDBusReply<QString>\0QString&\0vendor\0"
    "version\0specVersion\0notify\0"
    "QDBusPendingReply<uint>\0appName\0"
    "replacesId\0appIcon\0summary\0body\0actions\0"
    "hints\0timeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QXdgNotificationInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   59,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      11,    3,   64,    2, 0x0a /* Public */,
      18,    8,   71,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    3,    6,

 // slots: parameters
    0x80000000 | 8, QMetaType::UInt,    3,
    0x80000000 | 10,
    0x80000000 | 12,
    0x80000000 | 13, 0x80000000 | 14, 0x80000000 | 14, 0x80000000 | 14,   15,   16,   17,
    0x80000000 | 19, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QStringList, QMetaType::QVariantMap, QMetaType::Int,   20,   21,   22,   23,   24,   25,   26,   27,

       0        // eod
};

void QXdgNotificationInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QXdgNotificationInterface *_t = static_cast<QXdgNotificationInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->NotificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 2: { QDBusPendingReply<> _r = _t->closeNotification((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<QStringList> _r = _t->getCapabilities();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QStringList>*>(_a[0]) = _r; }  break;
        case 4: { QDBusPendingReply<QString,QString,QString,QString> _r = _t->getServerInformation();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QString,QString,QString>*>(_a[0]) = _r; }  break;
        case 5: { QDBusReply<QString> _r = _t->getServerInformation((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = _r; }  break;
        case 6: { QDBusPendingReply<uint> _r = _t->notify((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QStringList(*)>(_a[6])),(*reinterpret_cast< const QVariantMap(*)>(_a[7])),(*reinterpret_cast< int(*)>(_a[8])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<uint>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QXdgNotificationInterface::*_t)(uint , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXdgNotificationInterface::ActionInvoked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QXdgNotificationInterface::*_t)(uint , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QXdgNotificationInterface::NotificationClosed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QXdgNotificationInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QXdgNotificationInterface.data,
      qt_meta_data_QXdgNotificationInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QXdgNotificationInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QXdgNotificationInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QXdgNotificationInterface.stringdata0))
        return static_cast<void*>(const_cast< QXdgNotificationInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QXdgNotificationInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QXdgNotificationInterface::ActionInvoked(uint _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QXdgNotificationInterface::NotificationClosed(uint _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
