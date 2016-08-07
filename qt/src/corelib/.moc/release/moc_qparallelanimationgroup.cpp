/****************************************************************************
** Meta object code from reading C++ file 'qparallelanimationgroup.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../animation/qparallelanimationgroup.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qparallelanimationgroup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QParallelAnimationGroup_t {
    QByteArrayData data[3];
    char stringdata0[58];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QParallelAnimationGroup_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QParallelAnimationGroup_t qt_meta_stringdata_QParallelAnimationGroup = {
    {
QT_MOC_LITERAL(0, 0, 23), // "QParallelAnimationGroup"
QT_MOC_LITERAL(1, 24, 32), // "_q_uncontrolledAnimationFinished"
QT_MOC_LITERAL(2, 57, 0) // ""

    },
    "QParallelAnimationGroup\0"
    "_q_uncontrolledAnimationFinished\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QParallelAnimationGroup[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void QParallelAnimationGroup::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QParallelAnimationGroup *_t = static_cast<QParallelAnimationGroup *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->d_func()->_q_uncontrolledAnimationFinished(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QParallelAnimationGroup::staticMetaObject = {
    { &QAnimationGroup::staticMetaObject, qt_meta_stringdata_QParallelAnimationGroup.data,
      qt_meta_data_QParallelAnimationGroup,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QParallelAnimationGroup::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QParallelAnimationGroup::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QParallelAnimationGroup.stringdata0))
        return static_cast<void*>(const_cast< QParallelAnimationGroup*>(this));
    return QAnimationGroup::qt_metacast(_clname);
}

int QParallelAnimationGroup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAnimationGroup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
