/****************************************************************************
** Meta object code from reading C++ file 'styled_frame.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\styled_frame.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_frame.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_frame_t {
    QByteArrayData data[21];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_frame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_frame_t qt_meta_stringdata_bdl__styled_qt_controls__styled_frame = {
    {
QT_MOC_LITERAL(0, 0, 37), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 38, 12), // "mousePressed"
QT_MOC_LITERAL(2, 51, 0), // ""
QT_MOC_LITERAL(3, 52, 12), // "QMouseEvent*"
QT_MOC_LITERAL(4, 65, 5), // "event"
QT_MOC_LITERAL(5, 71, 13), // "mouseReleased"
QT_MOC_LITERAL(6, 85, 9), // "mouseMove"
QT_MOC_LITERAL(7, 95, 5), // "leave"
QT_MOC_LITERAL(8, 101, 7), // "QEvent*"
QT_MOC_LITERAL(9, 109, 5), // "enter"
QT_MOC_LITERAL(10, 115, 10), // "keyPressed"
QT_MOC_LITERAL(11, 126, 10), // "QKeyEvent*"
QT_MOC_LITERAL(12, 137, 13), // "hover_changed"
QT_MOC_LITERAL(13, 151, 5), // "value"
QT_MOC_LITERAL(14, 157, 13), // "topline_color"
QT_MOC_LITERAL(15, 171, 5), // "hover"
QT_MOC_LITERAL(16, 177, 8), // "selected"
QT_MOC_LITERAL(17, 186, 17), // "inner_padding_top"
QT_MOC_LITERAL(18, 204, 18), // "inner_padding_side"
QT_MOC_LITERAL(19, 223, 13), // "custom_data_1"
QT_MOC_LITERAL(20, 237, 12) // "custom_int_1"

    },
    "bdl::styled_qt_controls::styled_frame\0"
    "mousePressed\0\0QMouseEvent*\0event\0"
    "mouseReleased\0mouseMove\0leave\0QEvent*\0"
    "enter\0keyPressed\0QKeyEvent*\0hover_changed\0"
    "value\0topline_color\0hover\0selected\0"
    "inner_padding_top\0inner_padding_side\0"
    "custom_data_1\0custom_int_1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_frame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       5,    1,   52,    2, 0x06 /* Public */,
       6,    1,   55,    2, 0x06 /* Public */,
       7,    1,   58,    2, 0x06 /* Public */,
       9,    1,   61,    2, 0x06 /* Public */,
      10,    1,   64,    2, 0x06 /* Public */,
      12,    1,   67,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 11,    4,
    QMetaType::Void, QMetaType::Bool,   13,

 // properties: name, type, flags
      14, QMetaType::QColor, 0x00095003,
      15, QMetaType::Bool, 0x00495003,
      16, QMetaType::Bool, 0x00095003,
      17, QMetaType::Int, 0x00095003,
      18, QMetaType::Int, 0x00095003,
      19, QMetaType::Bool, 0x00095003,
      20, QMetaType::Int, 0x00095003,

 // properties: notify_signal_id
       0,
       6,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void bdl::styled_qt_controls::styled_frame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_frame *_t = static_cast<styled_frame *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mousePressed((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 1: _t->mouseReleased((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->mouseMove((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->leave((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 4: _t->enter((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 5: _t->keyPressed((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 6: _t->hover_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (styled_frame::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::mousePressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::mouseReleased)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(QMouseEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::mouseMove)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(QEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::leave)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(QEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::enter)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(QKeyEvent * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::keyPressed)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (styled_frame::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_frame::hover_changed)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        styled_frame *_t = static_cast<styled_frame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->topline_color(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->hover(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selected(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->inner_padding_top(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->inner_padding_side(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->custom_data_1(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->custom_int_1(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        styled_frame *_t = static_cast<styled_frame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->topline_color(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->hover(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->selected(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->inner_padding_top(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->inner_padding_side(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->custom_data_1(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->custom_int_1(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject bdl::styled_qt_controls::styled_frame::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_frame.data,
      qt_meta_data_bdl__styled_qt_controls__styled_frame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_frame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_frame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_frame.stringdata0))
        return static_cast<void*>(const_cast< styled_frame*>(this));
    return QFrame::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_frame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::styled_frame::mousePressed(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bdl::styled_qt_controls::styled_frame::mouseReleased(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bdl::styled_qt_controls::styled_frame::mouseMove(QMouseEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bdl::styled_qt_controls::styled_frame::leave(QEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void bdl::styled_qt_controls::styled_frame::enter(QEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void bdl::styled_qt_controls::styled_frame::keyPressed(QKeyEvent * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void bdl::styled_qt_controls::styled_frame::hover_changed(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
