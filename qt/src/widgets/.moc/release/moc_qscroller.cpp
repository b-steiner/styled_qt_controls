/****************************************************************************
** Meta object code from reading C++ file 'qscroller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qscroller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscroller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QScroller_t {
    QByteArrayData data[24];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScroller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScroller_t qt_meta_stringdata_QScroller = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QScroller"
QT_MOC_LITERAL(1, 10, 12), // "stateChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 16), // "QScroller::State"
QT_MOC_LITERAL(4, 41, 8), // "newstate"
QT_MOC_LITERAL(5, 50, 25), // "scrollerPropertiesChanged"
QT_MOC_LITERAL(6, 76, 19), // "QScrollerProperties"
QT_MOC_LITERAL(7, 96, 21), // "setScrollerProperties"
QT_MOC_LITERAL(8, 118, 4), // "prop"
QT_MOC_LITERAL(9, 123, 8), // "scrollTo"
QT_MOC_LITERAL(10, 132, 3), // "pos"
QT_MOC_LITERAL(11, 136, 10), // "scrollTime"
QT_MOC_LITERAL(12, 147, 13), // "ensureVisible"
QT_MOC_LITERAL(13, 161, 4), // "rect"
QT_MOC_LITERAL(14, 166, 7), // "xmargin"
QT_MOC_LITERAL(15, 174, 7), // "ymargin"
QT_MOC_LITERAL(16, 182, 18), // "resendPrepareEvent"
QT_MOC_LITERAL(17, 201, 5), // "state"
QT_MOC_LITERAL(18, 207, 5), // "State"
QT_MOC_LITERAL(19, 213, 18), // "scrollerProperties"
QT_MOC_LITERAL(20, 232, 8), // "Inactive"
QT_MOC_LITERAL(21, 241, 7), // "Pressed"
QT_MOC_LITERAL(22, 249, 8), // "Dragging"
QT_MOC_LITERAL(23, 258, 9) // "Scrolling"

    },
    "QScroller\0stateChanged\0\0QScroller::State\0"
    "newstate\0scrollerPropertiesChanged\0"
    "QScrollerProperties\0setScrollerProperties\0"
    "prop\0scrollTo\0pos\0scrollTime\0ensureVisible\0"
    "rect\0xmargin\0ymargin\0resendPrepareEvent\0"
    "state\0State\0scrollerProperties\0Inactive\0"
    "Pressed\0Dragging\0Scrolling"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScroller[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   88, // properties
       1,   96, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
       9,    2,   66,    2, 0x0a /* Public */,
      12,    3,   71,    2, 0x0a /* Public */,
      12,    4,   78,    2, 0x0a /* Public */,
      16,    0,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    8,
    QMetaType::Void, QMetaType::QPointF,   10,
    QMetaType::Void, QMetaType::QPointF, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal, QMetaType::QReal,   13,   14,   15,
    QMetaType::Void, QMetaType::QRectF, QMetaType::QReal, QMetaType::QReal, QMetaType::Int,   13,   14,   15,   11,
    QMetaType::Void,

 // properties: name, type, flags
      17, 0x80000000 | 18, 0x00495009,
      19, 0x80000000 | 6, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      18, 0x0,    4,  100,

 // enum data: key, value
      20, uint(QScroller::Inactive),
      21, uint(QScroller::Pressed),
      22, uint(QScroller::Dragging),
      23, uint(QScroller::Scrolling),

       0        // eod
};

void QScroller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScroller *_t = static_cast<QScroller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< QScroller::State(*)>(_a[1]))); break;
        case 1: _t->scrollerPropertiesChanged((*reinterpret_cast< const QScrollerProperties(*)>(_a[1]))); break;
        case 2: _t->setScrollerProperties((*reinterpret_cast< const QScrollerProperties(*)>(_a[1]))); break;
        case 3: _t->scrollTo((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->scrollTo((*reinterpret_cast< const QPointF(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->ensureVisible((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3]))); break;
        case 6: _t->ensureVisible((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2])),(*reinterpret_cast< qreal(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 7: _t->resendPrepareEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QScroller::*_t)(QScroller::State );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScroller::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScroller::*_t)(const QScrollerProperties & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScroller::scrollerPropertiesChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScroller *_t = static_cast<QScroller *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< State*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< QScrollerProperties*>(_v) = _t->scrollerProperties(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QScroller *_t = static_cast<QScroller *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setScrollerProperties(*reinterpret_cast< QScrollerProperties*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScroller::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScroller.data,
      qt_meta_data_QScroller,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QScroller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScroller::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QScroller.stringdata0))
        return static_cast<void*>(const_cast< QScroller*>(this));
    return QObject::qt_metacast(_clname);
}

int QScroller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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

// SIGNAL 0
void QScroller::stateChanged(QScroller::State _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScroller::scrollerPropertiesChanged(const QScrollerProperties & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
