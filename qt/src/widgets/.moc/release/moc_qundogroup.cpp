/****************************************************************************
** Meta object code from reading C++ file 'qundogroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../util/qundogroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qundogroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QUndoGroup_t {
    QByteArrayData data[20];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QUndoGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QUndoGroup_t qt_meta_stringdata_QUndoGroup = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QUndoGroup"
QT_MOC_LITERAL(1, 11, 18), // "activeStackChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 11), // "QUndoStack*"
QT_MOC_LITERAL(4, 43, 5), // "stack"
QT_MOC_LITERAL(5, 49, 12), // "indexChanged"
QT_MOC_LITERAL(6, 62, 3), // "idx"
QT_MOC_LITERAL(7, 66, 12), // "cleanChanged"
QT_MOC_LITERAL(8, 79, 5), // "clean"
QT_MOC_LITERAL(9, 85, 14), // "canUndoChanged"
QT_MOC_LITERAL(10, 100, 7), // "canUndo"
QT_MOC_LITERAL(11, 108, 14), // "canRedoChanged"
QT_MOC_LITERAL(12, 123, 7), // "canRedo"
QT_MOC_LITERAL(13, 131, 15), // "undoTextChanged"
QT_MOC_LITERAL(14, 147, 8), // "undoText"
QT_MOC_LITERAL(15, 156, 15), // "redoTextChanged"
QT_MOC_LITERAL(16, 172, 8), // "redoText"
QT_MOC_LITERAL(17, 181, 4), // "undo"
QT_MOC_LITERAL(18, 186, 4), // "redo"
QT_MOC_LITERAL(19, 191, 14) // "setActiveStack"

    },
    "QUndoGroup\0activeStackChanged\0\0"
    "QUndoStack*\0stack\0indexChanged\0idx\0"
    "cleanChanged\0clean\0canUndoChanged\0"
    "canUndo\0canRedoChanged\0canRedo\0"
    "undoTextChanged\0undoText\0redoTextChanged\0"
    "redoText\0undo\0redo\0setActiveStack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QUndoGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       5,    1,   67,    2, 0x06 /* Public */,
       7,    1,   70,    2, 0x06 /* Public */,
       9,    1,   73,    2, 0x06 /* Public */,
      11,    1,   76,    2, 0x06 /* Public */,
      13,    1,   79,    2, 0x06 /* Public */,
      15,    1,   82,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,   85,    2, 0x0a /* Public */,
      18,    0,   86,    2, 0x0a /* Public */,
      19,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QUndoGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QUndoGroup *_t = static_cast<QUndoGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activeStackChanged((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        case 1: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cleanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->canUndoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->canRedoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->undoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->redoTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->undo(); break;
        case 8: _t->redo(); break;
        case 9: _t->setActiveStack((*reinterpret_cast< QUndoStack*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QUndoGroup::*_t)(QUndoStack * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::activeStackChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::indexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::cleanChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::canUndoChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::canRedoChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::undoTextChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QUndoGroup::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QUndoGroup::redoTextChanged)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject QUndoGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QUndoGroup.data,
      qt_meta_data_QUndoGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QUndoGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QUndoGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QUndoGroup.stringdata0))
        return static_cast<void*>(const_cast< QUndoGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QUndoGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void QUndoGroup::activeStackChanged(QUndoStack * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QUndoGroup::indexChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QUndoGroup::cleanChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QUndoGroup::canUndoChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QUndoGroup::canRedoChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QUndoGroup::undoTextChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QUndoGroup::redoTextChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
