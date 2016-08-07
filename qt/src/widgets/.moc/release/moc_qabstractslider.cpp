/****************************************************************************
** Meta object code from reading C++ file 'qabstractslider.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractslider.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractslider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractSlider_t {
    QByteArrayData data[27];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractSlider_t qt_meta_stringdata_QAbstractSlider = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QAbstractSlider"
QT_MOC_LITERAL(1, 16, 12), // "valueChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "value"
QT_MOC_LITERAL(4, 36, 13), // "sliderPressed"
QT_MOC_LITERAL(5, 50, 11), // "sliderMoved"
QT_MOC_LITERAL(6, 62, 8), // "position"
QT_MOC_LITERAL(7, 71, 14), // "sliderReleased"
QT_MOC_LITERAL(8, 86, 12), // "rangeChanged"
QT_MOC_LITERAL(9, 99, 3), // "min"
QT_MOC_LITERAL(10, 103, 3), // "max"
QT_MOC_LITERAL(11, 107, 15), // "actionTriggered"
QT_MOC_LITERAL(12, 123, 6), // "action"
QT_MOC_LITERAL(13, 130, 8), // "setValue"
QT_MOC_LITERAL(14, 139, 14), // "setOrientation"
QT_MOC_LITERAL(15, 154, 15), // "Qt::Orientation"
QT_MOC_LITERAL(16, 170, 8), // "setRange"
QT_MOC_LITERAL(17, 179, 7), // "minimum"
QT_MOC_LITERAL(18, 187, 7), // "maximum"
QT_MOC_LITERAL(19, 195, 10), // "singleStep"
QT_MOC_LITERAL(20, 206, 8), // "pageStep"
QT_MOC_LITERAL(21, 215, 14), // "sliderPosition"
QT_MOC_LITERAL(22, 230, 8), // "tracking"
QT_MOC_LITERAL(23, 239, 11), // "orientation"
QT_MOC_LITERAL(24, 251, 18), // "invertedAppearance"
QT_MOC_LITERAL(25, 270, 16), // "invertedControls"
QT_MOC_LITERAL(26, 287, 10) // "sliderDown"

    },
    "QAbstractSlider\0valueChanged\0\0value\0"
    "sliderPressed\0sliderMoved\0position\0"
    "sliderReleased\0rangeChanged\0min\0max\0"
    "actionTriggered\0action\0setValue\0"
    "setOrientation\0Qt::Orientation\0setRange\0"
    "minimum\0maximum\0singleStep\0pageStep\0"
    "sliderPosition\0tracking\0orientation\0"
    "invertedAppearance\0invertedControls\0"
    "sliderDown"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      11,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    0,   62,    2, 0x06 /* Public */,
       5,    1,   63,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    2,   67,    2, 0x06 /* Public */,
      11,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   75,    2, 0x0a /* Public */,
      14,    1,   78,    2, 0x0a /* Public */,
      16,    2,   81,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Int,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 15,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, QMetaType::Int, 0x00095103,
       3, QMetaType::Int, 0x00595103,
      21, QMetaType::Int, 0x00495103,
      22, QMetaType::Bool, 0x00095103,
      23, 0x80000000 | 15, 0x0009510b,
      24, QMetaType::Bool, 0x00095103,
      25, QMetaType::Bool, 0x00095103,
      26, QMetaType::Bool, 0x00094103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       2,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QAbstractSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractSlider *_t = static_cast<QAbstractSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderPressed(); break;
        case 2: _t->sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sliderReleased(); break;
        case 4: _t->rangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->actionTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        case 8: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractSlider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractSlider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::sliderPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractSlider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::sliderMoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractSlider::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::sliderReleased)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractSlider::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::rangeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QAbstractSlider::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractSlider::actionTriggered)) {
                *result = 5;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractSlider *_t = static_cast<QAbstractSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->singleStep(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->pageStep(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->sliderPosition(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasTracking(); break;
        case 7: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->invertedAppearance(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->invertedControls(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isSliderDown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractSlider *_t = static_cast<QAbstractSlider *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setPageStep(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setSliderPosition(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setTracking(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 8: _t->setInvertedAppearance(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setInvertedControls(*reinterpret_cast< bool*>(_v)); break;
        case 10: _t->setSliderDown(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractSlider::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAbstractSlider.data,
      qt_meta_data_QAbstractSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractSlider.stringdata0))
        return static_cast<void*>(const_cast< QAbstractSlider*>(this));
    return QWidget::qt_metacast(_clname);
}

int QAbstractSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractSlider::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QAbstractSlider::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QAbstractSlider::sliderMoved(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractSlider::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QAbstractSlider::rangeChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QAbstractSlider::actionTriggered(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
