/****************************************************************************
** Meta object code from reading C++ file 'styled_path_widget.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_path_widget\styled_path_widget.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_path_widget.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget_t {
    QByteArrayData data[16];
    char stringdata0[295];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget_t qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget = {
    {
QT_MOC_LITERAL(0, 0, 43), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 44, 13), // "item_selected"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 49), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(4, 109, 4), // "item"
QT_MOC_LITERAL(5, 114, 23), // "layout_overflow_changed"
QT_MOC_LITERAL(6, 138, 8), // "overflow"
QT_MOC_LITERAL(7, 147, 19), // "text_button_clicked"
QT_MOC_LITERAL(8, 167, 7), // "checked"
QT_MOC_LITERAL(9, 175, 16), // "action_triggered"
QT_MOC_LITERAL(10, 192, 22), // "forward_button_clicked"
QT_MOC_LITERAL(11, 215, 19), // "back_button_clicked"
QT_MOC_LITERAL(12, 235, 20), // "stack_canredochanged"
QT_MOC_LITERAL(13, 256, 8), // "can_redo"
QT_MOC_LITERAL(14, 265, 20), // "stack_canundochanged"
QT_MOC_LITERAL(15, 286, 8) // "can_undo"

    },
    "bdl::styled_qt_controls::styled_path_widget\0"
    "item_selected\0\0"
    "bdl::styled_qt_controls::styled_path_widget_item*\0"
    "item\0layout_overflow_changed\0overflow\0"
    "text_button_clicked\0checked\0"
    "action_triggered\0forward_button_clicked\0"
    "back_button_clicked\0stack_canredochanged\0"
    "can_redo\0stack_canundochanged\0can_undo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_path_widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x08 /* Private */,
       7,    1,   60,    2, 0x08 /* Private */,
       9,    1,   63,    2, 0x08 /* Private */,
      10,    1,   66,    2, 0x08 /* Private */,
      11,    1,   69,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      14,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void bdl::styled_qt_controls::styled_path_widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_path_widget *_t = static_cast<styled_path_widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->item_selected((*reinterpret_cast< bdl::styled_qt_controls::styled_path_widget_item*(*)>(_a[1]))); break;
        case 1: _t->layout_overflow_changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->text_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->forward_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->back_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->stack_canredochanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->stack_canundochanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< bdl::styled_qt_controls::styled_path_widget_item* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (styled_path_widget::*_t)(bdl::styled_qt_controls::styled_path_widget_item * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&styled_path_widget::item_selected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject bdl::styled_qt_controls::styled_path_widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget.data,
      qt_meta_data_bdl__styled_qt_controls__styled_path_widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_path_widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_path_widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_path_widget.stringdata0))
        return static_cast<void*>(const_cast< styled_path_widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_path_widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::styled_path_widget::item_selected(bdl::styled_qt_controls::styled_path_widget_item * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
