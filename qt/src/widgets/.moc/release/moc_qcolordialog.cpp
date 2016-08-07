/****************************************************************************
** Meta object code from reading C++ file 'qcolordialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qcolordialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qcolordialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QColorDialog_t {
    QByteArrayData data[25];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QColorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QColorDialog_t qt_meta_stringdata_QColorDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QColorDialog"
QT_MOC_LITERAL(1, 13, 19), // "currentColorChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "color"
QT_MOC_LITERAL(4, 40, 13), // "colorSelected"
QT_MOC_LITERAL(5, 54, 12), // "_q_addCustom"
QT_MOC_LITERAL(6, 67, 9), // "_q_newHsv"
QT_MOC_LITERAL(7, 77, 1), // "h"
QT_MOC_LITERAL(8, 79, 1), // "s"
QT_MOC_LITERAL(9, 81, 1), // "v"
QT_MOC_LITERAL(10, 83, 18), // "_q_newColorTypedIn"
QT_MOC_LITERAL(11, 102, 4), // "QRgb"
QT_MOC_LITERAL(12, 107, 3), // "rgb"
QT_MOC_LITERAL(13, 111, 13), // "_q_nextCustom"
QT_MOC_LITERAL(14, 125, 12), // "_q_newCustom"
QT_MOC_LITERAL(15, 138, 14), // "_q_newStandard"
QT_MOC_LITERAL(16, 153, 18), // "_q_pickScreenColor"
QT_MOC_LITERAL(17, 172, 21), // "_q_updateColorPicking"
QT_MOC_LITERAL(18, 194, 12), // "currentColor"
QT_MOC_LITERAL(19, 207, 7), // "options"
QT_MOC_LITERAL(20, 215, 18), // "ColorDialogOptions"
QT_MOC_LITERAL(21, 234, 17), // "ColorDialogOption"
QT_MOC_LITERAL(22, 252, 16), // "ShowAlphaChannel"
QT_MOC_LITERAL(23, 269, 9), // "NoButtons"
QT_MOC_LITERAL(24, 279, 19) // "DontUseNativeDialog"

    },
    "QColorDialog\0currentColorChanged\0\0"
    "color\0colorSelected\0_q_addCustom\0"
    "_q_newHsv\0h\0s\0v\0_q_newColorTypedIn\0"
    "QRgb\0rgb\0_q_nextCustom\0_q_newCustom\0"
    "_q_newStandard\0_q_pickScreenColor\0"
    "_q_updateColorPicking\0currentColor\0"
    "options\0ColorDialogOptions\0ColorDialogOption\0"
    "ShowAlphaChannel\0NoButtons\0"
    "DontUseNativeDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QColorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   98, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   70,    2, 0x08 /* Private */,
       6,    3,   71,    2, 0x08 /* Private */,
      10,    1,   78,    2, 0x08 /* Private */,
      13,    2,   81,    2, 0x08 /* Private */,
      14,    2,   86,    2, 0x08 /* Private */,
      15,    2,   91,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    3,
    QMetaType::Void, QMetaType::QColor,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      18, QMetaType::QColor, 0x00495103,
      19, 0x80000000 | 20, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
      21, 0x0,    3,  110,

 // enum data: key, value
      22, uint(QColorDialog::ShowAlphaChannel),
      23, uint(QColorDialog::NoButtons),
      24, uint(QColorDialog::DontUseNativeDialog),

       0        // eod
};

void QColorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->colorSelected((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_addCustom(); break;
        case 3: _t->d_func()->_q_newHsv((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: _t->d_func()->_q_newColorTypedIn((*reinterpret_cast< QRgb(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_nextCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->d_func()->_q_newCustom((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->d_func()->_q_newStandard((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->d_func()->_q_pickScreenColor(); break;
        case 9: _t->d_func()->_q_updateColorPicking(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QColorDialog::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorDialog::currentColorChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QColorDialog::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorDialog::colorSelected)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->currentColor(); break;
        case 1: *reinterpret_cast< ColorDialogOptions*>(_v) = _t->options(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QColorDialog *_t = static_cast<QColorDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setOptions(*reinterpret_cast< ColorDialogOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QColorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QColorDialog.data,
      qt_meta_data_QColorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QColorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QColorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QColorDialog.stringdata0))
        return static_cast<void*>(const_cast< QColorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QColorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QColorDialog::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QColorDialog::colorSelected(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
