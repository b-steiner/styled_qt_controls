/****************************************************************************
** Meta object code from reading C++ file 'qtextbrowser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qtextbrowser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtextbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QTextBrowser_t {
    QByteArrayData data[21];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QTextBrowser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QTextBrowser_t qt_meta_stringdata_QTextBrowser = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QTextBrowser"
QT_MOC_LITERAL(1, 13, 17), // "backwardAvailable"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "forwardAvailable"
QT_MOC_LITERAL(4, 49, 14), // "historyChanged"
QT_MOC_LITERAL(5, 64, 13), // "sourceChanged"
QT_MOC_LITERAL(6, 78, 11), // "highlighted"
QT_MOC_LITERAL(7, 90, 13), // "anchorClicked"
QT_MOC_LITERAL(8, 104, 9), // "setSource"
QT_MOC_LITERAL(9, 114, 4), // "name"
QT_MOC_LITERAL(10, 119, 8), // "backward"
QT_MOC_LITERAL(11, 128, 7), // "forward"
QT_MOC_LITERAL(12, 136, 4), // "home"
QT_MOC_LITERAL(13, 141, 6), // "reload"
QT_MOC_LITERAL(14, 148, 19), // "_q_documentModified"
QT_MOC_LITERAL(15, 168, 17), // "_q_activateAnchor"
QT_MOC_LITERAL(16, 186, 16), // "_q_highlightLink"
QT_MOC_LITERAL(17, 203, 6), // "source"
QT_MOC_LITERAL(18, 210, 11), // "searchPaths"
QT_MOC_LITERAL(19, 222, 17), // "openExternalLinks"
QT_MOC_LITERAL(20, 240, 9) // "openLinks"

    },
    "QTextBrowser\0backwardAvailable\0\0"
    "forwardAvailable\0historyChanged\0"
    "sourceChanged\0highlighted\0anchorClicked\0"
    "setSource\0name\0backward\0forward\0home\0"
    "reload\0_q_documentModified\0_q_activateAnchor\0"
    "_q_highlightLink\0source\0searchPaths\0"
    "openExternalLinks\0openLinks"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QTextBrowser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       4,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    0,   95,    2, 0x06 /* Public */,
       5,    1,   96,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       6,    1,  102,    2, 0x06 /* Public */,
       7,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,  108,    2, 0x0a /* Public */,
      10,    0,  111,    2, 0x0a /* Public */,
      11,    0,  112,    2, 0x0a /* Public */,
      12,    0,  113,    2, 0x0a /* Public */,
      13,    0,  114,    2, 0x0a /* Public */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    1,  116,    2, 0x08 /* Private */,
      16,    1,  119,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QUrl,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QUrl,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // properties: name, type, flags
      17, QMetaType::QUrl, 0x00095103,
      18, QMetaType::QStringList, 0x00095103,
      19, QMetaType::Bool, 0x00095103,
      20, QMetaType::Bool, 0x00095103,

       0        // eod
};

void QTextBrowser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QTextBrowser *_t = static_cast<QTextBrowser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->forwardAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->historyChanged(); break;
        case 3: _t->sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->highlighted((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 5: _t->highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 7: _t->setSource((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 8: _t->backward(); break;
        case 9: _t->forward(); break;
        case 10: _t->home(); break;
        case 11: _t->reload(); break;
        case 12: _t->d_func()->_q_documentModified(); break;
        case 13: _t->d_func()->_q_activateAnchor((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->d_func()->_q_highlightLink((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QTextBrowser::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::backwardAvailable)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::forwardAvailable)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::historyChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::sourceChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::highlighted)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::highlighted)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QTextBrowser::*_t)(const QUrl & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QTextBrowser::anchorClicked)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QTextBrowser *_t = static_cast<QTextBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->source(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->searchPaths(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->openExternalLinks(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->openLinks(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QTextBrowser *_t = static_cast<QTextBrowser *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSource(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setSearchPaths(*reinterpret_cast< QStringList*>(_v)); break;
        case 2: _t->setOpenExternalLinks(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setOpenLinks(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QTextBrowser::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_QTextBrowser.data,
      qt_meta_data_QTextBrowser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QTextBrowser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QTextBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QTextBrowser.stringdata0))
        return static_cast<void*>(const_cast< QTextBrowser*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int QTextBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QTextBrowser::backwardAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QTextBrowser::forwardAvailable(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QTextBrowser::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QTextBrowser::sourceChanged(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QTextBrowser::highlighted(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QTextBrowser::highlighted(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QTextBrowser::anchorClicked(const QUrl & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
