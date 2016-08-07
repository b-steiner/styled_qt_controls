/****************************************************************************
** Meta object code from reading C++ file 'qdbusplatformmenu_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbusmenu/qdbusplatformmenu_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusplatformmenu_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusPlatformMenuItem_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusPlatformMenuItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusPlatformMenuItem_t qt_meta_stringdata_QDBusPlatformMenuItem = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QDBusPlatformMenuItem"

    },
    "QDBusPlatformMenuItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusPlatformMenuItem[] = {

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

void QDBusPlatformMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDBusPlatformMenuItem::staticMetaObject = {
    { &QPlatformMenuItem::staticMetaObject, qt_meta_stringdata_QDBusPlatformMenuItem.data,
      qt_meta_data_QDBusPlatformMenuItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusPlatformMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusPlatformMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusPlatformMenuItem.stringdata0))
        return static_cast<void*>(const_cast< QDBusPlatformMenuItem*>(this));
    return QPlatformMenuItem::qt_metacast(_clname);
}

int QDBusPlatformMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenuItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QDBusPlatformMenu_t {
    QByteArrayData data[10];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusPlatformMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusPlatformMenu_t qt_meta_stringdata_QDBusPlatformMenu = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QDBusPlatformMenu"
QT_MOC_LITERAL(1, 18, 7), // "updated"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 8), // "revision"
QT_MOC_LITERAL(4, 36, 6), // "dbusId"
QT_MOC_LITERAL(5, 43, 17), // "propertiesUpdated"
QT_MOC_LITERAL(6, 61, 17), // "QDBusMenuItemList"
QT_MOC_LITERAL(7, 79, 12), // "updatedProps"
QT_MOC_LITERAL(8, 92, 21), // "QDBusMenuItemKeysList"
QT_MOC_LITERAL(9, 114, 12) // "removedProps"

    },
    "QDBusPlatformMenu\0updated\0\0revision\0"
    "dbusId\0propertiesUpdated\0QDBusMenuItemList\0"
    "updatedProps\0QDBusMenuItemKeysList\0"
    "removedProps"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusPlatformMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x06 /* Public */,
       5,    2,   29,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,

       0        // eod
};

void QDBusPlatformMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusPlatformMenu *_t = static_cast<QDBusPlatformMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->propertiesUpdated((*reinterpret_cast< QDBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< QDBusMenuItemKeysList(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMenuItemKeysList >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMenuItemList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusPlatformMenu::*_t)(uint , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusPlatformMenu::updated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusPlatformMenu::*_t)(QDBusMenuItemList , QDBusMenuItemKeysList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusPlatformMenu::propertiesUpdated)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QDBusPlatformMenu::staticMetaObject = {
    { &QPlatformMenu::staticMetaObject, qt_meta_stringdata_QDBusPlatformMenu.data,
      qt_meta_data_QDBusPlatformMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusPlatformMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusPlatformMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusPlatformMenu.stringdata0))
        return static_cast<void*>(const_cast< QDBusPlatformMenu*>(this));
    return QPlatformMenu::qt_metacast(_clname);
}

int QDBusPlatformMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformMenu::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QDBusPlatformMenu::updated(uint _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDBusPlatformMenu::propertiesUpdated(QDBusMenuItemList _t1, QDBusMenuItemKeysList _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
