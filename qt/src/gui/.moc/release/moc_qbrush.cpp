/****************************************************************************
** Meta object code from reading C++ file 'qbrush.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../painting/qbrush.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qbrush.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGradient_t {
    QByteArrayData data[14];
    char stringdata0[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGradient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGradient_t qt_meta_stringdata_QGradient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QGradient"
QT_MOC_LITERAL(1, 10, 4), // "Type"
QT_MOC_LITERAL(2, 15, 14), // "LinearGradient"
QT_MOC_LITERAL(3, 30, 14), // "RadialGradient"
QT_MOC_LITERAL(4, 45, 15), // "ConicalGradient"
QT_MOC_LITERAL(5, 61, 10), // "NoGradient"
QT_MOC_LITERAL(6, 72, 6), // "Spread"
QT_MOC_LITERAL(7, 79, 9), // "PadSpread"
QT_MOC_LITERAL(8, 89, 13), // "ReflectSpread"
QT_MOC_LITERAL(9, 103, 12), // "RepeatSpread"
QT_MOC_LITERAL(10, 116, 14), // "CoordinateMode"
QT_MOC_LITERAL(11, 131, 11), // "LogicalMode"
QT_MOC_LITERAL(12, 143, 19), // "StretchToDeviceMode"
QT_MOC_LITERAL(13, 163, 18) // "ObjectBoundingMode"

    },
    "QGradient\0Type\0LinearGradient\0"
    "RadialGradient\0ConicalGradient\0"
    "NoGradient\0Spread\0PadSpread\0ReflectSpread\0"
    "RepeatSpread\0CoordinateMode\0LogicalMode\0"
    "StretchToDeviceMode\0ObjectBoundingMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGradient[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    4,   26,
       6, 0x0,    3,   34,
      10, 0x0,    3,   40,

 // enum data: key, value
       2, uint(QGradient::LinearGradient),
       3, uint(QGradient::RadialGradient),
       4, uint(QGradient::ConicalGradient),
       5, uint(QGradient::NoGradient),
       7, uint(QGradient::PadSpread),
       8, uint(QGradient::ReflectSpread),
       9, uint(QGradient::RepeatSpread),
      11, uint(QGradient::LogicalMode),
      12, uint(QGradient::StretchToDeviceMode),
      13, uint(QGradient::ObjectBoundingMode),

       0        // eod
};

const QMetaObject QGradient::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QGradient.data,
      qt_meta_data_QGradient,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
