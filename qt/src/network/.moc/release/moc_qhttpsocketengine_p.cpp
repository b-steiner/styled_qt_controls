/****************************************************************************
** Meta object code from reading C++ file 'qhttpsocketengine_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../socket/qhttpsocketengine_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qhttpsocketengine_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QHttpSocketEngine_t {
    QByteArrayData data[15];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHttpSocketEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHttpSocketEngine_t qt_meta_stringdata_QHttpSocketEngine = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QHttpSocketEngine"
QT_MOC_LITERAL(1, 18, 19), // "slotSocketConnected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "slotSocketDisconnected"
QT_MOC_LITERAL(4, 62, 26), // "slotSocketReadNotification"
QT_MOC_LITERAL(5, 89, 22), // "slotSocketBytesWritten"
QT_MOC_LITERAL(6, 112, 15), // "slotSocketError"
QT_MOC_LITERAL(7, 128, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(8, 157, 5), // "error"
QT_MOC_LITERAL(9, 163, 22), // "slotSocketStateChanged"
QT_MOC_LITERAL(10, 186, 28), // "QAbstractSocket::SocketState"
QT_MOC_LITERAL(11, 215, 5), // "state"
QT_MOC_LITERAL(12, 221, 27), // "emitPendingReadNotification"
QT_MOC_LITERAL(13, 249, 28), // "emitPendingWriteNotification"
QT_MOC_LITERAL(14, 278, 33) // "emitPendingConnectionNotifica..."

    },
    "QHttpSocketEngine\0slotSocketConnected\0"
    "\0slotSocketDisconnected\0"
    "slotSocketReadNotification\0"
    "slotSocketBytesWritten\0slotSocketError\0"
    "QAbstractSocket::SocketError\0error\0"
    "slotSocketStateChanged\0"
    "QAbstractSocket::SocketState\0state\0"
    "emitPendingReadNotification\0"
    "emitPendingWriteNotification\0"
    "emitPendingConnectionNotification"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHttpSocketEngine[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    1,   63,    2, 0x0a /* Public */,
       9,    1,   66,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x08 /* Private */,
      13,    0,   70,    2, 0x08 /* Private */,
      14,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QHttpSocketEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHttpSocketEngine *_t = static_cast<QHttpSocketEngine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotSocketConnected(); break;
        case 1: _t->slotSocketDisconnected(); break;
        case 2: _t->slotSocketReadNotification(); break;
        case 3: _t->slotSocketBytesWritten(); break;
        case 4: _t->slotSocketError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 5: _t->slotSocketStateChanged((*reinterpret_cast< QAbstractSocket::SocketState(*)>(_a[1]))); break;
        case 6: _t->emitPendingReadNotification(); break;
        case 7: _t->emitPendingWriteNotification(); break;
        case 8: _t->emitPendingConnectionNotification(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketState >(); break;
            }
            break;
        }
    }
}

const QMetaObject QHttpSocketEngine::staticMetaObject = {
    { &QAbstractSocketEngine::staticMetaObject, qt_meta_stringdata_QHttpSocketEngine.data,
      qt_meta_data_QHttpSocketEngine,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHttpSocketEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHttpSocketEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHttpSocketEngine.stringdata0))
        return static_cast<void*>(const_cast< QHttpSocketEngine*>(this));
    return QAbstractSocketEngine::qt_metacast(_clname);
}

int QHttpSocketEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractSocketEngine::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
