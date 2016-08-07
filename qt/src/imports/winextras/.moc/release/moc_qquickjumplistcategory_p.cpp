/****************************************************************************
** Meta object code from reading C++ file 'qquickjumplistcategory_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickjumplistcategory_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickjumplistcategory_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickJumpListCategory_t {
    QByteArrayData data[12];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickJumpListCategory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickJumpListCategory_t qt_meta_stringdata_QQuickJumpListCategory = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QQuickJumpListCategory"
QT_MOC_LITERAL(1, 23, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 39, 4), // "data"
QT_MOC_LITERAL(3, 44, 12), // "itemsChanged"
QT_MOC_LITERAL(4, 57, 0), // ""
QT_MOC_LITERAL(5, 58, 12), // "titleChanged"
QT_MOC_LITERAL(6, 71, 17), // "visibilityChanged"
QT_MOC_LITERAL(7, 89, 25), // "QQmlListProperty<QObject>"
QT_MOC_LITERAL(8, 115, 5), // "items"
QT_MOC_LITERAL(9, 121, 36), // "QQmlListProperty<QQuickJumpLi..."
QT_MOC_LITERAL(10, 158, 5), // "title"
QT_MOC_LITERAL(11, 164, 7) // "visible"

    },
    "QQuickJumpListCategory\0DefaultProperty\0"
    "data\0itemsChanged\0\0titleChanged\0"
    "visibilityChanged\0QQmlListProperty<QObject>\0"
    "items\0QQmlListProperty<QQuickJumpListItem>\0"
    "title\0visible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickJumpListCategory[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,
       6,    0,   33,    4, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       2, 0x80000000 | 7, 0x00095009,
       8, 0x80000000 | 9, 0x00095009,
      10, QMetaType::QString, 0x00495103,
      11, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void QQuickJumpListCategory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickJumpListCategory *_t = static_cast<QQuickJumpListCategory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemsChanged(); break;
        case 1: _t->titleChanged(); break;
        case 2: _t->visibilityChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickJumpListCategory::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickJumpListCategory::itemsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickJumpListCategory::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickJumpListCategory::titleChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickJumpListCategory::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickJumpListCategory::visibilityChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickJumpListCategory *_t = static_cast<QQuickJumpListCategory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        case 1: *reinterpret_cast< QQmlListProperty<QQuickJumpListItem>*>(_v) = _t->items(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickJumpListCategory *_t = static_cast<QQuickJumpListCategory *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickJumpListCategory::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickJumpListCategory.data,
      qt_meta_data_QQuickJumpListCategory,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickJumpListCategory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickJumpListCategory::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickJumpListCategory.stringdata0))
        return static_cast<void*>(const_cast< QQuickJumpListCategory*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickJumpListCategory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickJumpListCategory::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QQuickJumpListCategory::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QQuickJumpListCategory::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
