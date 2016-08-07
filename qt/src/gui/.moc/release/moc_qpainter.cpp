/****************************************************************************
** Meta object code from reading C++ file 'qpainter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../painting/qpainter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpainter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPainter_t {
    QByteArrayData data[9];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPainter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPainter_t qt_meta_stringdata_QPainter = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QPainter"
QT_MOC_LITERAL(1, 9, 10), // "RenderHint"
QT_MOC_LITERAL(2, 20, 12), // "Antialiasing"
QT_MOC_LITERAL(3, 33, 16), // "TextAntialiasing"
QT_MOC_LITERAL(4, 50, 21), // "SmoothPixmapTransform"
QT_MOC_LITERAL(5, 72, 23), // "HighQualityAntialiasing"
QT_MOC_LITERAL(6, 96, 21), // "NonCosmeticDefaultPen"
QT_MOC_LITERAL(7, 118, 21), // "Qt4CompatiblePainting"
QT_MOC_LITERAL(8, 140, 11) // "RenderHints"

    },
    "QPainter\0RenderHint\0Antialiasing\0"
    "TextAntialiasing\0SmoothPixmapTransform\0"
    "HighQualityAntialiasing\0NonCosmeticDefaultPen\0"
    "Qt4CompatiblePainting\0RenderHints"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPainter[] = {

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
       1, 0x1,    6,   22,
       8, 0x1,    6,   34,

 // enum data: key, value
       2, uint(QPainter::Antialiasing),
       3, uint(QPainter::TextAntialiasing),
       4, uint(QPainter::SmoothPixmapTransform),
       5, uint(QPainter::HighQualityAntialiasing),
       6, uint(QPainter::NonCosmeticDefaultPen),
       7, uint(QPainter::Qt4CompatiblePainting),
       2, uint(QPainter::Antialiasing),
       3, uint(QPainter::TextAntialiasing),
       4, uint(QPainter::SmoothPixmapTransform),
       5, uint(QPainter::HighQualityAntialiasing),
       6, uint(QPainter::NonCosmeticDefaultPen),
       7, uint(QPainter::Qt4CompatiblePainting),

       0        // eod
};

const QMetaObject QPainter::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QPainter.data,
      qt_meta_data_QPainter,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
