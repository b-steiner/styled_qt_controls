/****************************************************************************
** Meta object code from reading C++ file 'styled_pushbutton.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\styled_pushbutton.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_pushbutton.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton_t {
    QByteArrayData data[18];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton_t qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton = {
    {
QT_MOC_LITERAL(0, 0, 42), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 43, 12), // "this_pressed"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 13), // "this_released"
QT_MOC_LITERAL(4, 71, 12), // "this_toggled"
QT_MOC_LITERAL(5, 84, 7), // "checked"
QT_MOC_LITERAL(6, 92, 16), // "menu_aboutToHide"
QT_MOC_LITERAL(7, 109, 5), // "hover"
QT_MOC_LITERAL(8, 115, 12), // "parent_hover"
QT_MOC_LITERAL(9, 128, 8), // "selected"
QT_MOC_LITERAL(10, 137, 7), // "pressed"
QT_MOC_LITERAL(11, 145, 13), // "topline_color"
QT_MOC_LITERAL(12, 159, 18), // "inner_border_color"
QT_MOC_LITERAL(13, 178, 13), // "custom_data_1"
QT_MOC_LITERAL(14, 192, 19), // "topline_offset_left"
QT_MOC_LITERAL(15, 212, 20), // "topline_offset_right"
QT_MOC_LITERAL(16, 233, 18), // "topline_offset_top"
QT_MOC_LITERAL(17, 252, 21) // "topline_offset_bottom"

    },
    "bdl::styled_qt_controls::styled_pushbutton\0"
    "this_pressed\0\0this_released\0this_toggled\0"
    "checked\0menu_aboutToHide\0hover\0"
    "parent_hover\0selected\0pressed\0"
    "topline_color\0inner_border_color\0"
    "custom_data_1\0topline_offset_left\0"
    "topline_offset_right\0topline_offset_top\0"
    "topline_offset_bottom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_pushbutton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      11,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    1,   36,    2, 0x08 /* Private */,
       6,    0,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095003,
       8, QMetaType::Bool, 0x00095003,
       9, QMetaType::Bool, 0x00095003,
      10, QMetaType::Bool, 0x00095003,
      11, QMetaType::QColor, 0x00095003,
      12, QMetaType::QColor, 0x00095003,
      13, QMetaType::Bool, 0x00095003,
      14, QMetaType::Int, 0x00095003,
      15, QMetaType::Int, 0x00095003,
      16, QMetaType::Int, 0x00095003,
      17, QMetaType::Int, 0x00095003,

       0        // eod
};

void bdl::styled_qt_controls::styled_pushbutton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_pushbutton *_t = static_cast<styled_pushbutton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->this_pressed(); break;
        case 1: _t->this_released(); break;
        case 2: _t->this_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->menu_aboutToHide(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        styled_pushbutton *_t = static_cast<styled_pushbutton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hover(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->parent_hover(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->pressed(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->topline_color(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->inner_border_color(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->custom_data_1(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->topline_offset_left(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->topline_offset_right(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->topline_offset_top(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->topline_offset_bottom(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        styled_pushbutton *_t = static_cast<styled_pushbutton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->hover(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->parent_hover(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->selected(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->pressed(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->topline_color(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->inner_border_color(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->custom_data_1(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->topline_offset_left(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->topline_offset_right(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->topline_offset_top(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->topline_offset_bottom(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject bdl::styled_qt_controls::styled_pushbutton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton.data,
      qt_meta_data_bdl__styled_qt_controls__styled_pushbutton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_pushbutton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_pushbutton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_pushbutton.stringdata0))
        return static_cast<void*>(const_cast< styled_pushbutton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_pushbutton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
QT_END_MOC_NAMESPACE
