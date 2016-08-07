/****************************************************************************
** Meta object code from reading C++ file 'qundoview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qundoview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundoview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QUndoView_t {
    QByteArrayData data[10];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QUndoView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QUndoView_t qt_meta_stringdata_QUndoView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QUndoView"
QT_MOC_LITERAL(1, 10, 8), // "setStack"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "QUndoStack*"
QT_MOC_LITERAL(4, 32, 5), // "stack"
QT_MOC_LITERAL(5, 38, 8), // "setGroup"
QT_MOC_LITERAL(6, 47, 11), // "QUndoGroup*"
QT_MOC_LITERAL(7, 59, 5), // "group"
QT_MOC_LITERAL(8, 65, 10), // "emptyLabel"
QT_MOC_LITERAL(9, 76, 9) // "cleanIcon"

    },
    "QUndoView\0setStack\0\0QUndoStack*\0stack\0"
    "setGroup\0QUndoGroup*\0group\0emptyLabel\0"
    "cleanIcon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QUndoView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       5,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // properties: name, type, flags
       8, QMetaType::QString, 0x00095103,
       9, QMetaType::QIcon, 0x00095103,

       0        // eod
};

void QUndoView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QUndoView *_t = static_cast<QUndoView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setStack((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 1: _t->setGroup((*reinterpret_cast< QUndoGroup*(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QUndoView *_t = static_cast<QUndoView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->emptyLabel(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->cleanIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QUndoView *_t = static_cast<QUndoView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEmptyLabel(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCleanIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QUndoView::staticMetaObject = {
    { &QListView::staticMetaObject, qt_meta_stringdata_QUndoView.data,
      qt_meta_data_QUndoView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QUndoView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUndoView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoView.stringdata0))
        return static_cast<void*>(const_cast< QUndoView*>(this));
    return QListView::qt_metacast(_clname);
}

int QUndoView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListView::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
