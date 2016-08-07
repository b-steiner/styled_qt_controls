/****************************************************************************
** Meta object code from reading C++ file 'qwinoverlappedionotifier_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../io/qwinoverlappedionotifier_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwinoverlappedionotifier_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWinOverlappedIoNotifier_t {
    QByteArrayData data[9];
    char stringdata0[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWinOverlappedIoNotifier_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWinOverlappedIoNotifier_t qt_meta_stringdata_QWinOverlappedIoNotifier = {
    {
QT_MOC_LITERAL(0, 0, 24), // "QWinOverlappedIoNotifier"
QT_MOC_LITERAL(1, 25, 8), // "notified"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "numberOfBytes"
QT_MOC_LITERAL(4, 49, 9), // "errorCode"
QT_MOC_LITERAL(5, 59, 11), // "OVERLAPPED*"
QT_MOC_LITERAL(6, 71, 10), // "overlapped"
QT_MOC_LITERAL(7, 82, 9), // "_q_notify"
QT_MOC_LITERAL(8, 92, 11) // "_q_notified"

    },
    "QWinOverlappedIoNotifier\0notified\0\0"
    "numberOfBytes\0errorCode\0OVERLAPPED*\0"
    "overlapped\0_q_notify\0_q_notified"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWinOverlappedIoNotifier[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,
       7,    0,   36,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QWinOverlappedIoNotifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWinOverlappedIoNotifier *_t = static_cast<QWinOverlappedIoNotifier *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->notified((*reinterpret_cast< quint32(*)>(_a[1])),(*reinterpret_cast< quint32(*)>(_a[2])),(*reinterpret_cast< OVERLAPPED*(*)>(_a[3]))); break;
        case 1: _t->_q_notify(); break;
        case 2: _t->d_func()->_q_notified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWinOverlappedIoNotifier::*_t)(quint32 , quint32 , OVERLAPPED * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinOverlappedIoNotifier::notified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWinOverlappedIoNotifier::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWinOverlappedIoNotifier::_q_notify)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QWinOverlappedIoNotifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWinOverlappedIoNotifier.data,
      qt_meta_data_QWinOverlappedIoNotifier,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWinOverlappedIoNotifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWinOverlappedIoNotifier::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWinOverlappedIoNotifier.stringdata0))
        return static_cast<void*>(const_cast< QWinOverlappedIoNotifier*>(this));
    return QObject::qt_metacast(_clname);
}

int QWinOverlappedIoNotifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void QWinOverlappedIoNotifier::notified(quint32 _t1, quint32 _t2, OVERLAPPED * _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWinOverlappedIoNotifier::_q_notify()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
