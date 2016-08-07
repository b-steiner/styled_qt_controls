/****************************************************************************
** Meta object code from reading C++ file 'qdatetimeedit_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qdatetimeedit_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdatetimeedit_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QCalendarPopup_t {
    QByteArrayData data[11];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCalendarPopup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCalendarPopup_t qt_meta_stringdata_QCalendarPopup = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QCalendarPopup"
QT_MOC_LITERAL(1, 15, 9), // "activated"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "date"
QT_MOC_LITERAL(4, 31, 15), // "newDateSelected"
QT_MOC_LITERAL(5, 47, 7), // "newDate"
QT_MOC_LITERAL(6, 55, 14), // "hidingCalendar"
QT_MOC_LITERAL(7, 70, 7), // "oldDate"
QT_MOC_LITERAL(8, 78, 11), // "resetButton"
QT_MOC_LITERAL(9, 90, 12), // "dateSelected"
QT_MOC_LITERAL(10, 103, 20) // "dateSelectionChanged"

    },
    "QCalendarPopup\0activated\0\0date\0"
    "newDateSelected\0newDate\0hidingCalendar\0"
    "oldDate\0resetButton\0dateSelected\0"
    "dateSelectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCalendarPopup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       8,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   54,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void, QMetaType::QDate,    5,
    QMetaType::Void, QMetaType::QDate,    7,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,    3,
    QMetaType::Void,

       0        // eod
};

void QCalendarPopup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QCalendarPopup *_t = static_cast<QCalendarPopup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activated((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 1: _t->newDateSelected((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 2: _t->hidingCalendar((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 3: _t->resetButton(); break;
        case 4: _t->dateSelected((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        case 5: _t->dateSelectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QCalendarPopup::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCalendarPopup::activated)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QCalendarPopup::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCalendarPopup::newDateSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QCalendarPopup::*_t)(const QDate & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCalendarPopup::hidingCalendar)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QCalendarPopup::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QCalendarPopup::resetButton)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject QCalendarPopup::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QCalendarPopup.data,
      qt_meta_data_QCalendarPopup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCalendarPopup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCalendarPopup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCalendarPopup.stringdata0))
        return static_cast<void*>(const_cast< QCalendarPopup*>(this));
    return QWidget::qt_metacast(_clname);
}

int QCalendarPopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QCalendarPopup::activated(const QDate & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QCalendarPopup::newDateSelected(const QDate & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QCalendarPopup::hidingCalendar(const QDate & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QCalendarPopup::resetButton()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
