/****************************************************************************
** Meta object code from reading C++ file 'styled_gradient_frame.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\styled_gradient_frame.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_gradient_frame.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame_t {
    QByteArrayData data[6];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame_t qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame = {
    {
QT_MOC_LITERAL(0, 0, 46), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 47, 22), // "gradient_topline_color"
QT_MOC_LITERAL(2, 70, 21), // "gradient_bottom_color"
QT_MOC_LITERAL(3, 92, 18), // "gradient_top_color"
QT_MOC_LITERAL(4, 111, 22), // "alpha_transition_start"
QT_MOC_LITERAL(5, 134, 20) // "alpha_transition_end"

    },
    "bdl::styled_qt_controls::styled_gradient_frame\0"
    "gradient_topline_color\0gradient_bottom_color\0"
    "gradient_top_color\0alpha_transition_start\0"
    "alpha_transition_end"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_gradient_frame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095003,
       2, QMetaType::QColor, 0x00095003,
       3, QMetaType::QColor, 0x00095003,
       4, QMetaType::Float, 0x00095003,
       5, QMetaType::Float, 0x00095003,

       0        // eod
};

void bdl::styled_qt_controls::styled_gradient_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        styled_gradient_frame *_t = static_cast<styled_gradient_frame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->gradient_topline_color(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->gradient_bottom_color(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->gradient_top_color(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->alpha_transition_start(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->alpha_transition_end(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        styled_gradient_frame *_t = static_cast<styled_gradient_frame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->gradient_topline_color(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->gradient_bottom_color(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->gradient_top_color(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->alpha_transition_start(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->alpha_transition_end(*reinterpret_cast< float*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject bdl::styled_qt_controls::styled_gradient_frame::staticMetaObject = {
    { &styled_frame::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame.data,
      qt_meta_data_bdl__styled_qt_controls__styled_gradient_frame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_gradient_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_gradient_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_gradient_frame.stringdata0))
        return static_cast<void*>(const_cast< styled_gradient_frame*>(this));
    return styled_frame::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_gradient_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = styled_frame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
