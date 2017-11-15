/****************************************************************************
** Meta object code from reading C++ file 'clearable_line_edit.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_controls\clearable_line_edit.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clearable_line_edit.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit_t {
    QByteArrayData data[6];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit_t qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit = {
    {
QT_MOC_LITERAL(0, 0, 44), // "bdl::styled_qt_controls::clea..."
QT_MOC_LITERAL(1, 45, 17), // "this_text_changed"
QT_MOC_LITERAL(2, 63, 0), // ""
QT_MOC_LITERAL(3, 64, 5), // "_text"
QT_MOC_LITERAL(4, 70, 20), // "clear_button_clicked"
QT_MOC_LITERAL(5, 91, 8) // "_checked"

    },
    "bdl::styled_qt_controls::clearable_line_edit\0"
    "this_text_changed\0\0_text\0clear_button_clicked\0"
    "_checked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__clearable_line_edit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x08 /* Private */,
       4,    1,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

       0        // eod
};

void bdl::styled_qt_controls::clearable_line_edit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        clearable_line_edit *_t = static_cast<clearable_line_edit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->this_text_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->clear_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::clearable_line_edit::staticMetaObject = {
    { &QLineEdit::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit.data,
      qt_meta_data_bdl__styled_qt_controls__clearable_line_edit,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bdl::styled_qt_controls::clearable_line_edit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::clearable_line_edit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__clearable_line_edit.stringdata0))
        return static_cast<void*>(const_cast< clearable_line_edit*>(this));
    return QLineEdit::qt_metacast(_clname);
}

int bdl::styled_qt_controls::clearable_line_edit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLineEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
