/****************************************************************************
** Meta object code from reading C++ file 'qplatformsharedgraphicscache.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformsharedgraphicscache.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsharedgraphicscache.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformSharedGraphicsCache_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformSharedGraphicsCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformSharedGraphicsCache_t qt_meta_stringdata_QPlatformSharedGraphicsCache = {
    {
QT_MOC_LITERAL(0, 0, 28), // "QPlatformSharedGraphicsCache"
QT_MOC_LITERAL(1, 29, 12), // "itemsMissing"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 7), // "cacheId"
QT_MOC_LITERAL(4, 51, 16), // "QVector<quint32>"
QT_MOC_LITERAL(5, 68, 7), // "itemIds"
QT_MOC_LITERAL(6, 76, 14), // "itemsAvailable"
QT_MOC_LITERAL(7, 91, 8), // "bufferId"
QT_MOC_LITERAL(8, 100, 15), // "QVector<QPoint>"
QT_MOC_LITERAL(9, 116, 17), // "positionsInBuffer"
QT_MOC_LITERAL(10, 134, 16), // "itemsInvalidated"
QT_MOC_LITERAL(11, 151, 12) // "itemsUpdated"

    },
    "QPlatformSharedGraphicsCache\0itemsMissing\0"
    "\0cacheId\0QVector<quint32>\0itemIds\0"
    "itemsAvailable\0bufferId\0QVector<QPoint>\0"
    "positionsInBuffer\0itemsInvalidated\0"
    "itemsUpdated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformSharedGraphicsCache[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    4,   39,    2, 0x06 /* Public */,
      10,    2,   48,    2, 0x06 /* Public */,
      11,    4,   53,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar, 0x80000000 | 4, 0x80000000 | 8,    3,    7,    5,    9,
    QMetaType::Void, QMetaType::QByteArray, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::VoidStar, 0x80000000 | 4, 0x80000000 | 8,    3,    7,    5,    9,

       0        // eod
};

void QPlatformSharedGraphicsCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformSharedGraphicsCache *_t = static_cast<QPlatformSharedGraphicsCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->itemsMissing((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVector<quint32>(*)>(_a[2]))); break;
        case 1: _t->itemsAvailable((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< const QVector<quint32>(*)>(_a[3])),(*reinterpret_cast< const QVector<QPoint>(*)>(_a[4]))); break;
        case 2: _t->itemsInvalidated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< const QVector<quint32>(*)>(_a[2]))); break;
        case 3: _t->itemsUpdated((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])),(*reinterpret_cast< const QVector<quint32>(*)>(_a[3])),(*reinterpret_cast< const QVector<QPoint>(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint32> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint32> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint32> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QPoint> >(); break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<quint32> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformSharedGraphicsCache::*_t)(const QByteArray & , const QVector<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSharedGraphicsCache::itemsMissing)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlatformSharedGraphicsCache::*_t)(const QByteArray & , void * , const QVector<quint32> & , const QVector<QPoint> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSharedGraphicsCache::itemsAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QPlatformSharedGraphicsCache::*_t)(const QByteArray & , const QVector<quint32> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSharedGraphicsCache::itemsInvalidated)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QPlatformSharedGraphicsCache::*_t)(const QByteArray & , void * , const QVector<quint32> & , const QVector<QPoint> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSharedGraphicsCache::itemsUpdated)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QPlatformSharedGraphicsCache::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformSharedGraphicsCache.data,
      qt_meta_data_QPlatformSharedGraphicsCache,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformSharedGraphicsCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSharedGraphicsCache::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformSharedGraphicsCache.stringdata0))
        return static_cast<void*>(const_cast< QPlatformSharedGraphicsCache*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformSharedGraphicsCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QPlatformSharedGraphicsCache::itemsMissing(const QByteArray & _t1, const QVector<quint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSharedGraphicsCache::itemsAvailable(const QByteArray & _t1, void * _t2, const QVector<quint32> & _t3, const QVector<QPoint> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlatformSharedGraphicsCache::itemsInvalidated(const QByteArray & _t1, const QVector<quint32> & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlatformSharedGraphicsCache::itemsUpdated(const QByteArray & _t1, void * _t2, const QVector<quint32> & _t3, const QVector<QPoint> & _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
