/****************************************************************************
** Meta object code from reading C++ file 'qstatusnotifieritemadaptor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbustray/qstatusnotifieritemadaptor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qstatusnotifieritemadaptor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QStatusNotifierItemAdaptor_t {
    QByteArrayData data[38];
    char stringdata0[2921];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStatusNotifierItemAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStatusNotifierItemAdaptor_t qt_meta_stringdata_QStatusNotifierItemAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 26), // "QStatusNotifierItemAdaptor"
QT_MOC_LITERAL(1, 27, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 43, 26), // "org.kde.StatusNotifierItem"
QT_MOC_LITERAL(3, 70, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 90, 2466), // "  <interface name=\"org.kde.S..."
QT_MOC_LITERAL(5, 2321, 16), // "NewAttentionIcon"
QT_MOC_LITERAL(6, 2338, 0), // ""
QT_MOC_LITERAL(7, 2339, 7), // "NewIcon"
QT_MOC_LITERAL(8, 2347, 14), // "NewOverlayIcon"
QT_MOC_LITERAL(9, 2362, 9), // "NewStatus"
QT_MOC_LITERAL(10, 2372, 6), // "status"
QT_MOC_LITERAL(11, 2379, 8), // "NewTitle"
QT_MOC_LITERAL(12, 2388, 10), // "NewToolTip"
QT_MOC_LITERAL(13, 2399, 8), // "Activate"
QT_MOC_LITERAL(14, 2408, 1), // "x"
QT_MOC_LITERAL(15, 2410, 1), // "y"
QT_MOC_LITERAL(16, 2412, 11), // "ContextMenu"
QT_MOC_LITERAL(17, 2424, 6), // "Scroll"
QT_MOC_LITERAL(18, 2431, 5), // "delta"
QT_MOC_LITERAL(19, 2437, 11), // "orientation"
QT_MOC_LITERAL(20, 2449, 17), // "SecondaryActivate"
QT_MOC_LITERAL(21, 2467, 17), // "AttentionIconName"
QT_MOC_LITERAL(22, 2485, 19), // "AttentionIconPixmap"
QT_MOC_LITERAL(23, 2505, 19), // "QXdgDBusImageVector"
QT_MOC_LITERAL(24, 2525, 18), // "AttentionMovieName"
QT_MOC_LITERAL(25, 2544, 8), // "Category"
QT_MOC_LITERAL(26, 2553, 8), // "IconName"
QT_MOC_LITERAL(27, 2562, 10), // "IconPixmap"
QT_MOC_LITERAL(28, 2573, 2), // "Id"
QT_MOC_LITERAL(29, 2576, 10), // "ItemIsMenu"
QT_MOC_LITERAL(30, 2587, 4), // "Menu"
QT_MOC_LITERAL(31, 2592, 15), // "QDBusObjectPath"
QT_MOC_LITERAL(32, 2608, 15), // "OverlayIconName"
QT_MOC_LITERAL(33, 2624, 17), // "OverlayIconPixmap"
QT_MOC_LITERAL(34, 2642, 6), // "Status"
QT_MOC_LITERAL(35, 2649, 5), // "Title"
QT_MOC_LITERAL(36, 2655, 7), // "ToolTip"
QT_MOC_LITERAL(37, 2663, 21) // "QXdgDBusToolTipStruct"

    },
    "QStatusNotifierItemAdaptor\0D-Bus Interface\0"
    "org.kde.StatusNotifierItem\0"
    "D-Bus Introspection\0"
    "  <interface name=\"org.kde.StatusNotifierItem\">\n    <property acces"
    "s=\"read\" type=\"s\" name=\"Category\"/>\n    <property access=\"read"
    "\" type=\"s\" name=\"Id\"/>\n    <property access=\"read\" type=\"s\" "
    "name=\"Title\"/>\n    <property access=\"read\" type=\"s\" name=\"Stat"
    "us\"/>\n    <property access=\"read\" type=\"i\" name=\"WindowId\"/>\n"
    "    <property access=\"read\" type=\"s\" name=\"IconThemePath\"/>\n   "
    " <property access=\"read\" type=\"o\" name=\"Menu\"/>\n    <property a"
    "ccess=\"read\" type=\"b\" name=\"ItemIsMenu\"/>\n    <property access="
    "\"read\" type=\"s\" name=\"IconName\"/>\n    <property access=\"read\""
    " type=\"a(iiay)\" name=\"IconPixmap\">\n      <annotation value=\"QXdg"
    "DBusImageVector\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n    </pr"
    "operty>\n    <property access=\"read\" type=\"s\" name=\"OverlayIconNa"
    "me\"/>\n    <property access=\"read\" type=\"a(iiay)\" name=\"OverlayI"
    "conPixmap\">\n      <annotation value=\"QXdgDBusImageVector\" name=\"o"
    "rg.qtproject.QtDBus.QtTypeName\"/>\n    </property>\n    <property acc"
    "ess=\"read\" type=\"s\" name=\"AttentionIconName\"/>\n    <property ac"
    "cess=\"read\" type=\"a(iiay)\" name=\"AttentionIconPixmap\">\n      <a"
    "nnotation value=\"QXdgDBusImageVector\" name=\"org.qtproject.QtDBus.Qt"
    "TypeName\"/>\n    </property>\n    <property access=\"read\" type=\"s\""
    " name=\"AttentionMovieName\"/>\n    <property access=\"read\" type=\"("
    "sa(iiay)ss)\" name=\"ToolTip\">\n      <annotation value=\"QXdgDBusToo"
    "lTipStruct\" name=\"org.qtproject.QtDBus.QtTypeName\"/>\n    </propert"
    "y>\n    <method name=\"ContextMenu\">\n      <arg direction=\"in\" typ"
    "e=\"i\" name=\"x\"/>\n      <arg direction=\"in\" type=\"i\" name=\"y\""
    "/>\n    </method>\n    <method name=\"Activate\">\n      <arg directio"
    "n=\"in\" type=\"i\" name=\"x\"/>\n      <arg direction=\"in\" type=\"i"
    "\" name=\"y\"/>\n    </method>\n    <method name=\"SecondaryActivate\""
    ">\n      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n      <arg dir"
    "ection=\"in\" type=\"i\" name=\"y\"/>\n    </method>\n    <method name"
    "=\"Scroll\">\n      <arg direction=\"in\" type=\"i\" name=\"delta\"/>\n"
    "      <arg direction=\"in\" type=\"s\" name=\"orientation\"/>\n    </m"
    "ethod>\n    <signal name=\"NewTitle\"/>\n    <signal name=\"NewIcon\"/"
    ">\n    <signal name=\"NewAttentionIcon\"/>\n    <signal name=\"NewOver"
    "layIcon\"/>\n    <signal name=\"NewToolTip\"/>\n    <signal name=\"New"
    "Status\">\n      <arg type=\"s\" name=\"status\"/>\n    </signal>\n  <"
    "/interface>\n\0"
    "NewAttentionIcon\0\0NewIcon\0NewOverlayIcon\0"
    "NewStatus\0status\0NewTitle\0NewToolTip\0"
    "Activate\0x\0y\0ContextMenu\0Scroll\0delta\0"
    "orientation\0SecondaryActivate\0"
    "AttentionIconName\0AttentionIconPixmap\0"
    "QXdgDBusImageVector\0AttentionMovieName\0"
    "Category\0IconName\0IconPixmap\0Id\0"
    "ItemIsMenu\0Menu\0QDBusObjectPath\0"
    "OverlayIconName\0OverlayIconPixmap\0"
    "Status\0Title\0ToolTip\0QXdgDBusToolTipStruct"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStatusNotifierItemAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      10,   18, // methods
      14,   96, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    0,   68,    6, 0x06 /* Public */,
       7,    0,   69,    6, 0x06 /* Public */,
       8,    0,   70,    6, 0x06 /* Public */,
       9,    1,   71,    6, 0x06 /* Public */,
      11,    0,   74,    6, 0x06 /* Public */,
      12,    0,   75,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    2,   76,    6, 0x0a /* Public */,
      16,    2,   81,    6, 0x0a /* Public */,
      17,    2,   86,    6, 0x0a /* Public */,
      20,    2,   91,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   18,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   14,   15,

 // properties: name, type, flags
      21, QMetaType::QString, 0x00095001,
      22, 0x80000000 | 23, 0x00095009,
      24, QMetaType::QString, 0x00095001,
      25, QMetaType::QString, 0x00095001,
      26, QMetaType::QString, 0x00095001,
      27, 0x80000000 | 23, 0x00095009,
      28, QMetaType::QString, 0x00095001,
      29, QMetaType::Bool, 0x00095001,
      30, 0x80000000 | 31, 0x00095009,
      32, QMetaType::QString, 0x00095001,
      33, 0x80000000 | 23, 0x00095009,
      34, QMetaType::QString, 0x00095001,
      35, QMetaType::QString, 0x00095001,
      36, 0x80000000 | 37, 0x00095009,

       0        // eod
};

void QStatusNotifierItemAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStatusNotifierItemAdaptor *_t = static_cast<QStatusNotifierItemAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewAttentionIcon(); break;
        case 1: _t->NewIcon(); break;
        case 2: _t->NewOverlayIcon(); break;
        case 3: _t->NewStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->NewTitle(); break;
        case 5: _t->NewToolTip(); break;
        case 6: _t->Activate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->ContextMenu((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->Scroll((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 9: _t->SecondaryActivate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewAttentionIcon)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewIcon)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewOverlayIcon)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewStatus)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewTitle)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QStatusNotifierItemAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QStatusNotifierItemAdaptor::NewToolTip)) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusObjectPath >(); break;
        case 10:
        case 5:
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXdgDBusImageVector >(); break;
        case 13:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QXdgDBusToolTipStruct >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QStatusNotifierItemAdaptor *_t = static_cast<QStatusNotifierItemAdaptor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->attentionIconName(); break;
        case 1: *reinterpret_cast< QXdgDBusImageVector*>(_v) = _t->attentionIconPixmap(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->attentionMovieName(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->category(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconName(); break;
        case 5: *reinterpret_cast< QXdgDBusImageVector*>(_v) = _t->iconPixmap(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->itemIsMenu(); break;
        case 8: *reinterpret_cast< QDBusObjectPath*>(_v) = _t->menu(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->overlayIconName(); break;
        case 10: *reinterpret_cast< QXdgDBusImageVector*>(_v) = _t->overlayIconPixmap(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 13: *reinterpret_cast< QXdgDBusToolTipStruct*>(_v) = _t->toolTip(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QStatusNotifierItemAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_QStatusNotifierItemAdaptor.data,
      qt_meta_data_QStatusNotifierItemAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QStatusNotifierItemAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStatusNotifierItemAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QStatusNotifierItemAdaptor.stringdata0))
        return static_cast<void*>(const_cast< QStatusNotifierItemAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int QStatusNotifierItemAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 14;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 14;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QStatusNotifierItemAdaptor::NewAttentionIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QStatusNotifierItemAdaptor::NewIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void QStatusNotifierItemAdaptor::NewOverlayIcon()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void QStatusNotifierItemAdaptor::NewStatus(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QStatusNotifierItemAdaptor::NewTitle()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void QStatusNotifierItemAdaptor::NewToolTip()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
