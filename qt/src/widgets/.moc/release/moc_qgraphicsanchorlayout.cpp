/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsanchorlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsanchorlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsanchorlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGraphicsAnchor_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsAnchor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsAnchor_t qt_meta_stringdata_QGraphicsAnchor = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGraphicsAnchor"
QT_MOC_LITERAL(1, 16, 7), // "spacing"
QT_MOC_LITERAL(2, 24, 10), // "sizePolicy"
QT_MOC_LITERAL(3, 35, 19) // "QSizePolicy::Policy"

    },
    "QGraphicsAnchor\0spacing\0sizePolicy\0"
    "QSizePolicy::Policy"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsAnchor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QReal, 0x00095107,
       2, 0x80000000 | 3, 0x0009510b,

       0        // eod
};

void QGraphicsAnchor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QGraphicsAnchor *_t = static_cast<QGraphicsAnchor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->spacing(); break;
        case 1: *reinterpret_cast< QSizePolicy::Policy*>(_v) = _t->sizePolicy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsAnchor *_t = static_cast<QGraphicsAnchor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSpacing(*reinterpret_cast< qreal*>(_v)); break;
        case 1: _t->setSizePolicy(*reinterpret_cast< QSizePolicy::Policy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QGraphicsAnchor *_t = static_cast<QGraphicsAnchor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->unsetSpacing(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

static const QMetaObject * const qt_meta_extradata_QGraphicsAnchor[] = {
        &QSizePolicy::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QGraphicsAnchor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QGraphicsAnchor.data,
      qt_meta_data_QGraphicsAnchor,  qt_static_metacall, qt_meta_extradata_QGraphicsAnchor, Q_NULLPTR}
};


const QMetaObject *QGraphicsAnchor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsAnchor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsAnchor.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsAnchor*>(this));
    return QObject::qt_metacast(_clname);
}

int QGraphicsAnchor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_END_MOC_NAMESPACE
