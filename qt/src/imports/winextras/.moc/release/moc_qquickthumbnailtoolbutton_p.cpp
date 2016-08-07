/****************************************************************************
** Meta object code from reading C++ file 'qquickthumbnailtoolbutton_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickthumbnailtoolbutton_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickthumbnailtoolbutton_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickThumbnailToolButton_t {
    QByteArrayData data[18];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickThumbnailToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickThumbnailToolButton_t qt_meta_stringdata_QQuickThumbnailToolButton = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QQuickThumbnailToolButton"
QT_MOC_LITERAL(1, 26, 7), // "clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 17), // "iconSourceChanged"
QT_MOC_LITERAL(4, 53, 14), // "tooltipChanged"
QT_MOC_LITERAL(5, 68, 14), // "enabledChanged"
QT_MOC_LITERAL(6, 83, 18), // "interactiveChanged"
QT_MOC_LITERAL(7, 102, 14), // "visibleChanged"
QT_MOC_LITERAL(8, 117, 21), // "dismissOnClickChanged"
QT_MOC_LITERAL(9, 139, 11), // "flatChanged"
QT_MOC_LITERAL(10, 151, 10), // "iconLoaded"
QT_MOC_LITERAL(11, 162, 10), // "iconSource"
QT_MOC_LITERAL(12, 173, 7), // "tooltip"
QT_MOC_LITERAL(13, 181, 7), // "enabled"
QT_MOC_LITERAL(14, 189, 11), // "interactive"
QT_MOC_LITERAL(15, 201, 7), // "visible"
QT_MOC_LITERAL(16, 209, 14), // "dismissOnClick"
QT_MOC_LITERAL(17, 224, 4) // "flat"

    },
    "QQuickThumbnailToolButton\0clicked\0\0"
    "iconSourceChanged\0tooltipChanged\0"
    "enabledChanged\0interactiveChanged\0"
    "visibleChanged\0dismissOnClickChanged\0"
    "flatChanged\0iconLoaded\0iconSource\0"
    "tooltip\0enabled\0interactive\0visible\0"
    "dismissOnClick\0flat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickThumbnailToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,
       6,    0,   63,    2, 0x06 /* Public */,
       7,    0,   64,    2, 0x06 /* Public */,
       8,    0,   65,    2, 0x06 /* Public */,
       9,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

 // properties: name, type, flags
      11, QMetaType::QUrl, 0x00495103,
      12, QMetaType::QString, 0x00495103,
      13, QMetaType::Bool, 0x00495103,
      14, QMetaType::Bool, 0x00495103,
      15, QMetaType::Bool, 0x00495103,
      16, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       5,
       6,
       7,

       0        // eod
};

void QQuickThumbnailToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickThumbnailToolButton *_t = static_cast<QQuickThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->iconSourceChanged(); break;
        case 2: _t->tooltipChanged(); break;
        case 3: _t->enabledChanged(); break;
        case 4: _t->interactiveChanged(); break;
        case 5: _t->visibleChanged(); break;
        case 6: _t->dismissOnClickChanged(); break;
        case 7: _t->flatChanged(); break;
        case 8: _t->iconLoaded((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::iconSourceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::tooltipChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::enabledChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::interactiveChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::visibleChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::dismissOnClickChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QQuickThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickThumbnailToolButton::flatChanged)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QQuickThumbnailToolButton *_t = static_cast<QQuickThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->iconSource(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->tooltip(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dismissOnClick(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFlat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QQuickThumbnailToolButton *_t = static_cast<QQuickThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setTooltip(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setDismissOnClick(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setFlat(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QQuickThumbnailToolButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickThumbnailToolButton.data,
      qt_meta_data_QQuickThumbnailToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickThumbnailToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickThumbnailToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickThumbnailToolButton.stringdata0))
        return static_cast<void*>(const_cast< QQuickThumbnailToolButton*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickThumbnailToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QQuickThumbnailToolButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QQuickThumbnailToolButton::iconSourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QQuickThumbnailToolButton::tooltipChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QQuickThumbnailToolButton::enabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QQuickThumbnailToolButton::interactiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QQuickThumbnailToolButton::visibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QQuickThumbnailToolButton::dismissOnClickChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QQuickThumbnailToolButton::flatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
