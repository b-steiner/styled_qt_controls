/****************************************************************************
** Meta object code from reading C++ file 'qgesture.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qgesture.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgesture.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGesture_t {
    QByteArrayData data[9];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGesture_t qt_meta_stringdata_QGesture = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QGesture"
QT_MOC_LITERAL(1, 9, 5), // "state"
QT_MOC_LITERAL(2, 15, 16), // "Qt::GestureState"
QT_MOC_LITERAL(3, 32, 11), // "gestureType"
QT_MOC_LITERAL(4, 44, 15), // "Qt::GestureType"
QT_MOC_LITERAL(5, 60, 19), // "gestureCancelPolicy"
QT_MOC_LITERAL(6, 80, 29), // "QGesture::GestureCancelPolicy"
QT_MOC_LITERAL(7, 110, 7), // "hotSpot"
QT_MOC_LITERAL(8, 118, 10) // "hasHotSpot"

    },
    "QGesture\0state\0Qt::GestureState\0"
    "gestureType\0Qt::GestureType\0"
    "gestureCancelPolicy\0QGesture::GestureCancelPolicy\0"
    "hotSpot\0hasHotSpot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00095009,
       3, 0x80000000 | 4, 0x00095009,
       5, 0x80000000 | 6, 0x0009510b,
       7, QMetaType::QPointF, 0x00095107,
       8, QMetaType::Bool, 0x00095001,

       0        // eod
};

void QGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QGesture::GestureCancelPolicy >(); break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureState >(); break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Qt::GestureType >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGesture *_t = static_cast<QGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::GestureState*>(_v) = _t->state(); break;
        case 1: *reinterpret_cast< Qt::GestureType*>(_v) = _t->gestureType(); break;
        case 2: *reinterpret_cast< QGesture::GestureCancelPolicy*>(_v) = _t->gestureCancelPolicy(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->hotSpot(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->hasHotSpot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGesture *_t = static_cast<QGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setGestureCancelPolicy(*reinterpret_cast< QGesture::GestureCancelPolicy*>(_v)); break;
        case 3: _t->setHotSpot(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QGesture *_t = static_cast<QGesture *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 3: _t->unsetHotSpot(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
}

const QMetaObject QGesture::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGesture.data,
      qt_meta_data_QGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGesture.stringdata0))
        return static_cast<void*>(const_cast< QGesture*>(this));
    return QObject::qt_metacast(_clname);
}

int QGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QPanGesture_t {
    QByteArrayData data[7];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPanGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPanGesture_t qt_meta_stringdata_QPanGesture = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QPanGesture"
QT_MOC_LITERAL(1, 12, 10), // "lastOffset"
QT_MOC_LITERAL(2, 23, 6), // "offset"
QT_MOC_LITERAL(3, 30, 5), // "delta"
QT_MOC_LITERAL(4, 36, 12), // "acceleration"
QT_MOC_LITERAL(5, 49, 18), // "horizontalVelocity"
QT_MOC_LITERAL(6, 68, 16) // "verticalVelocity"

    },
    "QPanGesture\0lastOffset\0offset\0delta\0"
    "acceleration\0horizontalVelocity\0"
    "verticalVelocity"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPanGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,
       2, QMetaType::QPointF, 0x00095103,
       3, QMetaType::QPointF, 0x00085001,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,

       0        // eod
};

void QPanGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QPanGesture *_t = static_cast<QPanGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->lastOffset(); break;
        case 1: *reinterpret_cast< QPointF*>(_v) = _t->offset(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->delta(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->acceleration(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->QPanGesture::d_func()->horizontalVelocity(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->QPanGesture::d_func()->verticalVelocity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPanGesture *_t = static_cast<QPanGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLastOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 1: _t->setOffset(*reinterpret_cast< QPointF*>(_v)); break;
        case 3: _t->setAcceleration(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->QPanGesture::d_func()->setHorizontalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->QPanGesture::d_func()->setVerticalVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPanGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPanGesture.data,
      qt_meta_data_QPanGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPanGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPanGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPanGesture.stringdata0))
        return static_cast<void*>(const_cast< QPanGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPanGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QPinchGesture_t {
    QByteArrayData data[17];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPinchGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPinchGesture_t qt_meta_stringdata_QPinchGesture = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QPinchGesture"
QT_MOC_LITERAL(1, 14, 16), // "totalChangeFlags"
QT_MOC_LITERAL(2, 31, 11), // "ChangeFlags"
QT_MOC_LITERAL(3, 43, 11), // "changeFlags"
QT_MOC_LITERAL(4, 55, 16), // "totalScaleFactor"
QT_MOC_LITERAL(5, 72, 15), // "lastScaleFactor"
QT_MOC_LITERAL(6, 88, 11), // "scaleFactor"
QT_MOC_LITERAL(7, 100, 18), // "totalRotationAngle"
QT_MOC_LITERAL(8, 119, 17), // "lastRotationAngle"
QT_MOC_LITERAL(9, 137, 13), // "rotationAngle"
QT_MOC_LITERAL(10, 151, 16), // "startCenterPoint"
QT_MOC_LITERAL(11, 168, 15), // "lastCenterPoint"
QT_MOC_LITERAL(12, 184, 11), // "centerPoint"
QT_MOC_LITERAL(13, 196, 10), // "ChangeFlag"
QT_MOC_LITERAL(14, 207, 18), // "ScaleFactorChanged"
QT_MOC_LITERAL(15, 226, 20), // "RotationAngleChanged"
QT_MOC_LITERAL(16, 247, 18) // "CenterPointChanged"

    },
    "QPinchGesture\0totalChangeFlags\0"
    "ChangeFlags\0changeFlags\0totalScaleFactor\0"
    "lastScaleFactor\0scaleFactor\0"
    "totalRotationAngle\0lastRotationAngle\0"
    "rotationAngle\0startCenterPoint\0"
    "lastCenterPoint\0centerPoint\0ChangeFlag\0"
    "ScaleFactorChanged\0RotationAngleChanged\0"
    "CenterPointChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPinchGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
      11,   14, // properties
       2,   47, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 2, 0x0009510b,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,
       6, QMetaType::QReal, 0x00095103,
       7, QMetaType::QReal, 0x00095103,
       8, QMetaType::QReal, 0x00095103,
       9, QMetaType::QReal, 0x00095103,
      10, QMetaType::QPointF, 0x00095103,
      11, QMetaType::QPointF, 0x00095103,
      12, QMetaType::QPointF, 0x00095103,

 // enums: name, flags, count, data
      13, 0x1,    3,   55,
       2, 0x1,    3,   61,

 // enum data: key, value
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),
      14, uint(QPinchGesture::ScaleFactorChanged),
      15, uint(QPinchGesture::RotationAngleChanged),
      16, uint(QPinchGesture::CenterPointChanged),

       0        // eod
};

void QPinchGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QPinchGesture *_t = static_cast<QPinchGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast<int*>(_v) = QFlag(_t->totalChangeFlags()); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->changeFlags()); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->totalScaleFactor(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->lastScaleFactor(); break;
        case 4: *reinterpret_cast< qreal*>(_v) = _t->scaleFactor(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = _t->totalRotationAngle(); break;
        case 6: *reinterpret_cast< qreal*>(_v) = _t->lastRotationAngle(); break;
        case 7: *reinterpret_cast< qreal*>(_v) = _t->rotationAngle(); break;
        case 8: *reinterpret_cast< QPointF*>(_v) = _t->startCenterPoint(); break;
        case 9: *reinterpret_cast< QPointF*>(_v) = _t->lastCenterPoint(); break;
        case 10: *reinterpret_cast< QPointF*>(_v) = _t->centerPoint(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QPinchGesture *_t = static_cast<QPinchGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTotalChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 1: _t->setChangeFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setTotalScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setLastScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 4: _t->setScaleFactor(*reinterpret_cast< qreal*>(_v)); break;
        case 5: _t->setTotalRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 6: _t->setLastRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 7: _t->setRotationAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 8: _t->setStartCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 9: _t->setLastCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        case 10: _t->setCenterPoint(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QPinchGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QPinchGesture.data,
      qt_meta_data_QPinchGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPinchGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPinchGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPinchGesture.stringdata0))
        return static_cast<void*>(const_cast< QPinchGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QPinchGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_QSwipeGesture_t {
    QByteArrayData data[11];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSwipeGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSwipeGesture_t qt_meta_stringdata_QSwipeGesture = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QSwipeGesture"
QT_MOC_LITERAL(1, 14, 19), // "horizontalDirection"
QT_MOC_LITERAL(2, 34, 14), // "SwipeDirection"
QT_MOC_LITERAL(3, 49, 17), // "verticalDirection"
QT_MOC_LITERAL(4, 67, 10), // "swipeAngle"
QT_MOC_LITERAL(5, 78, 8), // "velocity"
QT_MOC_LITERAL(6, 87, 11), // "NoDirection"
QT_MOC_LITERAL(7, 99, 4), // "Left"
QT_MOC_LITERAL(8, 104, 5), // "Right"
QT_MOC_LITERAL(9, 110, 2), // "Up"
QT_MOC_LITERAL(10, 113, 4) // "Down"

    },
    "QSwipeGesture\0horizontalDirection\0"
    "SwipeDirection\0verticalDirection\0"
    "swipeAngle\0velocity\0NoDirection\0Left\0"
    "Right\0Up\0Down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSwipeGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   26, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x00085009,
       3, 0x80000000 | 2, 0x00085009,
       4, QMetaType::QReal, 0x00095103,
       5, QMetaType::QReal, 0x00095103,

 // enums: name, flags, count, data
       2, 0x0,    5,   30,

 // enum data: key, value
       6, uint(QSwipeGesture::NoDirection),
       7, uint(QSwipeGesture::Left),
       8, uint(QSwipeGesture::Right),
       9, uint(QSwipeGesture::Up),
      10, uint(QSwipeGesture::Down),

       0        // eod
};

void QSwipeGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QSwipeGesture *_t = static_cast<QSwipeGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< SwipeDirection*>(_v) = _t->horizontalDirection(); break;
        case 1: *reinterpret_cast< SwipeDirection*>(_v) = _t->verticalDirection(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->swipeAngle(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = _t->QSwipeGesture::d_func()->velocity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QSwipeGesture *_t = static_cast<QSwipeGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSwipeAngle(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->QSwipeGesture::d_func()->setVelocity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QSwipeGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QSwipeGesture.data,
      qt_meta_data_QSwipeGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSwipeGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSwipeGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSwipeGesture.stringdata0))
        return static_cast<void*>(const_cast< QSwipeGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QSwipeGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QTapGesture_t {
    QByteArrayData data[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapGesture_t qt_meta_stringdata_QTapGesture = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QTapGesture"
QT_MOC_LITERAL(1, 12, 8) // "position"

    },
    "QTapGesture\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,

       0        // eod
};

void QTapGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QTapGesture *_t = static_cast<QTapGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTapGesture *_t = static_cast<QTapGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QTapGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapGesture.data,
      qt_meta_data_QTapGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTapGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTapGesture.stringdata0))
        return static_cast<void*>(const_cast< QTapGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_QTapAndHoldGesture_t {
    QByteArrayData data[2];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTapAndHoldGesture_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTapAndHoldGesture_t qt_meta_stringdata_QTapAndHoldGesture = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QTapAndHoldGesture"
QT_MOC_LITERAL(1, 19, 8) // "position"

    },
    "QTapAndHoldGesture\0position"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTapAndHoldGesture[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       1,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QPointF, 0x00095103,

       0        // eod
};

void QTapAndHoldGesture::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QTapAndHoldGesture *_t = static_cast<QTapAndHoldGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPointF*>(_v) = _t->position(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTapAndHoldGesture *_t = static_cast<QTapAndHoldGesture *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPosition(*reinterpret_cast< QPointF*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QTapAndHoldGesture::staticMetaObject = {
    { &QGesture::staticMetaObject, qt_meta_stringdata_QTapAndHoldGesture.data,
      qt_meta_data_QTapAndHoldGesture,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTapAndHoldGesture::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTapAndHoldGesture::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTapAndHoldGesture.stringdata0))
        return static_cast<void*>(const_cast< QTapAndHoldGesture*>(this));
    return QGesture::qt_metacast(_clname);
}

int QTapAndHoldGesture::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGesture::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
