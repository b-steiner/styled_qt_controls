/****************************************************************************
** Meta object code from reading C++ file 'qmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMenu_t {
    QByteArrayData data[18];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMenu_t qt_meta_stringdata_QMenu = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QMenu"
QT_MOC_LITERAL(1, 6, 11), // "aboutToShow"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "aboutToHide"
QT_MOC_LITERAL(4, 31, 9), // "triggered"
QT_MOC_LITERAL(5, 41, 8), // "QAction*"
QT_MOC_LITERAL(6, 50, 6), // "action"
QT_MOC_LITERAL(7, 57, 7), // "hovered"
QT_MOC_LITERAL(8, 65, 20), // "internalDelayedPopup"
QT_MOC_LITERAL(9, 86, 18), // "_q_actionTriggered"
QT_MOC_LITERAL(10, 105, 16), // "_q_actionHovered"
QT_MOC_LITERAL(11, 122, 30), // "_q_overrideMenuActionDestroyed"
QT_MOC_LITERAL(12, 153, 26), // "_q_platformMenuAboutToShow"
QT_MOC_LITERAL(13, 180, 14), // "tearOffEnabled"
QT_MOC_LITERAL(14, 195, 5), // "title"
QT_MOC_LITERAL(15, 201, 4), // "icon"
QT_MOC_LITERAL(16, 206, 21), // "separatorsCollapsible"
QT_MOC_LITERAL(17, 228, 15) // "toolTipsVisible"

    },
    "QMenu\0aboutToShow\0\0aboutToHide\0triggered\0"
    "QAction*\0action\0hovered\0internalDelayedPopup\0"
    "_q_actionTriggered\0_q_actionHovered\0"
    "_q_overrideMenuActionDestroyed\0"
    "_q_platformMenuAboutToShow\0tearOffEnabled\0"
    "title\0icon\0separatorsCollapsible\0"
    "toolTipsVisible"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       5,   72, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    1,   61,    2, 0x06 /* Public */,
       7,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   67,    2, 0x08 /* Private */,
       9,    0,   68,    2, 0x08 /* Private */,
      10,    0,   69,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      13, QMetaType::Bool, 0x00095103,
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QIcon, 0x00095103,
      16, QMetaType::Bool, 0x00095103,
      17, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMenu *_t = static_cast<QMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        case 2: _t->triggered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: _t->hovered((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 4: _t->internalDelayedPopup(); break;
        case 5: _t->d_func()->_q_actionTriggered(); break;
        case 6: _t->d_func()->_q_actionHovered(); break;
        case 7: _t->d_func()->_q_overrideMenuActionDestroyed(); break;
        case 8: _t->d_func()->_q_platformMenuAboutToShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::aboutToShow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::aboutToHide)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QMenu::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::triggered)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QMenu::*_t)(QAction * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMenu::hovered)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMenu *_t = static_cast<QMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isTearOffEnabled(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->separatorsCollapsible(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->toolTipsVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMenu *_t = static_cast<QMenu *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTearOffEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 3: _t->setSeparatorsCollapsible(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setToolTipsVisible(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMenu.data,
      qt_meta_data_QMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMenu.stringdata0))
        return static_cast<void*>(const_cast< QMenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QMenu::triggered(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QMenu::hovered(QAction * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
