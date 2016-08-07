/****************************************************************************
** Meta object code from reading C++ file 'qfontdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qfontdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFontDialog_t {
    QByteArrayData data[21];
    char stringdata0[319];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFontDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFontDialog_t qt_meta_stringdata_QFontDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QFontDialog"
QT_MOC_LITERAL(1, 12, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "font"
QT_MOC_LITERAL(4, 37, 12), // "fontSelected"
QT_MOC_LITERAL(5, 50, 14), // "_q_sizeChanged"
QT_MOC_LITERAL(6, 65, 20), // "_q_familyHighlighted"
QT_MOC_LITERAL(7, 86, 27), // "_q_writingSystemHighlighted"
QT_MOC_LITERAL(8, 114, 19), // "_q_styleHighlighted"
QT_MOC_LITERAL(9, 134, 18), // "_q_sizeHighlighted"
QT_MOC_LITERAL(10, 153, 15), // "_q_updateSample"
QT_MOC_LITERAL(11, 169, 11), // "currentFont"
QT_MOC_LITERAL(12, 181, 7), // "options"
QT_MOC_LITERAL(13, 189, 17), // "FontDialogOptions"
QT_MOC_LITERAL(14, 207, 16), // "FontDialogOption"
QT_MOC_LITERAL(15, 224, 9), // "NoButtons"
QT_MOC_LITERAL(16, 234, 19), // "DontUseNativeDialog"
QT_MOC_LITERAL(17, 254, 13), // "ScalableFonts"
QT_MOC_LITERAL(18, 268, 16), // "NonScalableFonts"
QT_MOC_LITERAL(19, 285, 15), // "MonospacedFonts"
QT_MOC_LITERAL(20, 301, 17) // "ProportionalFonts"

    },
    "QFontDialog\0currentFontChanged\0\0font\0"
    "fontSelected\0_q_sizeChanged\0"
    "_q_familyHighlighted\0_q_writingSystemHighlighted\0"
    "_q_styleHighlighted\0_q_sizeHighlighted\0"
    "_q_updateSample\0currentFont\0options\0"
    "FontDialogOptions\0FontDialogOption\0"
    "NoButtons\0DontUseNativeDialog\0"
    "ScalableFonts\0NonScalableFonts\0"
    "MonospacedFonts\0ProportionalFonts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFontDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   76, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   60,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       7,    1,   66,    2, 0x08 /* Private */,
       8,    1,   69,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QFont,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // properties: name, type, flags
      11, QMetaType::QFont, 0x00495103,
      12, 0x80000000 | 13, 0x0009510b,

 // properties: notify_signal_id
       0,
       0,

 // enums: name, flags, count, data
      14, 0x0,    6,   88,

 // enum data: key, value
      15, uint(QFontDialog::NoButtons),
      16, uint(QFontDialog::DontUseNativeDialog),
      17, uint(QFontDialog::ScalableFonts),
      18, uint(QFontDialog::NonScalableFonts),
      19, uint(QFontDialog::MonospacedFonts),
      20, uint(QFontDialog::ProportionalFonts),

       0        // eod
};

void QFontDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFontDialog *_t = static_cast<QFontDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->fontSelected((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_sizeChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_familyHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->d_func()->_q_writingSystemHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_styleHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_sizeHighlighted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_updateSample(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFontDialog::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFontDialog::currentFontChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFontDialog::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFontDialog::fontSelected)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QFontDialog *_t = static_cast<QFontDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        case 1: *reinterpret_cast< FontDialogOptions*>(_v) = _t->options(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QFontDialog *_t = static_cast<QFontDialog *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        case 1: _t->setOptions(*reinterpret_cast< FontDialogOptions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QFontDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QFontDialog.data,
      qt_meta_data_QFontDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFontDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFontDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFontDialog.stringdata0))
        return static_cast<void*>(const_cast< QFontDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QFontDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void QFontDialog::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFontDialog::fontSelected(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
