/****************************************************************************
** Meta object code from reading C++ file 'qquickjumplistitem_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickjumplistitem_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickjumplistitem_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickJumpListItem_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickJumpListItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickJumpListItem_t qt_meta_stringdata_QQuickJumpListItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QQuickJumpListItem"
QT_MOC_LITERAL(1, 19, 18), // "__jumpListItemType"
QT_MOC_LITERAL(2, 38, 16), // "JumpListItemType"
QT_MOC_LITERAL(3, 55, 12), // "ItemTypeLink"
QT_MOC_LITERAL(4, 68, 19), // "ItemTypeDestination"
QT_MOC_LITERAL(5, 88, 17) // "ItemTypeSeparator"

    },
    "QQuickJumpListItem\0__jumpListItemType\0"
    "JumpListItemType\0ItemTypeLink\0"
    "ItemTypeDestination\0ItemTypeSeparator"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickJumpListItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       1,   17, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095003,

 // enums: name, flags, count, data
       2, 0x0,    3,   21,

 // enum data: key, value
       3, uint(QQuickJumpListItem::ItemTypeLink),
       4, uint(QQuickJumpListItem::ItemTypeDestination),
       5, uint(QQuickJumpListItem::ItemTypeSeparator),

       0        // eod
};

void QQuickJumpListItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QQuickJumpListItem *_t = static_cast<QQuickJumpListItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->type(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickJumpListItem *_t = static_cast<QQuickJumpListItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setType(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject QQuickJumpListItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickJumpListItem.data,
      qt_meta_data_QQuickJumpListItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickJumpListItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickJumpListItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickJumpListItem.stringdata0))
        return static_cast<void*>(const_cast< QQuickJumpListItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickJumpListItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
