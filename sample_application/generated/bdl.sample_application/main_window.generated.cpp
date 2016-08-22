/****************************************************************************
** Meta object code from reading C++ file 'main_window.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.sample_application\main_window.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_window.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_bdl__sample_application__main_window_t {
    QByteArrayData data[12];
    char stringdata0[224];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__sample_application__main_window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__sample_application__main_window_t qt_meta_stringdata_bdl__sample_application__main_window = {
    {
QT_MOC_LITERAL(0, 0, 36), // "bdl::sample_application::main..."
QT_MOC_LITERAL(1, 37, 18), // "size_btn_1_clicked"
QT_MOC_LITERAL(2, 56, 0), // ""
QT_MOC_LITERAL(3, 57, 7), // "checked"
QT_MOC_LITERAL(4, 65, 18), // "size_btn_2_clicked"
QT_MOC_LITERAL(5, 84, 18), // "size_btn_3_clicked"
QT_MOC_LITERAL(6, 103, 18), // "size_btn_4_clicked"
QT_MOC_LITERAL(7, 122, 19), // "state_btn_1_clicked"
QT_MOC_LITERAL(8, 142, 19), // "state_btn_2_clicked"
QT_MOC_LITERAL(9, 162, 19), // "state_btn_3_clicked"
QT_MOC_LITERAL(10, 182, 19), // "state_btn_4_clicked"
QT_MOC_LITERAL(11, 202, 21) // "exit_action_triggered"

    },
    "bdl::sample_application::main_window\0"
    "size_btn_1_clicked\0\0checked\0"
    "size_btn_2_clicked\0size_btn_3_clicked\0"
    "size_btn_4_clicked\0state_btn_1_clicked\0"
    "state_btn_2_clicked\0state_btn_3_clicked\0"
    "state_btn_4_clicked\0exit_action_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__sample_application__main_window[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
       9,    1,   77,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,

       0        // eod
};

void bdl::sample_application::main_window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        main_window *_t = static_cast<main_window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->size_btn_1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->size_btn_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->size_btn_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->size_btn_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->state_btn_1_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->state_btn_2_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->state_btn_3_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->state_btn_4_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->exit_action_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject bdl::sample_application::main_window::staticMetaObject = {
    { &styled_qt_controls::styled_window::staticMetaObject, qt_meta_stringdata_bdl__sample_application__main_window.data,
      qt_meta_data_bdl__sample_application__main_window,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::sample_application::main_window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::sample_application::main_window::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__sample_application__main_window.stringdata0))
        return static_cast<void*>(const_cast< main_window*>(this));
    return styled_qt_controls::styled_window::qt_metacast(_clname);
}

int bdl::sample_application::main_window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = styled_qt_controls::styled_window::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
