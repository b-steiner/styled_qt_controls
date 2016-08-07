/****************************************************************************
** Meta object code from reading C++ file 'qabstractbutton.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qabstractbutton.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstractbutton.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractButton_t {
    QByteArrayData data[24];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractButton_t qt_meta_stringdata_QAbstractButton = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QAbstractButton"
QT_MOC_LITERAL(1, 16, 7), // "pressed"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "released"
QT_MOC_LITERAL(4, 34, 7), // "clicked"
QT_MOC_LITERAL(5, 42, 7), // "checked"
QT_MOC_LITERAL(6, 50, 7), // "toggled"
QT_MOC_LITERAL(7, 58, 11), // "setIconSize"
QT_MOC_LITERAL(8, 70, 4), // "size"
QT_MOC_LITERAL(9, 75, 12), // "animateClick"
QT_MOC_LITERAL(10, 88, 4), // "msec"
QT_MOC_LITERAL(11, 93, 5), // "click"
QT_MOC_LITERAL(12, 99, 6), // "toggle"
QT_MOC_LITERAL(13, 106, 10), // "setChecked"
QT_MOC_LITERAL(14, 117, 4), // "text"
QT_MOC_LITERAL(15, 122, 4), // "icon"
QT_MOC_LITERAL(16, 127, 8), // "iconSize"
QT_MOC_LITERAL(17, 136, 8), // "shortcut"
QT_MOC_LITERAL(18, 145, 9), // "checkable"
QT_MOC_LITERAL(19, 155, 10), // "autoRepeat"
QT_MOC_LITERAL(20, 166, 13), // "autoExclusive"
QT_MOC_LITERAL(21, 180, 15), // "autoRepeatDelay"
QT_MOC_LITERAL(22, 196, 18), // "autoRepeatInterval"
QT_MOC_LITERAL(23, 215, 4) // "down"

    },
    "QAbstractButton\0pressed\0\0released\0"
    "clicked\0checked\0toggled\0setIconSize\0"
    "size\0animateClick\0msec\0click\0toggle\0"
    "setChecked\0text\0icon\0iconSize\0shortcut\0"
    "checkable\0autoRepeat\0autoExclusive\0"
    "autoRepeatDelay\0autoRepeatInterval\0"
    "down"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
      11,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x06 /* Public */,
       3,    0,   70,    2, 0x06 /* Public */,
       4,    1,   71,    2, 0x06 /* Public */,
       4,    0,   74,    2, 0x26 /* Public | MethodCloned */,
       6,    1,   75,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
       9,    0,   84,    2, 0x2a /* Public | MethodCloned */,
      11,    0,   85,    2, 0x0a /* Public */,
      12,    0,   86,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

 // properties: name, type, flags
      14, QMetaType::QString, 0x00095103,
      15, QMetaType::QIcon, 0x00095103,
      16, QMetaType::QSize, 0x00095103,
      17, QMetaType::QKeySequence, 0x00095103,
      18, QMetaType::Bool, 0x00095103,
       5, QMetaType::Bool, 0x00595103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,
      21, QMetaType::Int, 0x00095103,
      22, QMetaType::Int, 0x00095103,
      23, QMetaType::Bool, 0x00094103,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       4,
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void QAbstractButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractButton *_t = static_cast<QAbstractButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->released(); break;
        case 2: _t->clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->clicked(); break;
        case 4: _t->toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setIconSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 6: _t->animateClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->animateClick(); break;
        case 8: _t->click(); break;
        case 9: _t->toggle(); break;
        case 10: _t->setChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractButton::pressed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractButton::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractButton::released)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QAbstractButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractButton::clicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractButton::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractButton::toggled)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QAbstractButton *_t = static_cast<QAbstractButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 3: *reinterpret_cast< QKeySequence*>(_v) = _t->shortcut(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isCheckable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isChecked(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->autoRepeat(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->autoExclusive(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->autoRepeatDelay(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->autoRepeatInterval(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isDown(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QAbstractButton *_t = static_cast<QAbstractButton *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        case 2: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 3: _t->setShortcut(*reinterpret_cast< QKeySequence*>(_v)); break;
        case 4: _t->setCheckable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setChecked(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setAutoRepeat(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setAutoExclusive(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setAutoRepeatDelay(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setAutoRepeatInterval(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setDown(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QAbstractButton::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QAbstractButton.data,
      qt_meta_data_QAbstractButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractButton.stringdata0))
        return static_cast<void*>(const_cast< QAbstractButton*>(this));
    return QWidget::qt_metacast(_clname);
}

int QAbstractButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        bool *_b = reinterpret_cast<bool*>(_a[0]);
        switch (_id) {
        case 5: *_b = isCheckable(); break;
        default: break;
        }
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 11;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 11;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QAbstractButton::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QAbstractButton::released()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QAbstractButton::clicked(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void QAbstractButton::toggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
