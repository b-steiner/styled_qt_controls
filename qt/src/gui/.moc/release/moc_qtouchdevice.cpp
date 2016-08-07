/****************************************************************************
** Meta object code from reading C++ file 'qtouchdevice.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qtouchdevice.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtouchdevice.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTouchDevice_t {
    QByteArrayData data[12];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTouchDevice_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTouchDevice_t qt_meta_stringdata_QTouchDevice = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QTouchDevice"
QT_MOC_LITERAL(1, 13, 10), // "DeviceType"
QT_MOC_LITERAL(2, 24, 11), // "TouchScreen"
QT_MOC_LITERAL(3, 36, 8), // "TouchPad"
QT_MOC_LITERAL(4, 45, 14), // "CapabilityFlag"
QT_MOC_LITERAL(5, 60, 8), // "Position"
QT_MOC_LITERAL(6, 69, 4), // "Area"
QT_MOC_LITERAL(7, 74, 8), // "Pressure"
QT_MOC_LITERAL(8, 83, 8), // "Velocity"
QT_MOC_LITERAL(9, 92, 12), // "RawPositions"
QT_MOC_LITERAL(10, 105, 18), // "NormalizedPosition"
QT_MOC_LITERAL(11, 124, 14) // "MouseEmulation"

    },
    "QTouchDevice\0DeviceType\0TouchScreen\0"
    "TouchPad\0CapabilityFlag\0Position\0Area\0"
    "Pressure\0Velocity\0RawPositions\0"
    "NormalizedPosition\0MouseEmulation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTouchDevice[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    2,   22,
       4, 0x1,    7,   26,

 // enum data: key, value
       2, uint(QTouchDevice::TouchScreen),
       3, uint(QTouchDevice::TouchPad),
       5, uint(QTouchDevice::Position),
       6, uint(QTouchDevice::Area),
       7, uint(QTouchDevice::Pressure),
       8, uint(QTouchDevice::Velocity),
       9, uint(QTouchDevice::RawPositions),
      10, uint(QTouchDevice::NormalizedPosition),
      11, uint(QTouchDevice::MouseEmulation),

       0        // eod
};

const QMetaObject QTouchDevice::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QTouchDevice.data,
      qt_meta_data_QTouchDevice,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
