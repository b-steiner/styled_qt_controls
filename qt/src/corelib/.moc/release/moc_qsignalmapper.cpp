/****************************************************************************
** Meta object code from reading C++ file 'qsignalmapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qsignalmapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsignalmapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSignalMapper_t {
    QByteArrayData data[7];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSignalMapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSignalMapper_t qt_meta_stringdata_QSignalMapper = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QSignalMapper"
QT_MOC_LITERAL(1, 14, 6), // "mapped"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 8), // "QWidget*"
QT_MOC_LITERAL(4, 31, 3), // "map"
QT_MOC_LITERAL(5, 35, 6), // "sender"
QT_MOC_LITERAL(6, 42, 18) // "_q_senderDestroyed"

    },
    "QSignalMapper\0mapped\0\0QWidget*\0map\0"
    "sender\0_q_senderDestroyed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSignalMapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       1,    1,   52,    2, 0x06 /* Public */,
       1,    1,   55,    2, 0x06 /* Public */,
       1,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   61,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       6,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    5,
    QMetaType::Void,

       0        // eod
};

void QSignalMapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSignalMapper *_t = static_cast<QSignalMapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->mapped((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->mapped((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->mapped((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 3: _t->mapped((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 4: _t->map(); break;
        case 5: _t->map((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_senderDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QSignalMapper::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSignalMapper::mapped)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QSignalMapper::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSignalMapper::mapped)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QSignalMapper::*_t)(QWidget * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSignalMapper::mapped)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QSignalMapper::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QSignalMapper::mapped)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QSignalMapper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSignalMapper.data,
      qt_meta_data_QSignalMapper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSignalMapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSignalMapper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSignalMapper.stringdata0))
        return static_cast<void*>(const_cast< QSignalMapper*>(this));
    return QObject::qt_metacast(_clname);
}

int QSignalMapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void QSignalMapper::mapped(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QSignalMapper::mapped(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QSignalMapper::mapped(QWidget * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QSignalMapper::mapped(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
