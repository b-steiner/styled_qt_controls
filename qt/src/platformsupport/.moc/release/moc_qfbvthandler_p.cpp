/****************************************************************************
** Meta object code from reading C++ file 'qfbvthandler_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fbconvenience/qfbvthandler_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfbvthandler_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFbVtHandler_t {
    QByteArrayData data[6];
    char stringdata0[62];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFbVtHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFbVtHandler_t qt_meta_stringdata_QFbVtHandler = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QFbVtHandler"
QT_MOC_LITERAL(1, 13, 11), // "interrupted"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 14), // "aboutToSuspend"
QT_MOC_LITERAL(4, 41, 7), // "resumed"
QT_MOC_LITERAL(5, 49, 12) // "handleSignal"

    },
    "QFbVtHandler\0interrupted\0\0aboutToSuspend\0"
    "resumed\0handleSignal"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFbVtHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,
       4,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QFbVtHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFbVtHandler *_t = static_cast<QFbVtHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->interrupted(); break;
        case 1: _t->aboutToSuspend(); break;
        case 2: _t->resumed(); break;
        case 3: _t->handleSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFbVtHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFbVtHandler::interrupted)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFbVtHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFbVtHandler::aboutToSuspend)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QFbVtHandler::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFbVtHandler::resumed)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QFbVtHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFbVtHandler.data,
      qt_meta_data_QFbVtHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFbVtHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFbVtHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFbVtHandler.stringdata0))
        return static_cast<void*>(const_cast< QFbVtHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QFbVtHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QFbVtHandler::interrupted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QFbVtHandler::aboutToSuspend()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QFbVtHandler::resumed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
