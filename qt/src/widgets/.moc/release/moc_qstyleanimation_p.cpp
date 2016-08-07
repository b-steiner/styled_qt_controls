/****************************************************************************
** Meta object code from reading C++ file 'qstyleanimation_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../styles/qstyleanimation_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstyleanimation_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStyleAnimation_t {
    QByteArrayData data[3];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStyleAnimation_t qt_meta_stringdata_QStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QStyleAnimation"
QT_MOC_LITERAL(1, 16, 5), // "start"
QT_MOC_LITERAL(2, 22, 0) // ""

    },
    "QStyleAnimation\0start\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStyleAnimation *_t = static_cast<QStyleAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->start(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QStyleAnimation::staticMetaObject = {
    { &QAbstractAnimation::staticMetaObject, qt_meta_stringdata_QStyleAnimation.data,
      qt_meta_data_QStyleAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< QStyleAnimation*>(this));
    return QAbstractAnimation::qt_metacast(_clname);
}

int QStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
struct qt_meta_stringdata_QProgressStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProgressStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProgressStyleAnimation_t qt_meta_stringdata_QProgressStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 23) // "QProgressStyleAnimation"

    },
    "QProgressStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProgressStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QProgressStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QProgressStyleAnimation::staticMetaObject = {
    { &QStyleAnimation::staticMetaObject, qt_meta_stringdata_QProgressStyleAnimation.data,
      qt_meta_data_QProgressStyleAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QProgressStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProgressStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QProgressStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< QProgressStyleAnimation*>(this));
    return QStyleAnimation::qt_metacast(_clname);
}

int QProgressStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyleAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QNumberStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNumberStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNumberStyleAnimation_t qt_meta_stringdata_QNumberStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 21) // "QNumberStyleAnimation"

    },
    "QNumberStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNumberStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QNumberStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QNumberStyleAnimation::staticMetaObject = {
    { &QStyleAnimation::staticMetaObject, qt_meta_stringdata_QNumberStyleAnimation.data,
      qt_meta_data_QNumberStyleAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNumberStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNumberStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNumberStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< QNumberStyleAnimation*>(this));
    return QStyleAnimation::qt_metacast(_clname);
}

int QNumberStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyleAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QBlendStyleAnimation_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBlendStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBlendStyleAnimation_t qt_meta_stringdata_QBlendStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 20) // "QBlendStyleAnimation"

    },
    "QBlendStyleAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBlendStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QBlendStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QBlendStyleAnimation::staticMetaObject = {
    { &QStyleAnimation::staticMetaObject, qt_meta_stringdata_QBlendStyleAnimation.data,
      qt_meta_data_QBlendStyleAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBlendStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBlendStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBlendStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< QBlendStyleAnimation*>(this));
    return QStyleAnimation::qt_metacast(_clname);
}

int QBlendStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyleAnimation::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QScrollbarStyleAnimation_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScrollbarStyleAnimation_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScrollbarStyleAnimation_t qt_meta_stringdata_QScrollbarStyleAnimation = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QScrollbarStyleAnimation"
QT_MOC_LITERAL(1, 25, 17), // "updateCurrentTime"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 4) // "time"

    },
    "QScrollbarStyleAnimation\0updateCurrentTime\0"
    "\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScrollbarStyleAnimation[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void QScrollbarStyleAnimation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScrollbarStyleAnimation *_t = static_cast<QScrollbarStyleAnimation *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateCurrentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QScrollbarStyleAnimation::staticMetaObject = {
    { &QNumberStyleAnimation::staticMetaObject, qt_meta_stringdata_QScrollbarStyleAnimation.data,
      qt_meta_data_QScrollbarStyleAnimation,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QScrollbarStyleAnimation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScrollbarStyleAnimation::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QScrollbarStyleAnimation.stringdata0))
        return static_cast<void*>(const_cast< QScrollbarStyleAnimation*>(this));
    return QNumberStyleAnimation::qt_metacast(_clname);
}

int QScrollbarStyleAnimation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QNumberStyleAnimation::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
