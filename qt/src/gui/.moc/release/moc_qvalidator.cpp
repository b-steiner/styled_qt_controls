/****************************************************************************
** Meta object code from reading C++ file 'qvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qvalidator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qvalidator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QValidator_t {
    QByteArrayData data[3];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QValidator_t qt_meta_stringdata_QValidator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QValidator"
QT_MOC_LITERAL(1, 11, 7), // "changed"
QT_MOC_LITERAL(2, 19, 0) // ""

    },
    "QValidator\0changed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void QValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QValidator *_t = static_cast<QValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QValidator::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QValidator::changed)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QValidator::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QValidator.data,
      qt_meta_data_QValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QValidator.stringdata0))
        return static_cast<void*>(const_cast< QValidator*>(this));
    return QObject::qt_metacast(_clname);
}

int QValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QValidator::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_QIntValidator_t {
    QByteArrayData data[6];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QIntValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QIntValidator_t qt_meta_stringdata_QIntValidator = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QIntValidator"
QT_MOC_LITERAL(1, 14, 13), // "bottomChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "bottom"
QT_MOC_LITERAL(4, 36, 10), // "topChanged"
QT_MOC_LITERAL(5, 47, 3) // "top"

    },
    "QIntValidator\0bottomChanged\0\0bottom\0"
    "topChanged\0top"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QIntValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       2,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // properties: name, type, flags
       3, QMetaType::Int, 0x00495103,
       5, QMetaType::Int, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QIntValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QIntValidator *_t = static_cast<QIntValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bottomChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->topChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QIntValidator::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIntValidator::bottomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QIntValidator::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QIntValidator::topChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QIntValidator *_t = static_cast<QIntValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->bottom(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->top(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QIntValidator *_t = static_cast<QIntValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBottom(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QIntValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_QIntValidator.data,
      qt_meta_data_QIntValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QIntValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QIntValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QIntValidator.stringdata0))
        return static_cast<void*>(const_cast< QIntValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int QIntValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QIntValidator::bottomChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QIntValidator::topChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QDoubleValidator_t {
    QByteArrayData data[14];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleValidator_t qt_meta_stringdata_QDoubleValidator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDoubleValidator"
QT_MOC_LITERAL(1, 17, 13), // "bottomChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "bottom"
QT_MOC_LITERAL(4, 39, 10), // "topChanged"
QT_MOC_LITERAL(5, 50, 3), // "top"
QT_MOC_LITERAL(6, 54, 15), // "decimalsChanged"
QT_MOC_LITERAL(7, 70, 8), // "decimals"
QT_MOC_LITERAL(8, 79, 15), // "notationChanged"
QT_MOC_LITERAL(9, 95, 26), // "QDoubleValidator::Notation"
QT_MOC_LITERAL(10, 122, 8), // "notation"
QT_MOC_LITERAL(11, 131, 8), // "Notation"
QT_MOC_LITERAL(12, 140, 16), // "StandardNotation"
QT_MOC_LITERAL(13, 157, 18) // "ScientificNotation"

    },
    "QDoubleValidator\0bottomChanged\0\0bottom\0"
    "topChanged\0top\0decimalsChanged\0decimals\0"
    "notationChanged\0QDoubleValidator::Notation\0"
    "notation\0Notation\0StandardNotation\0"
    "ScientificNotation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   46, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       6,    1,   40,    2, 0x06 /* Public */,
       8,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00495103,
       5, QMetaType::Double, 0x00495103,
       7, QMetaType::Int, 0x00495103,
      10, 0x80000000 | 11, 0x0049510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

 // enums: name, flags, count, data
      11, 0x0,    2,   66,

 // enum data: key, value
      12, uint(QDoubleValidator::StandardNotation),
      13, uint(QDoubleValidator::ScientificNotation),

       0        // eod
};

void QDoubleValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDoubleValidator *_t = static_cast<QDoubleValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->bottomChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->topChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->decimalsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->notationChanged((*reinterpret_cast< QDoubleValidator::Notation(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDoubleValidator::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleValidator::bottomChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDoubleValidator::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleValidator::topChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDoubleValidator::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleValidator::decimalsChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDoubleValidator::*_t)(QDoubleValidator::Notation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleValidator::notationChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDoubleValidator *_t = static_cast<QDoubleValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->bottom(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->top(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->decimals(); break;
        case 3: *reinterpret_cast< Notation*>(_v) = _t->notation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDoubleValidator *_t = static_cast<QDoubleValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBottom(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setTop(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setDecimals(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setNotation(*reinterpret_cast< Notation*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDoubleValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_QDoubleValidator.data,
      qt_meta_data_QDoubleValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDoubleValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleValidator.stringdata0))
        return static_cast<void*>(const_cast< QDoubleValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int QDoubleValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
void QDoubleValidator::bottomChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleValidator::topChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDoubleValidator::decimalsChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDoubleValidator::notationChanged(QDoubleValidator::Notation _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_QRegExpValidator_t {
    QByteArrayData data[4];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRegExpValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRegExpValidator_t qt_meta_stringdata_QRegExpValidator = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QRegExpValidator"
QT_MOC_LITERAL(1, 17, 13), // "regExpChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6) // "regExp"

    },
    "QRegExpValidator\0regExpChanged\0\0regExp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRegExpValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       1,   22, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRegExp,    3,

 // properties: name, type, flags
       3, QMetaType::QRegExp, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QRegExpValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRegExpValidator *_t = static_cast<QRegExpValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->regExpChanged((*reinterpret_cast< const QRegExp(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QRegExpValidator::*_t)(const QRegExp & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QRegExpValidator::regExpChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRegExpValidator *_t = static_cast<QRegExpValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRegExp*>(_v) = _t->regExp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRegExpValidator *_t = static_cast<QRegExpValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegExp(*reinterpret_cast< QRegExp*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRegExpValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_QRegExpValidator.data,
      qt_meta_data_QRegExpValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QRegExpValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRegExpValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QRegExpValidator.stringdata0))
        return static_cast<void*>(const_cast< QRegExpValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int QRegExpValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
void QRegExpValidator::regExpChanged(const QRegExp & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QRegularExpressionValidator_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QRegularExpressionValidator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QRegularExpressionValidator_t qt_meta_stringdata_QRegularExpressionValidator = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QRegularExpressionValidator"
QT_MOC_LITERAL(1, 28, 24), // "regularExpressionChanged"
QT_MOC_LITERAL(2, 53, 0), // ""
QT_MOC_LITERAL(3, 54, 2), // "re"
QT_MOC_LITERAL(4, 57, 20), // "setRegularExpression"
QT_MOC_LITERAL(5, 78, 17) // "regularExpression"

    },
    "QRegularExpressionValidator\0"
    "regularExpressionChanged\0\0re\0"
    "setRegularExpression\0regularExpression"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QRegularExpressionValidator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRegularExpression,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QRegularExpression,    3,

 // properties: name, type, flags
       5, QMetaType::QRegularExpression, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void QRegularExpressionValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QRegularExpressionValidator *_t = static_cast<QRegularExpressionValidator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->regularExpressionChanged((*reinterpret_cast< const QRegularExpression(*)>(_a[1]))); break;
        case 1: _t->setRegularExpression((*reinterpret_cast< const QRegularExpression(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QRegularExpressionValidator::*_t)(const QRegularExpression & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QRegularExpressionValidator::regularExpressionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QRegularExpressionValidator *_t = static_cast<QRegularExpressionValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QRegularExpression*>(_v) = _t->regularExpression(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QRegularExpressionValidator *_t = static_cast<QRegularExpressionValidator *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegularExpression(*reinterpret_cast< QRegularExpression*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QRegularExpressionValidator::staticMetaObject = {
    { &QValidator::staticMetaObject, qt_meta_stringdata_QRegularExpressionValidator.data,
      qt_meta_data_QRegularExpressionValidator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QRegularExpressionValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QRegularExpressionValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QRegularExpressionValidator.stringdata0))
        return static_cast<void*>(const_cast< QRegularExpressionValidator*>(this));
    return QValidator::qt_metacast(_clname);
}

int QRegularExpressionValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QValidator::qt_metacall(_c, _id, _a);
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
void QRegularExpressionValidator::regularExpressionChanged(const QRegularExpression & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
