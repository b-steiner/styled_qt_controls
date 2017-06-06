/****************************************************************************
** Meta object code from reading C++ file 'styled_collapse_widget.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\styled_collapse_widget.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_collapse_widget.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget_t {
    QByteArrayData data[10];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget_t qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget = {
    {
QT_MOC_LITERAL(0, 0, 47), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 48, 7), // "deleted"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 18), // "title_mousePressed"
QT_MOC_LITERAL(4, 76, 12), // "QMouseEvent*"
QT_MOC_LITERAL(5, 89, 5), // "event"
QT_MOC_LITERAL(6, 95, 16), // "collapse_toggled"
QT_MOC_LITERAL(7, 112, 7), // "checked"
QT_MOC_LITERAL(8, 120, 16), // "button_alignment"
QT_MOC_LITERAL(9, 137, 13) // "Qt::Alignment"

    },
    "bdl::styled_qt_controls::styled_collapse_widget\0"
    "deleted\0\0title_mousePressed\0QMouseEvent*\0"
    "event\0collapse_toggled\0checked\0"
    "button_alignment\0Qt::Alignment"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_collapse_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   30,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Bool,    7,

 // properties: name, type, flags
       8, 0x80000000 | 9, 0x0009500b,

       0        // eod
};

void bdl::styled_qt_controls::styled_collapse_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_collapse_widget *_t = static_cast<styled_collapse_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleted(); break;
        case 1: _t->title_mousePressed((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 2: _t->collapse_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (styled_collapse_widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_collapse_widget::deleted)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        styled_collapse_widget *_t = static_cast<styled_collapse_widget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Alignment*>(_v) = _t->button_alignment(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        styled_collapse_widget *_t = static_cast<styled_collapse_widget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->button_alignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject bdl::styled_qt_controls::styled_collapse_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget.data,
      qt_meta_data_bdl__styled_qt_controls__styled_collapse_widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_collapse_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_collapse_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_collapse_widget.stringdata0))
        return static_cast<void*>(const_cast< styled_collapse_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_collapse_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::styled_collapse_widget::deleted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
