/****************************************************************************
** Meta object code from reading C++ file 'qfont.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qfont.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfont.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFont_t {
    QByteArrayData data[15];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFont_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFont_t qt_meta_stringdata_QFont = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QFont"
QT_MOC_LITERAL(1, 6, 13), // "StyleStrategy"
QT_MOC_LITERAL(2, 20, 13), // "PreferDefault"
QT_MOC_LITERAL(3, 34, 12), // "PreferBitmap"
QT_MOC_LITERAL(4, 47, 12), // "PreferDevice"
QT_MOC_LITERAL(5, 60, 13), // "PreferOutline"
QT_MOC_LITERAL(6, 74, 12), // "ForceOutline"
QT_MOC_LITERAL(7, 87, 11), // "PreferMatch"
QT_MOC_LITERAL(8, 99, 13), // "PreferQuality"
QT_MOC_LITERAL(9, 113, 15), // "PreferAntialias"
QT_MOC_LITERAL(10, 129, 11), // "NoAntialias"
QT_MOC_LITERAL(11, 141, 16), // "OpenGLCompatible"
QT_MOC_LITERAL(12, 158, 19), // "ForceIntegerMetrics"
QT_MOC_LITERAL(13, 178, 19), // "NoSubpixelAntialias"
QT_MOC_LITERAL(14, 198, 13) // "NoFontMerging"

    },
    "QFont\0StyleStrategy\0PreferDefault\0"
    "PreferBitmap\0PreferDevice\0PreferOutline\0"
    "ForceOutline\0PreferMatch\0PreferQuality\0"
    "PreferAntialias\0NoAntialias\0"
    "OpenGLCompatible\0ForceIntegerMetrics\0"
    "NoSubpixelAntialias\0NoFontMerging"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFont[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,   13,   18,

 // enum data: key, value
       2, uint(QFont::PreferDefault),
       3, uint(QFont::PreferBitmap),
       4, uint(QFont::PreferDevice),
       5, uint(QFont::PreferOutline),
       6, uint(QFont::ForceOutline),
       7, uint(QFont::PreferMatch),
       8, uint(QFont::PreferQuality),
       9, uint(QFont::PreferAntialias),
      10, uint(QFont::NoAntialias),
      11, uint(QFont::OpenGLCompatible),
      12, uint(QFont::ForceIntegerMetrics),
      13, uint(QFont::NoSubpixelAntialias),
      14, uint(QFont::NoFontMerging),

       0        // eod
};

const QMetaObject QFont::staticMetaObject = {
    { Q_NULLPTR, qt_meta_stringdata_QFont.data,
      qt_meta_data_QFont,  Q_NULLPTR, Q_NULLPTR, Q_NULLPTR}
};

QT_END_MOC_NAMESPACE
