/****************************************************************************
** Meta object code from reading C++ file 'qinputdialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dialogs/qinputdialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qinputdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QInputDialog_t {
    QByteArrayData data[13];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QInputDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QInputDialog_t qt_meta_stringdata_QInputDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QInputDialog"
QT_MOC_LITERAL(1, 13, 16), // "textValueChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "text"
QT_MOC_LITERAL(4, 36, 17), // "textValueSelected"
QT_MOC_LITERAL(5, 54, 15), // "intValueChanged"
QT_MOC_LITERAL(6, 70, 5), // "value"
QT_MOC_LITERAL(7, 76, 16), // "intValueSelected"
QT_MOC_LITERAL(8, 93, 18), // "doubleValueChanged"
QT_MOC_LITERAL(9, 112, 19), // "doubleValueSelected"
QT_MOC_LITERAL(10, 132, 14), // "_q_textChanged"
QT_MOC_LITERAL(11, 147, 27), // "_q_plainTextEditTextChanged"
QT_MOC_LITERAL(12, 175, 20) // "_q_currentRowChanged"

    },
    "QInputDialog\0textValueChanged\0\0text\0"
    "textValueSelected\0intValueChanged\0"
    "value\0intValueSelected\0doubleValueChanged\0"
    "doubleValueSelected\0_q_textChanged\0"
    "_q_plainTextEditTextChanged\0"
    "_q_currentRowChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QInputDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    1,   62,    2, 0x06 /* Public */,
       5,    1,   65,    2, 0x06 /* Public */,
       7,    1,   68,    2, 0x06 /* Public */,
       8,    1,   71,    2, 0x06 /* Public */,
       9,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x08 /* Private */,
      11,    0,   80,    2, 0x08 /* Private */,
      12,    2,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex, QMetaType::QModelIndex,    2,    2,

       0        // eod
};

void QInputDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QInputDialog *_t = static_cast<QInputDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textValueChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->textValueSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->intValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->intValueSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->doubleValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->doubleValueSelected((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->d_func()->_q_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_plainTextEditTextChanged(); break;
        case 8: _t->d_func()->_q_currentRowChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QInputDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::textValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QInputDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::textValueSelected)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QInputDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::intValueChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QInputDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::intValueSelected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QInputDialog::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::doubleValueChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QInputDialog::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QInputDialog::doubleValueSelected)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject QInputDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QInputDialog.data,
      qt_meta_data_QInputDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QInputDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QInputDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QInputDialog.stringdata0))
        return static_cast<void*>(const_cast< QInputDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QInputDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void QInputDialog::textValueChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QInputDialog::textValueSelected(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QInputDialog::intValueChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QInputDialog::intValueSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QInputDialog::doubleValueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QInputDialog::doubleValueSelected(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
