/****************************************************************************
** Meta object code from reading C++ file 'qabstracttextdocumentlayout.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../text/qabstracttextdocumentlayout.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qabstracttextdocumentlayout.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QAbstractTextDocumentLayout_t {
    QByteArrayData data[14];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAbstractTextDocumentLayout_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAbstractTextDocumentLayout_t qt_meta_stringdata_QAbstractTextDocumentLayout = {
    {
QT_MOC_LITERAL(0, 0, 27), // "QAbstractTextDocumentLayout"
QT_MOC_LITERAL(1, 28, 6), // "update"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "updateBlock"
QT_MOC_LITERAL(4, 48, 10), // "QTextBlock"
QT_MOC_LITERAL(5, 59, 5), // "block"
QT_MOC_LITERAL(6, 65, 19), // "documentSizeChanged"
QT_MOC_LITERAL(7, 85, 7), // "newSize"
QT_MOC_LITERAL(8, 93, 16), // "pageCountChanged"
QT_MOC_LITERAL(9, 110, 8), // "newPages"
QT_MOC_LITERAL(10, 119, 19), // "_q_handlerDestroyed"
QT_MOC_LITERAL(11, 139, 3), // "obj"
QT_MOC_LITERAL(12, 143, 23), // "_q_dynamicPageCountSlot"
QT_MOC_LITERAL(13, 167, 26) // "_q_dynamicDocumentSizeSlot"

    },
    "QAbstractTextDocumentLayout\0update\0\0"
    "updateBlock\0QTextBlock\0block\0"
    "documentSizeChanged\0newSize\0"
    "pageCountChanged\0newPages\0_q_handlerDestroyed\0"
    "obj\0_q_dynamicPageCountSlot\0"
    "_q_dynamicDocumentSizeSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAbstractTextDocumentLayout[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       1,    0,   57,    2, 0x26 /* Public | MethodCloned */,
       3,    1,   58,    2, 0x06 /* Public */,
       6,    1,   61,    2, 0x06 /* Public */,
       8,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   67,    2, 0x08 /* Private */,
      12,    0,   70,    2, 0x08 /* Private */,
      13,    0,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QSizeF,    7,
    QMetaType::Void, QMetaType::Int,    9,

 // slots: parameters
    QMetaType::Void, QMetaType::QObjectStar,   11,
    QMetaType::Int,
    QMetaType::QSizeF,

       0        // eod
};

void QAbstractTextDocumentLayout::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAbstractTextDocumentLayout *_t = static_cast<QAbstractTextDocumentLayout *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->update(); break;
        case 2: _t->updateBlock((*reinterpret_cast< const QTextBlock(*)>(_a[1]))); break;
        case 3: _t->documentSizeChanged((*reinterpret_cast< const QSizeF(*)>(_a[1]))); break;
        case 4: _t->pageCountChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->d_func()->_q_handlerDestroyed((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 6: { int _r = _t->d_func()->_q_dynamicPageCountSlot();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 7: { QSizeF _r = _t->d_func()->_q_dynamicDocumentSizeSlot();
            if (_a[0]) *reinterpret_cast< QSizeF*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QAbstractTextDocumentLayout::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTextDocumentLayout::update)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QAbstractTextDocumentLayout::*_t)(const QTextBlock & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTextDocumentLayout::updateBlock)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QAbstractTextDocumentLayout::*_t)(const QSizeF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTextDocumentLayout::documentSizeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QAbstractTextDocumentLayout::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QAbstractTextDocumentLayout::pageCountChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject QAbstractTextDocumentLayout::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QAbstractTextDocumentLayout.data,
      qt_meta_data_QAbstractTextDocumentLayout,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAbstractTextDocumentLayout::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAbstractTextDocumentLayout::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAbstractTextDocumentLayout.stringdata0))
        return static_cast<void*>(const_cast< QAbstractTextDocumentLayout*>(this));
    return QObject::qt_metacast(_clname);
}

int QAbstractTextDocumentLayout::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QAbstractTextDocumentLayout::update(const QRectF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void QAbstractTextDocumentLayout::updateBlock(const QTextBlock & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QAbstractTextDocumentLayout::documentSizeChanged(const QSizeF & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QAbstractTextDocumentLayout::pageCountChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
