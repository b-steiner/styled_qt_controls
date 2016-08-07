/****************************************************************************
** Meta object code from reading C++ file 'qdesktopwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qdesktopwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdesktopwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDesktopWidget_t {
    QByteArrayData data[11];
    char stringdata0[166];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDesktopWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDesktopWidget_t qt_meta_stringdata_QDesktopWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QDesktopWidget"
QT_MOC_LITERAL(1, 15, 7), // "resized"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 15), // "workAreaResized"
QT_MOC_LITERAL(4, 40, 18), // "screenCountChanged"
QT_MOC_LITERAL(5, 59, 20), // "primaryScreenChanged"
QT_MOC_LITERAL(6, 80, 16), // "_q_updateScreens"
QT_MOC_LITERAL(7, 97, 27), // "_q_availableGeometryChanged"
QT_MOC_LITERAL(8, 125, 14), // "virtualDesktop"
QT_MOC_LITERAL(9, 140, 11), // "screenCount"
QT_MOC_LITERAL(10, 152, 13) // "primaryScreen"

    },
    "QDesktopWidget\0resized\0\0workAreaResized\0"
    "screenCountChanged\0primaryScreenChanged\0"
    "_q_updateScreens\0_q_availableGeometryChanged\0"
    "virtualDesktop\0screenCount\0primaryScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDesktopWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,
       4,    1,   50,    2, 0x06 /* Public */,
       5,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::Bool, 0x00095001,
       9, QMetaType::Int, 0x00495001,
      10, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       2,
       3,

       0        // eod
};

void QDesktopWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDesktopWidget *_t = static_cast<QDesktopWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->workAreaResized((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->screenCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->primaryScreenChanged(); break;
        case 4: _t->d_func()->_q_updateScreens(); break;
        case 5: _t->d_func()->_q_availableGeometryChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDesktopWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDesktopWidget::resized)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDesktopWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDesktopWidget::workAreaResized)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDesktopWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDesktopWidget::screenCountChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDesktopWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDesktopWidget::primaryScreenChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDesktopWidget *_t = static_cast<QDesktopWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isVirtualDesktop(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->screenCount(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->primaryScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDesktopWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDesktopWidget.data,
      qt_meta_data_QDesktopWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDesktopWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDesktopWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDesktopWidget.stringdata0))
        return static_cast<void*>(const_cast< QDesktopWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDesktopWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDesktopWidget::resized(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDesktopWidget::workAreaResized(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDesktopWidget::screenCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QDesktopWidget::primaryScreenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
