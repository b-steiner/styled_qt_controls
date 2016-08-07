/****************************************************************************
** Meta object code from reading C++ file 'qmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widgets/qmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QMainWindow_t {
    QByteArrayData data[27];
    char stringdata0[402];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QMainWindow_t qt_meta_stringdata_QMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QMainWindow"
QT_MOC_LITERAL(1, 12, 15), // "iconSizeChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "iconSize"
QT_MOC_LITERAL(4, 38, 22), // "toolButtonStyleChanged"
QT_MOC_LITERAL(5, 61, 19), // "Qt::ToolButtonStyle"
QT_MOC_LITERAL(6, 81, 15), // "toolButtonStyle"
QT_MOC_LITERAL(7, 97, 11), // "setAnimated"
QT_MOC_LITERAL(8, 109, 7), // "enabled"
QT_MOC_LITERAL(9, 117, 21), // "setDockNestingEnabled"
QT_MOC_LITERAL(10, 139, 30), // "setUnifiedTitleAndToolBarOnMac"
QT_MOC_LITERAL(11, 170, 3), // "set"
QT_MOC_LITERAL(12, 174, 8), // "animated"
QT_MOC_LITERAL(13, 183, 12), // "documentMode"
QT_MOC_LITERAL(14, 196, 8), // "tabShape"
QT_MOC_LITERAL(15, 205, 20), // "QTabWidget::TabShape"
QT_MOC_LITERAL(16, 226, 18), // "dockNestingEnabled"
QT_MOC_LITERAL(17, 245, 11), // "dockOptions"
QT_MOC_LITERAL(18, 257, 11), // "DockOptions"
QT_MOC_LITERAL(19, 269, 27), // "unifiedTitleAndToolBarOnMac"
QT_MOC_LITERAL(20, 297, 10), // "DockOption"
QT_MOC_LITERAL(21, 308, 13), // "AnimatedDocks"
QT_MOC_LITERAL(22, 322, 16), // "AllowNestedDocks"
QT_MOC_LITERAL(23, 339, 16), // "AllowTabbedDocks"
QT_MOC_LITERAL(24, 356, 16), // "ForceTabbedDocks"
QT_MOC_LITERAL(25, 373, 12), // "VerticalTabs"
QT_MOC_LITERAL(26, 386, 15) // "GroupedDragging"

    },
    "QMainWindow\0iconSizeChanged\0\0iconSize\0"
    "toolButtonStyleChanged\0Qt::ToolButtonStyle\0"
    "toolButtonStyle\0setAnimated\0enabled\0"
    "setDockNestingEnabled\0"
    "setUnifiedTitleAndToolBarOnMac\0set\0"
    "animated\0documentMode\0tabShape\0"
    "QTabWidget::TabShape\0dockNestingEnabled\0"
    "dockOptions\0DockOptions\0"
    "unifiedTitleAndToolBarOnMac\0DockOption\0"
    "AnimatedDocks\0AllowNestedDocks\0"
    "AllowTabbedDocks\0ForceTabbedDocks\0"
    "VerticalTabs\0GroupedDragging"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       8,   54, // properties
       2,   78, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       9,    1,   48,    2, 0x0a /* Public */,
      10,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QSize,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void, QMetaType::Bool,   11,

 // properties: name, type, flags
       3, QMetaType::QSize, 0x00095103,
       6, 0x80000000 | 5, 0x0009510b,
      12, QMetaType::Bool, 0x00095103,
      13, QMetaType::Bool, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,
      16, QMetaType::Bool, 0x00095103,
      17, 0x80000000 | 18, 0x0009510b,
      19, QMetaType::Bool, 0x00095103,

 // enums: name, flags, count, data
      20, 0x0,    6,   86,
      18, 0x1,    6,   98,

 // enum data: key, value
      21, uint(QMainWindow::AnimatedDocks),
      22, uint(QMainWindow::AllowNestedDocks),
      23, uint(QMainWindow::AllowTabbedDocks),
      24, uint(QMainWindow::ForceTabbedDocks),
      25, uint(QMainWindow::VerticalTabs),
      26, uint(QMainWindow::GroupedDragging),
      21, uint(QMainWindow::AnimatedDocks),
      22, uint(QMainWindow::AllowNestedDocks),
      23, uint(QMainWindow::AllowTabbedDocks),
      24, uint(QMainWindow::ForceTabbedDocks),
      25, uint(QMainWindow::VerticalTabs),
      26, uint(QMainWindow::GroupedDragging),

       0        // eod
};

void QMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QMainWindow *_t = static_cast<QMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconSizeChanged((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 1: _t->toolButtonStyleChanged((*reinterpret_cast< Qt::ToolButtonStyle(*)>(_a[1]))); break;
        case 2: _t->setAnimated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setDockNestingEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->setUnifiedTitleAndToolBarOnMac((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QMainWindow::*_t)(const QSize & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainWindow::iconSizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QMainWindow::*_t)(Qt::ToolButtonStyle );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QMainWindow::toolButtonStyleChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QMainWindow *_t = static_cast<QMainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        case 1: *reinterpret_cast< Qt::ToolButtonStyle*>(_v) = _t->toolButtonStyle(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isAnimated(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->documentMode(); break;
        case 4: *reinterpret_cast< QTabWidget::TabShape*>(_v) = _t->tabShape(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isDockNestingEnabled(); break;
        case 6: *reinterpret_cast<int*>(_v) = QFlag(_t->dockOptions()); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->unifiedTitleAndToolBarOnMac(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QMainWindow *_t = static_cast<QMainWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        case 1: _t->setToolButtonStyle(*reinterpret_cast< Qt::ToolButtonStyle*>(_v)); break;
        case 2: _t->setAnimated(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setDocumentMode(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setTabShape(*reinterpret_cast< QTabWidget::TabShape*>(_v)); break;
        case 5: _t->setDockNestingEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setDockOptions(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 7: _t->setUnifiedTitleAndToolBarOnMac(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QMainWindow[] = {
        &QTabWidget::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QMainWindow::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QMainWindow.data,
      qt_meta_data_QMainWindow,  qt_static_metacall, qt_meta_extradata_QMainWindow, Q_NULLPTR}
};


const QMetaObject *QMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QMainWindow.stringdata0))
        return static_cast<void*>(const_cast< QMainWindow*>(this));
    return QWidget::qt_metacast(_clname);
}

int QMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QMainWindow::iconSizeChanged(const QSize & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QMainWindow::toolButtonStyleChanged(Qt::ToolButtonStyle _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
