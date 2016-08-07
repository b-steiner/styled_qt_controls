/****************************************************************************
** Meta object code from reading C++ file 'qstate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qstate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QState_t {
    QByteArrayData data[17];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QState_t qt_meta_stringdata_QState = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QState"
QT_MOC_LITERAL(1, 7, 8), // "finished"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 18), // "propertiesAssigned"
QT_MOC_LITERAL(4, 36, 16), // "childModeChanged"
QT_MOC_LITERAL(5, 53, 19), // "initialStateChanged"
QT_MOC_LITERAL(6, 73, 17), // "errorStateChanged"
QT_MOC_LITERAL(7, 91, 12), // "initialState"
QT_MOC_LITERAL(8, 104, 15), // "QAbstractState*"
QT_MOC_LITERAL(9, 120, 10), // "errorState"
QT_MOC_LITERAL(10, 131, 9), // "childMode"
QT_MOC_LITERAL(11, 141, 9), // "ChildMode"
QT_MOC_LITERAL(12, 151, 15), // "ExclusiveStates"
QT_MOC_LITERAL(13, 167, 14), // "ParallelStates"
QT_MOC_LITERAL(14, 182, 13), // "RestorePolicy"
QT_MOC_LITERAL(15, 196, 21), // "DontRestoreProperties"
QT_MOC_LITERAL(16, 218, 17) // "RestoreProperties"

    },
    "QState\0finished\0\0propertiesAssigned\0"
    "childModeChanged\0initialStateChanged\0"
    "errorStateChanged\0initialState\0"
    "QAbstractState*\0errorState\0childMode\0"
    "ChildMode\0ExclusiveStates\0ParallelStates\0"
    "RestorePolicy\0DontRestoreProperties\0"
    "RestoreProperties"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   44, // properties
       2,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,
       5,    0,   42,    2, 0x06 /* Public */,
       6,    0,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      10, 0x80000000 | 11, 0x0049510b,

 // properties: notify_signal_id
       3,
       4,
       2,

 // enums: name, flags, count, data
      11, 0x0,    2,   64,
      14, 0x0,    2,   68,

 // enum data: key, value
      12, uint(QState::ExclusiveStates),
      13, uint(QState::ParallelStates),
      15, uint(QState::DontRestoreProperties),
      16, uint(QState::RestoreProperties),

       0        // eod
};

void QState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QState *_t = static_cast<QState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished(QPrivateSignal()); break;
        case 1: _t->propertiesAssigned(QPrivateSignal()); break;
        case 2: _t->childModeChanged(QPrivateSignal()); break;
        case 3: _t->initialStateChanged(QPrivateSignal()); break;
        case 4: _t->errorStateChanged(QPrivateSignal()); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::finished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::propertiesAssigned)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::childModeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::initialStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QState::errorStateChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QState *_t = static_cast<QState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractState**>(_v) = _t->initialState(); break;
        case 1: *reinterpret_cast< QAbstractState**>(_v) = _t->errorState(); break;
        case 2: *reinterpret_cast< ChildMode*>(_v) = _t->childMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QState *_t = static_cast<QState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInitialState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 1: _t->setErrorState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 2: _t->setChildMode(*reinterpret_cast< ChildMode*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QState::staticMetaObject = {
    { &QAbstractState::staticMetaObject, qt_meta_stringdata_QState.data,
      qt_meta_data_QState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QState.stringdata0))
        return static_cast<void*>(const_cast< QState*>(this));
    return QAbstractState::qt_metacast(_clname);
}

int QState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractState::qt_metacall(_c, _id, _a);
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
void QState::finished(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QState::propertiesAssigned(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QState::childModeChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QState::initialStateChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void QState::errorStateChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
