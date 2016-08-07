/****************************************************************************
** Meta object code from reading C++ file 'qquicktaskbarbutton_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquicktaskbarbutton_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquicktaskbarbutton_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickTaskbarOverlay_t {
    QByteArrayData data[7];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTaskbarOverlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTaskbarOverlay_t qt_meta_stringdata_QQuickTaskbarOverlay = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QQuickTaskbarOverlay"
QT_MOC_LITERAL(1, 21, 17), // "iconSourceChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 28), // "accessibleDescriptionChanged"
QT_MOC_LITERAL(4, 69, 10), // "iconLoaded"
QT_MOC_LITERAL(5, 80, 10), // "iconSource"
QT_MOC_LITERAL(6, 91, 21) // "accessibleDescription"

    },
    "QQuickTaskbarOverlay\0iconSourceChanged\0"
    "\0accessibleDescriptionChanged\0iconLoaded\0"
    "iconSource\0accessibleDescription"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTaskbarOverlay[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

 // properties: name, type, flags
       5, QMetaType::QUrl, 0x00495103,
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,

       0        // eod
};

void QQuickTaskbarOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickTaskbarOverlay *_t = static_cast<QQuickTaskbarOverlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconSourceChanged(); break;
        case 1: _t->accessibleDescriptionChanged(); break;
        case 2: _t->iconLoaded((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickTaskbarOverlay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickTaskbarOverlay::iconSourceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickTaskbarOverlay::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickTaskbarOverlay::accessibleDescriptionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTaskbarOverlay *_t = static_cast<QQuickTaskbarOverlay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->iconSource(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->accessibleDescription(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickTaskbarOverlay *_t = static_cast<QQuickTaskbarOverlay *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setAccessibleDescription(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickTaskbarOverlay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickTaskbarOverlay.data,
      qt_meta_data_QQuickTaskbarOverlay,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickTaskbarOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTaskbarOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTaskbarOverlay.stringdata0))
        return static_cast<void*>(const_cast< QQuickTaskbarOverlay*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickTaskbarOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QQuickTaskbarOverlay::iconSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QQuickTaskbarOverlay::accessibleDescriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QQuickTaskbarButton_t {
    QByteArrayData data[5];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickTaskbarButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickTaskbarButton_t qt_meta_stringdata_QQuickTaskbarButton = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QQuickTaskbarButton"
QT_MOC_LITERAL(1, 20, 7), // "overlay"
QT_MOC_LITERAL(2, 28, 21), // "QQuickTaskbarOverlay*"
QT_MOC_LITERAL(3, 50, 8), // "progress"
QT_MOC_LITERAL(4, 59, 20) // "QWinTaskbarProgress*"

    },
    "QQuickTaskbarButton\0overlay\0"
    "QQuickTaskbarOverlay*\0progress\0"
    "QWinTaskbarProgress*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickTaskbarButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095409,
       3, 0x80000000 | 4, 0x00095409,

       0        // eod
};

void QQuickTaskbarButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickTaskbarOverlay* >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWinTaskbarProgress* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickTaskbarButton *_t = static_cast<QQuickTaskbarButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickTaskbarOverlay**>(_v) = _t->overlay(); break;
        case 1: *reinterpret_cast< QWinTaskbarProgress**>(_v) = _t->progress(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QQuickTaskbarButton::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QQuickTaskbarButton.data,
      qt_meta_data_QQuickTaskbarButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickTaskbarButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickTaskbarButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickTaskbarButton.stringdata0))
        return static_cast<void*>(const_cast< QQuickTaskbarButton*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int QQuickTaskbarButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
