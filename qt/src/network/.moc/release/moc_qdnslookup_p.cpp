/****************************************************************************
** Meta object code from reading C++ file 'qdnslookup_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qdnslookup_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdnslookup_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDnsLookupRunnable_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDnsLookupRunnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDnsLookupRunnable_t qt_meta_stringdata_QDnsLookupRunnable = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QDnsLookupRunnable"
QT_MOC_LITERAL(1, 19, 8), // "finished"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 15), // "QDnsLookupReply"
QT_MOC_LITERAL(4, 45, 5) // "reply"

    },
    "QDnsLookupRunnable\0finished\0\0"
    "QDnsLookupReply\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDnsLookupRunnable[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QDnsLookupRunnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDnsLookupRunnable *_t = static_cast<QDnsLookupRunnable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< const QDnsLookupReply(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDnsLookupReply >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDnsLookupRunnable::*_t)(const QDnsLookupReply & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDnsLookupRunnable::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QDnsLookupRunnable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QDnsLookupRunnable.data,
      qt_meta_data_QDnsLookupRunnable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDnsLookupRunnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDnsLookupRunnable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDnsLookupRunnable.stringdata0))
        return static_cast<void*>(const_cast< QDnsLookupRunnable*>(this));
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(const_cast< QDnsLookupRunnable*>(this));
    return QObject::qt_metacast(_clname);
}

int QDnsLookupRunnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QDnsLookupRunnable::finished(const QDnsLookupReply & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QDnsLookupThreadPool_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDnsLookupThreadPool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDnsLookupThreadPool_t qt_meta_stringdata_QDnsLookupThreadPool = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QDnsLookupThreadPool"
QT_MOC_LITERAL(1, 21, 23), // "_q_applicationDestroyed"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "QDnsLookupThreadPool\0_q_applicationDestroyed\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDnsLookupThreadPool[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QDnsLookupThreadPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDnsLookupThreadPool *_t = static_cast<QDnsLookupThreadPool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->_q_applicationDestroyed(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QDnsLookupThreadPool::staticMetaObject = {
    { &QThreadPool::staticMetaObject, qt_meta_stringdata_QDnsLookupThreadPool.data,
      qt_meta_data_QDnsLookupThreadPool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDnsLookupThreadPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDnsLookupThreadPool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDnsLookupThreadPool.stringdata0))
        return static_cast<void*>(const_cast< QDnsLookupThreadPool*>(this));
    return QThreadPool::qt_metacast(_clname);
}

int QDnsLookupThreadPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThreadPool::qt_metacall(_c, _id, _a);
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
