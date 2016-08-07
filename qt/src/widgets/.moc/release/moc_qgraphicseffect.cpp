/****************************************************************************
** Meta object code from reading C++ file 'qgraphicseffect.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../effects/qgraphicseffect.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicseffect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGraphicsEffect_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsEffect_t qt_meta_stringdata_QGraphicsEffect = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGraphicsEffect"
QT_MOC_LITERAL(1, 16, 14), // "enabledChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 7), // "enabled"
QT_MOC_LITERAL(4, 40, 10), // "setEnabled"
QT_MOC_LITERAL(5, 51, 6), // "enable"
QT_MOC_LITERAL(6, 58, 6), // "update"
QT_MOC_LITERAL(7, 65, 11), // "ChangeFlags"
QT_MOC_LITERAL(8, 77, 14), // "SourceAttached"
QT_MOC_LITERAL(9, 92, 14), // "SourceDetached"
QT_MOC_LITERAL(10, 107, 25), // "SourceBoundingRectChanged"
QT_MOC_LITERAL(11, 133, 17) // "SourceInvalidated"

    },
    "QGraphicsEffect\0enabledChanged\0\0enabled\0"
    "setEnabled\0enable\0update\0ChangeFlags\0"
    "SourceAttached\0SourceDetached\0"
    "SourceBoundingRectChanged\0SourceInvalidated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       1,   36, // properties
       1,   40, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       0,

 // enums: name, flags, count, data
       7, 0x1,    4,   44,

 // enum data: key, value
       8, uint(QGraphicsEffect::SourceAttached),
       9, uint(QGraphicsEffect::SourceDetached),
      10, uint(QGraphicsEffect::SourceBoundingRectChanged),
      11, uint(QGraphicsEffect::SourceInvalidated),

       0        // eod
};

void QGraphicsEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsEffect *_t = static_cast<QGraphicsEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsEffect::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsEffect::enabledChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsEffect *_t = static_cast<QGraphicsEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsEffect *_t = static_cast<QGraphicsEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsEffect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsEffect.data,
      qt_meta_data_QGraphicsEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsEffect.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsEffect*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void QGraphicsEffect::enabledChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QGraphicsColorizeEffect_t {
    QByteArrayData data[9];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsColorizeEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsColorizeEffect_t qt_meta_stringdata_QGraphicsColorizeEffect = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QGraphicsColorizeEffect"
QT_MOC_LITERAL(1, 24, 12), // "colorChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "color"
QT_MOC_LITERAL(4, 44, 15), // "strengthChanged"
QT_MOC_LITERAL(5, 60, 8), // "strength"
QT_MOC_LITERAL(6, 69, 8), // "setColor"
QT_MOC_LITERAL(7, 78, 1), // "c"
QT_MOC_LITERAL(8, 80, 11) // "setStrength"

    },
    "QGraphicsColorizeEffect\0colorChanged\0"
    "\0color\0strengthChanged\0strength\0"
    "setColor\0c\0setStrength"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsColorizeEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QReal,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QReal,    5,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00495103,
       5, QMetaType::QReal, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QGraphicsColorizeEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsColorizeEffect *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->strengthChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setStrength((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsColorizeEffect::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsColorizeEffect::colorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGraphicsColorizeEffect::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsColorizeEffect::strengthChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsColorizeEffect *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->strength(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsColorizeEffect *_t = static_cast<QGraphicsColorizeEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setStrength(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsColorizeEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsColorizeEffect.data,
      qt_meta_data_QGraphicsColorizeEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsColorizeEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsColorizeEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsColorizeEffect.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsColorizeEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsColorizeEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QGraphicsColorizeEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsColorizeEffect::strengthChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QGraphicsBlurEffect_t {
    QByteArrayData data[14];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsBlurEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsBlurEffect_t qt_meta_stringdata_QGraphicsBlurEffect = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QGraphicsBlurEffect"
QT_MOC_LITERAL(1, 20, 17), // "blurRadiusChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 10), // "blurRadius"
QT_MOC_LITERAL(4, 50, 16), // "blurHintsChanged"
QT_MOC_LITERAL(5, 67, 9), // "BlurHints"
QT_MOC_LITERAL(6, 77, 5), // "hints"
QT_MOC_LITERAL(7, 83, 13), // "setBlurRadius"
QT_MOC_LITERAL(8, 97, 12), // "setBlurHints"
QT_MOC_LITERAL(9, 110, 9), // "blurHints"
QT_MOC_LITERAL(10, 120, 8), // "BlurHint"
QT_MOC_LITERAL(11, 129, 15), // "PerformanceHint"
QT_MOC_LITERAL(12, 145, 11), // "QualityHint"
QT_MOC_LITERAL(13, 157, 13) // "AnimationHint"

    },
    "QGraphicsBlurEffect\0blurRadiusChanged\0"
    "\0blurRadius\0blurHintsChanged\0BlurHints\0"
    "hints\0setBlurRadius\0setBlurHints\0"
    "blurHints\0BlurHint\0PerformanceHint\0"
    "QualityHint\0AnimationHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsBlurEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       2,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   40,    2, 0x0a /* Public */,
       8,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       9, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, flags, count, data
      10, 0x1,    3,   62,
       5, 0x1,    3,   68,

 // enum data: key, value
      11, uint(QGraphicsBlurEffect::PerformanceHint),
      12, uint(QGraphicsBlurEffect::QualityHint),
      13, uint(QGraphicsBlurEffect::AnimationHint),
      11, uint(QGraphicsBlurEffect::PerformanceHint),
      12, uint(QGraphicsBlurEffect::QualityHint),
      13, uint(QGraphicsBlurEffect::AnimationHint),

       0        // eod
};

void QGraphicsBlurEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsBlurEffect *_t = static_cast<QGraphicsBlurEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blurRadiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->blurHintsChanged((*reinterpret_cast< BlurHints(*)>(_a[1]))); break;
        case 2: _t->setBlurRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setBlurHints((*reinterpret_cast< BlurHints(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsBlurEffect::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsBlurEffect::blurRadiusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGraphicsBlurEffect::*_t)(BlurHints );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsBlurEffect::blurHintsChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsBlurEffect *_t = static_cast<QGraphicsBlurEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->blurRadius(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->blurHints()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsBlurEffect *_t = static_cast<QGraphicsBlurEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setBlurHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsBlurEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsBlurEffect.data,
      qt_meta_data_QGraphicsBlurEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsBlurEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsBlurEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsBlurEffect.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsBlurEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsBlurEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QGraphicsBlurEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsBlurEffect::blurHintsChanged(BlurHints _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QGraphicsDropShadowEffect_t {
    QByteArrayData data[19];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsDropShadowEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsDropShadowEffect_t qt_meta_stringdata_QGraphicsDropShadowEffect = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QGraphicsDropShadowEffect"
QT_MOC_LITERAL(1, 26, 13), // "offsetChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "offset"
QT_MOC_LITERAL(4, 48, 17), // "blurRadiusChanged"
QT_MOC_LITERAL(5, 66, 10), // "blurRadius"
QT_MOC_LITERAL(6, 77, 12), // "colorChanged"
QT_MOC_LITERAL(7, 90, 5), // "color"
QT_MOC_LITERAL(8, 96, 9), // "setOffset"
QT_MOC_LITERAL(9, 106, 3), // "ofs"
QT_MOC_LITERAL(10, 110, 2), // "dx"
QT_MOC_LITERAL(11, 113, 2), // "dy"
QT_MOC_LITERAL(12, 116, 1), // "d"
QT_MOC_LITERAL(13, 118, 10), // "setXOffset"
QT_MOC_LITERAL(14, 129, 10), // "setYOffset"
QT_MOC_LITERAL(15, 140, 13), // "setBlurRadius"
QT_MOC_LITERAL(16, 154, 8), // "setColor"
QT_MOC_LITERAL(17, 163, 7), // "xOffset"
QT_MOC_LITERAL(18, 171, 7) // "yOffset"

    },
    "QGraphicsDropShadowEffect\0offsetChanged\0"
    "\0offset\0blurRadiusChanged\0blurRadius\0"
    "colorChanged\0color\0setOffset\0ofs\0dx\0"
    "dy\0d\0setXOffset\0setYOffset\0setBlurRadius\0"
    "setColor\0xOffset\0yOffset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsDropShadowEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       5,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       6,    1,   70,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   73,    2, 0x0a /* Public */,
       8,    2,   76,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      13,    1,   84,    2, 0x0a /* Public */,
      14,    1,   87,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x0a /* Public */,
      16,    1,   93,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPointF,    3,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QColor,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QPointF,    9,
    QMetaType::Void, QMetaType::QReal, QMetaType::QReal,   10,   11,
    QMetaType::Void, QMetaType::QReal,   12,
    QMetaType::Void, QMetaType::QReal,   10,
    QMetaType::Void, QMetaType::QReal,   11,
    QMetaType::Void, QMetaType::QReal,    5,
    QMetaType::Void, QMetaType::QColor,    7,

 // properties: name, type, flags
       3, QMetaType::QPointF, 0x00495103,
      17, QMetaType::QReal, 0x00495103,
      18, QMetaType::QReal, 0x00495103,
       5, QMetaType::QReal, 0x00495103,
       7, QMetaType::QColor, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,

       0        // eod
};

void QGraphicsDropShadowEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsDropShadowEffect *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->offsetChanged((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 1: _t->blurRadiusChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->colorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->setOffset((*reinterpret_cast< const QPointF(*)>(_a[1]))); break;
        case 4: _t->setOffset((*reinterpret_cast< qreal(*)>(_a[1])),(*reinterpret_cast< qreal(*)>(_a[2]))); break;
        case 5: _t->setOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->setXOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 7: _t->setYOffset((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 8: _t->setBlurRadius((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 9: _t->setColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsDropShadowEffect::*_t)(const QPointF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsDropShadowEffect::offsetChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGraphicsDropShadowEffect::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsDropShadowEffect::blurRadiusChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGraphicsDropShadowEffect::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsDropShadowEffect::colorChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsDropShadowEffect *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->offset(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->xOffset(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->yOffset(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->blurRadius(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsDropShadowEffect *_t = static_cast<QGraphicsDropShadowEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setXOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setYOffset(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setBlurRadius(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsDropShadowEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsDropShadowEffect.data,
      qt_meta_data_QGraphicsDropShadowEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsDropShadowEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsDropShadowEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsDropShadowEffect.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsDropShadowEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsDropShadowEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
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
void QGraphicsDropShadowEffect::offsetChanged(const QPointF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsDropShadowEffect::blurRadiusChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGraphicsDropShadowEffect::colorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_QGraphicsOpacityEffect_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsOpacityEffect_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsOpacityEffect_t qt_meta_stringdata_QGraphicsOpacityEffect = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QGraphicsOpacityEffect"
QT_MOC_LITERAL(1, 23, 14), // "opacityChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 7), // "opacity"
QT_MOC_LITERAL(4, 47, 18), // "opacityMaskChanged"
QT_MOC_LITERAL(5, 66, 4), // "mask"
QT_MOC_LITERAL(6, 71, 10), // "setOpacity"
QT_MOC_LITERAL(7, 82, 14), // "setOpacityMask"
QT_MOC_LITERAL(8, 97, 11) // "opacityMask"

    },
    "QGraphicsOpacityEffect\0opacityChanged\0"
    "\0opacity\0opacityMaskChanged\0mask\0"
    "setOpacity\0setOpacityMask\0opacityMask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsOpacityEffect[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   40,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QBrush,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::QBrush,    5,

 // properties: name, type, flags
       3, QMetaType::QReal, 0x00495103,
       8, QMetaType::QBrush, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QGraphicsOpacityEffect::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsOpacityEffect *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->opacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 1: _t->opacityMaskChanged((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        case 2: _t->setOpacity((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 3: _t->setOpacityMask((*reinterpret_cast< const QBrush(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsOpacityEffect::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsOpacityEffect::opacityChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGraphicsOpacityEffect::*_t)(const QBrush & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsOpacityEffect::opacityMaskChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsOpacityEffect *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->opacityMask(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsOpacityEffect *_t = static_cast<QGraphicsOpacityEffect *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setOpacityMask(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsOpacityEffect::staticMetaObject = {
    { &QGraphicsEffect::staticMetaObject, qt_meta_stringdata_QGraphicsOpacityEffect.data,
      qt_meta_data_QGraphicsOpacityEffect,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsOpacityEffect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsOpacityEffect::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsOpacityEffect.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsOpacityEffect*>(this));
    return QGraphicsEffect::qt_metacast(_clname);
}

int QGraphicsOpacityEffect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsEffect::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
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
void QGraphicsOpacityEffect::opacityChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QGraphicsOpacityEffect::opacityMaskChanged(const QBrush & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
