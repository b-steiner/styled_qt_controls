/****************************************************************************
** Meta object code from reading C++ file 'qevent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qevent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qevent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTabletEvent_t {
    QByteArrayData data[14];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTabletEvent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTabletEvent_t qt_meta_stringdata_QTabletEvent = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QTabletEvent"
QT_MOC_LITERAL(1, 13, 12), // "TabletDevice"
QT_MOC_LITERAL(2, 26, 8), // "NoDevice"
QT_MOC_LITERAL(3, 35, 4), // "Puck"
QT_MOC_LITERAL(4, 40, 6), // "Stylus"
QT_MOC_LITERAL(5, 47, 8), // "Airbrush"
QT_MOC_LITERAL(6, 56, 10), // "FourDMouse"
QT_MOC_LITERAL(7, 67, 11), // "XFreeEraser"
QT_MOC_LITERAL(8, 79, 14), // "RotationStylus"
QT_MOC_LITERAL(9, 94, 11), // "PointerType"
QT_MOC_LITERAL(10, 106, 14), // "UnknownPointer"
QT_MOC_LITERAL(11, 121, 3), // "Pen"
QT_MOC_LITERAL(12, 125, 6), // "Cursor"
QT_MOC_LITERAL(13, 132, 6) // "Eraser"

    },
    "QTabletEvent\0TabletDevice\0NoDevice\0"
    "Puck\0Stylus\0Airbrush\0FourDMouse\0"
    "XFreeEraser\0RotationStylus\0PointerType\0"
    "UnknownPointer\0Pen\0Cursor\0Eraser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTabletEvent[] = {

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
       1, 0x0,    7,   22,
       9, 0x0,    4,   36,

 // enum data: key, value
       2, uint(QTabletEvent::NoDevice),
       3, uint(QTabletEvent::Puck),
       4, uint(QTabletEvent::Stylus),
       5, uint(QTabletEvent::Airbrush),
       6, uint(QTabletEvent::FourDMouse),
       7, uint(QTabletEvent::XFreeEraser),
       8, uint(QTabletEvent::RotationStylus),
      10, uint(QTabletEvent::UnknownPointer),
      11, uint(QTabletEvent::Pen),
      12, uint(QTabletEvent::Cursor),
      13, uint(QTabletEvent::Eraser),

       0        // eod
};

const QMetaObject QTabletEvent::staticMetaObject = {
    { &QInputEvent::staticMetaObject, qt_meta_stringdata_QTabletEvent.data,
      qt_meta_data_QTabletEvent,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
