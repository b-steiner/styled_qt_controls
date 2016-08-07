/****************************************************************************
** Meta object code from reading C++ file 'qabstracttransition.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../statemachine/qabstracttransition.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstracttransition.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractTransition_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractTransition_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractTransition_t qt_meta_stringdata_QAbstractTransition = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QAbstractTransition"
QT_MOC_LITERAL(1, 20, 9), // "triggered"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 18), // "targetStateChanged"
QT_MOC_LITERAL(4, 50, 19), // "targetStatesChanged"
QT_MOC_LITERAL(5, 70, 11), // "sourceState"
QT_MOC_LITERAL(6, 82, 7), // "QState*"
QT_MOC_LITERAL(7, 90, 11), // "targetState"
QT_MOC_LITERAL(8, 102, 15), // "QAbstractState*"
QT_MOC_LITERAL(9, 118, 12), // "targetStates"
QT_MOC_LITERAL(10, 131, 22), // "QList<QAbstractState*>"
QT_MOC_LITERAL(11, 154, 14), // "transitionType"
QT_MOC_LITERAL(12, 169, 14), // "TransitionType"
QT_MOC_LITERAL(13, 184, 18), // "ExternalTransition"
QT_MOC_LITERAL(14, 203, 18) // "InternalTransition"

    },
    "QAbstractTransition\0triggered\0\0"
    "targetStateChanged\0targetStatesChanged\0"
    "sourceState\0QState*\0targetState\0"
    "QAbstractState*\0targetStates\0"
    "QList<QAbstractState*>\0transitionType\0"
    "TransitionType\0ExternalTransition\0"
    "InternalTransition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractTransition[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   32, // properties
       1,   52, // enums/sets
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
       5, 0x80000000 | 6, 0x00095009,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 10, 0x0049510b,
      11, 0x80000000 | 12, 0x0089510b,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

 // properties: revision
       0,
       0,
       0,
       1,

 // enums: name, flags, count, data
      12, 0x0,    2,   56,

 // enum data: key, value
      13, uint(QAbstractTransition::ExternalTransition),
      14, uint(QAbstractTransition::InternalTransition),

       0        // eod
};

void QAbstractTransition::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractTransition *_t = static_cast<QAbstractTransition *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->triggered(QPrivateSignal()); break;
        case 1: _t->targetStateChanged(QPrivateSignal()); break;
        case 2: _t->targetStatesChanged(QPrivateSignal()); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractTransition::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTransition::triggered)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractTransition::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTransition::targetStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractTransition::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTransition::targetStatesChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractTransition *_t = static_cast<QAbstractTransition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QState**>(_v) = _t->sourceState(); break;
        case 1: *reinterpret_cast< QAbstractState**>(_v) = _t->targetState(); break;
        case 2: *reinterpret_cast< QList<QAbstractState*>*>(_v) = _t->targetStates(); break;
        case 3: *reinterpret_cast< TransitionType*>(_v) = _t->transitionType(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractTransition *_t = static_cast<QAbstractTransition *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setTargetState(*reinterpret_cast< QAbstractState**>(_v)); break;
        case 2: _t->setTargetStates(*reinterpret_cast< QList<QAbstractState*>*>(_v)); break;
        case 3: _t->setTransitionType(*reinterpret_cast< TransitionType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

const QMetaObject QAbstractTransition::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractTransition.data,
      qt_meta_data_QAbstractTransition,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractTransition::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractTransition::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractTransition.stringdata0))
        return static_cast<void*>(const_cast< QAbstractTransition*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractTransition::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractTransition::triggered(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QAbstractTransition::targetStateChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QAbstractTransition::targetStatesChanged(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
