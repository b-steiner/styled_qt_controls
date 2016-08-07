/****************************************************************************
** Meta object code from reading C++ file 'qframe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qframe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qframe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFrame_t {
    QByteArrayData data[19];
    char stringdata0[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFrame_t qt_meta_stringdata_QFrame = {
    {
QT_MOC_LITERAL(0, 0, 6), // "QFrame"
QT_MOC_LITERAL(1, 7, 10), // "frameShape"
QT_MOC_LITERAL(2, 18, 5), // "Shape"
QT_MOC_LITERAL(3, 24, 11), // "frameShadow"
QT_MOC_LITERAL(4, 36, 6), // "Shadow"
QT_MOC_LITERAL(5, 43, 9), // "lineWidth"
QT_MOC_LITERAL(6, 53, 12), // "midLineWidth"
QT_MOC_LITERAL(7, 66, 10), // "frameWidth"
QT_MOC_LITERAL(8, 77, 9), // "frameRect"
QT_MOC_LITERAL(9, 87, 7), // "NoFrame"
QT_MOC_LITERAL(10, 95, 3), // "Box"
QT_MOC_LITERAL(11, 99, 5), // "Panel"
QT_MOC_LITERAL(12, 105, 8), // "WinPanel"
QT_MOC_LITERAL(13, 114, 5), // "HLine"
QT_MOC_LITERAL(14, 120, 5), // "VLine"
QT_MOC_LITERAL(15, 126, 11), // "StyledPanel"
QT_MOC_LITERAL(16, 138, 5), // "Plain"
QT_MOC_LITERAL(17, 144, 6), // "Raised"
QT_MOC_LITERAL(18, 151, 6) // "Sunken"

    },
    "QFrame\0frameShape\0Shape\0frameShadow\0"
    "Shadow\0lineWidth\0midLineWidth\0frameWidth\0"
    "frameRect\0NoFrame\0Box\0Panel\0WinPanel\0"
    "HLine\0VLine\0StyledPanel\0Plain\0Raised\0"
    "Sunken"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFrame[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       2,   32, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, 0x80000000 | 2, 0x0009510b,
       3, 0x80000000 | 4, 0x0009510b,
       5, QMetaType::Int, 0x00095103,
       6, QMetaType::Int, 0x00095103,
       7, QMetaType::Int, 0x00095001,
       8, QMetaType::QRect, 0x00094103,

 // enums: name, flags, count, data
       2, 0x0,    7,   40,
       4, 0x0,    3,   54,

 // enum data: key, value
       9, uint(QFrame::NoFrame),
      10, uint(QFrame::Box),
      11, uint(QFrame::Panel),
      12, uint(QFrame::WinPanel),
      13, uint(QFrame::HLine),
      14, uint(QFrame::VLine),
      15, uint(QFrame::StyledPanel),
      16, uint(QFrame::Plain),
      17, uint(QFrame::Raised),
      18, uint(QFrame::Sunken),

       0        // eod
};

void QFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QFrame *_t = static_cast<QFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Shape*>(_v) = _t->frameShape(); break;
        case 1: *reinterpret_cast< Shadow*>(_v) = _t->frameShadow(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->lineWidth(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->midLineWidth(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->frameWidth(); break;
        case 5: *reinterpret_cast< QRect*>(_v) = _t->frameRect(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QFrame *_t = static_cast<QFrame *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFrameShape(*reinterpret_cast< Shape*>(_v)); break;
        case 1: _t->setFrameShadow(*reinterpret_cast< Shadow*>(_v)); break;
        case 2: _t->setLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setMidLineWidth(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setFrameRect(*reinterpret_cast< QRect*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QFrame::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QFrame.data,
      qt_meta_data_QFrame,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFrame.stringdata0))
        return static_cast<void*>(const_cast< QFrame*>(this));
    return QWidget::qt_metacast(_clname);
}

int QFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
