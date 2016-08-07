/****************************************************************************
** Meta object code from reading C++ file 'qgraphicswidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGraphicsWidget_t {
    QByteArrayData data[23];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsWidget_t qt_meta_stringdata_QGraphicsWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QGraphicsWidget"
QT_MOC_LITERAL(1, 16, 15), // "geometryChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 13), // "layoutChanged"
QT_MOC_LITERAL(4, 47, 5), // "close"
QT_MOC_LITERAL(5, 53, 7), // "palette"
QT_MOC_LITERAL(6, 61, 4), // "font"
QT_MOC_LITERAL(7, 66, 15), // "layoutDirection"
QT_MOC_LITERAL(8, 82, 19), // "Qt::LayoutDirection"
QT_MOC_LITERAL(9, 102, 4), // "size"
QT_MOC_LITERAL(10, 107, 11), // "minimumSize"
QT_MOC_LITERAL(11, 119, 13), // "preferredSize"
QT_MOC_LITERAL(12, 133, 11), // "maximumSize"
QT_MOC_LITERAL(13, 145, 10), // "sizePolicy"
QT_MOC_LITERAL(14, 156, 11), // "focusPolicy"
QT_MOC_LITERAL(15, 168, 15), // "Qt::FocusPolicy"
QT_MOC_LITERAL(16, 184, 11), // "windowFlags"
QT_MOC_LITERAL(17, 196, 15), // "Qt::WindowFlags"
QT_MOC_LITERAL(18, 212, 11), // "windowTitle"
QT_MOC_LITERAL(19, 224, 8), // "geometry"
QT_MOC_LITERAL(20, 233, 18), // "autoFillBackground"
QT_MOC_LITERAL(21, 252, 6), // "layout"
QT_MOC_LITERAL(22, 259, 16) // "QGraphicsLayout*"

    },
    "QGraphicsWidget\0geometryChanged\0\0"
    "layoutChanged\0close\0palette\0font\0"
    "layoutDirection\0Qt::LayoutDirection\0"
    "size\0minimumSize\0preferredSize\0"
    "maximumSize\0sizePolicy\0focusPolicy\0"
    "Qt::FocusPolicy\0windowFlags\0Qt::WindowFlags\0"
    "windowTitle\0geometry\0autoFillBackground\0"
    "layout\0QGraphicsLayout*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
      14,   32, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06 /* Public */,
       3,    0,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool,

 // properties: name, type, flags
       5, QMetaType::QPalette, 0x00095103,
       6, QMetaType::QFont, 0x00095103,
       7, 0x80000000 | 8, 0x0009510f,
       9, QMetaType::QSizeF, 0x00495003,
      10, QMetaType::QSizeF, 0x00095103,
      11, QMetaType::QSizeF, 0x00095103,
      12, QMetaType::QSizeF, 0x00095103,
      13, QMetaType::QSizePolicy, 0x00095103,
      14, 0x80000000 | 15, 0x0009510b,
      16, 0x80000000 | 17, 0x0009510b,
      18, QMetaType::QString, 0x00095103,
      19, QMetaType::QRectF, 0x00495103,
      20, QMetaType::Bool, 0x00095103,
      21, 0x80000000 | 22, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,

       0        // eod
};

void QGraphicsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsWidget *_t = static_cast<QGraphicsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->geometryChanged(); break;
        case 1: _t->layoutChanged(); break;
        case 2: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsWidget::geometryChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QGraphicsWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsWidget::layoutChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsWidget *_t = static_cast<QGraphicsWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QPalette*>(_v) = _t->palette(); break;
        case 1: *reinterpret_cast< QFont*>(_v) = _t->font(); break;
        case 2: *reinterpret_cast< Qt::LayoutDirection*>(_v) = _t->layoutDirection(); break;
        case 3: *reinterpret_cast< QSizeF*>(_v) = _t->size(); break;
        case 4: *reinterpret_cast< QSizeF*>(_v) = _t->minimumSize(); break;
        case 5: *reinterpret_cast< QSizeF*>(_v) = _t->preferredSize(); break;
        case 6: *reinterpret_cast< QSizeF*>(_v) = _t->maximumSize(); break;
        case 7: *reinterpret_cast< QSizePolicy*>(_v) = _t->sizePolicy(); break;
        case 8: *reinterpret_cast< Qt::FocusPolicy*>(_v) = _t->focusPolicy(); break;
        case 9: *reinterpret_cast< Qt::WindowFlags*>(_v) = _t->windowFlags(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 11: *reinterpret_cast< QRectF*>(_v) = _t->geometry(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->autoFillBackground(); break;
        case 13: *reinterpret_cast< QGraphicsLayout**>(_v) = _t->layout(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsWidget *_t = static_cast<QGraphicsWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPalette(*reinterpret_cast< QPalette*>(_v)); break;
        case 1: _t->setFont(*reinterpret_cast< QFont*>(_v)); break;
        case 2: _t->setLayoutDirection(*reinterpret_cast< Qt::LayoutDirection*>(_v)); break;
        case 3: _t->resize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 4: _t->setMinimumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 5: _t->setPreferredSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 6: _t->setMaximumSize(*reinterpret_cast< QSizeF*>(_v)); break;
        case 7: _t->setSizePolicy(*reinterpret_cast< QSizePolicy*>(_v)); break;
        case 8: _t->setFocusPolicy(*reinterpret_cast< Qt::FocusPolicy*>(_v)); break;
        case 9: _t->setWindowFlags(*reinterpret_cast< Qt::WindowFlags*>(_v)); break;
        case 10: _t->setWindowTitle(*reinterpret_cast< QString*>(_v)); break;
        case 11: _t->setGeometry(*reinterpret_cast< QRectF*>(_v)); break;
        case 12: _t->setAutoFillBackground(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setLayout(*reinterpret_cast< QGraphicsLayout**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        QGraphicsWidget *_t = static_cast<QGraphicsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->unsetLayoutDirection(); break;
        default: break;
        }
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QGraphicsWidget::staticMetaObject = {
    { &QGraphicsObject::staticMetaObject, qt_meta_stringdata_QGraphicsWidget.data,
      qt_meta_data_QGraphicsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QGraphicsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsWidget.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsItem"))
        return static_cast< QGraphicsItem*>(const_cast< QGraphicsWidget*>(this));
    if (!strcmp(_clname, "org.qt-project.Qt.QGraphicsLayoutItem"))
        return static_cast< QGraphicsLayoutItem*>(const_cast< QGraphicsWidget*>(this));
    return QGraphicsObject::qt_metacast(_clname);
}

int QGraphicsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
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
void QGraphicsWidget::geometryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QGraphicsWidget::layoutChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
