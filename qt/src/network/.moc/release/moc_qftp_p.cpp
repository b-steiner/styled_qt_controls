/****************************************************************************
** Meta object code from reading C++ file 'qftp_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../access/qftp_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qftp_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFtp_t {
    QByteArrayData data[17];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFtp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFtp_t qt_meta_stringdata_QFtp = {
    {
QT_MOC_LITERAL(0, 0, 4), // "QFtp"
QT_MOC_LITERAL(1, 5, 12), // "stateChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 8), // "listInfo"
QT_MOC_LITERAL(4, 28, 8), // "QUrlInfo"
QT_MOC_LITERAL(5, 37, 9), // "readyRead"
QT_MOC_LITERAL(6, 47, 20), // "dataTransferProgress"
QT_MOC_LITERAL(7, 68, 15), // "rawCommandReply"
QT_MOC_LITERAL(8, 84, 14), // "commandStarted"
QT_MOC_LITERAL(9, 99, 15), // "commandFinished"
QT_MOC_LITERAL(10, 115, 4), // "done"
QT_MOC_LITERAL(11, 120, 5), // "abort"
QT_MOC_LITERAL(12, 126, 19), // "_q_startNextCommand"
QT_MOC_LITERAL(13, 146, 13), // "_q_piFinished"
QT_MOC_LITERAL(14, 160, 10), // "_q_piError"
QT_MOC_LITERAL(15, 171, 17), // "_q_piConnectState"
QT_MOC_LITERAL(16, 189, 13) // "_q_piFtpReply"

    },
    "QFtp\0stateChanged\0\0listInfo\0QUrlInfo\0"
    "readyRead\0dataTransferProgress\0"
    "rawCommandReply\0commandStarted\0"
    "commandFinished\0done\0abort\0"
    "_q_startNextCommand\0_q_piFinished\0"
    "_q_piError\0_q_piConnectState\0_q_piFtpReply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFtp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       5,    0,   90,    2, 0x06 /* Public */,
       6,    2,   91,    2, 0x06 /* Public */,
       7,    2,   96,    2, 0x06 /* Public */,
       8,    1,  101,    2, 0x06 /* Public */,
       9,    2,  104,    2, 0x06 /* Public */,
      10,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  112,    2, 0x0a /* Public */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    1,  114,    2, 0x08 /* Private */,
      14,    2,  117,    2, 0x08 /* Private */,
      15,    1,  122,    2, 0x08 /* Private */,
      16,    2,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

       0        // eod
};

void QFtp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFtp *_t = static_cast<QFtp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->listInfo((*reinterpret_cast< const QUrlInfo(*)>(_a[1]))); break;
        case 2: _t->readyRead(); break;
        case 3: _t->dataTransferProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->rawCommandReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->commandStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->commandFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: _t->done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->abort(); break;
        case 9: _t->d_func()->_q_startNextCommand(); break;
        case 10: _t->d_func()->_q_piFinished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->d_func()->_q_piError((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->d_func()->_q_piConnectState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->d_func()->_q_piFtpReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFtp::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::stateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(const QUrlInfo & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::listInfo)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::readyRead)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::dataTransferProgress)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(int , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::rawCommandReply)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::commandStarted)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(int , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::commandFinished)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QFtp::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFtp::done)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QFtp::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QFtp.data,
      qt_meta_data_QFtp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFtp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFtp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFtp.stringdata0))
        return static_cast<void*>(const_cast< QFtp*>(this));
    return QObject::qt_metacast(_clname);
}

int QFtp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void QFtp::stateChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QFtp::listInfo(const QUrlInfo & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QFtp::readyRead()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QFtp::dataTransferProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QFtp::rawCommandReply(int _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QFtp::commandStarted(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QFtp::commandFinished(int _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QFtp::done(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
