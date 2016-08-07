/****************************************************************************
** Meta object code from reading C++ file 'qsyntaxhighlighter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qsyntaxhighlighter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qsyntaxhighlighter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QSyntaxHighlighter_t {
    QByteArrayData data[11];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QSyntaxHighlighter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QSyntaxHighlighter_t qt_meta_stringdata_QSyntaxHighlighter = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QSyntaxHighlighter"
QT_MOC_LITERAL(1, 19, 11), // "rehighlight"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "rehighlightBlock"
QT_MOC_LITERAL(4, 49, 10), // "QTextBlock"
QT_MOC_LITERAL(5, 60, 5), // "block"
QT_MOC_LITERAL(6, 66, 17), // "_q_reformatBlocks"
QT_MOC_LITERAL(7, 84, 4), // "from"
QT_MOC_LITERAL(8, 89, 12), // "charsRemoved"
QT_MOC_LITERAL(9, 102, 10), // "charsAdded"
QT_MOC_LITERAL(10, 113, 21) // "_q_delayedRehighlight"

    },
    "QSyntaxHighlighter\0rehighlight\0\0"
    "rehighlightBlock\0QTextBlock\0block\0"
    "_q_reformatBlocks\0from\0charsRemoved\0"
    "charsAdded\0_q_delayedRehighlight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QSyntaxHighlighter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x0a /* Public */,
       6,    3,   38,    2, 0x08 /* Private */,
      10,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int,    7,    8,    9,
    QMetaType::Void,

       0        // eod
};

void QSyntaxHighlighter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QSyntaxHighlighter *_t = static_cast<QSyntaxHighlighter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rehighlight(); break;
        case 1: _t->rehighlightBlock((*reinterpret_cast< const QTextBlock(*)>(_a[1]))); break;
        case 2: _t->d_func()->_q_reformatBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: _t->d_func()->_q_delayedRehighlight(); break;
        default: ;
        }
    }
}

const QMetaObject QSyntaxHighlighter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QSyntaxHighlighter.data,
      qt_meta_data_QSyntaxHighlighter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QSyntaxHighlighter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QSyntaxHighlighter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QSyntaxHighlighter.stringdata0))
        return static_cast<void*>(const_cast< QSyntaxHighlighter*>(this));
    return QObject::qt_metacast(_clname);
}

int QSyntaxHighlighter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
