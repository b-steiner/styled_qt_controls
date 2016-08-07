/****************************************************************************
** Meta object code from reading C++ file 'qdrag.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qdrag.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdrag.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDrag_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDrag_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDrag_t qt_meta_stringdata_QDrag = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QDrag"
QT_MOC_LITERAL(1, 6, 13), // "actionChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 14), // "Qt::DropAction"
QT_MOC_LITERAL(4, 36, 6), // "action"
QT_MOC_LITERAL(5, 43, 13), // "targetChanged"
QT_MOC_LITERAL(6, 57, 9) // "newTarget"

    },
    "QDrag\0actionChanged\0\0Qt::DropAction\0"
    "action\0targetChanged\0newTarget"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDrag[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QObjectStar,    6,

       0        // eod
};

void QDrag::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDrag *_t = static_cast<QDrag *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionChanged((*reinterpret_cast< Qt::DropAction(*)>(_a[1]))); break;
        case 1: _t->targetChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDrag::*_t)(Qt::DropAction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDrag::actionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDrag::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDrag::targetChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QDrag::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDrag.data,
      qt_meta_data_QDrag,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDrag::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDrag::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDrag.stringdata0))
        return static_cast<void*>(const_cast< QDrag*>(this));
    return QObject::qt_metacast(_clname);
}

int QDrag::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QDrag::actionChanged(Qt::DropAction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDrag::targetChanged(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
