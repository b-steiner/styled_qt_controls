/****************************************************************************
** Meta object code from reading C++ file 'qdbustrayicon_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbustray/qdbustrayicon_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbustrayicon_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusTrayIcon_t {
    QByteArrayData data[27];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusTrayIcon_t qt_meta_stringdata_QDBusTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QDBusTrayIcon"
QT_MOC_LITERAL(1, 14, 15), // "categoryChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "statusChanged"
QT_MOC_LITERAL(4, 45, 3), // "arg"
QT_MOC_LITERAL(5, 49, 14), // "tooltipChanged"
QT_MOC_LITERAL(6, 64, 11), // "iconChanged"
QT_MOC_LITERAL(7, 76, 9), // "attention"
QT_MOC_LITERAL(8, 86, 11), // "menuChanged"
QT_MOC_LITERAL(9, 98, 21), // "attentionTimerExpired"
QT_MOC_LITERAL(10, 120, 13), // "actionInvoked"
QT_MOC_LITERAL(11, 134, 2), // "id"
QT_MOC_LITERAL(12, 137, 6), // "action"
QT_MOC_LITERAL(13, 144, 18), // "notificationClosed"
QT_MOC_LITERAL(14, 163, 6), // "reason"
QT_MOC_LITERAL(15, 170, 8), // "category"
QT_MOC_LITERAL(16, 179, 6), // "status"
QT_MOC_LITERAL(17, 186, 7), // "tooltip"
QT_MOC_LITERAL(18, 194, 8), // "iconName"
QT_MOC_LITERAL(19, 203, 4), // "icon"
QT_MOC_LITERAL(20, 208, 21), // "isRequestingAttention"
QT_MOC_LITERAL(21, 230, 14), // "attentionTitle"
QT_MOC_LITERAL(22, 245, 16), // "attentionMessage"
QT_MOC_LITERAL(23, 262, 17), // "attentionIconName"
QT_MOC_LITERAL(24, 280, 13), // "attentionIcon"
QT_MOC_LITERAL(25, 294, 4), // "menu"
QT_MOC_LITERAL(26, 299, 18) // "QDBusPlatformMenu*"

    },
    "QDBusTrayIcon\0categoryChanged\0\0"
    "statusChanged\0arg\0tooltipChanged\0"
    "iconChanged\0attention\0menuChanged\0"
    "attentionTimerExpired\0actionInvoked\0"
    "id\0action\0notificationClosed\0reason\0"
    "category\0status\0tooltip\0iconName\0icon\0"
    "isRequestingAttention\0attentionTitle\0"
    "attentionMessage\0attentionIconName\0"
    "attentionIcon\0menu\0QDBusPlatformMenu*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusTrayIcon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    1,   60,    2, 0x06 /* Public */,
       5,    0,   63,    2, 0x06 /* Public */,
       6,    0,   64,    2, 0x06 /* Public */,
       7,    0,   65,    2, 0x06 /* Public */,
       8,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   67,    2, 0x08 /* Private */,
      10,    2,   68,    2, 0x08 /* Private */,
      13,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,   11,   14,

 // properties: name, type, flags
      15, QMetaType::QString, 0x00495001,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::QIcon, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      21, QMetaType::QString, 0x00495001,
      22, QMetaType::QString, 0x00495001,
      23, QMetaType::QString, 0x00495001,
      24, QMetaType::QIcon, 0x00495001,
      25, 0x80000000 | 26, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       3,
       4,
       4,
       4,
       4,
       4,
       5,

       0        // eod
};

void QDBusTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusTrayIcon *_t = static_cast<QDBusTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->categoryChanged(); break;
        case 1: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->tooltipChanged(); break;
        case 3: _t->iconChanged(); break;
        case 4: _t->attention(); break;
        case 5: _t->menuChanged(); break;
        case 6: _t->attentionTimerExpired(); break;
        case 7: _t->actionInvoked((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->notificationClosed((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::categoryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusTrayIcon::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::statusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::tooltipChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDBusTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::iconChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QDBusTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::attention)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QDBusTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusTrayIcon::menuChanged)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDBusTrayIcon *_t = static_cast<QDBusTrayIcon *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->tooltip(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isRequestingAttention(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->attentionTitle(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->attentionMessage(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->attentionIconName(); break;
        case 9: *reinterpret_cast< QIcon*>(_v) = _t->attentionIcon(); break;
        case 10: *reinterpret_cast< QDBusPlatformMenu**>(_v) = _t->menu(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDBusTrayIcon::staticMetaObject = {
    { &QPlatformSystemTrayIcon::staticMetaObject, qt_meta_stringdata_QDBusTrayIcon.data,
      qt_meta_data_QDBusTrayIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusTrayIcon.stringdata0))
        return static_cast<void*>(const_cast< QDBusTrayIcon*>(this));
    return QPlatformSystemTrayIcon::qt_metacast(_clname);
}

int QDBusTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDBusTrayIcon::categoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QDBusTrayIcon::statusChanged(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusTrayIcon::tooltipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QDBusTrayIcon::iconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QDBusTrayIcon::attention()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QDBusTrayIcon::menuChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
