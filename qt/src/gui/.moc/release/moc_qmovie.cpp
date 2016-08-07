/****************************************************************************
** Meta object code from reading C++ file 'qmovie.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../image/qmovie.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmovie.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMovie_t {
    QByteArrayData data[32];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMovie_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMovie_t qt_meta_stringdata_QMovie = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QMovie"
QT_MOC_LITERAL(1, 7, 7), // "started"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 7), // "resized"
QT_MOC_LITERAL(4, 24, 4), // "size"
QT_MOC_LITERAL(5, 29, 7), // "updated"
QT_MOC_LITERAL(6, 37, 4), // "rect"
QT_MOC_LITERAL(7, 42, 12), // "stateChanged"
QT_MOC_LITERAL(8, 55, 18), // "QMovie::MovieState"
QT_MOC_LITERAL(9, 74, 5), // "state"
QT_MOC_LITERAL(10, 80, 5), // "error"
QT_MOC_LITERAL(11, 86, 30), // "QImageReader::ImageReaderError"
QT_MOC_LITERAL(12, 117, 8), // "finished"
QT_MOC_LITERAL(13, 126, 12), // "frameChanged"
QT_MOC_LITERAL(14, 139, 11), // "frameNumber"
QT_MOC_LITERAL(15, 151, 5), // "start"
QT_MOC_LITERAL(16, 157, 15), // "jumpToNextFrame"
QT_MOC_LITERAL(17, 173, 9), // "setPaused"
QT_MOC_LITERAL(18, 183, 6), // "paused"
QT_MOC_LITERAL(19, 190, 4), // "stop"
QT_MOC_LITERAL(20, 195, 8), // "setSpeed"
QT_MOC_LITERAL(21, 204, 12), // "percentSpeed"
QT_MOC_LITERAL(22, 217, 16), // "_q_loadNextFrame"
QT_MOC_LITERAL(23, 234, 5), // "speed"
QT_MOC_LITERAL(24, 240, 9), // "cacheMode"
QT_MOC_LITERAL(25, 250, 9), // "CacheMode"
QT_MOC_LITERAL(26, 260, 10), // "MovieState"
QT_MOC_LITERAL(27, 271, 10), // "NotRunning"
QT_MOC_LITERAL(28, 282, 6), // "Paused"
QT_MOC_LITERAL(29, 289, 7), // "Running"
QT_MOC_LITERAL(30, 297, 9), // "CacheNone"
QT_MOC_LITERAL(31, 307, 8) // "CacheAll"

    },
    "QMovie\0started\0\0resized\0size\0updated\0"
    "rect\0stateChanged\0QMovie::MovieState\0"
    "state\0error\0QImageReader::ImageReaderError\0"
    "finished\0frameChanged\0frameNumber\0"
    "start\0jumpToNextFrame\0setPaused\0paused\0"
    "stop\0setSpeed\0percentSpeed\0_q_loadNextFrame\0"
    "speed\0cacheMode\0CacheMode\0MovieState\0"
    "NotRunning\0Paused\0Running\0CacheNone\0"
    "CacheAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMovie[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  106, // properties
       2,  112, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       5,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
      10,    1,   89,    2, 0x06 /* Public */,
      12,    0,   92,    2, 0x06 /* Public */,
      13,    1,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    0,   96,    2, 0x0a /* Public */,
      16,    0,   97,    2, 0x0a /* Public */,
      17,    1,   98,    2, 0x0a /* Public */,
      19,    0,  101,    2, 0x0a /* Public */,
      20,    1,  102,    2, 0x0a /* Public */,
      22,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    4,
    QMetaType::Void, QMetaType::QRect,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

 // properties: name, type, flags
      23, QMetaType::Int, 0x00095103,
      24, 0x80000000 | 25, 0x0009510b,

 // enums: name, flags, count, data
      26, 0x0,    3,  120,
      25, 0x0,    2,  126,

 // enum data: key, value
      27, uint(QMovie::NotRunning),
      28, uint(QMovie::Paused),
      29, uint(QMovie::Running),
      30, uint(QMovie::CacheNone),
      31, uint(QMovie::CacheAll),

       0        // eod
};

void QMovie::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMovie *_t = static_cast<QMovie *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->resized((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->updated((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 3: _t->stateChanged((*reinterpret_cast< QMovie::MovieState(*)>(_a[1]))); break;
        case 4: _t->error((*reinterpret_cast< QImageReader::ImageReaderError(*)>(_a[1]))); break;
        case 5: _t->finished(); break;
        case 6: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->start(); break;
        case 8: { bool _r = _t->jumpToNextFrame();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 9: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->stop(); break;
        case 11: _t->setSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_loadNextFrame(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMovie::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::resized)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::updated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)(QMovie::MovieState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::stateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)(QImageReader::ImageReaderError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::error)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::finished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QMovie::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMovie::frameChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMovie *_t = static_cast<QMovie *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->speed(); break;
        case 1: *reinterpret_cast< CacheMode*>(_v) = _t->cacheMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMovie *_t = static_cast<QMovie *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpeed(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setCacheMode(*reinterpret_cast< CacheMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMovie::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QMovie.data,
      qt_meta_data_QMovie,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QMovie::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMovie::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMovie.stringdata0))
        return static_cast<void*>(const_cast< QMovie*>(this));
    return QObject::qt_metacast(_clname);
}

int QMovie::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void QMovie::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QMovie::resized(const QSize & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QMovie::updated(const QRect & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMovie::stateChanged(QMovie::MovieState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QMovie::error(QImageReader::ImageReaderError _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QMovie::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QMovie::frameChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
