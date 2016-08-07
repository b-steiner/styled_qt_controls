/****************************************************************************
** Meta object code from reading C++ file 'qwinthumbnailtoolbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qwinthumbnailtoolbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwinthumbnailtoolbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWinThumbnailToolBar_t {
    QByteArrayData data[13];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWinThumbnailToolBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWinThumbnailToolBar_t qt_meta_stringdata_QWinThumbnailToolBar = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QWinThumbnailToolBar"
QT_MOC_LITERAL(1, 21, 30), // "iconicThumbnailPixmapRequested"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 32), // "iconicLivePreviewPixmapRequested"
QT_MOC_LITERAL(4, 86, 5), // "clear"
QT_MOC_LITERAL(5, 92, 24), // "setIconicThumbnailPixmap"
QT_MOC_LITERAL(6, 117, 26), // "setIconicLivePreviewPixmap"
QT_MOC_LITERAL(7, 144, 5), // "count"
QT_MOC_LITERAL(8, 150, 6), // "window"
QT_MOC_LITERAL(9, 157, 8), // "QWindow*"
QT_MOC_LITERAL(10, 166, 32), // "iconicPixmapNotificationsEnabled"
QT_MOC_LITERAL(11, 199, 21), // "iconicThumbnailPixmap"
QT_MOC_LITERAL(12, 221, 23) // "iconicLivePreviewPixmap"

    },
    "QWinThumbnailToolBar\0"
    "iconicThumbnailPixmapRequested\0\0"
    "iconicLivePreviewPixmapRequested\0clear\0"
    "setIconicThumbnailPixmap\0"
    "setIconicLivePreviewPixmap\0count\0"
    "window\0QWindow*\0iconicPixmapNotificationsEnabled\0"
    "iconicThumbnailPixmap\0iconicLivePreviewPixmap"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWinThumbnailToolBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       6,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    2,
    QMetaType::Void, QMetaType::QPixmap,    2,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00085001,
       8, 0x80000000 | 9, 0x0009510b,
      10, QMetaType::Bool, 0x00095103,
      11, QMetaType::QPixmap, 0x00095103,
      12, QMetaType::QPixmap, 0x00095103,

       0        // eod
};

void QWinThumbnailToolBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWinThumbnailToolBar *_t = static_cast<QWinThumbnailToolBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconicThumbnailPixmapRequested(); break;
        case 1: _t->iconicLivePreviewPixmapRequested(); break;
        case 2: _t->clear(); break;
        case 3: _t->setIconicThumbnailPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 4: _t->setIconicLivePreviewPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWinThumbnailToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinThumbnailToolBar::iconicThumbnailPixmapRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWinThumbnailToolBar::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinThumbnailToolBar::iconicLivePreviewPixmapRequested)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWinThumbnailToolBar *_t = static_cast<QWinThumbnailToolBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 1: *reinterpret_cast< QWindow**>(_v) = _t->window(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->iconicPixmapNotificationsEnabled(); break;
        case 3: *reinterpret_cast< QPixmap*>(_v) = _t->iconicThumbnailPixmap(); break;
        case 4: *reinterpret_cast< QPixmap*>(_v) = _t->iconicLivePreviewPixmap(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWinThumbnailToolBar *_t = static_cast<QWinThumbnailToolBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setWindow(*reinterpret_cast< QWindow**>(_v)); break;
        case 2: _t->setIconicPixmapNotificationsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIconicThumbnailPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        case 4: _t->setIconicLivePreviewPixmap(*reinterpret_cast< QPixmap*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWinThumbnailToolBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWinThumbnailToolBar.data,
      qt_meta_data_QWinThumbnailToolBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWinThumbnailToolBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWinThumbnailToolBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWinThumbnailToolBar.stringdata0))
        return static_cast<void*>(const_cast< QWinThumbnailToolBar*>(this));
    return QObject::qt_metacast(_clname);
}

int QWinThumbnailToolBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
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
void QWinThumbnailToolBar::iconicThumbnailPixmapRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QWinThumbnailToolBar::iconicLivePreviewPixmapRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
