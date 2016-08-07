/****************************************************************************
** Meta object code from reading C++ file 'qdbusmenuregistrarproxy_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbusmenu/qdbusmenuregistrarproxy_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusmenuregistrarproxy_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusMenuRegistrarInterface_t {
    QByteArrayData data[12];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusMenuRegistrarInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusMenuRegistrarInterface_t qt_meta_stringdata_QDBusMenuRegistrarInterface = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QDBusMenuRegistrarInterface"
QT_MOC_LITERAL(1, 28, 16), // "GetMenuForWindow"
QT_MOC_LITERAL(2, 45, 42), // "QDBusPendingReply<QString,QDB..."
QT_MOC_LITERAL(3, 88, 0), // ""
QT_MOC_LITERAL(4, 89, 8), // "windowId"
QT_MOC_LITERAL(5, 98, 19), // "QDBusReply<QString>"
QT_MOC_LITERAL(6, 118, 16), // "QDBusObjectPath&"
QT_MOC_LITERAL(7, 135, 14), // "menuObjectPath"
QT_MOC_LITERAL(8, 150, 14), // "RegisterWindow"
QT_MOC_LITERAL(9, 165, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(10, 185, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(11, 201, 16) // "UnregisterWindow"

    },
    "QDBusMenuRegistrarInterface\0"
    "GetMenuForWindow\0"
    "QDBusPendingReply<QString,QDBusObjectPath>\0"
    "\0windowId\0QDBusReply<QString>\0"
    "QDBusObjectPath&\0menuObjectPath\0"
    "RegisterWindow\0QDBusPendingReply<>\0"
    "QDBusObjectPath\0UnregisterWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusMenuRegistrarInterface[] = {

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
       1,    1,   34,    3, 0x0a /* Public */,
       1,    2,   37,    3, 0x0a /* Public */,
       8,    2,   42,    3, 0x0a /* Public */,
      11,    1,   47,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::UInt,    4,
    0x80000000 | 5, QMetaType::UInt, 0x80000000 | 6,    4,    7,
    0x80000000 | 9, QMetaType::UInt, 0x80000000 | 10,    4,    7,
    0x80000000 | 9, QMetaType::UInt,    4,

       0        // eod
};

void QDBusMenuRegistrarInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusMenuRegistrarInterface *_t = static_cast<QDBusMenuRegistrarInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QDBusPendingReply<QString,QDBusObjectPath> _r = _t->GetMenuForWindow((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<QString,QDBusObjectPath>*>(_a[0]) = _r; }  break;
        case 1: { QDBusReply<QString> _r = _t->GetMenuForWindow((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QDBusObjectPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusReply<QString>*>(_a[0]) = _r; }  break;
        case 2: { QDBusPendingReply<> _r = _t->RegisterWindow((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QDBusObjectPath(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 3: { QDBusPendingReply<> _r = _t->UnregisterWindow((*reinterpret_cast< uint(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
            }
            break;
        }
    }
}

const QMetaObject QDBusMenuRegistrarInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_QDBusMenuRegistrarInterface.data,
      qt_meta_data_QDBusMenuRegistrarInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusMenuRegistrarInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusMenuRegistrarInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusMenuRegistrarInterface.stringdata0))
        return static_cast<void*>(const_cast< QDBusMenuRegistrarInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int QDBusMenuRegistrarInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
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
