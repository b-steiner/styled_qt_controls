/****************************************************************************
** Meta object code from reading C++ file 'qguiapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qguiapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qguiapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGuiApplication_t {
    QByteArrayData data[35];
    char stringdata0[522];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGuiApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGuiApplication_t qt_meta_stringdata_QGuiApplication = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGuiApplication"
QT_MOC_LITERAL(1, 16, 19), // "fontDatabaseChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "screenAdded"
QT_MOC_LITERAL(4, 49, 8), // "QScreen*"
QT_MOC_LITERAL(5, 58, 6), // "screen"
QT_MOC_LITERAL(6, 65, 13), // "screenRemoved"
QT_MOC_LITERAL(7, 79, 20), // "primaryScreenChanged"
QT_MOC_LITERAL(8, 100, 16), // "lastWindowClosed"
QT_MOC_LITERAL(9, 117, 18), // "focusObjectChanged"
QT_MOC_LITERAL(10, 136, 11), // "focusObject"
QT_MOC_LITERAL(11, 148, 18), // "focusWindowChanged"
QT_MOC_LITERAL(12, 167, 8), // "QWindow*"
QT_MOC_LITERAL(13, 176, 11), // "focusWindow"
QT_MOC_LITERAL(14, 188, 23), // "applicationStateChanged"
QT_MOC_LITERAL(15, 212, 20), // "Qt::ApplicationState"
QT_MOC_LITERAL(16, 233, 5), // "state"
QT_MOC_LITERAL(17, 239, 22), // "layoutDirectionChanged"
QT_MOC_LITERAL(18, 262, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(19, 282, 9), // "direction"
QT_MOC_LITERAL(20, 292, 17), // "commitDataRequest"
QT_MOC_LITERAL(21, 310, 16), // "QSessionManager&"
QT_MOC_LITERAL(22, 327, 14), // "sessionManager"
QT_MOC_LITERAL(23, 342, 16), // "saveStateRequest"
QT_MOC_LITERAL(24, 359, 14), // "paletteChanged"
QT_MOC_LITERAL(25, 374, 3), // "pal"
QT_MOC_LITERAL(26, 378, 20), // "_q_updateFocusObject"
QT_MOC_LITERAL(27, 399, 6), // "object"
QT_MOC_LITERAL(28, 406, 10), // "windowIcon"
QT_MOC_LITERAL(29, 417, 22), // "applicationDisplayName"
QT_MOC_LITERAL(30, 440, 15), // "desktopFileName"
QT_MOC_LITERAL(31, 456, 15), // "layoutDirection"
QT_MOC_LITERAL(32, 472, 12), // "platformName"
QT_MOC_LITERAL(33, 485, 22), // "quitOnLastWindowClosed"
QT_MOC_LITERAL(34, 508, 13) // "primaryScreen"

    },
    "QGuiApplication\0fontDatabaseChanged\0"
    "\0screenAdded\0QScreen*\0screen\0screenRemoved\0"
    "primaryScreenChanged\0lastWindowClosed\0"
    "focusObjectChanged\0focusObject\0"
    "focusWindowChanged\0QWindow*\0focusWindow\0"
    "applicationStateChanged\0Qt::ApplicationState\0"
    "state\0layoutDirectionChanged\0"
    "Qt::LayoutDirection\0direction\0"
    "commitDataRequest\0QSessionManager&\0"
    "sessionManager\0saveStateRequest\0"
    "paletteChanged\0pal\0_q_updateFocusObject\0"
    "object\0windowIcon\0applicationDisplayName\0"
    "desktopFileName\0layoutDirection\0"
    "platformName\0quitOnLastWindowClosed\0"
    "primaryScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGuiApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       7,  114, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    1,   80,    2, 0x06 /* Public */,
       6,    1,   83,    2, 0x06 /* Public */,
       7,    1,   86,    2, 0x06 /* Public */,
       8,    0,   89,    2, 0x06 /* Public */,
       9,    1,   90,    2, 0x06 /* Public */,
      11,    1,   93,    2, 0x06 /* Public */,
      14,    1,   96,    2, 0x06 /* Public */,
      17,    1,   99,    2, 0x06 /* Public */,
      20,    1,  102,    2, 0x06 /* Public */,
      23,    1,  105,    2, 0x06 /* Public */,
      24,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      26,    1,  111,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, QMetaType::QPalette,   25,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   27,

 // properties: name, type, flags
      28, QMetaType::QIcon, 0x00095103,
      29, QMetaType::QString, 0x00095103,
      30, QMetaType::QString, 0x00095103,
      31, 0x80000000 | 18, 0x0049510b,
      32, QMetaType::QString, 0x00085001,
      33, QMetaType::Bool, 0x00095103,
      34, 0x80000000 | 4, 0x00485009,

 // properties: notify_signal_id
       0,
       0,
       0,
       8,
       0,
       0,
       3,

       0        // eod
};

void QGuiApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fontDatabaseChanged(); break;
        case 1: _t->screenAdded((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 2: _t->screenRemoved((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 3: _t->primaryScreenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 4: _t->lastWindowClosed(); break;
        case 5: _t->focusObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: _t->focusWindowChanged((*reinterpret_cast< QWindow*(*)>(_a[1]))); break;
        case 7: _t->applicationStateChanged((*reinterpret_cast< Qt::ApplicationState(*)>(_a[1]))); break;
        case 8: _t->layoutDirectionChanged((*reinterpret_cast< Qt::LayoutDirection(*)>(_a[1]))); break;
        case 9: _t->commitDataRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 10: _t->saveStateRequest((*reinterpret_cast< QSessionManager(*)>(_a[1]))); break;
        case 11: _t->paletteChanged((*reinterpret_cast< const QPalette(*)>(_a[1]))); break;
        case 12: _t->d_func()->_q_updateFocusObject((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::fontDatabaseChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::screenAdded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::screenRemoved)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::primaryScreenChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::lastWindowClosed)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusObjectChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QWindow * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::focusWindowChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(Qt::ApplicationState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::applicationStateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(Qt::LayoutDirection );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::layoutDirectionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::commitDataRequest)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(QSessionManager & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::saveStateRequest)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QGuiApplication::*_t)(const QPalette & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGuiApplication::paletteChanged)) {
                *result = 11;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QIcon*>(_v) = _t->windowIcon(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->applicationDisplayName(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->desktopFileName(); break;
        case 3: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->platformName(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->quitOnLastWindowClosed(); break;
        case 6: *reinterpret_cast< QScreen**>(_v) = _t->primaryScreen(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGuiApplication *_t = static_cast<QGuiApplication *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWindowIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 1: _t->setApplicationDisplayName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDesktopFileName(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 5: _t->setQuitOnLastWindowClosed(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGuiApplication::staticMetaObject = {
    { &QCoreApplication::staticMetaObject, qt_meta_stringdata_QGuiApplication.data,
      qt_meta_data_QGuiApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGuiApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGuiApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGuiApplication.stringdata0))
        return static_cast<void*>(const_cast< QGuiApplication*>(this));
    return QCoreApplication::qt_metacast(_clname);
}

int QGuiApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCoreApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
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
void QGuiApplication::fontDatabaseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QGuiApplication::screenAdded(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QGuiApplication::screenRemoved(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QGuiApplication::primaryScreenChanged(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QGuiApplication::lastWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QGuiApplication::focusObjectChanged(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QGuiApplication::focusWindowChanged(QWindow * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QGuiApplication::applicationStateChanged(Qt::ApplicationState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QGuiApplication::layoutDirectionChanged(Qt::LayoutDirection _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QGuiApplication::commitDataRequest(QSessionManager & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QGuiApplication::saveStateRequest(QSessionManager & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QGuiApplication::paletteChanged(const QPalette & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
