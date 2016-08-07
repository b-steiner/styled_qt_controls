/****************************************************************************
** Meta object code from reading C++ file 'qfuturewatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../thread/qfuturewatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfuturewatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFutureWatcherBase_t {
    QByteArrayData data[24];
    char stringdata0[270];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFutureWatcherBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFutureWatcherBase_t qt_meta_stringdata_QFutureWatcherBase = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QFutureWatcherBase"
QT_MOC_LITERAL(1, 19, 7), // "started"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "finished"
QT_MOC_LITERAL(4, 37, 8), // "canceled"
QT_MOC_LITERAL(5, 46, 6), // "paused"
QT_MOC_LITERAL(6, 53, 7), // "resumed"
QT_MOC_LITERAL(7, 61, 13), // "resultReadyAt"
QT_MOC_LITERAL(8, 75, 11), // "resultIndex"
QT_MOC_LITERAL(9, 87, 14), // "resultsReadyAt"
QT_MOC_LITERAL(10, 102, 10), // "beginIndex"
QT_MOC_LITERAL(11, 113, 8), // "endIndex"
QT_MOC_LITERAL(12, 122, 20), // "progressRangeChanged"
QT_MOC_LITERAL(13, 143, 7), // "minimum"
QT_MOC_LITERAL(14, 151, 7), // "maximum"
QT_MOC_LITERAL(15, 159, 20), // "progressValueChanged"
QT_MOC_LITERAL(16, 180, 13), // "progressValue"
QT_MOC_LITERAL(17, 194, 19), // "progressTextChanged"
QT_MOC_LITERAL(18, 214, 12), // "progressText"
QT_MOC_LITERAL(19, 227, 6), // "cancel"
QT_MOC_LITERAL(20, 234, 9), // "setPaused"
QT_MOC_LITERAL(21, 244, 5), // "pause"
QT_MOC_LITERAL(22, 250, 6), // "resume"
QT_MOC_LITERAL(23, 257, 12) // "togglePaused"

    },
    "QFutureWatcherBase\0started\0\0finished\0"
    "canceled\0paused\0resumed\0resultReadyAt\0"
    "resultIndex\0resultsReadyAt\0beginIndex\0"
    "endIndex\0progressRangeChanged\0minimum\0"
    "maximum\0progressValueChanged\0progressValue\0"
    "progressTextChanged\0progressText\0"
    "cancel\0setPaused\0pause\0resume\0"
    "togglePaused"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFutureWatcherBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x06 /* Public */,
       3,    0,   90,    2, 0x06 /* Public */,
       4,    0,   91,    2, 0x06 /* Public */,
       5,    0,   92,    2, 0x06 /* Public */,
       6,    0,   93,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       9,    2,   97,    2, 0x06 /* Public */,
      12,    2,  102,    2, 0x06 /* Public */,
      15,    1,  107,    2, 0x06 /* Public */,
      17,    1,  110,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      19,    0,  113,    2, 0x0a /* Public */,
      20,    1,  114,    2, 0x0a /* Public */,
      21,    0,  117,    2, 0x0a /* Public */,
      22,    0,  118,    2, 0x0a /* Public */,
      23,    0,  119,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   13,   14,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void, QMetaType::QString,   18,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QFutureWatcherBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFutureWatcherBase *_t = static_cast<QFutureWatcherBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished(); break;
        case 2: _t->canceled(); break;
        case 3: _t->paused(); break;
        case 4: _t->resumed(); break;
        case 5: _t->resultReadyAt((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->resultsReadyAt((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->progressRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->progressTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->cancel(); break;
        case 11: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->pause(); break;
        case 13: _t->resume(); break;
        case 14: _t->togglePaused(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFutureWatcherBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::started)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::finished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::canceled)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::paused)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::resumed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::resultReadyAt)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::resultsReadyAt)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::progressRangeChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::progressValueChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QFutureWatcherBase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFutureWatcherBase::progressTextChanged)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject QFutureWatcherBase::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFutureWatcherBase.data,
      qt_meta_data_QFutureWatcherBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFutureWatcherBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFutureWatcherBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFutureWatcherBase.stringdata0))
        return static_cast<void*>(const_cast< QFutureWatcherBase*>(this));
    return QObject::qt_metacast(_clname);
}

int QFutureWatcherBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void QFutureWatcherBase::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QFutureWatcherBase::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QFutureWatcherBase::canceled()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QFutureWatcherBase::paused()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QFutureWatcherBase::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QFutureWatcherBase::resultReadyAt(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QFutureWatcherBase::resultsReadyAt(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QFutureWatcherBase::progressRangeChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QFutureWatcherBase::progressValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QFutureWatcherBase::progressTextChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
