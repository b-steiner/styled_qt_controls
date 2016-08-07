/****************************************************************************
** Meta object code from reading C++ file 'qwintaskbarbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwintaskbarbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwintaskbarbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWinTaskbarButton_t {
    QByteArrayData data[14];
    char stringdata0[205];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWinTaskbarButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWinTaskbarButton_t qt_meta_stringdata_QWinTaskbarButton = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QWinTaskbarButton"
QT_MOC_LITERAL(1, 18, 14), // "setOverlayIcon"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "icon"
QT_MOC_LITERAL(4, 39, 31), // "setOverlayAccessibleDescription"
QT_MOC_LITERAL(5, 71, 11), // "description"
QT_MOC_LITERAL(6, 83, 16), // "clearOverlayIcon"
QT_MOC_LITERAL(7, 100, 17), // "_q_updateProgress"
QT_MOC_LITERAL(8, 118, 11), // "overlayIcon"
QT_MOC_LITERAL(9, 130, 28), // "overlayAccessibleDescription"
QT_MOC_LITERAL(10, 159, 8), // "progress"
QT_MOC_LITERAL(11, 168, 20), // "QWinTaskbarProgress*"
QT_MOC_LITERAL(12, 189, 6), // "window"
QT_MOC_LITERAL(13, 196, 8) // "QWindow*"

    },
    "QWinTaskbarButton\0setOverlayIcon\0\0"
    "icon\0setOverlayAccessibleDescription\0"
    "description\0clearOverlayIcon\0"
    "_q_updateProgress\0overlayIcon\0"
    "overlayAccessibleDescription\0progress\0"
    "QWinTaskbarProgress*\0window\0QWindow*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWinTaskbarButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   42, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       4,    1,   37,    2, 0x0a /* Public */,
       6,    0,   40,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QIcon,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QIcon, 0x00095107,
       9, QMetaType::QString, 0x00095103,
      10, 0x80000000 | 11, 0x00095009,
      12, 0x80000000 | 13, 0x0009510b,

       0        // eod
};

void QWinTaskbarButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWinTaskbarButton *_t = static_cast<QWinTaskbarButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setOverlayIcon((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 1: _t->setOverlayAccessibleDescription((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->clearOverlayIcon(); break;
        case 3: _t->d_func()->_q_updateProgress(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWinTaskbarButton *_t = static_cast<QWinTaskbarButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->overlayIcon(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->overlayAccessibleDescription(); break;
        case 2: *reinterpret_cast< QWinTaskbarProgress**>(_v) = _t->progress(); break;
        case 3: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWinTaskbarButton *_t = static_cast<QWinTaskbarButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOverlayIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->setOverlayAccessibleDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QWinTaskbarButton *_t = static_cast<QWinTaskbarButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clearOverlayIcon(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWinTaskbarButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWinTaskbarButton.data,
      qt_meta_data_QWinTaskbarButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWinTaskbarButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWinTaskbarButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWinTaskbarButton.stringdata0))
        return static_cast<void*>(const_cast< QWinTaskbarButton*>(this));
    return QObject::qt_metacast(_clname);
}

int QWinTaskbarButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
