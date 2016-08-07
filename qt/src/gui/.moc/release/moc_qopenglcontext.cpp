/****************************************************************************
** Meta object code from reading C++ file 'qopenglcontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qopenglcontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qopenglcontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QOpenGLContextGroup_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOpenGLContextGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOpenGLContextGroup_t qt_meta_stringdata_QOpenGLContextGroup = {
    {
QT_MOC_LITERAL(0, 0, 19) // "QOpenGLContextGroup"

    },
    "QOpenGLContextGroup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOpenGLContextGroup[] = {

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

void QOpenGLContextGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QOpenGLContextGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QOpenGLContextGroup.data,
      qt_meta_data_QOpenGLContextGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOpenGLContextGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOpenGLContextGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOpenGLContextGroup.stringdata0))
        return static_cast<void*>(const_cast< QOpenGLContextGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QOpenGLContextGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QOpenGLContext_t {
    QByteArrayData data[5];
    char stringdata0[61];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOpenGLContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOpenGLContext_t qt_meta_stringdata_QOpenGLContext = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QOpenGLContext"
QT_MOC_LITERAL(1, 15, 18), // "aboutToBeDestroyed"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 18), // "_q_screenDestroyed"
QT_MOC_LITERAL(4, 54, 6) // "object"

    },
    "QOpenGLContext\0aboutToBeDestroyed\0\0"
    "_q_screenDestroyed\0object"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOpenGLContext[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,    4,

       0        // eod
};

void QOpenGLContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOpenGLContext *_t = static_cast<QOpenGLContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToBeDestroyed(); break;
        case 1: _t->d_func()->_q_screenDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QOpenGLContext::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QOpenGLContext::aboutToBeDestroyed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QOpenGLContext::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QOpenGLContext.data,
      qt_meta_data_QOpenGLContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOpenGLContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOpenGLContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOpenGLContext.stringdata0))
        return static_cast<void*>(const_cast< QOpenGLContext*>(this));
    return QObject::qt_metacast(_clname);
}

int QOpenGLContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QOpenGLContext::aboutToBeDestroyed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
