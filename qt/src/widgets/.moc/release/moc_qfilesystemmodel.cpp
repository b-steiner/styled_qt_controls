/****************************************************************************
** Meta object code from reading C++ file 'qfilesystemmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qfilesystemmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfilesystemmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFileSystemModel_t {
    QByteArrayData data[21];
    char stringdata0[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFileSystemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFileSystemModel_t qt_meta_stringdata_QFileSystemModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QFileSystemModel"
QT_MOC_LITERAL(1, 17, 15), // "rootPathChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 7), // "newPath"
QT_MOC_LITERAL(4, 42, 11), // "fileRenamed"
QT_MOC_LITERAL(5, 54, 4), // "path"
QT_MOC_LITERAL(6, 59, 7), // "oldName"
QT_MOC_LITERAL(7, 67, 7), // "newName"
QT_MOC_LITERAL(8, 75, 15), // "directoryLoaded"
QT_MOC_LITERAL(9, 91, 19), // "_q_directoryChanged"
QT_MOC_LITERAL(10, 111, 9), // "directory"
QT_MOC_LITERAL(11, 121, 4), // "list"
QT_MOC_LITERAL(12, 126, 21), // "_q_performDelayedSort"
QT_MOC_LITERAL(13, 148, 20), // "_q_fileSystemChanged"
QT_MOC_LITERAL(14, 169, 34), // "QVector<QPair<QString,QFileIn..."
QT_MOC_LITERAL(15, 204, 15), // "_q_resolvedName"
QT_MOC_LITERAL(16, 220, 8), // "fileName"
QT_MOC_LITERAL(17, 229, 12), // "resolvedName"
QT_MOC_LITERAL(18, 242, 15), // "resolveSymlinks"
QT_MOC_LITERAL(19, 258, 8), // "readOnly"
QT_MOC_LITERAL(20, 267, 18) // "nameFilterDisables"

    },
    "QFileSystemModel\0rootPathChanged\0\0"
    "newPath\0fileRenamed\0path\0oldName\0"
    "newName\0directoryLoaded\0_q_directoryChanged\0"
    "directory\0list\0_q_performDelayedSort\0"
    "_q_fileSystemChanged\0"
    "QVector<QPair<QString,QFileInfo> >\0"
    "_q_resolvedName\0fileName\0resolvedName\0"
    "resolveSymlinks\0readOnly\0nameFilterDisables"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFileSystemModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       4,    3,   52,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   62,    2, 0x08 /* Private */,
      12,    0,   67,    2, 0x08 /* Private */,
      13,    2,   68,    2, 0x08 /* Private */,
      15,    2,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   10,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 14,    5,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   16,   17,

 // properties: name, type, flags
      18, QMetaType::Bool, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QFileSystemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFileSystemModel *_t = static_cast<QFileSystemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rootPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->fileRenamed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->directoryLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_directoryChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 4: _t->d_func()->_q_performDelayedSort(); break;
        case 5: _t->d_func()->_q_fileSystemChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVector<QPair<QString,QFileInfo> >(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_resolvedName((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFileSystemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileSystemModel::rootPathChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFileSystemModel::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileSystemModel::fileRenamed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QFileSystemModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFileSystemModel::directoryLoaded)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QFileSystemModel *_t = static_cast<QFileSystemModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->resolveSymlinks(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isReadOnly(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->nameFilterDisables(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QFileSystemModel *_t = static_cast<QFileSystemModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setResolveSymlinks(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setReadOnly(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setNameFilterDisables(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QFileSystemModel::staticMetaObject = {
    { &QAbstractItemModel::staticMetaObject, qt_meta_stringdata_QFileSystemModel.data,
      qt_meta_data_QFileSystemModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFileSystemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFileSystemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFileSystemModel.stringdata0))
        return static_cast<void*>(const_cast< QFileSystemModel*>(this));
    return QAbstractItemModel::qt_metacast(_clname);
}

int QFileSystemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
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
void QFileSystemModel::rootPathChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFileSystemModel::fileRenamed(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFileSystemModel::directoryLoaded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
