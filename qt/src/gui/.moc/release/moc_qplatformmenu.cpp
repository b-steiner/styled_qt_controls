/****************************************************************************
** Meta object code from reading C++ file 'qplatformmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformMenuItem_t {
    QByteArrayData data[17];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformMenuItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformMenuItem_t qt_meta_stringdata_QPlatformMenuItem = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QPlatformMenuItem"
QT_MOC_LITERAL(1, 18, 9), // "activated"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "hovered"
QT_MOC_LITERAL(4, 37, 8), // "MenuRole"
QT_MOC_LITERAL(5, 46, 6), // "NoRole"
QT_MOC_LITERAL(6, 53, 17), // "TextHeuristicRole"
QT_MOC_LITERAL(7, 71, 23), // "ApplicationSpecificRole"
QT_MOC_LITERAL(8, 95, 11), // "AboutQtRole"
QT_MOC_LITERAL(9, 107, 9), // "AboutRole"
QT_MOC_LITERAL(10, 117, 15), // "PreferencesRole"
QT_MOC_LITERAL(11, 133, 8), // "QuitRole"
QT_MOC_LITERAL(12, 142, 7), // "CutRole"
QT_MOC_LITERAL(13, 150, 8), // "CopyRole"
QT_MOC_LITERAL(14, 159, 9), // "PasteRole"
QT_MOC_LITERAL(15, 169, 13), // "SelectAllRole"
QT_MOC_LITERAL(16, 183, 9) // "RoleCount"

    },
    "QPlatformMenuItem\0activated\0\0hovered\0"
    "MenuRole\0NoRole\0TextHeuristicRole\0"
    "ApplicationSpecificRole\0AboutQtRole\0"
    "AboutRole\0PreferencesRole\0QuitRole\0"
    "CutRole\0CopyRole\0PasteRole\0SelectAllRole\0"
    "RoleCount"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformMenuItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       4, 0x0,   12,   30,

 // enum data: key, value
       5, uint(QPlatformMenuItem::NoRole),
       6, uint(QPlatformMenuItem::TextHeuristicRole),
       7, uint(QPlatformMenuItem::ApplicationSpecificRole),
       8, uint(QPlatformMenuItem::AboutQtRole),
       9, uint(QPlatformMenuItem::AboutRole),
      10, uint(QPlatformMenuItem::PreferencesRole),
      11, uint(QPlatformMenuItem::QuitRole),
      12, uint(QPlatformMenuItem::CutRole),
      13, uint(QPlatformMenuItem::CopyRole),
      14, uint(QPlatformMenuItem::PasteRole),
      15, uint(QPlatformMenuItem::SelectAllRole),
      16, uint(QPlatformMenuItem::RoleCount),

       0        // eod
};

void QPlatformMenuItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformMenuItem *_t = static_cast<QPlatformMenuItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated(); break;
        case 1: _t->hovered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformMenuItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformMenuItem::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlatformMenuItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformMenuItem::hovered)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QPlatformMenuItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformMenuItem.data,
      qt_meta_data_QPlatformMenuItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformMenuItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenuItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformMenuItem.stringdata0))
        return static_cast<void*>(const_cast< QPlatformMenuItem*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformMenuItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformMenuItem::activated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QPlatformMenuItem::hovered()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QPlatformMenu_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformMenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformMenu_t qt_meta_stringdata_QPlatformMenu = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QPlatformMenu"
QT_MOC_LITERAL(1, 14, 11), // "aboutToShow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "aboutToHide"
QT_MOC_LITERAL(4, 39, 8), // "MenuType"
QT_MOC_LITERAL(5, 48, 11), // "DefaultMenu"
QT_MOC_LITERAL(6, 60, 8) // "EditMenu"

    },
    "QPlatformMenu\0aboutToShow\0\0aboutToHide\0"
    "MenuType\0DefaultMenu\0EditMenu"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformMenu[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, flags, count, data
       4, 0x0,    2,   30,

 // enum data: key, value
       5, uint(QPlatformMenu::DefaultMenu),
       6, uint(QPlatformMenu::EditMenu),

       0        // eod
};

void QPlatformMenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformMenu *_t = static_cast<QPlatformMenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aboutToShow(); break;
        case 1: _t->aboutToHide(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformMenu::aboutToShow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlatformMenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformMenu::aboutToHide)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QPlatformMenu::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformMenu.data,
      qt_meta_data_QPlatformMenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformMenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformMenu.stringdata0))
        return static_cast<void*>(const_cast< QPlatformMenu*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformMenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QPlatformMenu::aboutToShow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QPlatformMenu::aboutToHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_QPlatformMenuBar_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformMenuBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformMenuBar_t qt_meta_stringdata_QPlatformMenuBar = {
    {
QT_MOC_LITERAL(0, 0, 16) // "QPlatformMenuBar"

    },
    "QPlatformMenuBar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformMenuBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QPlatformMenuBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPlatformMenuBar::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformMenuBar.data,
      qt_meta_data_QPlatformMenuBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformMenuBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformMenuBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformMenuBar.stringdata0))
        return static_cast<void*>(const_cast< QPlatformMenuBar*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformMenuBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
