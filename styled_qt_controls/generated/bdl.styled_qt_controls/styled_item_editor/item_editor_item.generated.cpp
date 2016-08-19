/****************************************************************************
** Meta object code from reading C++ file 'item_editor_item.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_item_editor\item_editor_item.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'item_editor_item.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item_t {
    QByteArrayData data[4];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item_t qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item = {
    {
QT_MOC_LITERAL(0, 0, 46), // "bdl::styled_qt_controls::base..."
QT_MOC_LITERAL(1, 47, 22), // "binding_button_toggled"
QT_MOC_LITERAL(2, 70, 0), // ""
QT_MOC_LITERAL(3, 71, 5) // "value"

    },
    "bdl::styled_qt_controls::base_item_editor_item\0"
    "binding_button_toggled\0\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__base_item_editor_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void bdl::styled_qt_controls::base_item_editor_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        base_item_editor_item *_t = static_cast<base_item_editor_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->binding_button_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::base_item_editor_item::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item.data,
      qt_meta_data_bdl__styled_qt_controls__base_item_editor_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::base_item_editor_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::base_item_editor_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__base_item_editor_item.stringdata0))
        return static_cast<void*>(const_cast< base_item_editor_item*>(this));
    return QObject::qt_metacast(_clname);
}

int bdl::styled_qt_controls::base_item_editor_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item_t qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item = {
    {
QT_MOC_LITERAL(0, 0, 48), // "bdl::styled_qt_controls::stri..."
QT_MOC_LITERAL(1, 49, 10), // "textEdited"
QT_MOC_LITERAL(2, 60, 0), // ""
QT_MOC_LITERAL(3, 61, 4) // "text"

    },
    "bdl::styled_qt_controls::string_item_editor_item\0"
    "textEdited\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__string_item_editor_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void bdl::styled_qt_controls::string_item_editor_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        string_item_editor_item *_t = static_cast<string_item_editor_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::string_item_editor_item::staticMetaObject = {
    { &base_item_editor_item::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item.data,
      qt_meta_data_bdl__styled_qt_controls__string_item_editor_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::string_item_editor_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::string_item_editor_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__string_item_editor_item.stringdata0))
        return static_cast<void*>(const_cast< string_item_editor_item*>(this));
    return base_item_editor_item::qt_metacast(_clname);
}

int bdl::styled_qt_controls::string_item_editor_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = base_item_editor_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item_t {
    QByteArrayData data[4];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item_t qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item = {
    {
QT_MOC_LITERAL(0, 0, 47), // "bdl::styled_qt_controls::floa..."
QT_MOC_LITERAL(1, 48, 15), // "edit_textEdited"
QT_MOC_LITERAL(2, 64, 0), // ""
QT_MOC_LITERAL(3, 65, 4) // "text"

    },
    "bdl::styled_qt_controls::float_item_editor_item\0"
    "edit_textEdited\0\0text"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__float_item_editor_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void bdl::styled_qt_controls::float_item_editor_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        float_item_editor_item *_t = static_cast<float_item_editor_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->edit_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::float_item_editor_item::staticMetaObject = {
    { &base_item_editor_item::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item.data,
      qt_meta_data_bdl__styled_qt_controls__float_item_editor_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::float_item_editor_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::float_item_editor_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__float_item_editor_item.stringdata0))
        return static_cast<void*>(const_cast< float_item_editor_item*>(this));
    return base_item_editor_item::qt_metacast(_clname);
}

int bdl::styled_qt_controls::float_item_editor_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = base_item_editor_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item_t {
    QByteArrayData data[6];
    char stringdata0[95];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item_t qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item = {
    {
QT_MOC_LITERAL(0, 0, 49), // "bdl::styled_qt_controls::vect..."
QT_MOC_LITERAL(1, 50, 12), // "x_textEdited"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 4), // "text"
QT_MOC_LITERAL(4, 69, 12), // "y_textEdited"
QT_MOC_LITERAL(5, 82, 12) // "z_textEdited"

    },
    "bdl::styled_qt_controls::vector3_item_editor_item\0"
    "x_textEdited\0\0text\0y_textEdited\0"
    "z_textEdited"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__vector3_item_editor_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       5,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void bdl::styled_qt_controls::vector3_item_editor_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        vector3_item_editor_item *_t = static_cast<vector3_item_editor_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->x_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->y_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->z_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::vector3_item_editor_item::staticMetaObject = {
    { &base_item_editor_item::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item.data,
      qt_meta_data_bdl__styled_qt_controls__vector3_item_editor_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::vector3_item_editor_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::vector3_item_editor_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__vector3_item_editor_item.stringdata0))
        return static_cast<void*>(const_cast< vector3_item_editor_item*>(this));
    return base_item_editor_item::qt_metacast(_clname);
}

int bdl::styled_qt_controls::vector3_item_editor_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = base_item_editor_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item_t {
    QByteArrayData data[4];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item_t qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item = {
    {
QT_MOC_LITERAL(0, 0, 47), // "bdl::styled_qt_controls::colo..."
QT_MOC_LITERAL(1, 48, 13), // "color_changed"
QT_MOC_LITERAL(2, 62, 0), // ""
QT_MOC_LITERAL(3, 63, 5) // "color"

    },
    "bdl::styled_qt_controls::color_item_editor_item\0"
    "color_changed\0\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__color_item_editor_item[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    3,

       0        // eod
};

void bdl::styled_qt_controls::color_item_editor_item::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        color_item_editor_item *_t = static_cast<color_item_editor_item *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->color_changed((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::color_item_editor_item::staticMetaObject = {
    { &base_item_editor_item::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item.data,
      qt_meta_data_bdl__styled_qt_controls__color_item_editor_item,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::color_item_editor_item::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::color_item_editor_item::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__color_item_editor_item.stringdata0))
        return static_cast<void*>(const_cast< color_item_editor_item*>(this));
    return base_item_editor_item::qt_metacast(_clname);
}

int bdl::styled_qt_controls::color_item_editor_item::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = base_item_editor_item::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
