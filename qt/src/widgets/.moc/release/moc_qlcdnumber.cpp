/****************************************************************************
** Meta object code from reading C++ file 'qlcdnumber.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qlcdnumber.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlcdnumber.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLCDNumber_t {
    QByteArrayData data[26];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLCDNumber_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLCDNumber_t qt_meta_stringdata_QLCDNumber = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QLCDNumber"
QT_MOC_LITERAL(1, 11, 8), // "overflow"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 7), // "display"
QT_MOC_LITERAL(4, 29, 3), // "str"
QT_MOC_LITERAL(5, 33, 3), // "num"
QT_MOC_LITERAL(6, 37, 10), // "setHexMode"
QT_MOC_LITERAL(7, 48, 10), // "setDecMode"
QT_MOC_LITERAL(8, 59, 10), // "setOctMode"
QT_MOC_LITERAL(9, 70, 10), // "setBinMode"
QT_MOC_LITERAL(10, 81, 20), // "setSmallDecimalPoint"
QT_MOC_LITERAL(11, 102, 17), // "smallDecimalPoint"
QT_MOC_LITERAL(12, 120, 10), // "digitCount"
QT_MOC_LITERAL(13, 131, 4), // "mode"
QT_MOC_LITERAL(14, 136, 4), // "Mode"
QT_MOC_LITERAL(15, 141, 12), // "segmentStyle"
QT_MOC_LITERAL(16, 154, 12), // "SegmentStyle"
QT_MOC_LITERAL(17, 167, 5), // "value"
QT_MOC_LITERAL(18, 173, 8), // "intValue"
QT_MOC_LITERAL(19, 182, 3), // "Hex"
QT_MOC_LITERAL(20, 186, 3), // "Dec"
QT_MOC_LITERAL(21, 190, 3), // "Oct"
QT_MOC_LITERAL(22, 194, 3), // "Bin"
QT_MOC_LITERAL(23, 198, 7), // "Outline"
QT_MOC_LITERAL(24, 206, 6), // "Filled"
QT_MOC_LITERAL(25, 213, 4) // "Flat"

    },
    "QLCDNumber\0overflow\0\0display\0str\0num\0"
    "setHexMode\0setDecMode\0setOctMode\0"
    "setBinMode\0setSmallDecimalPoint\0"
    "smallDecimalPoint\0digitCount\0mode\0"
    "Mode\0segmentStyle\0SegmentStyle\0value\0"
    "intValue\0Hex\0Dec\0Oct\0Bin\0Outline\0"
    "Filled\0Flat"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLCDNumber[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       6,   76, // properties
       2,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   60,    2, 0x0a /* Public */,
       3,    1,   63,    2, 0x0a /* Public */,
       3,    1,   66,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    1,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      11, QMetaType::Bool, 0x00095103,
      12, QMetaType::Int, 0x00095103,
      13, 0x80000000 | 14, 0x0009510b,
      15, 0x80000000 | 16, 0x0009510b,
      17, QMetaType::Double, 0x00095003,
      18, QMetaType::Int, 0x00095003,

 // enums: name, flags, count, data
      14, 0x0,    4,  102,
      16, 0x0,    3,  110,

 // enum data: key, value
      19, uint(QLCDNumber::Hex),
      20, uint(QLCDNumber::Dec),
      21, uint(QLCDNumber::Oct),
      22, uint(QLCDNumber::Bin),
      23, uint(QLCDNumber::Outline),
      24, uint(QLCDNumber::Filled),
      25, uint(QLCDNumber::Flat),

       0        // eod
};

void QLCDNumber::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLCDNumber *_t = static_cast<QLCDNumber *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->overflow(); break;
        case 1: _t->display((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->display((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->display((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setHexMode(); break;
        case 5: _t->setDecMode(); break;
        case 6: _t->setOctMode(); break;
        case 7: _t->setBinMode(); break;
        case 8: _t->setSmallDecimalPoint((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLCDNumber::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLCDNumber::overflow)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QLCDNumber *_t = static_cast<QLCDNumber *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->smallDecimalPoint(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->digitCount(); break;
        case 2: *reinterpret_cast< Mode*>(_v) = _t->mode(); break;
        case 3: *reinterpret_cast< SegmentStyle*>(_v) = _t->segmentStyle(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->value(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->intValue(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLCDNumber *_t = static_cast<QLCDNumber *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSmallDecimalPoint(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setDigitCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMode(*reinterpret_cast< Mode*>(_v)); break;
        case 3: _t->setSegmentStyle(*reinterpret_cast< SegmentStyle*>(_v)); break;
        case 4: _t->display(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->display(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QLCDNumber::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QLCDNumber.data,
      qt_meta_data_QLCDNumber,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLCDNumber::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLCDNumber::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLCDNumber.stringdata0))
        return static_cast<void*>(const_cast< QLCDNumber*>(this));
    return QFrame::qt_metacast(_clname);
}

int QLCDNumber::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void QLCDNumber::overflow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
