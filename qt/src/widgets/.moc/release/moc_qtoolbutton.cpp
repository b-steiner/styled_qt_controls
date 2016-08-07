/****************************************************************************
** Meta object code from reading C++ file 'qtoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtoolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QToolButton_t {
    QByteArrayData data[23];
    char stringdata0[316];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QToolButton_t qt_meta_stringdata_QToolButton = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QToolButton"
QT_MOC_LITERAL(1, 12, 9), // "triggered"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "QAction*"
QT_MOC_LITERAL(4, 32, 8), // "showMenu"
QT_MOC_LITERAL(5, 41, 18), // "setToolButtonStyle"
QT_MOC_LITERAL(6, 60, 19), // "Qt::ToolButtonStyle"
QT_MOC_LITERAL(7, 80, 5), // "style"
QT_MOC_LITERAL(8, 86, 16), // "setDefaultAction"
QT_MOC_LITERAL(9, 103, 16), // "_q_buttonPressed"
QT_MOC_LITERAL(10, 120, 17), // "_q_buttonReleased"
QT_MOC_LITERAL(11, 138, 19), // "_q_updateButtonDown"
QT_MOC_LITERAL(12, 158, 16), // "_q_menuTriggered"
QT_MOC_LITERAL(13, 175, 18), // "_q_actionTriggered"
QT_MOC_LITERAL(14, 194, 9), // "popupMode"
QT_MOC_LITERAL(15, 204, 19), // "ToolButtonPopupMode"
QT_MOC_LITERAL(16, 224, 15), // "toolButtonStyle"
QT_MOC_LITERAL(17, 240, 9), // "autoRaise"
QT_MOC_LITERAL(18, 250, 9), // "arrowType"
QT_MOC_LITERAL(19, 260, 13), // "Qt::ArrowType"
QT_MOC_LITERAL(20, 274, 12), // "DelayedPopup"
QT_MOC_LITERAL(21, 287, 15), // "MenuButtonPopup"
QT_MOC_LITERAL(22, 303, 12) // "InstantPopup"

    },
    "QToolButton\0triggered\0\0QAction*\0"
    "showMenu\0setToolButtonStyle\0"
    "Qt::ToolButtonStyle\0style\0setDefaultAction\0"
    "_q_buttonPressed\0_q_buttonReleased\0"
    "_q_updateButtonDown\0_q_menuTriggered\0"
    "_q_actionTriggered\0popupMode\0"
    "ToolButtonPopupMode\0toolButtonStyle\0"
    "autoRaise\0arrowType\0Qt::ArrowType\0"
    "DelayedPopup\0MenuButtonPopup\0InstantPopup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   76, // properties
       1,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   62,    2, 0x0a /* Public */,
       5,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    0,   70,    2, 0x08 /* Private */,
      11,    0,   71,    2, 0x08 /* Private */,
      12,    1,   72,    2, 0x08 /* Private */,
      13,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0009510b,
      16, 0x80000000 | 6, 0x0009510b,
      17, QMetaType::Bool, 0x00095103,
      18, 0x80000000 | 19, 0x0009510b,

 // enums: name, flags, count, data
      15, 0x0,    3,   92,

 // enum data: key, value
      20, uint(QToolButton::DelayedPopup),
      21, uint(QToolButton::MenuButtonPopup),
      22, uint(QToolButton::InstantPopup),

       0        // eod
};

void QToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QToolButton *_t = static_cast<QToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->showMenu(); break;
        case 2: _t->setToolButtonStyle((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 3: _t->setDefaultAction((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_buttonPressed(); break;
        case 5: _t->d_func()->_q_buttonReleased(); break;
        case 6: _t->d_func()->_q_updateButtonDown(); break;
        case 7: _t->d_func()->_q_menuTriggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_actionTriggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QToolButton::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QToolButton::triggered)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QToolButton *_t = static_cast<QToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< ToolButtonPopupMode*>(_v) = _t->popupMode(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->autoRaise(); break;
        case 3: *reinterpret_cast< Qt::ArrowType*>(_v) = _t->arrowType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QToolButton *_t = static_cast<QToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPopupMode(*reinterpret_cast< ToolButtonPopupMode*>(_v)); break;
        case 1: _t->setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: _t->setAutoRaise(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setArrowType(*reinterpret_cast< Qt::ArrowType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QToolButton::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_QToolButton.data,
      qt_meta_data_QToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QToolButton.stringdata0))
        return static_cast<void*>(const_cast< QToolButton*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int QToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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

// SIGNAL 0
void QToolButton::triggered(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
