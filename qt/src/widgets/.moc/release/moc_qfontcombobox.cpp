/****************************************************************************
** Meta object code from reading C++ file 'qfontcombobox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qfontcombobox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qfontcombobox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFontComboBox_t {
    QByteArrayData data[17];
    char stringdata0[237];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFontComboBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFontComboBox_t qt_meta_stringdata_QFontComboBox = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QFontComboBox"
QT_MOC_LITERAL(1, 14, 18), // "currentFontChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 1), // "f"
QT_MOC_LITERAL(4, 36, 14), // "setCurrentFont"
QT_MOC_LITERAL(5, 51, 17), // "_q_currentChanged"
QT_MOC_LITERAL(6, 69, 14), // "_q_updateModel"
QT_MOC_LITERAL(7, 84, 13), // "writingSystem"
QT_MOC_LITERAL(8, 98, 28), // "QFontDatabase::WritingSystem"
QT_MOC_LITERAL(9, 127, 11), // "fontFilters"
QT_MOC_LITERAL(10, 139, 11), // "FontFilters"
QT_MOC_LITERAL(11, 151, 11), // "currentFont"
QT_MOC_LITERAL(12, 163, 8), // "AllFonts"
QT_MOC_LITERAL(13, 172, 13), // "ScalableFonts"
QT_MOC_LITERAL(14, 186, 16), // "NonScalableFonts"
QT_MOC_LITERAL(15, 203, 15), // "MonospacedFonts"
QT_MOC_LITERAL(16, 219, 17) // "ProportionalFonts"

    },
    "QFontComboBox\0currentFontChanged\0\0f\0"
    "setCurrentFont\0_q_currentChanged\0"
    "_q_updateModel\0writingSystem\0"
    "QFontDatabase::WritingSystem\0fontFilters\0"
    "FontFilters\0currentFont\0AllFonts\0"
    "ScalableFonts\0NonScalableFonts\0"
    "MonospacedFonts\0ProportionalFonts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFontComboBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   44, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a /* Public */,
       5,    1,   40,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QFont,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QFont,    3,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // properties: name, type, flags
       7, 0x80000000 | 8, 0x0009510b,
       9, 0x80000000 | 10, 0x0009510b,
      11, QMetaType::QFont, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,

 // enums: name, flags, count, data
      10, 0x1,    5,   60,

 // enum data: key, value
      12, uint(QFontComboBox::AllFonts),
      13, uint(QFontComboBox::ScalableFonts),
      14, uint(QFontComboBox::NonScalableFonts),
      15, uint(QFontComboBox::MonospacedFonts),
      16, uint(QFontComboBox::ProportionalFonts),

       0        // eod
};

void QFontComboBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFontComboBox *_t = static_cast<QFontComboBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentFontChanged((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 1: _t->setCurrentFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_currentChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->d_func()->_q_updateModel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFontComboBox::*_t)(const QFont & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFontComboBox::currentFontChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QFontComboBox *_t = static_cast<QFontComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QFontDatabase::WritingSystem*>(_v) = _t->writingSystem(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->fontFilters()); break;
        case 2: *reinterpret_cast< QFont*>(_v) = _t->currentFont(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QFontComboBox *_t = static_cast<QFontComboBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setWritingSystem(*reinterpret_cast< QFontDatabase::WritingSystem*>(_v)); break;
        case 1: _t->setFontFilters(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setCurrentFont(*reinterpret_cast< QFont*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QFontComboBox[] = {
        &QFontDatabase::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QFontComboBox::staticMetaObject = {
    { &QComboBox::staticMetaObject, qt_meta_stringdata_QFontComboBox.data,
      qt_meta_data_QFontComboBox,  qt_static_metacall, qt_meta_extradata_QFontComboBox, Q_NULLPTR}
};


const QMetaObject *QFontComboBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFontComboBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFontComboBox.stringdata0))
        return static_cast<void*>(const_cast< QFontComboBox*>(this));
    return QComboBox::qt_metacast(_clname);
}

int QFontComboBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QComboBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QFontComboBox::currentFontChanged(const QFont & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
