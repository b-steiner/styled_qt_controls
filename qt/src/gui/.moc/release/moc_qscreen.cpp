/****************************************************************************
** Meta object code from reading C++ file 'qscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QScreen_t {
    QByteArrayData data[36];
    char stringdata0[584];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QScreen_t qt_meta_stringdata_QScreen = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QScreen"
QT_MOC_LITERAL(1, 8, 15), // "geometryChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "geometry"
QT_MOC_LITERAL(4, 34, 24), // "availableGeometryChanged"
QT_MOC_LITERAL(5, 59, 19), // "physicalSizeChanged"
QT_MOC_LITERAL(6, 79, 4), // "size"
QT_MOC_LITERAL(7, 84, 26), // "physicalDotsPerInchChanged"
QT_MOC_LITERAL(8, 111, 3), // "dpi"
QT_MOC_LITERAL(9, 115, 25), // "logicalDotsPerInchChanged"
QT_MOC_LITERAL(10, 141, 22), // "virtualGeometryChanged"
QT_MOC_LITERAL(11, 164, 4), // "rect"
QT_MOC_LITERAL(12, 169, 25), // "primaryOrientationChanged"
QT_MOC_LITERAL(13, 195, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(14, 217, 11), // "orientation"
QT_MOC_LITERAL(15, 229, 18), // "orientationChanged"
QT_MOC_LITERAL(16, 248, 18), // "refreshRateChanged"
QT_MOC_LITERAL(17, 267, 11), // "refreshRate"
QT_MOC_LITERAL(18, 279, 4), // "name"
QT_MOC_LITERAL(19, 284, 5), // "depth"
QT_MOC_LITERAL(20, 290, 13), // "availableSize"
QT_MOC_LITERAL(21, 304, 11), // "virtualSize"
QT_MOC_LITERAL(22, 316, 20), // "availableVirtualSize"
QT_MOC_LITERAL(23, 337, 17), // "availableGeometry"
QT_MOC_LITERAL(24, 355, 15), // "virtualGeometry"
QT_MOC_LITERAL(25, 371, 24), // "availableVirtualGeometry"
QT_MOC_LITERAL(26, 396, 12), // "physicalSize"
QT_MOC_LITERAL(27, 409, 20), // "physicalDotsPerInchX"
QT_MOC_LITERAL(28, 430, 20), // "physicalDotsPerInchY"
QT_MOC_LITERAL(29, 451, 19), // "physicalDotsPerInch"
QT_MOC_LITERAL(30, 471, 19), // "logicalDotsPerInchX"
QT_MOC_LITERAL(31, 491, 19), // "logicalDotsPerInchY"
QT_MOC_LITERAL(32, 511, 18), // "logicalDotsPerInch"
QT_MOC_LITERAL(33, 530, 16), // "devicePixelRatio"
QT_MOC_LITERAL(34, 547, 18), // "primaryOrientation"
QT_MOC_LITERAL(35, 566, 17) // "nativeOrientation"

    },
    "QScreen\0geometryChanged\0\0geometry\0"
    "availableGeometryChanged\0physicalSizeChanged\0"
    "size\0physicalDotsPerInchChanged\0dpi\0"
    "logicalDotsPerInchChanged\0"
    "virtualGeometryChanged\0rect\0"
    "primaryOrientationChanged\0"
    "Qt::ScreenOrientation\0orientation\0"
    "orientationChanged\0refreshRateChanged\0"
    "refreshRate\0name\0depth\0availableSize\0"
    "virtualSize\0availableVirtualSize\0"
    "availableGeometry\0virtualGeometry\0"
    "availableVirtualGeometry\0physicalSize\0"
    "physicalDotsPerInchX\0physicalDotsPerInchY\0"
    "physicalDotsPerInch\0logicalDotsPerInchX\0"
    "logicalDotsPerInchY\0logicalDotsPerInch\0"
    "devicePixelRatio\0primaryOrientation\0"
    "nativeOrientation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QScreen[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      22,   86, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       7,    1,   68,    2, 0x06 /* Public */,
       9,    1,   71,    2, 0x06 /* Public */,
      10,    1,   74,    2, 0x06 /* Public */,
      12,    1,   77,    2, 0x06 /* Public */,
      15,    1,   80,    2, 0x06 /* Public */,
      16,    1,   83,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QRect,    3,
    QMetaType::Void, QMetaType::QSizeF,    6,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QReal,    8,
    QMetaType::Void, QMetaType::QRect,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QReal,   17,

 // properties: name, type, flags
      18, QMetaType::QString, 0x00095401,
      19, QMetaType::Int, 0x00095401,
       6, QMetaType::QSize, 0x00495001,
      20, QMetaType::QSize, 0x00495001,
      21, QMetaType::QSize, 0x00495001,
      22, QMetaType::QSize, 0x00495001,
       3, QMetaType::QRect, 0x00495001,
      23, QMetaType::QRect, 0x00495001,
      24, QMetaType::QRect, 0x00495001,
      25, QMetaType::QRect, 0x00495001,
      26, QMetaType::QSizeF, 0x00495001,
      27, QMetaType::QReal, 0x00495001,
      28, QMetaType::QReal, 0x00495001,
      29, QMetaType::QReal, 0x00495001,
      30, QMetaType::QReal, 0x00495001,
      31, QMetaType::QReal, 0x00495001,
      32, QMetaType::QReal, 0x00495001,
      33, QMetaType::QReal, 0x00495001,
      34, 0x80000000 | 13, 0x00495009,
      14, 0x80000000 | 13, 0x00495009,
      35, 0x80000000 | 13, 0x00095009,
      17, QMetaType::QReal, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       5,
       5,
       0,
       1,
       5,
       5,
       2,
       3,
       3,
       3,
       4,
       4,
       4,
       3,
       6,
       7,
       0,
       8,

       0        // eod
};

void QScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QScreen *_t = static_cast<QScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 1: _t->availableGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 2: _t->physicalSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 3: _t->physicalDotsPerInchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->logicalDotsPerInchChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->virtualGeometryChanged((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 6: _t->primaryOrientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 7: _t->orientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 8: _t->refreshRateChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QScreen::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::geometryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::availableGeometryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(const QSizeF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::physicalSizeChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::physicalDotsPerInchChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::logicalDotsPerInchChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::virtualGeometryChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(Qt::ScreenOrientation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::primaryOrientationChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(Qt::ScreenOrientation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::orientationChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QScreen::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QScreen::refreshRateChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QScreen *_t = static_cast<QScreen *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->depth(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->size(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->availableSize(); break;
        case 4: *reinterpret_cast< QSize*>(_v) = _t->virtualSize(); break;
        case 5: *reinterpret_cast< QSize*>(_v) = _t->availableVirtualSize(); break;
        case 6: *reinterpret_cast< QRect*>(_v) = _t->geometry(); break;
        case 7: *reinterpret_cast< QRect*>(_v) = _t->availableGeometry(); break;
        case 8: *reinterpret_cast< QRect*>(_v) = _t->virtualGeometry(); break;
        case 9: *reinterpret_cast< QRect*>(_v) = _t->availableVirtualGeometry(); break;
        case 10: *reinterpret_cast< QSizeF*>(_v) = _t->physicalSize(); break;
        case 11: *reinterpret_cast< qreal*>(_v) = _t->physicalDotsPerInchX(); break;
        case 12: *reinterpret_cast< qreal*>(_v) = _t->physicalDotsPerInchY(); break;
        case 13: *reinterpret_cast< qreal*>(_v) = _t->physicalDotsPerInch(); break;
        case 14: *reinterpret_cast< qreal*>(_v) = _t->logicalDotsPerInchX(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->logicalDotsPerInchY(); break;
        case 16: *reinterpret_cast< qreal*>(_v) = _t->logicalDotsPerInch(); break;
        case 17: *reinterpret_cast< qreal*>(_v) = _t->devicePixelRatio(); break;
        case 18: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->primaryOrientation(); break;
        case 19: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->orientation(); break;
        case 20: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->nativeOrientation(); break;
        case 21: *reinterpret_cast< qreal*>(_v) = _t->refreshRate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QScreen::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QScreen.data,
      qt_meta_data_QScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QScreen.stringdata0))
        return static_cast<void*>(const_cast< QScreen*>(this));
    return QObject::qt_metacast(_clname);
}

int QScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 22;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 22;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QScreen::geometryChanged(const QRect & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QScreen::availableGeometryChanged(const QRect & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QScreen::physicalSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QScreen::physicalDotsPerInchChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QScreen::logicalDotsPerInchChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QScreen::virtualGeometryChanged(const QRect & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QScreen::primaryOrientationChanged(Qt::ScreenOrientation _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QScreen::orientationChanged(Qt::ScreenOrientation _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QScreen::refreshRateChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
