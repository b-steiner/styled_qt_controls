/****************************************************************************
** Meta object code from reading C++ file 'styled_dock_item.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_dock_widget\styled_dock_item.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_dock_item.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item_t {
    QByteArrayData data[13];
    char stringdata0[186];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item_t qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item = {
    {
QT_MOC_LITERAL(0, 0, 41), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 42, 7), // "closing"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "bool&"
QT_MOC_LITERAL(4, 57, 12), // "accept_close"
QT_MOC_LITERAL(5, 70, 6), // "closed"
QT_MOC_LITERAL(6, 77, 10), // "is_deleted"
QT_MOC_LITERAL(7, 88, 15), // "overlay_changed"
QT_MOC_LITERAL(8, 104, 10), // "is_visible"
QT_MOC_LITERAL(9, 115, 13), // "title_changed"
QT_MOC_LITERAL(10, 129, 42), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(11, 172, 4), // "item"
QT_MOC_LITERAL(12, 177, 8) // "selected"

    },
    "bdl::styled_qt_controls::styled_dock_item\0"
    "closing\0\0bool&\0accept_close\0closed\0"
    "is_deleted\0overlay_changed\0is_visible\0"
    "title_changed\0bdl::styled_qt_controls::styled_dock_item*\0"
    "item\0selected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_dock_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,
       7,    1,   45,    2, 0x06 /* Public */,
       9,    1,   48,    2, 0x06 /* Public */,
      12,    0,   51,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,

       0        // eod
};

void bdl::styled_qt_controls::styled_dock_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_dock_item *_t = static_cast<styled_dock_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closing((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->closed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->overlay_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->title_changed((*reinterpret_cast< bdl::styled_qt_controls::styled_dock_item*(*)>(_a[1]))); break;
        case 4: _t->selected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< bdl::styled_qt_controls::styled_dock_item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (styled_dock_item::*_t)(bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_dock_item::closing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (styled_dock_item::*_t)(bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_dock_item::closed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (styled_dock_item::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_dock_item::overlay_changed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (styled_dock_item::*_t)(bdl::styled_qt_controls::styled_dock_item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_dock_item::title_changed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (styled_dock_item::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_dock_item::selected)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject bdl::styled_qt_controls::styled_dock_item::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item.data,
      qt_meta_data_bdl__styled_qt_controls__styled_dock_item,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bdl::styled_qt_controls::styled_dock_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_dock_item::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_dock_item.stringdata0))
        return static_cast<void*>(const_cast< styled_dock_item*>(this));
    return QObject::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_dock_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::styled_dock_item::closing(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bdl::styled_qt_controls::styled_dock_item::closed(bool & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bdl::styled_qt_controls::styled_dock_item::overlay_changed(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bdl::styled_qt_controls::styled_dock_item::title_changed(bdl::styled_qt_controls::styled_dock_item * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void bdl::styled_qt_controls::styled_dock_item::selected()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
