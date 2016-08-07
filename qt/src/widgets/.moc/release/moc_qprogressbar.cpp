/****************************************************************************
** Meta object code from reading C++ file 'qprogressbar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qprogressbar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprogressbar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QProgressBar_t {
    QByteArrayData data[24];
    char stringdata0[253];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QProgressBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QProgressBar_t qt_meta_stringdata_QProgressBar = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QProgressBar"
QT_MOC_LITERAL(1, 13, 12), // "valueChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "value"
QT_MOC_LITERAL(4, 33, 5), // "reset"
QT_MOC_LITERAL(5, 39, 8), // "setRange"
QT_MOC_LITERAL(6, 48, 7), // "minimum"
QT_MOC_LITERAL(7, 56, 7), // "maximum"
QT_MOC_LITERAL(8, 64, 10), // "setMinimum"
QT_MOC_LITERAL(9, 75, 10), // "setMaximum"
QT_MOC_LITERAL(10, 86, 8), // "setValue"
QT_MOC_LITERAL(11, 95, 14), // "setOrientation"
QT_MOC_LITERAL(12, 110, 15), // "Qt::Orientation"
QT_MOC_LITERAL(13, 126, 4), // "text"
QT_MOC_LITERAL(14, 131, 9), // "alignment"
QT_MOC_LITERAL(15, 141, 13), // "Qt::Alignment"
QT_MOC_LITERAL(16, 155, 11), // "textVisible"
QT_MOC_LITERAL(17, 167, 11), // "orientation"
QT_MOC_LITERAL(18, 179, 18), // "invertedAppearance"
QT_MOC_LITERAL(19, 198, 13), // "textDirection"
QT_MOC_LITERAL(20, 212, 9), // "Direction"
QT_MOC_LITERAL(21, 222, 6), // "format"
QT_MOC_LITERAL(22, 229, 11), // "TopToBottom"
QT_MOC_LITERAL(23, 241, 11) // "BottomToTop"

    },
    "QProgressBar\0valueChanged\0\0value\0reset\0"
    "setRange\0minimum\0maximum\0setMinimum\0"
    "setMaximum\0setValue\0setOrientation\0"
    "Qt::Orientation\0text\0alignment\0"
    "Qt::Alignment\0textVisible\0orientation\0"
    "invertedAppearance\0textDirection\0"
    "Direction\0format\0TopToBottom\0BottomToTop"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QProgressBar[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
      10,   70, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   52,    2, 0x0a /* Public */,
       5,    2,   53,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 12,    2,

 // properties: name, type, flags
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095103,
      13, QMetaType::QString, 0x00095001,
       3, QMetaType::Int, 0x00495103,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Bool, 0x00095103,
      17, 0x80000000 | 12, 0x0009510b,
      18, QMetaType::Bool, 0x00095103,
      19, 0x80000000 | 20, 0x0009510b,
      21, QMetaType::QString, 0x00095107,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, flags, count, data
      20, 0x0,    2,  114,

 // enum data: key, value
      22, uint(QProgressBar::TopToBottom),
      23, uint(QProgressBar::BottomToTop),

       0        // eod
};

void QProgressBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QProgressBar *_t = static_cast<QProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->reset(); break;
        case 2: _t->setRange((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->setMinimum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setMaximum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setOrientation((*reinterpret_cast< Qt::Orientation(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QProgressBar::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QProgressBar::valueChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QProgressBar *_t = static_cast<QProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->minimum(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->maximum(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->value(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isTextVisible(); break;
        case 6: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->invertedAppearance(); break;
        case 8: *reinterpret_cast< Direction*>(_v) = _t->textDirection(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->format(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QProgressBar *_t = static_cast<QProgressBar *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMinimum(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setMaximum(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setValue(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: _t->setTextVisible(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 7: _t->setInvertedAppearance(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setTextDirection(*reinterpret_cast< Direction*>(_v)); break;
        case 9: _t->setFormat(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QProgressBar *_t = static_cast<QProgressBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 9: _t->resetFormat(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QProgressBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QProgressBar.data,
      qt_meta_data_QProgressBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QProgressBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProgressBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QProgressBar.stringdata0))
        return static_cast<void*>(const_cast< QProgressBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int QProgressBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QProgressBar::valueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
