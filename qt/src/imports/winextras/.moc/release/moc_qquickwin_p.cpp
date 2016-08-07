/****************************************************************************
** Meta object code from reading C++ file 'qquickwin_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickwin_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickwin_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickWin_t {
    QByteArrayData data[9];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickWin_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickWin_t qt_meta_stringdata_QQuickWin = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QQuickWin"
QT_MOC_LITERAL(1, 10, 13), // "HBitmapFormat"
QT_MOC_LITERAL(2, 24, 14), // "HBitmapNoAlpha"
QT_MOC_LITERAL(3, 39, 25), // "HBitmapPremultipliedAlpha"
QT_MOC_LITERAL(4, 65, 12), // "HBitmapAlpha"
QT_MOC_LITERAL(5, 78, 18), // "WindowFlip3DPolicy"
QT_MOC_LITERAL(6, 97, 11), // "FlipDefault"
QT_MOC_LITERAL(7, 109, 16), // "FlipExcludeBelow"
QT_MOC_LITERAL(8, 126, 16) // "FlipExcludeAbove"

    },
    "QQuickWin\0HBitmapFormat\0HBitmapNoAlpha\0"
    "HBitmapPremultipliedAlpha\0HBitmapAlpha\0"
    "WindowFlip3DPolicy\0FlipDefault\0"
    "FlipExcludeBelow\0FlipExcludeAbove"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickWin[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, flags, count, data
       1, 0x0,    3,   22,
       5, 0x0,    3,   28,

 // enum data: key, value
       2, uint(QQuickWin::HBitmapNoAlpha),
       3, uint(QQuickWin::HBitmapPremultipliedAlpha),
       4, uint(QQuickWin::HBitmapAlpha),
       6, uint(QQuickWin::FlipDefault),
       7, uint(QQuickWin::FlipExcludeBelow),
       8, uint(QQuickWin::FlipExcludeAbove),

       0        // eod
};

void QQuickWin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QQuickWin::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickWin.data,
      qt_meta_data_QQuickWin,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickWin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickWin::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickWin.stringdata0))
        return static_cast<void*>(const_cast< QQuickWin*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickWin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
