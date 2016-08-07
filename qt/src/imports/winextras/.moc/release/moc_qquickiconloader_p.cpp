/****************************************************************************
** Meta object code from reading C++ file 'qquickiconloader_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qquickiconloader_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qquickiconloader_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler_t {
    QByteArrayData data[4];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler_t qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler = {
    {
QT_MOC_LITERAL(0, 0, 35), // "QQuickIconLoaderNetworkReplyH..."
QT_MOC_LITERAL(1, 36, 8), // "finished"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 17) // "onRequestFinished"

    },
    "QQuickIconLoaderNetworkReplyHandler\0"
    "finished\0\0onRequestFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QQuickIconLoaderNetworkReplyHandler[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QQuickIconLoaderNetworkReplyHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickIconLoaderNetworkReplyHandler *_t = static_cast<QQuickIconLoaderNetworkReplyHandler *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 1: _t->onRequestFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickIconLoaderNetworkReplyHandler::*_t)(const QVariant & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickIconLoaderNetworkReplyHandler::finished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QQuickIconLoaderNetworkReplyHandler::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler.data,
      qt_meta_data_QQuickIconLoaderNetworkReplyHandler,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QQuickIconLoaderNetworkReplyHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QQuickIconLoaderNetworkReplyHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QQuickIconLoaderNetworkReplyHandler.stringdata0))
        return static_cast<void*>(const_cast< QQuickIconLoaderNetworkReplyHandler*>(this));
    return QObject::qt_metacast(_clname);
}

int QQuickIconLoaderNetworkReplyHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QQuickIconLoaderNetworkReplyHandler::finished(const QVariant & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
