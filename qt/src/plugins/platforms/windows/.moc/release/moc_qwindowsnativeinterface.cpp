/****************************************************************************
** Meta object code from reading C++ file 'qwindowsnativeinterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwindowsnativeinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindowsnativeinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindowsNativeInterface_t {
    QByteArrayData data[20];
    char stringdata0[259];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindowsNativeInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindowsNativeInterface_t qt_meta_stringdata_QWindowsNativeInterface = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QWindowsNativeInterface"
QT_MOC_LITERAL(1, 24, 19), // "createMessageWindow"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 17), // "classNameTemplate"
QT_MOC_LITERAL(4, 63, 10), // "windowName"
QT_MOC_LITERAL(5, 74, 9), // "eventProc"
QT_MOC_LITERAL(6, 84, 19), // "registerWindowClass"
QT_MOC_LITERAL(7, 104, 11), // "classNameIn"
QT_MOC_LITERAL(8, 116, 19), // "registerWindowsMime"
QT_MOC_LITERAL(9, 136, 6), // "mimeIn"
QT_MOC_LITERAL(10, 143, 21), // "unregisterWindowsMime"
QT_MOC_LITERAL(11, 165, 4), // "mime"
QT_MOC_LITERAL(12, 170, 16), // "registerMimeType"
QT_MOC_LITERAL(13, 187, 8), // "mimeType"
QT_MOC_LITERAL(14, 196, 14), // "logFontToQFont"
QT_MOC_LITERAL(15, 211, 11), // "const void*"
QT_MOC_LITERAL(16, 223, 7), // "logFont"
QT_MOC_LITERAL(17, 231, 11), // "verticalDpi"
QT_MOC_LITERAL(18, 243, 11), // "asyncExpose"
QT_MOC_LITERAL(19, 255, 3) // "gpu"

    },
    "QWindowsNativeInterface\0createMessageWindow\0"
    "\0classNameTemplate\0windowName\0eventProc\0"
    "registerWindowClass\0classNameIn\0"
    "registerWindowsMime\0mimeIn\0"
    "unregisterWindowsMime\0mime\0registerMimeType\0"
    "mimeType\0logFontToQFont\0const void*\0"
    "logFont\0verticalDpi\0asyncExpose\0gpu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindowsNativeInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       2,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x02 /* Public */,
       6,    2,   51,    2, 0x02 /* Public */,
       8,    1,   56,    2, 0x02 /* Public */,
      10,    1,   59,    2, 0x02 /* Public */,
      12,    1,   62,    2, 0x02 /* Public */,
      14,    2,   65,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::VoidStar, QMetaType::QString, QMetaType::QString, QMetaType::VoidStar,    3,    4,    5,
    QMetaType::QString, QMetaType::QString, QMetaType::VoidStar,    7,    5,
    QMetaType::Void, QMetaType::VoidStar,    9,
    QMetaType::Void, QMetaType::VoidStar,   11,
    QMetaType::Int, QMetaType::QString,   13,
    QMetaType::QFont, 0x80000000 | 15, QMetaType::Int,   16,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::QVariant, 0x00085001,

       0        // eod
};

void QWindowsNativeInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindowsNativeInterface *_t = static_cast<QWindowsNativeInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { void* _r = _t->createMessageWindow((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< void*(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< void**>(_a[0]) = _r; }  break;
        case 1: { QString _r = _t->registerWindowClass((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< void*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 2: _t->registerWindowsMime((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 3: _t->unregisterWindowsMime((*reinterpret_cast< void*(*)>(_a[1]))); break;
        case 4: { int _r = _t->registerMimeType((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: { QFont _r = _t->logFontToQFont((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QFont*>(_a[0]) = _r; }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWindowsNativeInterface *_t = static_cast<QWindowsNativeInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->asyncExpose(); break;
        case 1: *reinterpret_cast< QVariant*>(_v) = _t->gpu(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWindowsNativeInterface *_t = static_cast<QWindowsNativeInterface *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAsyncExpose(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWindowsNativeInterface::staticMetaObject = {
    { &QPlatformNativeInterface::staticMetaObject, qt_meta_stringdata_QWindowsNativeInterface.data,
      qt_meta_data_QWindowsNativeInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWindowsNativeInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindowsNativeInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWindowsNativeInterface.stringdata0))
        return static_cast<void*>(const_cast< QWindowsNativeInterface*>(this));
    return QPlatformNativeInterface::qt_metacast(_clname);
}

int QWindowsNativeInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlatformNativeInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
