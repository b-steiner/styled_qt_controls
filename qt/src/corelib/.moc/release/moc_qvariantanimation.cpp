/****************************************************************************
** Meta object code from reading C++ file 'qvariantanimation.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../animation/qvariantanimation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvariantanimation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QVariantAnimation_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QVariantAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QVariantAnimation_t qt_meta_stringdata_QVariantAnimation = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QVariantAnimation"
QT_MOC_LITERAL(1, 18, 12), // "valueChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 5), // "value"
QT_MOC_LITERAL(4, 38, 10), // "startValue"
QT_MOC_LITERAL(5, 49, 8), // "endValue"
QT_MOC_LITERAL(6, 58, 12), // "currentValue"
QT_MOC_LITERAL(7, 71, 8), // "duration"
QT_MOC_LITERAL(8, 80, 11) // "easingCurve"

    },
    "QVariantAnimation\0valueChanged\0\0value\0"
    "startValue\0endValue\0currentValue\0"
    "duration\0easingCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QVariantAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       5,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,

 // properties: name, type, flags
       4, QMetaType::QVariant, 0x00095103,
       5, QMetaType::QVariant, 0x00095103,
       6, QMetaType::QVariant, 0x00495001,
       7, QMetaType::Int, 0x00095103,
       8, QMetaType::QEasingCurve, 0x00095103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QVariantAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QVariantAnimation *_t = static_cast<QVariantAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QVariantAnimation::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QVariantAnimation::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QVariantAnimation *_t = static_cast<QVariantAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->startValue(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->endValue(); break;
        case 2: *reinterpret_cast< QVariant*>(_v) = _t->currentValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 4: *reinterpret_cast< QEasingCurve*>(_v) = _t->easingCurve(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QVariantAnimation *_t = static_cast<QVariantAnimation *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setStartValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 1: _t->setEndValue(*reinterpret_cast< QVariant*>(_v)); break;
        case 3: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setEasingCurve(*reinterpret_cast< QEasingCurve*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QVariantAnimation::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_QVariantAnimation.data,
      qt_meta_data_QVariantAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QVariantAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QVariantAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QVariantAnimation.stringdata0))
        return static_cast<void*>(const_cast< QVariantAnimation*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int QVariantAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
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
void QVariantAnimation::valueChanged(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
