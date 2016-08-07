/****************************************************************************
** Meta object code from reading C++ file 'qabstractscrollarea.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractscrollarea.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractscrollarea.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractScrollArea_t {
    QByteArrayData data[13];
    char stringdata0[228];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractScrollArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractScrollArea_t qt_meta_stringdata_QAbstractScrollArea = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QAbstractScrollArea"
QT_MOC_LITERAL(1, 20, 9), // "_q_hslide"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 9), // "_q_vslide"
QT_MOC_LITERAL(4, 41, 23), // "_q_showOrHideScrollBars"
QT_MOC_LITERAL(5, 65, 23), // "verticalScrollBarPolicy"
QT_MOC_LITERAL(6, 89, 19), // "Qt::ScrollBarPolicy"
QT_MOC_LITERAL(7, 109, 25), // "horizontalScrollBarPolicy"
QT_MOC_LITERAL(8, 135, 16), // "sizeAdjustPolicy"
QT_MOC_LITERAL(9, 152, 16), // "SizeAdjustPolicy"
QT_MOC_LITERAL(10, 169, 13), // "AdjustIgnored"
QT_MOC_LITERAL(11, 183, 27), // "AdjustToContentsOnFirstShow"
QT_MOC_LITERAL(12, 211, 16) // "AdjustToContents"

    },
    "QAbstractScrollArea\0_q_hslide\0\0_q_vslide\0"
    "_q_showOrHideScrollBars\0verticalScrollBarPolicy\0"
    "Qt::ScrollBarPolicy\0horizontalScrollBarPolicy\0"
    "sizeAdjustPolicy\0SizeAdjustPolicy\0"
    "AdjustIgnored\0AdjustToContentsOnFirstShow\0"
    "AdjustToContents"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractScrollArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   36, // properties
       1,   45, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       3,    1,   32,    2, 0x08 /* Private */,
       4,    0,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0009510b,
       7, 0x80000000 | 6, 0x0009510b,
       8, 0x80000000 | 9, 0x0009510b,

 // enums: name, flags, count, data
       9, 0x0,    3,   49,

 // enum data: key, value
      10, uint(QAbstractScrollArea::AdjustIgnored),
      11, uint(QAbstractScrollArea::AdjustToContentsOnFirstShow),
      12, uint(QAbstractScrollArea::AdjustToContents),

       0        // eod
};

void QAbstractScrollArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractScrollArea *_t = static_cast<QAbstractScrollArea *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_hslide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->d_func()->_q_vslide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_showOrHideScrollBars(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractScrollArea *_t = static_cast<QAbstractScrollArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = _t->verticalScrollBarPolicy(); break;
        case 1: *reinterpret_cast< Qt::ScrollBarPolicy*>(_v) = _t->horizontalScrollBarPolicy(); break;
        case 2: *reinterpret_cast< SizeAdjustPolicy*>(_v) = _t->sizeAdjustPolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractScrollArea *_t = static_cast<QAbstractScrollArea *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setVerticalScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 1: _t->setHorizontalScrollBarPolicy(*reinterpret_cast< Qt::ScrollBarPolicy*>(_v)); break;
        case 2: _t->setSizeAdjustPolicy(*reinterpret_cast< SizeAdjustPolicy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractScrollArea::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QAbstractScrollArea.data,
      qt_meta_data_QAbstractScrollArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractScrollArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractScrollArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractScrollArea.stringdata0))
        return static_cast<void*>(const_cast< QAbstractScrollArea*>(this));
    return QFrame::qt_metacast(_clname);
}

int QAbstractScrollArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
