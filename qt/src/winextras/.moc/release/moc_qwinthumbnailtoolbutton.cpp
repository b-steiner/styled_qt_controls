/****************************************************************************
** Meta object code from reading C++ file 'qwinthumbnailtoolbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwinthumbnailtoolbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwinthumbnailtoolbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWinThumbnailToolButton_t {
    QByteArrayData data[12];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWinThumbnailToolButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWinThumbnailToolButton_t qt_meta_stringdata_QWinThumbnailToolButton = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QWinThumbnailToolButton"
QT_MOC_LITERAL(1, 24, 7), // "clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "changed"
QT_MOC_LITERAL(4, 41, 5), // "click"
QT_MOC_LITERAL(5, 47, 7), // "toolTip"
QT_MOC_LITERAL(6, 55, 4), // "icon"
QT_MOC_LITERAL(7, 60, 7), // "enabled"
QT_MOC_LITERAL(8, 68, 11), // "interactive"
QT_MOC_LITERAL(9, 80, 7), // "visible"
QT_MOC_LITERAL(10, 88, 14), // "dismissOnClick"
QT_MOC_LITERAL(11, 103, 4) // "flat"

    },
    "QWinThumbnailToolButton\0clicked\0\0"
    "changed\0click\0toolTip\0icon\0enabled\0"
    "interactive\0visible\0dismissOnClick\0"
    "flat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWinThumbnailToolButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       7,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QIcon, 0x00095103,
       7, QMetaType::Bool, 0x00095103,
       8, QMetaType::Bool, 0x00095103,
       9, QMetaType::Bool, 0x00095103,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QWinThumbnailToolButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWinThumbnailToolButton *_t = static_cast<QWinThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked(); break;
        case 1: _t->changed(); break;
        case 2: _t->click(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWinThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinThumbnailToolButton::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWinThumbnailToolButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinThumbnailToolButton::changed)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWinThumbnailToolButton *_t = static_cast<QWinThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->toolTip(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isEnabled(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->dismissOnClick(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFlat(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWinThumbnailToolButton *_t = static_cast<QWinThumbnailToolButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setToolTip(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
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
    Q_UNUSED(_a);
}

const QMetaObject QWinThumbnailToolButton::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWinThumbnailToolButton.data,
      qt_meta_data_QWinThumbnailToolButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWinThumbnailToolButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWinThumbnailToolButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWinThumbnailToolButton.stringdata0))
        return static_cast<void*>(const_cast< QWinThumbnailToolButton*>(this));
    return QObject::qt_metacast(_clname);
}

int QWinThumbnailToolButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QWinThumbnailToolButton::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QWinThumbnailToolButton::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
