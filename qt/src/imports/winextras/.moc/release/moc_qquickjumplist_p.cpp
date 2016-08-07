/****************************************************************************
** Meta object code from reading C++ file 'qquickjumplist_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickjumplist_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickjumplist_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickJumpList_t {
    QByteArrayData data[14];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickJumpList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickJumpList_t qt_meta_stringdata_QQuickJumpList = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QQuickJumpList"
QT_MOC_LITERAL(1, 15, 15), // "DefaultProperty"
QT_MOC_LITERAL(2, 31, 4), // "data"
QT_MOC_LITERAL(3, 36, 12), // "tasksChanged"
QT_MOC_LITERAL(4, 49, 0), // ""
QT_MOC_LITERAL(5, 50, 17), // "categoriesChanged"
QT_MOC_LITERAL(6, 68, 7), // "rebuild"
QT_MOC_LITERAL(7, 76, 6), // "recent"
QT_MOC_LITERAL(8, 83, 23), // "QQuickJumpListCategory*"
QT_MOC_LITERAL(9, 107, 8), // "frequent"
QT_MOC_LITERAL(10, 116, 5), // "tasks"
QT_MOC_LITERAL(11, 122, 10), // "categories"
QT_MOC_LITERAL(12, 133, 40), // "QQmlListProperty<QQuickJumpLi..."
QT_MOC_LITERAL(13, 174, 25) // "QQmlListProperty<QObject>"

    },
    "QQuickJumpList\0DefaultProperty\0data\0"
    "tasksChanged\0\0categoriesChanged\0rebuild\0"
    "recent\0QQuickJumpListCategory*\0frequent\0"
    "tasks\0categories\0"
    "QQmlListProperty<QQuickJumpListCategory>\0"
    "QQmlListProperty<QObject>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickJumpList[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
       3,   16, // methods
       5,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    0,   31,    4, 0x06 /* Public */,
       5,    0,   32,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   33,    4, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x00095409,
       9, 0x80000000 | 8, 0x00095409,
      10, 0x80000000 | 8, 0x0049510b,
      11, 0x80000000 | 12, 0x00495009,
       2, 0x80000000 | 13, 0x00095009,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       0,

       0        // eod
};

void QQuickJumpList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickJumpList *_t = static_cast<QQuickJumpList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tasksChanged(); break;
        case 1: _t->categoriesChanged(); break;
        case 2: _t->rebuild(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickJumpList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickJumpList::tasksChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickJumpList::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickJumpList::categoriesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickJumpList *_t = static_cast<QQuickJumpList *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickJumpListCategory**>(_v) = _t->recent(); break;
        case 1: *reinterpret_cast< QQuickJumpListCategory**>(_v) = _t->frequent(); break;
        case 2: *reinterpret_cast< QQuickJumpListCategory**>(_v) = _t->tasks(); break;
        case 3: *reinterpret_cast< QQmlListProperty<QQuickJumpListCategory>*>(_v) = _t->categories(); break;
        case 4: *reinterpret_cast< QQmlListProperty<QObject>*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickJumpList *_t = static_cast<QQuickJumpList *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setTasks(*reinterpret_cast< QQuickJumpListCategory**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QQuickJumpList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickJumpList.data,
      qt_meta_data_QQuickJumpList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickJumpList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickJumpList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickJumpList.stringdata0))
        return static_cast<void*>(const_cast< QQuickJumpList*>(this));
    if (!strcmp(_clname, "QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QQuickJumpList*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QQmlParserStatus"))
        return static_cast< QQmlParserStatus*>(const_cast< QQuickJumpList*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickJumpList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickJumpList::tasksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QQuickJumpList::categoriesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
