/****************************************************************************
** Meta object code from reading C++ file 'qbuttongroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qbuttongroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbuttongroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QButtonGroup_t {
    QByteArrayData data[8];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QButtonGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QButtonGroup_t qt_meta_stringdata_QButtonGroup = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QButtonGroup"
QT_MOC_LITERAL(1, 13, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 45, 13), // "buttonPressed"
QT_MOC_LITERAL(5, 59, 14), // "buttonReleased"
QT_MOC_LITERAL(6, 74, 13), // "buttonToggled"
QT_MOC_LITERAL(7, 88, 9) // "exclusive"

    },
    "QButtonGroup\0buttonClicked\0\0"
    "QAbstractButton*\0buttonPressed\0"
    "buttonReleased\0buttonToggled\0exclusive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QButtonGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       1,   82, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    1,   57,    2, 0x06 /* Public */,
       4,    1,   60,    2, 0x06 /* Public */,
       4,    1,   63,    2, 0x06 /* Public */,
       5,    1,   66,    2, 0x06 /* Public */,
       5,    1,   69,    2, 0x06 /* Public */,
       6,    2,   72,    2, 0x06 /* Public */,
       6,    2,   77,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QButtonGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QButtonGroup *_t = static_cast<QButtonGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->buttonClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->buttonPressed((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->buttonPressed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->buttonReleased((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 5: _t->buttonReleased((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->buttonToggled((*reinterpret_cast< QAbstractButton*(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->buttonToggled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QButtonGroup::*_t)(QAbstractButton * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(QAbstractButton * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonPressed)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonPressed)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(QAbstractButton * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonReleased)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonReleased)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(QAbstractButton * , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonToggled)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QButtonGroup::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QButtonGroup::buttonToggled)) {
                *result = 7;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QButtonGroup *_t = static_cast<QButtonGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->exclusive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QButtonGroup *_t = static_cast<QButtonGroup *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setExclusive(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QButtonGroup::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QButtonGroup.data,
      qt_meta_data_QButtonGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QButtonGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QButtonGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QButtonGroup.stringdata0))
        return static_cast<void*>(const_cast< QButtonGroup*>(this));
    return QObject::qt_metacast(_clname);
}

int QButtonGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QButtonGroup::buttonClicked(QAbstractButton * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QButtonGroup::buttonClicked(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QButtonGroup::buttonPressed(QAbstractButton * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QButtonGroup::buttonPressed(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QButtonGroup::buttonReleased(QAbstractButton * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QButtonGroup::buttonReleased(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QButtonGroup::buttonToggled(QAbstractButton * _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QButtonGroup::buttonToggled(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
