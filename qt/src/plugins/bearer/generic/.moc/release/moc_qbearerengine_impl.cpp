/****************************************************************************
** Meta object code from reading C++ file 'qbearerengine_impl.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../qbearerengine_impl.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbearerengine_impl.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBearerEngineImpl_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBearerEngineImpl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBearerEngineImpl_t qt_meta_stringdata_QBearerEngineImpl = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QBearerEngineImpl"
QT_MOC_LITERAL(1, 18, 15), // "connectionError"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 2), // "id"
QT_MOC_LITERAL(4, 38, 34), // "QBearerEngineImpl::Connection..."
QT_MOC_LITERAL(5, 73, 5) // "error"

    },
    "QBearerEngineImpl\0connectionError\0\0"
    "id\0QBearerEngineImpl::ConnectionError\0"
    "error"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBearerEngineImpl[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

       0        // eod
};

void QBearerEngineImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBearerEngineImpl *_t = static_cast<QBearerEngineImpl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectionError((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< QBearerEngineImpl::ConnectionError(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBearerEngineImpl::ConnectionError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QBearerEngineImpl::*_t)(const QString & , QBearerEngineImpl::ConnectionError );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QBearerEngineImpl::connectionError)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QBearerEngineImpl::staticMetaObject = {
    { &QBearerEngine::staticMetaObject, qt_meta_stringdata_QBearerEngineImpl.data,
      qt_meta_data_QBearerEngineImpl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBearerEngineImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBearerEngineImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBearerEngineImpl.stringdata0))
        return static_cast<void*>(const_cast< QBearerEngineImpl*>(this));
    return QBearerEngine::qt_metacast(_clname);
}

int QBearerEngineImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QBearerEngine::qt_metacall(_c, _id, _a);
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
void QBearerEngineImpl::connectionError(const QString & _t1, QBearerEngineImpl::ConnectionError _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
