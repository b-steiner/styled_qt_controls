/****************************************************************************
** Meta object code from reading C++ file 'file_system_watcher.q.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bdl.styled_qt_controls\styled_qt_controls.hpp"
#include "bdl.styled_qt_controls\util\os\file_system_watcher.q.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'file_system_watcher.q.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher_t qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher = {
    {
QT_MOC_LITERAL(0, 0, 50), // "bdl::styled_qt_controls::util..."
QT_MOC_LITERAL(1, 51, 5), // "added"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 4), // "path"
QT_MOC_LITERAL(4, 63, 7), // "renamed"
QT_MOC_LITERAL(5, 71, 8), // "old_path"
QT_MOC_LITERAL(6, 80, 8), // "new_path"
QT_MOC_LITERAL(7, 89, 7), // "deleted"
QT_MOC_LITERAL(8, 97, 8) // "modified"

    },
    "bdl::styled_qt_controls::util::file_system_watcher\0"
    "added\0\0path\0renamed\0old_path\0new_path\0"
    "deleted\0modified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_bdl__styled_qt_controls__util__file_system_watcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       7,    1,   42,    2, 0x06 /* Public */,
       8,    1,   45,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void bdl::styled_qt_controls::util::file_system_watcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        file_system_watcher *_t = static_cast<file_system_watcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->added((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->renamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->deleted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->modified((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (file_system_watcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&file_system_watcher::added)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (file_system_watcher::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&file_system_watcher::renamed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (file_system_watcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&file_system_watcher::deleted)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (file_system_watcher::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&file_system_watcher::modified)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject bdl::styled_qt_controls::util::file_system_watcher::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher.data,
      qt_meta_data_bdl__styled_qt_controls__util__file_system_watcher,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *bdl::styled_qt_controls::util::file_system_watcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *bdl::styled_qt_controls::util::file_system_watcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_bdl__styled_qt_controls__util__file_system_watcher.stringdata0))
        return static_cast<void*>(const_cast< file_system_watcher*>(this));
    return QThread::qt_metacast(_clname);
}

int bdl::styled_qt_controls::util::file_system_watcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void bdl::styled_qt_controls::util::file_system_watcher::added(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void bdl::styled_qt_controls::util::file_system_watcher::renamed(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void bdl::styled_qt_controls::util::file_system_watcher::deleted(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void bdl::styled_qt_controls::util::file_system_watcher::modified(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
