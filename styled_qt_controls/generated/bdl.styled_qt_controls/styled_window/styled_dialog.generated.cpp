/****************************************************************************
** Meta object code from reading C++ file 'styled_dialog.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_window\styled_dialog.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'styled_dialog.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog_t {
    QByteArrayData data[5];
    char stringdata0[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog_t qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog = {
    {
QT_MOC_LITERAL(0, 0, 38), // "bdl::styled_qt_controls::styl..."
QT_MOC_LITERAL(1, 39, 21), // "dialog_button_clicked"
QT_MOC_LITERAL(2, 61, 0), // ""
QT_MOC_LITERAL(3, 62, 7), // "checked"
QT_MOC_LITERAL(4, 70, 11) // "this_closed"

    },
    "bdl::styled_qt_controls::styled_dialog\0"
    "dialog_button_clicked\0\0checked\0"
    "this_closed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__styled_dialog[] = {

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
       4,    0,   27,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,

       0        // eod
};

void bdl::styled_qt_controls::styled_dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        styled_dialog *_t = static_cast<styled_dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dialog_button_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->this_closed(); break;
        default: ;
        }
    }
}

const QMetaObject bdl::styled_qt_controls::styled_dialog::staticMetaObject = {
    { &styled_window::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog.data,
      qt_meta_data_bdl__styled_qt_controls__styled_dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::styled_dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::styled_dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__styled_dialog.stringdata0))
        return static_cast<void*>(const_cast< styled_dialog*>(this));
    return styled_window::qt_metacast(_clname);
}

int bdl::styled_qt_controls::styled_dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = styled_window::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
