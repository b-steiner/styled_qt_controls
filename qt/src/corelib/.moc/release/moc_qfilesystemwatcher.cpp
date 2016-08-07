/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qfilesystemwatcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemwatcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFileSystemWatcher_t {
    QByteArrayData data[8];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFileSystemWatcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFileSystemWatcher_t qt_meta_stringdata_QFileSystemWatcher = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QFileSystemWatcher"
QT_MOC_LITERAL(1, 19, 11), // "fileChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "path"
QT_MOC_LITERAL(4, 37, 16), // "directoryChanged"
QT_MOC_LITERAL(5, 54, 14), // "_q_fileChanged"
QT_MOC_LITERAL(6, 69, 7), // "removed"
QT_MOC_LITERAL(7, 77, 19) // "_q_directoryChanged"

    },
    "QFileSystemWatcher\0fileChanged\0\0path\0"
    "directoryChanged\0_q_fileChanged\0removed\0"
    "_q_directoryChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFileSystemWatcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   40,    2, 0x08 /* Private */,
       7,    2,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    3,    6,

       0        // eod
};

void QFileSystemWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFileSystemWatcher *_t = static_cast<QFileSystemWatcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1])), QPrivateSignal()); break;
        case 1: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])), QPrivateSignal()); break;
        case 2: _t->d_func()->_q_fileChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->d_func()->_q_directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFileSystemWatcher::*_t)(const QString & , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileSystemWatcher::fileChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFileSystemWatcher::*_t)(const QString & , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileSystemWatcher::directoryChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QFileSystemWatcher::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFileSystemWatcher.data,
      qt_meta_data_QFileSystemWatcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFileSystemWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileSystemWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFileSystemWatcher.stringdata0))
        return static_cast<void*>(const_cast< QFileSystemWatcher*>(this));
    return QObject::qt_metacast(_clname);
}

int QFileSystemWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void QFileSystemWatcher::fileChanged(const QString & _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileSystemWatcher::directoryChanged(const QString & _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
