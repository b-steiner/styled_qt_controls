/****************************************************************************
** Meta object code from reading C++ file 'qhistorystate.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qhistorystate.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhistorystate.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHistoryState_t {
    QByteArrayData data[13];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHistoryState_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHistoryState_t qt_meta_stringdata_QHistoryState = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QHistoryState"
QT_MOC_LITERAL(1, 14, 24), // "defaultTransitionChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "defaultStateChanged"
QT_MOC_LITERAL(4, 60, 18), // "historyTypeChanged"
QT_MOC_LITERAL(5, 79, 12), // "defaultState"
QT_MOC_LITERAL(6, 92, 15), // "QAbstractState*"
QT_MOC_LITERAL(7, 108, 17), // "defaultTransition"
QT_MOC_LITERAL(8, 126, 20), // "QAbstractTransition*"
QT_MOC_LITERAL(9, 147, 11), // "historyType"
QT_MOC_LITERAL(10, 159, 11), // "HistoryType"
QT_MOC_LITERAL(11, 171, 14), // "ShallowHistory"
QT_MOC_LITERAL(12, 186, 11) // "DeepHistory"

    },
    "QHistoryState\0defaultTransitionChanged\0"
    "\0defaultStateChanged\0historyTypeChanged\0"
    "defaultState\0QAbstractState*\0"
    "defaultTransition\0QAbstractTransition*\0"
    "historyType\0HistoryType\0ShallowHistory\0"
    "DeepHistory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHistoryState[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   32, // properties
       1,   44, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,
       4,    0,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       5, 0x80000000 | 6, 0x0049510b,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x0049510b,

 // properties: notify_signal_id
       1,
       0,
       2,

 // enums: name, flags, count, data
      10, 0x0,    2,   48,

 // enum data: key, value
      11, uint(QHistoryState::ShallowHistory),
      12, uint(QHistoryState::DeepHistory),

       0        // eod
};

void QHistoryState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHistoryState *_t = static_cast<QHistoryState *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->defaultTransitionChanged(QPrivateSignal()); break;
        case 1: _t->defaultStateChanged(QPrivateSignal()); break;
        case 2: _t->historyTypeChanged(QPrivateSignal()); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QHistoryState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHistoryState::defaultTransitionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QHistoryState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHistoryState::defaultStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QHistoryState::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QHistoryState::historyTypeChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractState* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QHistoryState *_t = static_cast<QHistoryState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QAbstractState**>(_v) = _t->defaultState(); break;
        case 1: *reinterpret_cast< QAbstractTransition**>(_v) = _t->defaultTransition(); break;
        case 2: *reinterpret_cast< HistoryType*>(_v) = _t->historyType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QHistoryState *_t = static_cast<QHistoryState *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDefaultState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 1: _t->setDefaultTransition(*reinterpret_cast< QAbstractTransition**>(_v)); break;
        case 2: _t->setHistoryType(*reinterpret_cast< HistoryType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QHistoryState::staticMetaObject = {
    { &QAbstractState::staticMetaObject, qt_meta_stringdata_QHistoryState.data,
      qt_meta_data_QHistoryState,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHistoryState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHistoryState::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHistoryState.stringdata0))
        return static_cast<void*>(const_cast< QHistoryState*>(this));
    return QAbstractState::qt_metacast(_clname);
}

int QHistoryState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractState::qt_metacall(_c, _id, _a);
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
void QHistoryState::defaultTransitionChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QHistoryState::defaultStateChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QHistoryState::historyTypeChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
