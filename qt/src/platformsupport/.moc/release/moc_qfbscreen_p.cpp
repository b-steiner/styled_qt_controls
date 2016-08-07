/****************************************************************************
** Meta object code from reading C++ file 'qfbscreen_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../fbconvenience/qfbscreen_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfbscreen_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFbScreen_t {
    QByteArrayData data[7];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFbScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFbScreen_t qt_meta_stringdata_QFbScreen = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QFbScreen"
QT_MOC_LITERAL(1, 10, 8), // "setDirty"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "rect"
QT_MOC_LITERAL(4, 25, 15), // "setPhysicalSize"
QT_MOC_LITERAL(5, 41, 4), // "size"
QT_MOC_LITERAL(6, 46, 11) // "setGeometry"

    },
    "QFbScreen\0setDirty\0\0rect\0setPhysicalSize\0"
    "size\0setGeometry"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFbScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QSize,    5,
    QMetaType::Void, QMetaType::QRect,    3,

       0        // eod
};

void QFbScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFbScreen *_t = static_cast<QFbScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setDirty((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->setPhysicalSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: _t->setGeometry((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QFbScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFbScreen.data,
      qt_meta_data_QFbScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFbScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFbScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFbScreen.stringdata0))
        return static_cast<void*>(const_cast< QFbScreen*>(this));
    if (!strcmp(_clname, "QPlatformScreen"))
        return static_cast< QPlatformScreen*>(const_cast< QFbScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int QFbScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
