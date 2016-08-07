/****************************************************************************
** Meta object code from reading C++ file 'qopengldebug.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../opengl/qopengldebug.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qopengldebug.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QOpenGLDebugLogger_t {
    QByteArrayData data[13];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QOpenGLDebugLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QOpenGLDebugLogger_t qt_meta_stringdata_QOpenGLDebugLogger = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QOpenGLDebugLogger"
QT_MOC_LITERAL(1, 19, 13), // "messageLogged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "QOpenGLDebugMessage"
QT_MOC_LITERAL(4, 54, 12), // "debugMessage"
QT_MOC_LITERAL(5, 67, 10), // "logMessage"
QT_MOC_LITERAL(6, 78, 12), // "startLogging"
QT_MOC_LITERAL(7, 91, 11), // "LoggingMode"
QT_MOC_LITERAL(8, 103, 11), // "loggingMode"
QT_MOC_LITERAL(9, 115, 11), // "stopLogging"
QT_MOC_LITERAL(10, 127, 28), // "_q_contextAboutToBeDestroyed"
QT_MOC_LITERAL(11, 156, 19), // "AsynchronousLogging"
QT_MOC_LITERAL(12, 176, 18) // "SynchronousLogging"

    },
    "QOpenGLDebugLogger\0messageLogged\0\0"
    "QOpenGLDebugMessage\0debugMessage\0"
    "logMessage\0startLogging\0LoggingMode\0"
    "loggingMode\0stopLogging\0"
    "_q_contextAboutToBeDestroyed\0"
    "AsynchronousLogging\0SynchronousLogging"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QOpenGLDebugLogger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       1,   56, // properties
       1,   59, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   47,    2, 0x0a /* Public */,
       6,    1,   50,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 7, 0x00095009,

 // enums: name, flags, count, data
       7, 0x0,    2,   63,

 // enum data: key, value
      11, uint(QOpenGLDebugLogger::AsynchronousLogging),
      12, uint(QOpenGLDebugLogger::SynchronousLogging),

       0        // eod
};

void QOpenGLDebugLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QOpenGLDebugLogger *_t = static_cast<QOpenGLDebugLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageLogged((*reinterpret_cast< const QOpenGLDebugMessage(*)>(_a[1]))); break;
        case 1: _t->logMessage((*reinterpret_cast< const QOpenGLDebugMessage(*)>(_a[1]))); break;
        case 2: _t->startLogging((*reinterpret_cast< LoggingMode(*)>(_a[1]))); break;
        case 3: _t->startLogging(); break;
        case 4: _t->stopLogging(); break;
        case 5: _t->d_func()->_q_contextAboutToBeDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLDebugMessage >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLDebugMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QOpenGLDebugLogger::*_t)(const QOpenGLDebugMessage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QOpenGLDebugLogger::messageLogged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QOpenGLDebugLogger *_t = static_cast<QOpenGLDebugLogger *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< LoggingMode*>(_v) = _t->loggingMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QOpenGLDebugLogger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QOpenGLDebugLogger.data,
      qt_meta_data_QOpenGLDebugLogger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QOpenGLDebugLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QOpenGLDebugLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QOpenGLDebugLogger.stringdata0))
        return static_cast<void*>(const_cast< QOpenGLDebugLogger*>(this));
    return QObject::qt_metacast(_clname);
}

int QOpenGLDebugLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
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
void QOpenGLDebugLogger::messageLogged(const QOpenGLDebugMessage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
