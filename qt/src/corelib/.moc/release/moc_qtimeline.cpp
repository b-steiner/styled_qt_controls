/****************************************************************************
** Meta object code from reading C++ file 'qtimeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tools/qtimeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtimeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTimeLine_t {
    QByteArrayData data[26];
    char stringdata0[258];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTimeLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTimeLine_t qt_meta_stringdata_QTimeLine = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QTimeLine"
QT_MOC_LITERAL(1, 10, 12), // "valueChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 1), // "x"
QT_MOC_LITERAL(4, 26, 12), // "frameChanged"
QT_MOC_LITERAL(5, 39, 12), // "stateChanged"
QT_MOC_LITERAL(6, 52, 16), // "QTimeLine::State"
QT_MOC_LITERAL(7, 69, 8), // "newState"
QT_MOC_LITERAL(8, 78, 8), // "finished"
QT_MOC_LITERAL(9, 87, 5), // "start"
QT_MOC_LITERAL(10, 93, 6), // "resume"
QT_MOC_LITERAL(11, 100, 4), // "stop"
QT_MOC_LITERAL(12, 105, 9), // "setPaused"
QT_MOC_LITERAL(13, 115, 6), // "paused"
QT_MOC_LITERAL(14, 122, 14), // "setCurrentTime"
QT_MOC_LITERAL(15, 137, 4), // "msec"
QT_MOC_LITERAL(16, 142, 15), // "toggleDirection"
QT_MOC_LITERAL(17, 158, 8), // "duration"
QT_MOC_LITERAL(18, 167, 14), // "updateInterval"
QT_MOC_LITERAL(19, 182, 11), // "currentTime"
QT_MOC_LITERAL(20, 194, 9), // "direction"
QT_MOC_LITERAL(21, 204, 9), // "Direction"
QT_MOC_LITERAL(22, 214, 9), // "loopCount"
QT_MOC_LITERAL(23, 224, 10), // "curveShape"
QT_MOC_LITERAL(24, 235, 10), // "CurveShape"
QT_MOC_LITERAL(25, 246, 11) // "easingCurve"

    },
    "QTimeLine\0valueChanged\0\0x\0frameChanged\0"
    "stateChanged\0QTimeLine::State\0newState\0"
    "finished\0start\0resume\0stop\0setPaused\0"
    "paused\0setCurrentTime\0msec\0toggleDirection\0"
    "duration\0updateInterval\0currentTime\0"
    "direction\0Direction\0loopCount\0curveShape\0"
    "CurveShape\0easingCurve"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTimeLine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       7,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,
       5,    1,   70,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   74,    2, 0x0a /* Public */,
      10,    0,   75,    2, 0x0a /* Public */,
      11,    0,   76,    2, 0x0a /* Public */,
      12,    1,   77,    2, 0x0a /* Public */,
      14,    1,   80,    2, 0x0a /* Public */,
      16,    0,   83,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QReal,    3,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,

 // properties: name, type, flags
      17, QMetaType::Int, 0x00095103,
      18, QMetaType::Int, 0x00095103,
      19, QMetaType::Int, 0x00095103,
      20, 0x80000000 | 21, 0x0009510b,
      22, QMetaType::Int, 0x00095103,
      23, 0x80000000 | 24, 0x0009510b,
      25, QMetaType::QEasingCurve, 0x00095103,

       0        // eod
};

void QTimeLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTimeLine *_t = static_cast<QTimeLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< qreal(*)>(_a[1])), QPrivateSignal()); break;
        case 1: _t->frameChanged((*reinterpret_cast< int(*)>(_a[1])), QPrivateSignal()); break;
        case 2: _t->stateChanged((*reinterpret_cast< QTimeLine::State(*)>(_a[1])), QPrivateSignal()); break;
        case 3: _t->finished(QPrivateSignal()); break;
        case 4: _t->start(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        case 7: _t->setPaused((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setCurrentTime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleDirection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTimeLine::*_t)(qreal , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTimeLine::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTimeLine::*_t)(int , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTimeLine::frameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTimeLine::*_t)(QTimeLine::State , QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTimeLine::stateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QTimeLine::*_t)(QPrivateSignal);
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTimeLine::finished)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTimeLine *_t = static_cast<QTimeLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->duration(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->updateInterval(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentTime(); break;
        case 3: *reinterpret_cast< Direction*>(_v) = _t->direction(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->loopCount(); break;
        case 5: *reinterpret_cast< CurveShape*>(_v) = _t->curveShape(); break;
        case 6: *reinterpret_cast< QEasingCurve*>(_v) = _t->easingCurve(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTimeLine *_t = static_cast<QTimeLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDuration(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUpdateInterval(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setCurrentTime(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 4: _t->setLoopCount(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setCurveShape(*reinterpret_cast< CurveShape*>(_v)); break;
        case 6: _t->setEasingCurve(*reinterpret_cast< QEasingCurve*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QTimeLine::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QTimeLine.data,
      qt_meta_data_QTimeLine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTimeLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTimeLine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTimeLine.stringdata0))
        return static_cast<void*>(const_cast< QTimeLine*>(this));
    return QObject::qt_metacast(_clname);
}

int QTimeLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QTimeLine::valueChanged(qreal _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTimeLine::frameChanged(int _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTimeLine::stateChanged(QTimeLine::State _t1, QPrivateSignal)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QTimeLine::finished(QPrivateSignal)
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
