/****************************************************************************
** Meta object code from reading C++ file 'qhostinfo_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qhostinfo_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhostinfo_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHostInfoResult_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHostInfoResult_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHostInfoResult_t qt_meta_stringdata_QHostInfoResult = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QHostInfoResult"
QT_MOC_LITERAL(1, 16, 12), // "resultsReady"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "QHostInfo"
QT_MOC_LITERAL(4, 40, 4), // "info"
QT_MOC_LITERAL(5, 45, 16) // "emitResultsReady"

    },
    "QHostInfoResult\0resultsReady\0\0QHostInfo\0"
    "info\0emitResultsReady"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHostInfoResult[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QHostInfoResult::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHostInfoResult *_t = static_cast<QHostInfoResult *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resultsReady((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        case 1: _t->emitResultsReady((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QHostInfo >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHostInfoResult::*_t)(const QHostInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHostInfoResult::resultsReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QHostInfoResult::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHostInfoResult.data,
      qt_meta_data_QHostInfoResult,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHostInfoResult::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHostInfoResult::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHostInfoResult.stringdata0))
        return static_cast<void*>(const_cast< QHostInfoResult*>(this));
    return QObject::qt_metacast(_clname);
}

int QHostInfoResult::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QHostInfoResult::resultsReady(const QHostInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QHostInfoAgent_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHostInfoAgent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHostInfoAgent_t qt_meta_stringdata_QHostInfoAgent = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QHostInfoAgent"

    },
    "QHostInfoAgent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHostInfoAgent[] = {

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

void QHostInfoAgent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QHostInfoAgent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QHostInfoAgent.data,
      qt_meta_data_QHostInfoAgent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHostInfoAgent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHostInfoAgent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHostInfoAgent.stringdata0))
        return static_cast<void*>(const_cast< QHostInfoAgent*>(this));
    return QObject::qt_metacast(_clname);
}

int QHostInfoAgent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QAbstractHostInfoLookupManager_t {
    QByteArrayData data[1];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractHostInfoLookupManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractHostInfoLookupManager_t qt_meta_stringdata_QAbstractHostInfoLookupManager = {
    {
QT_MOC_LITERAL(0, 0, 30) // "QAbstractHostInfoLookupManager"

    },
    "QAbstractHostInfoLookupManager"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractHostInfoLookupManager[] = {

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

void QAbstractHostInfoLookupManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QAbstractHostInfoLookupManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractHostInfoLookupManager.data,
      qt_meta_data_QAbstractHostInfoLookupManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractHostInfoLookupManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractHostInfoLookupManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractHostInfoLookupManager.stringdata0))
        return static_cast<void*>(const_cast< QAbstractHostInfoLookupManager*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractHostInfoLookupManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QHostInfoLookupManager_t {
    QByteArrayData data[3];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHostInfoLookupManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHostInfoLookupManager_t qt_meta_stringdata_QHostInfoLookupManager = {
    {
QT_MOC_LITERAL(0, 0, 22), // "QHostInfoLookupManager"
QT_MOC_LITERAL(1, 23, 21), // "waitForThreadPoolDone"
QT_MOC_LITERAL(2, 45, 0) // ""

    },
    "QHostInfoLookupManager\0waitForThreadPoolDone\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHostInfoLookupManager[] = {

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

void QHostInfoLookupManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHostInfoLookupManager *_t = static_cast<QHostInfoLookupManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->waitForThreadPoolDone(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QHostInfoLookupManager::staticMetaObject = {
    { &QAbstractHostInfoLookupManager::staticMetaObject, qt_meta_stringdata_QHostInfoLookupManager.data,
      qt_meta_data_QHostInfoLookupManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHostInfoLookupManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHostInfoLookupManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHostInfoLookupManager.stringdata0))
        return static_cast<void*>(const_cast< QHostInfoLookupManager*>(this));
    return QAbstractHostInfoLookupManager::qt_metacast(_clname);
}

int QHostInfoLookupManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractHostInfoLookupManager::qt_metacall(_c, _id, _a);
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
