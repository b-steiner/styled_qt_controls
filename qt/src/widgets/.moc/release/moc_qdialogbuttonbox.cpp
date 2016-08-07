/****************************************************************************
** Meta object code from reading C++ file 'qdialogbuttonbox.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qdialogbuttonbox.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdialogbuttonbox.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDialogButtonBox_t {
    QByteArrayData data[34];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDialogButtonBox_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDialogButtonBox_t qt_meta_stringdata_QDialogButtonBox = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDialogButtonBox"
QT_MOC_LITERAL(1, 17, 7), // "clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 43, 6), // "button"
QT_MOC_LITERAL(5, 50, 8), // "accepted"
QT_MOC_LITERAL(6, 59, 13), // "helpRequested"
QT_MOC_LITERAL(7, 73, 8), // "rejected"
QT_MOC_LITERAL(8, 82, 22), // "_q_handleButtonClicked"
QT_MOC_LITERAL(9, 105, 24), // "_q_handleButtonDestroyed"
QT_MOC_LITERAL(10, 130, 11), // "orientation"
QT_MOC_LITERAL(11, 142, 15), // "Qt::Orientation"
QT_MOC_LITERAL(12, 158, 15), // "standardButtons"
QT_MOC_LITERAL(13, 174, 15), // "StandardButtons"
QT_MOC_LITERAL(14, 190, 13), // "centerButtons"
QT_MOC_LITERAL(15, 204, 8), // "NoButton"
QT_MOC_LITERAL(16, 213, 2), // "Ok"
QT_MOC_LITERAL(17, 216, 4), // "Save"
QT_MOC_LITERAL(18, 221, 7), // "SaveAll"
QT_MOC_LITERAL(19, 229, 4), // "Open"
QT_MOC_LITERAL(20, 234, 3), // "Yes"
QT_MOC_LITERAL(21, 238, 8), // "YesToAll"
QT_MOC_LITERAL(22, 247, 2), // "No"
QT_MOC_LITERAL(23, 250, 7), // "NoToAll"
QT_MOC_LITERAL(24, 258, 5), // "Abort"
QT_MOC_LITERAL(25, 264, 5), // "Retry"
QT_MOC_LITERAL(26, 270, 6), // "Ignore"
QT_MOC_LITERAL(27, 277, 5), // "Close"
QT_MOC_LITERAL(28, 283, 6), // "Cancel"
QT_MOC_LITERAL(29, 290, 7), // "Discard"
QT_MOC_LITERAL(30, 298, 4), // "Help"
QT_MOC_LITERAL(31, 303, 5), // "Apply"
QT_MOC_LITERAL(32, 309, 5), // "Reset"
QT_MOC_LITERAL(33, 315, 15) // "RestoreDefaults"

    },
    "QDialogButtonBox\0clicked\0\0QAbstractButton*\0"
    "button\0accepted\0helpRequested\0rejected\0"
    "_q_handleButtonClicked\0_q_handleButtonDestroyed\0"
    "orientation\0Qt::Orientation\0standardButtons\0"
    "StandardButtons\0centerButtons\0NoButton\0"
    "Ok\0Save\0SaveAll\0Open\0Yes\0YesToAll\0No\0"
    "NoToAll\0Abort\0Retry\0Ignore\0Close\0"
    "Cancel\0Discard\0Help\0Apply\0Reset\0"
    "RestoreDefaults"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDialogButtonBox[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       3,   52, // properties
       1,   61, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    0,   48,    2, 0x06 /* Public */,
       7,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   50,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0009510b,
      12, 0x80000000 | 13, 0x0009510b,
      14, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      13, 0x1,   19,   65,

 // enum data: key, value
      15, uint(QDialogButtonBox::NoButton),
      16, uint(QDialogButtonBox::Ok),
      17, uint(QDialogButtonBox::Save),
      18, uint(QDialogButtonBox::SaveAll),
      19, uint(QDialogButtonBox::Open),
      20, uint(QDialogButtonBox::Yes),
      21, uint(QDialogButtonBox::YesToAll),
      22, uint(QDialogButtonBox::No),
      23, uint(QDialogButtonBox::NoToAll),
      24, uint(QDialogButtonBox::Abort),
      25, uint(QDialogButtonBox::Retry),
      26, uint(QDialogButtonBox::Ignore),
      27, uint(QDialogButtonBox::Close),
      28, uint(QDialogButtonBox::Cancel),
      29, uint(QDialogButtonBox::Discard),
      30, uint(QDialogButtonBox::Help),
      31, uint(QDialogButtonBox::Apply),
      32, uint(QDialogButtonBox::Reset),
      33, uint(QDialogButtonBox::RestoreDefaults),

       0        // eod
};

void QDialogButtonBox::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDialogButtonBox *_t = static_cast<QDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->accepted(); break;
        case 2: _t->helpRequested(); break;
        case 3: _t->rejected(); break;
        case 4: _t->d_func()->_q_handleButtonClicked(); break;
        case 5: _t->d_func()->_q_handleButtonDestroyed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDialogButtonBox::*_t)(QAbstractButton * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDialogButtonBox::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDialogButtonBox::accepted)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDialogButtonBox::helpRequested)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QDialogButtonBox::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDialogButtonBox::rejected)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDialogButtonBox *_t = static_cast<QDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 1: *reinterpret_cast<int*>(_v) = QFlag(_t->standardButtons()); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->centerButtons(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QDialogButtonBox *_t = static_cast<QDialogButtonBox *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setOrientation(*reinterpret_cast< Qt::Orientation*>(_v)); break;
        case 1: _t->setStandardButtons(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 2: _t->setCenterButtons(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDialogButtonBox::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QDialogButtonBox.data,
      qt_meta_data_QDialogButtonBox,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDialogButtonBox::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDialogButtonBox::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDialogButtonBox.stringdata0))
        return static_cast<void*>(const_cast< QDialogButtonBox*>(this));
    return QWidget::qt_metacast(_clname);
}

int QDialogButtonBox::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QDialogButtonBox::clicked(QAbstractButton * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDialogButtonBox::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QDialogButtonBox::helpRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QDialogButtonBox::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
