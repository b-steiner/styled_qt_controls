/****************************************************************************
** Meta object code from reading C++ file 'qlibrary.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../plugin/qlibrary.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qlibrary.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QLibrary_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLibrary_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLibrary_t qt_meta_stringdata_QLibrary = {
    {
QT_MOC_LITERAL(0, 0, 8), // "QLibrary"
QT_MOC_LITERAL(1, 9, 8), // "fileName"
QT_MOC_LITERAL(2, 18, 9), // "loadHints"
QT_MOC_LITERAL(3, 28, 9), // "LoadHints"
QT_MOC_LITERAL(4, 38, 8), // "LoadHint"
QT_MOC_LITERAL(5, 47, 21), // "ResolveAllSymbolsHint"
QT_MOC_LITERAL(6, 69, 25), // "ExportExternalSymbolsHint"
QT_MOC_LITERAL(7, 95, 21), // "LoadArchiveMemberHint"
QT_MOC_LITERAL(8, 117, 17), // "PreventUnloadHint"
QT_MOC_LITERAL(9, 135, 12) // "DeepBindHint"

    },
    "QLibrary\0fileName\0loadHints\0LoadHints\0"
    "LoadHint\0ResolveAllSymbolsHint\0"
    "ExportExternalSymbolsHint\0"
    "LoadArchiveMemberHint\0PreventUnloadHint\0"
    "DeepBindHint"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLibrary[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       2,   14, // properties
       2,   20, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, 0x80000000 | 3, 0x0009510b,

 // enums: name, flags, count, data
       4, 0x1,    5,   28,
       3, 0x1,    5,   38,

 // enum data: key, value
       5, uint(QLibrary::ResolveAllSymbolsHint),
       6, uint(QLibrary::ExportExternalSymbolsHint),
       7, uint(QLibrary::LoadArchiveMemberHint),
       8, uint(QLibrary::PreventUnloadHint),
       9, uint(QLibrary::DeepBindHint),
       5, uint(QLibrary::ResolveAllSymbolsHint),
       6, uint(QLibrary::ExportExternalSymbolsHint),
       7, uint(QLibrary::LoadArchiveMemberHint),
       8, uint(QLibrary::PreventUnloadHint),
       9, uint(QLibrary::DeepBindHint),

       0        // eod
};

void QLibrary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        QLibrary *_t = static_cast<QLibrary *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->fileName(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->loadHints()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QLibrary *_t = static_cast<QLibrary *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFileName(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setLoadHints(QFlag(*reinterpret_cast<int*>(_v))); break;
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

const QMetaObject QLibrary::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QLibrary.data,
      qt_meta_data_QLibrary,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLibrary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLibrary::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLibrary.stringdata0))
        return static_cast<void*>(const_cast< QLibrary*>(this));
    return QObject::qt_metacast(_clname);
}

int QLibrary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
