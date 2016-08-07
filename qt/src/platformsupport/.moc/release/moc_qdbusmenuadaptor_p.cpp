/****************************************************************************
** Meta object code from reading C++ file 'qdbusmenuadaptor_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../dbusmenu/qdbusmenuadaptor_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qdbusmenuadaptor_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QDBusMenuAdaptor_t {
    QByteArrayData data[42];
    char stringdata0[4096];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDBusMenuAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDBusMenuAdaptor_t qt_meta_stringdata_QDBusMenuAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QDBusMenuAdaptor"
QT_MOC_LITERAL(1, 17, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 33, 22), // "com.canonical.dbusmenu"
QT_MOC_LITERAL(3, 56, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 76, 3587), // "  <interface name=\"com.canon..."
QT_MOC_LITERAL(5, 3342, 23), // "ItemActivationRequested"
QT_MOC_LITERAL(6, 3366, 0), // ""
QT_MOC_LITERAL(7, 3367, 2), // "id"
QT_MOC_LITERAL(8, 3370, 9), // "timestamp"
QT_MOC_LITERAL(9, 3380, 22), // "ItemsPropertiesUpdated"
QT_MOC_LITERAL(10, 3403, 17), // "QDBusMenuItemList"
QT_MOC_LITERAL(11, 3421, 12), // "updatedProps"
QT_MOC_LITERAL(12, 3434, 21), // "QDBusMenuItemKeysList"
QT_MOC_LITERAL(13, 3456, 12), // "removedProps"
QT_MOC_LITERAL(14, 3469, 13), // "LayoutUpdated"
QT_MOC_LITERAL(15, 3483, 8), // "revision"
QT_MOC_LITERAL(16, 3492, 6), // "parent"
QT_MOC_LITERAL(17, 3499, 11), // "AboutToShow"
QT_MOC_LITERAL(18, 3511, 16), // "AboutToShowGroup"
QT_MOC_LITERAL(19, 3528, 10), // "QList<int>"
QT_MOC_LITERAL(20, 3539, 3), // "ids"
QT_MOC_LITERAL(21, 3543, 11), // "QList<int>&"
QT_MOC_LITERAL(22, 3555, 8), // "idErrors"
QT_MOC_LITERAL(23, 3564, 5), // "Event"
QT_MOC_LITERAL(24, 3570, 7), // "eventId"
QT_MOC_LITERAL(25, 3578, 12), // "QDBusVariant"
QT_MOC_LITERAL(26, 3591, 4), // "data"
QT_MOC_LITERAL(27, 3596, 10), // "EventGroup"
QT_MOC_LITERAL(28, 3607, 18), // "QDBusMenuEventList"
QT_MOC_LITERAL(29, 3626, 6), // "events"
QT_MOC_LITERAL(30, 3633, 18), // "GetGroupProperties"
QT_MOC_LITERAL(31, 3652, 13), // "propertyNames"
QT_MOC_LITERAL(32, 3666, 9), // "GetLayout"
QT_MOC_LITERAL(33, 3676, 8), // "parentId"
QT_MOC_LITERAL(34, 3685, 14), // "recursionDepth"
QT_MOC_LITERAL(35, 3700, 20), // "QDBusMenuLayoutItem&"
QT_MOC_LITERAL(36, 3721, 6), // "layout"
QT_MOC_LITERAL(37, 3728, 11), // "GetProperty"
QT_MOC_LITERAL(38, 3740, 4), // "name"
QT_MOC_LITERAL(39, 3745, 6), // "Status"
QT_MOC_LITERAL(40, 3752, 13), // "TextDirection"
QT_MOC_LITERAL(41, 3766, 7) // "Version"

    },
    "QDBusMenuAdaptor\0D-Bus Interface\0"
    "com.canonical.dbusmenu\0D-Bus Introspection\0"
    "  <interface name=\"com.canonical.dbusmenu\">\n    <property access=\""
    "read\" type=\"u\" name=\"Version\">\n    </property>\n    <property ac"
    "cess=\"read\" type=\"s\" name=\"TextDirection\">\n    </property>\n   "
    " <property access=\"read\" type=\"s\" name=\"Status\">\n    </property"
    ">\n    <property access=\"read\" type=\"as\" name=\"IconThemePath\">\n"
    "    </property>\n    <method name=\"GetLayout\">\n      <annotation va"
    "lue=\"QDBusMenuLayoutItem\" name=\"org.qtproject.QtDBus.QtTypeName.Out"
    "1\"/>\n      <arg direction=\"in\" type=\"i\" name=\"parentId\"/>\n   "
    "   <arg direction=\"in\" type=\"i\" name=\"recursionDepth\"/>\n      <"
    "arg direction=\"in\" type=\"as\" name=\"propertyNames\"/>\n      <arg "
    "direction=\"out\" type=\"u\" name=\"revision\"/>\n      <arg direction"
    "=\"out\" type=\"(ia{sv}av)\" name=\"layout\"/>\n    </method>\n    <me"
    "thod name=\"GetGroupProperties\">\n      <annotation value=\"QList&lt;"
    "int&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n      <annot"
    "ation value=\"QDBusMenuItemList\" name=\"org.qtproject.QtDBus.QtTypeNa"
    "me.Out0\"/>\n      <arg direction=\"in\" type=\"ai\" name=\"ids\"/>\n "
    "     <arg direction=\"in\" type=\"as\" name=\"propertyNames\"/>\n     "
    " <arg direction=\"out\" type=\"a(ia{sv})\" name=\"properties\"/>\n    "
    "</method>\n    <method name=\"GetProperty\">\n      <arg direction=\"i"
    "n\" type=\"i\" name=\"id\"/>\n      <arg direction=\"in\" type=\"s\" n"
    "ame=\"name\"/>\n      <arg direction=\"out\" type=\"v\" name=\"value\""
    "/>\n    </method>\n    <method name=\"Event\">\n      <arg direction=\""
    "in\" type=\"i\" name=\"id\"/>\n      <arg direction=\"in\" type=\"s\" "
    "name=\"eventId\"/>\n      <arg direction=\"in\" type=\"v\" name=\"data"
    "\"/>\n      <arg direction=\"in\" type=\"u\" name=\"timestamp\"/>\n   "
    " </method>\n    <method name=\"EventGroup\">\n      <annotation value="
    "\"QList&lt;QDBusMenuEvent&gt;\" name=\"org.qtproject.QtDBus.QtTypeName"
    ".In0\"/>\n      <annotation value=\"QList&lt;int&gt;\" name=\"org.qtpr"
    "oject.QtDBus.QtTypeName.Out0\"/>\n      <arg direction=\"in\" type=\"a"
    "(isvu)\" name=\"events\"/>\n      <arg direction=\"out\" type=\"ai\" n"
    "ame=\"idErrors\"/>\n    </method>\n    <method name=\"AboutToShow\">\n"
    "      <arg direction=\"in\" type=\"i\" name=\"id\"/>\n      <arg direc"
    "tion=\"out\" type=\"b\" name=\"needUpdate\"/>\n    </method>\n    <met"
    "hod name=\"AboutToShowGroup\">\n      <annotation value=\"QList&lt;int"
    "&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.In0\"/>\n      <annotati"
    "on value=\"QList&lt;int&gt;\" name=\"org.qtproject.QtDBus.QtTypeName.O"
    "ut0\"/>\n      <annotation value=\"QList&lt;int&gt;\" name=\"org.qtpro"
    "ject.QtDBus.QtTypeName.Out1\"/>\n      <arg direction=\"in\" type=\"ai"
    "\" name=\"ids\"/>\n      <arg direction=\"out\" type=\"ai\" name=\"upd"
    "atesNeeded\"/>\n      <arg direction=\"out\" type=\"ai\" name=\"idErro"
    "rs\"/>\n    </method>\n    <signal name=\"ItemsPropertiesUpdated\">\n "
    "     <annotation value=\"QDBusMenuItemList\" name=\"org.qtproject.QtDB"
    "us.QtTypeName.In0\"/>\n      <annotation value=\"QDBusMenuItemKeysList"
    "\" name=\"org.qtproject.QtDBus.QtTypeName.In1\"/>\n      <arg directio"
    "n=\"out\" type=\"a(ia{sv})\" name=\"updatedProps\"/>\n      <arg direc"
    "tion=\"out\" type=\"a(ias)\" name=\"removedProps\"/>\n    </signal>\n "
    "   <signal name=\"LayoutUpdated\">\n      <arg direction=\"out\" type="
    "\"u\" name=\"revision\"/>\n      <arg direction=\"out\" type=\"i\" nam"
    "e=\"parent\"/>\n    </signal>\n    <signal name=\"ItemActivationReques"
    "ted\">\n      <arg direction=\"out\" type=\"i\" name=\"id\"/>\n      <"
    "arg direction=\"out\" type=\"u\" name=\"timestamp\"/>\n    </signal>\n"
    "  </interface>\n\0"
    "ItemActivationRequested\0\0id\0timestamp\0"
    "ItemsPropertiesUpdated\0QDBusMenuItemList\0"
    "updatedProps\0QDBusMenuItemKeysList\0"
    "removedProps\0LayoutUpdated\0revision\0"
    "parent\0AboutToShow\0AboutToShowGroup\0"
    "QList<int>\0ids\0QList<int>&\0idErrors\0"
    "Event\0eventId\0QDBusVariant\0data\0"
    "EventGroup\0QDBusMenuEventList\0events\0"
    "GetGroupProperties\0propertyNames\0"
    "GetLayout\0parentId\0recursionDepth\0"
    "QDBusMenuLayoutItem&\0layout\0GetProperty\0"
    "name\0Status\0TextDirection\0Version"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDBusMenuAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
      10,   18, // methods
       3,  122, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // signals: name, argc, parameters, tag, flags
       5,    2,   68,    6, 0x06 /* Public */,
       9,    2,   73,    6, 0x06 /* Public */,
      14,    2,   78,    6, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    1,   83,    6, 0x0a /* Public */,
      18,    2,   86,    6, 0x0a /* Public */,
      23,    4,   91,    6, 0x0a /* Public */,
      27,    1,  100,    6, 0x0a /* Public */,
      30,    2,  103,    6, 0x0a /* Public */,
      32,    4,  108,    6, 0x0a /* Public */,
      37,    2,  117,    6, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::UInt,    7,    8,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,   13,
    QMetaType::Void, QMetaType::UInt, QMetaType::Int,   15,   16,

 // slots: parameters
    QMetaType::Bool, QMetaType::Int,    7,
    0x80000000 | 19, 0x80000000 | 19, 0x80000000 | 21,   20,   22,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, 0x80000000 | 25, QMetaType::UInt,    7,   24,   26,    8,
    0x80000000 | 19, 0x80000000 | 28,   29,
    0x80000000 | 10, 0x80000000 | 19, QMetaType::QStringList,   20,   31,
    QMetaType::UInt, QMetaType::Int, QMetaType::Int, QMetaType::QStringList, 0x80000000 | 35,   33,   34,   31,   36,
    0x80000000 | 25, QMetaType::Int, QMetaType::QString,    7,   38,

 // properties: name, type, flags
      39, QMetaType::QString, 0x00095001,
      40, QMetaType::QString, 0x00095001,
      41, QMetaType::UInt, 0x00095001,

       0        // eod
};

void QDBusMenuAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDBusMenuAdaptor *_t = static_cast<QDBusMenuAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ItemActivationRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->ItemsPropertiesUpdated((*reinterpret_cast< const QDBusMenuItemList(*)>(_a[1])),(*reinterpret_cast< const QDBusMenuItemKeysList(*)>(_a[2]))); break;
        case 2: _t->LayoutUpdated((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: { bool _r = _t->AboutToShow((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { QList<int> _r = _t->AboutToShowGroup((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< QList<int>(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 5: _t->Event((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QDBusVariant(*)>(_a[3])),(*reinterpret_cast< uint(*)>(_a[4]))); break;
        case 6: { QList<int> _r = _t->EventGroup((*reinterpret_cast< const QDBusMenuEventList(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = _r; }  break;
        case 7: { QDBusMenuItemList _r = _t->GetGroupProperties((*reinterpret_cast< const QList<int>(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusMenuItemList*>(_a[0]) = _r; }  break;
        case 8: { uint _r = _t->GetLayout((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< const QStringList(*)>(_a[3])),(*reinterpret_cast< QDBusMenuLayoutItem(*)>(_a[4])));
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = _r; }  break;
        case 9: { QDBusVariant _r = _t->GetProperty((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QDBusVariant*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMenuItemKeysList >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMenuItemList >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusVariant >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QDBusMenuEventList >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDBusMenuAdaptor::*_t)(int , uint );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusMenuAdaptor::ItemActivationRequested)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDBusMenuAdaptor::*_t)(const QDBusMenuItemList & , const QDBusMenuItemKeysList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusMenuAdaptor::ItemsPropertiesUpdated)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QDBusMenuAdaptor::*_t)(uint , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDBusMenuAdaptor::LayoutUpdated)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QDBusMenuAdaptor *_t = static_cast<QDBusMenuAdaptor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->textDirection(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->version(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QDBusMenuAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_QDBusMenuAdaptor.data,
      qt_meta_data_QDBusMenuAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDBusMenuAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDBusMenuAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDBusMenuAdaptor.stringdata0))
        return static_cast<void*>(const_cast< QDBusMenuAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int QDBusMenuAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
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
void QDBusMenuAdaptor::ItemActivationRequested(int _t1, uint _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDBusMenuAdaptor::ItemsPropertiesUpdated(const QDBusMenuItemList & _t1, const QDBusMenuItemKeysList & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QDBusMenuAdaptor::LayoutUpdated(uint _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
