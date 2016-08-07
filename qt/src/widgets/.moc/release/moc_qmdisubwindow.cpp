/****************************************************************************
** Meta object code from reading C++ file 'qmdisubwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmdisubwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmdisubwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMdiSubWindow_t {
    QByteArrayData data[15];
    char stringdata0[227];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMdiSubWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMdiSubWindow_t qt_meta_stringdata_QMdiSubWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QMdiSubWindow"
QT_MOC_LITERAL(1, 14, 18), // "windowStateChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "Qt::WindowStates"
QT_MOC_LITERAL(4, 51, 8), // "oldState"
QT_MOC_LITERAL(5, 60, 8), // "newState"
QT_MOC_LITERAL(6, 69, 15), // "aboutToActivate"
QT_MOC_LITERAL(7, 85, 14), // "showSystemMenu"
QT_MOC_LITERAL(8, 100, 10), // "showShaded"
QT_MOC_LITERAL(9, 111, 23), // "_q_updateStaysOnTopHint"
QT_MOC_LITERAL(10, 135, 23), // "_q_enterInteractiveMode"
QT_MOC_LITERAL(11, 159, 22), // "_q_processFocusChanged"
QT_MOC_LITERAL(12, 182, 8), // "QWidget*"
QT_MOC_LITERAL(13, 191, 18), // "keyboardSingleStep"
QT_MOC_LITERAL(14, 210, 16) // "keyboardPageStep"

    },
    "QMdiSubWindow\0windowStateChanged\0\0"
    "Qt::WindowStates\0oldState\0newState\0"
    "aboutToActivate\0showSystemMenu\0"
    "showShaded\0_q_updateStaysOnTopHint\0"
    "_q_enterInteractiveMode\0_q_processFocusChanged\0"
    "QWidget*\0keyboardSingleStep\0"
    "keyboardPageStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMdiSubWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   64, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       6,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   55,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,
      11,    2,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    2,    2,

 // properties: name, type, flags
      13, QMetaType::Int, 0x00095103,
      14, QMetaType::Int, 0x00095103,

       0        // eod
};

void QMdiSubWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMdiSubWindow *_t = static_cast<QMdiSubWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->windowStateChanged((*reinterpret_cast< Qt::WindowStates(*)>(_a[1])),(*reinterpret_cast< Qt::WindowStates(*)>(_a[2]))); break;
        case 1: _t->aboutToActivate(); break;
        case 2: _t->showSystemMenu(); break;
        case 3: _t->showShaded(); break;
        case 4: _t->d_func()->_q_updateStaysOnTopHint(); break;
        case 5: _t->d_func()->_q_enterInteractiveMode(); break;
        case 6: _t->d_func()->_q_processFocusChanged((*reinterpret_cast< QWidget*(*)>(_a[1])),(*reinterpret_cast< QWidget*(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMdiSubWindow::*_t)(Qt::WindowStates , Qt::WindowStates );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMdiSubWindow::windowStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMdiSubWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMdiSubWindow::aboutToActivate)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMdiSubWindow *_t = static_cast<QMdiSubWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->keyboardSingleStep(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->keyboardPageStep(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMdiSubWindow *_t = static_cast<QMdiSubWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setKeyboardSingleStep(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setKeyboardPageStep(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QMdiSubWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMdiSubWindow.data,
      qt_meta_data_QMdiSubWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QMdiSubWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdiSubWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMdiSubWindow.stringdata0))
        return static_cast<void*>(const_cast< QMdiSubWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMdiSubWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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

// SIGNAL 0
void QMdiSubWindow::windowStateChanged(Qt::WindowStates _t1, Qt::WindowStates _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMdiSubWindow::aboutToActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
