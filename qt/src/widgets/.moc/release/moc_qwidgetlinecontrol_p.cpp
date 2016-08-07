/****************************************************************************
** Meta object code from reading C++ file 'qwidgetlinecontrol_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qwidgetlinecontrol_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwidgetlinecontrol_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWidgetLineControl_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWidgetLineControl_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWidgetLineControl_t qt_meta_stringdata_QWidgetLineControl = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QWidgetLineControl"
QT_MOC_LITERAL(1, 19, 21), // "cursorPositionChanged"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 16), // "selectionChanged"
QT_MOC_LITERAL(4, 59, 18), // "displayTextChanged"
QT_MOC_LITERAL(5, 78, 11), // "textChanged"
QT_MOC_LITERAL(6, 90, 10), // "textEdited"
QT_MOC_LITERAL(7, 101, 17), // "resetInputContext"
QT_MOC_LITERAL(8, 119, 16), // "updateMicroFocus"
QT_MOC_LITERAL(9, 136, 8), // "accepted"
QT_MOC_LITERAL(10, 145, 15), // "editingFinished"
QT_MOC_LITERAL(11, 161, 12), // "updateNeeded"
QT_MOC_LITERAL(12, 174, 17) // "_q_deleteSelected"

    },
    "QWidgetLineControl\0cursorPositionChanged\0"
    "\0selectionChanged\0displayTextChanged\0"
    "textChanged\0textEdited\0resetInputContext\0"
    "updateMicroFocus\0accepted\0editingFinished\0"
    "updateNeeded\0_q_deleteSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWidgetLineControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       3,    0,   74,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       7,    0,   84,    2, 0x06 /* Public */,
       8,    0,   85,    2, 0x06 /* Public */,
       9,    0,   86,    2, 0x06 /* Public */,
      10,    0,   87,    2, 0x06 /* Public */,
      11,    1,   88,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRect,    2,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QWidgetLineControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWidgetLineControl *_t = static_cast<QWidgetLineControl *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cursorPositionChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->displayTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->resetInputContext(); break;
        case 6: _t->updateMicroFocus(); break;
        case 7: _t->accepted(); break;
        case 8: _t->editingFinished(); break;
        case 9: _t->updateNeeded((*reinterpret_cast< const QRect(*)>(_a[1]))); break;
        case 10: _t->_q_deleteSelected(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWidgetLineControl::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::cursorPositionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::displayTextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::textChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::textEdited)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::resetInputContext)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::updateMicroFocus)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::accepted)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::editingFinished)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QWidgetLineControl::*_t)(const QRect & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWidgetLineControl::updateNeeded)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject QWidgetLineControl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWidgetLineControl.data,
      qt_meta_data_QWidgetLineControl,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWidgetLineControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWidgetLineControl::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWidgetLineControl.stringdata0))
        return static_cast<void*>(const_cast< QWidgetLineControl*>(this));
    return QObject::qt_metacast(_clname);
}

int QWidgetLineControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void QWidgetLineControl::cursorPositionChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWidgetLineControl::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QWidgetLineControl::displayTextChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWidgetLineControl::textChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWidgetLineControl::textEdited(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWidgetLineControl::resetInputContext()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void QWidgetLineControl::updateMicroFocus()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void QWidgetLineControl::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void QWidgetLineControl::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void QWidgetLineControl::updateNeeded(const QRect & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
