/****************************************************************************
** Meta object code from reading C++ file 'qwindowsinputcontext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwindowsinputcontext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsinputcontext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindowsInputContext_t {
    QByteArrayData data[3];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsInputContext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsInputContext_t qt_meta_stringdata_QWindowsInputContext = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QWindowsInputContext"
QT_MOC_LITERAL(1, 21, 17), // "cursorRectChanged"
QT_MOC_LITERAL(2, 39, 0) // ""

    },
    "QWindowsInputContext\0cursorRectChanged\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsInputContext[] = {

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

void QWindowsInputContext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsInputContext *_t = static_cast<QWindowsInputContext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorRectChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QWindowsInputContext::staticMetaObject = {
    { &QPlatformInputContext::staticMetaObject, qt_meta_stringdata_QWindowsInputContext.data,
      qt_meta_data_QWindowsInputContext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWindowsInputContext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsInputContext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsInputContext.stringdata0))
        return static_cast<void*>(const_cast< QWindowsInputContext*>(this));
    return QPlatformInputContext::qt_metacast(_clname);
}

int QWindowsInputContext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformInputContext::qt_metacall(_c, _id, _a);
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
