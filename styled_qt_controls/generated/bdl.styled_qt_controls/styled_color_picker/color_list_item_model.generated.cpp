/****************************************************************************
** Meta object code from reading C++ file 'color_list_item_model.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\styled_color_picker\color_list_item_model.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'color_list_item_model.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model_t {
    QByteArrayData data[1];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model_t qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model = {
    {
QT_MOC_LITERAL(0, 0, 46) // "bdl::styled_qt_controls::colo..."

    },
    "bdl::styled_qt_controls::color_list_item_model"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__color_list_item_model[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void bdl::styled_qt_controls::color_list_item_model::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject bdl::styled_qt_controls::color_list_item_model::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model.data,
      qt_meta_data_bdl__styled_qt_controls__color_list_item_model,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *bdl::styled_qt_controls::color_list_item_model::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::color_list_item_model::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__color_list_item_model.stringdata0))
        return static_cast<void*>(const_cast< color_list_item_model*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int bdl::styled_qt_controls::color_list_item_model::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
