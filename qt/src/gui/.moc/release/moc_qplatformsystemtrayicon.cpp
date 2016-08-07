/****************************************************************************
** Meta object code from reading C++ file 'qplatformsystemtrayicon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qplatformsystemtrayicon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplatformsystemtrayicon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QPlatformSystemTrayIcon_t {
    QByteArrayData data[17];
    char stringdata0[212];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPlatformSystemTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPlatformSystemTrayIcon_t qt_meta_stringdata_QPlatformSystemTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QPlatformSystemTrayIcon"
QT_MOC_LITERAL(1, 24, 9), // "activated"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 41), // "QPlatformSystemTrayIcon::Acti..."
QT_MOC_LITERAL(4, 77, 6), // "reason"
QT_MOC_LITERAL(5, 84, 14), // "messageClicked"
QT_MOC_LITERAL(6, 99, 16), // "ActivationReason"
QT_MOC_LITERAL(7, 116, 7), // "Unknown"
QT_MOC_LITERAL(8, 124, 7), // "Context"
QT_MOC_LITERAL(9, 132, 11), // "DoubleClick"
QT_MOC_LITERAL(10, 144, 7), // "Trigger"
QT_MOC_LITERAL(11, 152, 11), // "MiddleClick"
QT_MOC_LITERAL(12, 164, 11), // "MessageIcon"
QT_MOC_LITERAL(13, 176, 6), // "NoIcon"
QT_MOC_LITERAL(14, 183, 11), // "Information"
QT_MOC_LITERAL(15, 195, 7), // "Warning"
QT_MOC_LITERAL(16, 203, 8) // "Critical"

    },
    "QPlatformSystemTrayIcon\0activated\0\0"
    "QPlatformSystemTrayIcon::ActivationReason\0"
    "reason\0messageClicked\0ActivationReason\0"
    "Unknown\0Context\0DoubleClick\0Trigger\0"
    "MiddleClick\0MessageIcon\0NoIcon\0"
    "Information\0Warning\0Critical"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPlatformSystemTrayIcon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       2,   28, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       5,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // enums: name, flags, count, data
       6, 0x0,    5,   36,
      12, 0x0,    4,   46,

 // enum data: key, value
       7, uint(QPlatformSystemTrayIcon::Unknown),
       8, uint(QPlatformSystemTrayIcon::Context),
       9, uint(QPlatformSystemTrayIcon::DoubleClick),
      10, uint(QPlatformSystemTrayIcon::Trigger),
      11, uint(QPlatformSystemTrayIcon::MiddleClick),
      13, uint(QPlatformSystemTrayIcon::NoIcon),
      14, uint(QPlatformSystemTrayIcon::Information),
      15, uint(QPlatformSystemTrayIcon::Warning),
      16, uint(QPlatformSystemTrayIcon::Critical),

       0        // eod
};

void QPlatformSystemTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPlatformSystemTrayIcon *_t = static_cast<QPlatformSystemTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< QPlatformSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        case 1: _t->messageClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPlatformSystemTrayIcon::*_t)(QPlatformSystemTrayIcon::ActivationReason );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSystemTrayIcon::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPlatformSystemTrayIcon::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPlatformSystemTrayIcon::messageClicked)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QPlatformSystemTrayIcon::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QPlatformSystemTrayIcon.data,
      qt_meta_data_QPlatformSystemTrayIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPlatformSystemTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPlatformSystemTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPlatformSystemTrayIcon.stringdata0))
        return static_cast<void*>(const_cast< QPlatformSystemTrayIcon*>(this));
    return QObject::qt_metacast(_clname);
}

int QPlatformSystemTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void QPlatformSystemTrayIcon::activated(QPlatformSystemTrayIcon::ActivationReason _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlatformSystemTrayIcon::messageClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
