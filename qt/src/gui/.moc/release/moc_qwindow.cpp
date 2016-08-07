/****************************************************************************
** Meta object code from reading C++ file 'qwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../kernel/qwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QWindow_t {
    QByteArrayData data[80];
    char stringdata0[934];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QWindow_t qt_meta_stringdata_QWindow = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QWindow"
QT_MOC_LITERAL(1, 8, 13), // "screenChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "QScreen*"
QT_MOC_LITERAL(4, 32, 6), // "screen"
QT_MOC_LITERAL(5, 39, 15), // "modalityChanged"
QT_MOC_LITERAL(6, 55, 18), // "Qt::WindowModality"
QT_MOC_LITERAL(7, 74, 8), // "modality"
QT_MOC_LITERAL(8, 83, 18), // "windowStateChanged"
QT_MOC_LITERAL(9, 102, 15), // "Qt::WindowState"
QT_MOC_LITERAL(10, 118, 11), // "windowState"
QT_MOC_LITERAL(11, 130, 18), // "windowTitleChanged"
QT_MOC_LITERAL(12, 149, 5), // "title"
QT_MOC_LITERAL(13, 155, 8), // "xChanged"
QT_MOC_LITERAL(14, 164, 3), // "arg"
QT_MOC_LITERAL(15, 168, 8), // "yChanged"
QT_MOC_LITERAL(16, 177, 12), // "widthChanged"
QT_MOC_LITERAL(17, 190, 13), // "heightChanged"
QT_MOC_LITERAL(18, 204, 19), // "minimumWidthChanged"
QT_MOC_LITERAL(19, 224, 20), // "minimumHeightChanged"
QT_MOC_LITERAL(20, 245, 19), // "maximumWidthChanged"
QT_MOC_LITERAL(21, 265, 20), // "maximumHeightChanged"
QT_MOC_LITERAL(22, 286, 14), // "visibleChanged"
QT_MOC_LITERAL(23, 301, 17), // "visibilityChanged"
QT_MOC_LITERAL(24, 319, 19), // "QWindow::Visibility"
QT_MOC_LITERAL(25, 339, 10), // "visibility"
QT_MOC_LITERAL(26, 350, 13), // "activeChanged"
QT_MOC_LITERAL(27, 364, 25), // "contentOrientationChanged"
QT_MOC_LITERAL(28, 390, 21), // "Qt::ScreenOrientation"
QT_MOC_LITERAL(29, 412, 11), // "orientation"
QT_MOC_LITERAL(30, 424, 18), // "focusObjectChanged"
QT_MOC_LITERAL(31, 443, 6), // "object"
QT_MOC_LITERAL(32, 450, 14), // "opacityChanged"
QT_MOC_LITERAL(33, 465, 7), // "opacity"
QT_MOC_LITERAL(34, 473, 15), // "requestActivate"
QT_MOC_LITERAL(35, 489, 10), // "setVisible"
QT_MOC_LITERAL(36, 500, 7), // "visible"
QT_MOC_LITERAL(37, 508, 4), // "show"
QT_MOC_LITERAL(38, 513, 4), // "hide"
QT_MOC_LITERAL(39, 518, 13), // "showMinimized"
QT_MOC_LITERAL(40, 532, 13), // "showMaximized"
QT_MOC_LITERAL(41, 546, 14), // "showFullScreen"
QT_MOC_LITERAL(42, 561, 10), // "showNormal"
QT_MOC_LITERAL(43, 572, 5), // "close"
QT_MOC_LITERAL(44, 578, 5), // "raise"
QT_MOC_LITERAL(45, 584, 5), // "lower"
QT_MOC_LITERAL(46, 590, 8), // "setTitle"
QT_MOC_LITERAL(47, 599, 4), // "setX"
QT_MOC_LITERAL(48, 604, 4), // "setY"
QT_MOC_LITERAL(49, 609, 8), // "setWidth"
QT_MOC_LITERAL(50, 618, 9), // "setHeight"
QT_MOC_LITERAL(51, 628, 15), // "setMinimumWidth"
QT_MOC_LITERAL(52, 644, 1), // "w"
QT_MOC_LITERAL(53, 646, 16), // "setMinimumHeight"
QT_MOC_LITERAL(54, 663, 1), // "h"
QT_MOC_LITERAL(55, 665, 15), // "setMaximumWidth"
QT_MOC_LITERAL(56, 681, 16), // "setMaximumHeight"
QT_MOC_LITERAL(57, 698, 5), // "alert"
QT_MOC_LITERAL(58, 704, 4), // "msec"
QT_MOC_LITERAL(59, 709, 13), // "requestUpdate"
QT_MOC_LITERAL(60, 723, 13), // "_q_clearAlert"
QT_MOC_LITERAL(61, 737, 5), // "flags"
QT_MOC_LITERAL(62, 743, 15), // "Qt::WindowFlags"
QT_MOC_LITERAL(63, 759, 1), // "x"
QT_MOC_LITERAL(64, 761, 1), // "y"
QT_MOC_LITERAL(65, 763, 5), // "width"
QT_MOC_LITERAL(66, 769, 6), // "height"
QT_MOC_LITERAL(67, 776, 12), // "minimumWidth"
QT_MOC_LITERAL(68, 789, 13), // "minimumHeight"
QT_MOC_LITERAL(69, 803, 12), // "maximumWidth"
QT_MOC_LITERAL(70, 816, 13), // "maximumHeight"
QT_MOC_LITERAL(71, 830, 6), // "active"
QT_MOC_LITERAL(72, 837, 10), // "Visibility"
QT_MOC_LITERAL(73, 848, 18), // "contentOrientation"
QT_MOC_LITERAL(74, 867, 6), // "Hidden"
QT_MOC_LITERAL(75, 874, 19), // "AutomaticVisibility"
QT_MOC_LITERAL(76, 894, 8), // "Windowed"
QT_MOC_LITERAL(77, 903, 9), // "Minimized"
QT_MOC_LITERAL(78, 913, 9), // "Maximized"
QT_MOC_LITERAL(79, 923, 10) // "FullScreen"

    },
    "QWindow\0screenChanged\0\0QScreen*\0screen\0"
    "modalityChanged\0Qt::WindowModality\0"
    "modality\0windowStateChanged\0Qt::WindowState\0"
    "windowState\0windowTitleChanged\0title\0"
    "xChanged\0arg\0yChanged\0widthChanged\0"
    "heightChanged\0minimumWidthChanged\0"
    "minimumHeightChanged\0maximumWidthChanged\0"
    "maximumHeightChanged\0visibleChanged\0"
    "visibilityChanged\0QWindow::Visibility\0"
    "visibility\0activeChanged\0"
    "contentOrientationChanged\0"
    "Qt::ScreenOrientation\0orientation\0"
    "focusObjectChanged\0object\0opacityChanged\0"
    "opacity\0requestActivate\0setVisible\0"
    "visible\0show\0hide\0showMinimized\0"
    "showMaximized\0showFullScreen\0showNormal\0"
    "close\0raise\0lower\0setTitle\0setX\0setY\0"
    "setWidth\0setHeight\0setMinimumWidth\0w\0"
    "setMinimumHeight\0h\0setMaximumWidth\0"
    "setMaximumHeight\0alert\0msec\0requestUpdate\0"
    "_q_clearAlert\0flags\0Qt::WindowFlags\0"
    "x\0y\0width\0height\0minimumWidth\0"
    "minimumHeight\0maximumWidth\0maximumHeight\0"
    "active\0Visibility\0contentOrientation\0"
    "Hidden\0AutomaticVisibility\0Windowed\0"
    "Minimized\0Maximized\0FullScreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      41,   14, // methods
      16,  357, // properties
       1,  437, // enums/sets
       0,    0, // constructors
       0,       // flags
      18,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  260,    2, 0x06 /* Public */,
       5,    1,  263,    2, 0x06 /* Public */,
       8,    1,  266,    2, 0x06 /* Public */,
      11,    1,  269,    2, 0x86 /* Public | MethodRevisioned */,
      13,    1,  272,    2, 0x06 /* Public */,
      15,    1,  275,    2, 0x06 /* Public */,
      16,    1,  278,    2, 0x06 /* Public */,
      17,    1,  281,    2, 0x06 /* Public */,
      18,    1,  284,    2, 0x06 /* Public */,
      19,    1,  287,    2, 0x06 /* Public */,
      20,    1,  290,    2, 0x06 /* Public */,
      21,    1,  293,    2, 0x06 /* Public */,
      22,    1,  296,    2, 0x06 /* Public */,
      23,    1,  299,    2, 0x86 /* Public | MethodRevisioned */,
      26,    0,  302,    2, 0x86 /* Public | MethodRevisioned */,
      27,    1,  303,    2, 0x06 /* Public */,
      30,    1,  306,    2, 0x06 /* Public */,
      32,    1,  309,    2, 0x86 /* Public | MethodRevisioned */,

 // slots: name, argc, parameters, tag, flags
      34,    0,  312,    2, 0x8a /* Public | MethodRevisioned */,
      35,    1,  313,    2, 0x0a /* Public */,
      37,    0,  316,    2, 0x0a /* Public */,
      38,    0,  317,    2, 0x0a /* Public */,
      39,    0,  318,    2, 0x0a /* Public */,
      40,    0,  319,    2, 0x0a /* Public */,
      41,    0,  320,    2, 0x0a /* Public */,
      42,    0,  321,    2, 0x0a /* Public */,
      43,    0,  322,    2, 0x0a /* Public */,
      44,    0,  323,    2, 0x0a /* Public */,
      45,    0,  324,    2, 0x0a /* Public */,
      46,    1,  325,    2, 0x0a /* Public */,
      47,    1,  328,    2, 0x0a /* Public */,
      48,    1,  331,    2, 0x0a /* Public */,
      49,    1,  334,    2, 0x0a /* Public */,
      50,    1,  337,    2, 0x0a /* Public */,
      51,    1,  340,    2, 0x0a /* Public */,
      53,    1,  343,    2, 0x0a /* Public */,
      55,    1,  346,    2, 0x0a /* Public */,
      56,    1,  349,    2, 0x0a /* Public */,
      57,    1,  352,    2, 0x8a /* Public | MethodRevisioned */,
      59,    0,  355,    2, 0x8a /* Public | MethodRevisioned */,
      60,    0,  356,    2, 0x08 /* Private */,

 // signals: revision
       0,
       0,
       0,
       2,
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
       1,
       0,
       0,
       1,

 // slots: revision
       1,
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
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       3,
       0,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, QMetaType::QObjectStar,   31,
    QMetaType::Void, QMetaType::QReal,   33,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   52,
    QMetaType::Void, QMetaType::Int,   54,
    QMetaType::Void, QMetaType::Int,   58,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QString, 0x00495103,
       7, 0x80000000 | 6, 0x0049510b,
      61, 0x80000000 | 62, 0x0009510b,
      63, QMetaType::Int, 0x00495103,
      64, QMetaType::Int, 0x00495103,
      65, QMetaType::Int, 0x00495103,
      66, QMetaType::Int, 0x00495103,
      67, QMetaType::Int, 0x00495103,
      68, QMetaType::Int, 0x00495103,
      69, QMetaType::Int, 0x00495103,
      70, QMetaType::Int, 0x00495103,
      36, QMetaType::Bool, 0x00495103,
      71, QMetaType::Bool, 0x00c95001,
      25, 0x80000000 | 72, 0x00c9510b,
      73, 0x80000000 | 28, 0x0049500b,
      33, QMetaType::QReal, 0x00c95103,

 // properties: notify_signal_id
       3,
       1,
       0,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      14,
      13,
      15,
      17,

 // properties: revision
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
       1,
       0,
       1,

 // enums: name, flags, count, data
      72, 0x0,    6,  441,

 // enum data: key, value
      74, uint(QWindow::Hidden),
      75, uint(QWindow::AutomaticVisibility),
      76, uint(QWindow::Windowed),
      77, uint(QWindow::Minimized),
      78, uint(QWindow::Maximized),
      79, uint(QWindow::FullScreen),

       0        // eod
};

void QWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QWindow *_t = static_cast<QWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->screenChanged((*reinterpret_cast< QScreen*(*)>(_a[1]))); break;
        case 1: _t->modalityChanged((*reinterpret_cast< Qt::WindowModality(*)>(_a[1]))); break;
        case 2: _t->windowStateChanged((*reinterpret_cast< Qt::WindowState(*)>(_a[1]))); break;
        case 3: _t->windowTitleChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->xChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->yChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->heightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->minimumWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->minimumHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->maximumWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->maximumHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->visibleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->visibilityChanged((*reinterpret_cast< QWindow::Visibility(*)>(_a[1]))); break;
        case 14: _t->activeChanged(); break;
        case 15: _t->contentOrientationChanged((*reinterpret_cast< Qt::ScreenOrientation(*)>(_a[1]))); break;
        case 16: _t->focusObjectChanged((*reinterpret_cast< QObject*(*)>(_a[1]))); break;
        case 17: _t->opacityChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 18: _t->requestActivate(); break;
        case 19: _t->setVisible((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->show(); break;
        case 21: _t->hide(); break;
        case 22: _t->showMinimized(); break;
        case 23: _t->showMaximized(); break;
        case 24: _t->showFullScreen(); break;
        case 25: _t->showNormal(); break;
        case 26: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 27: _t->raise(); break;
        case 28: _t->lower(); break;
        case 29: _t->setTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->setX((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->setY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->setWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->setHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->setMinimumWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->setMinimumHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->setMaximumWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 37: _t->setMaximumHeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->alert((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->requestUpdate(); break;
        case 40: _t->d_func()->_q_clearAlert(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QWindow::*_t)(QScreen * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::screenChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(Qt::WindowModality );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::modalityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(Qt::WindowState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::windowStateChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::windowTitleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::xChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::yChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::widthChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::heightChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::minimumWidthChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::minimumHeightChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::maximumWidthChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::maximumHeightChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::visibleChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(QWindow::Visibility );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::visibilityChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::activeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(Qt::ScreenOrientation );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::contentOrientationChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(QObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::focusObjectChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (QWindow::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QWindow::opacityChanged)) {
                *result = 17;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QWindow *_t = static_cast<QWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< Qt::WindowModality*>(_v) = _t->modality(); break;
        case 2: *reinterpret_cast< Qt::WindowFlags*>(_v) = _t->flags(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->x(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->y(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->width(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->height(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->minimumWidth(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->minimumHeight(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->maximumWidth(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->maximumHeight(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->isActive(); break;
        case 13: *reinterpret_cast< Visibility*>(_v) = _t->visibility(); break;
        case 14: *reinterpret_cast< Qt::ScreenOrientation*>(_v) = _t->contentOrientation(); break;
        case 15: *reinterpret_cast< qreal*>(_v) = _t->opacity(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QWindow *_t = static_cast<QWindow *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setModality(*reinterpret_cast< Qt::WindowModality*>(_v)); break;
        case 2: _t->setFlags(*reinterpret_cast< Qt::WindowFlags*>(_v)); break;
        case 3: _t->setX(*reinterpret_cast< int*>(_v)); break;
        case 4: _t->setY(*reinterpret_cast< int*>(_v)); break;
        case 5: _t->setWidth(*reinterpret_cast< int*>(_v)); break;
        case 6: _t->setHeight(*reinterpret_cast< int*>(_v)); break;
        case 7: _t->setMinimumWidth(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setMinimumHeight(*reinterpret_cast< int*>(_v)); break;
        case 9: _t->setMaximumWidth(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setMaximumHeight(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setVisible(*reinterpret_cast< bool*>(_v)); break;
        case 13: _t->setVisibility(*reinterpret_cast< Visibility*>(_v)); break;
        case 14: _t->reportContentOrientationChange(*reinterpret_cast< Qt::ScreenOrientation*>(_v)); break;
        case 15: _t->setOpacity(*reinterpret_cast< qreal*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject QWindow::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QWindow.data,
      qt_meta_data_QWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QWindow.stringdata0))
        return static_cast<void*>(const_cast< QWindow*>(this));
    if (!strcmp(_clname, "QSurface"))
        return static_cast< QSurface*>(const_cast< QWindow*>(this));
    return QObject::qt_metacast(_clname);
}

int QWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 41;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 16;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 16;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QWindow::screenChanged(QScreen * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QWindow::modalityChanged(Qt::WindowModality _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QWindow::windowStateChanged(Qt::WindowState _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QWindow::windowTitleChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QWindow::xChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QWindow::yChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QWindow::widthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QWindow::heightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void QWindow::minimumWidthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void QWindow::minimumHeightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void QWindow::maximumWidthChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void QWindow::maximumHeightChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void QWindow::visibleChanged(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void QWindow::visibilityChanged(QWindow::Visibility _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void QWindow::activeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, Q_NULLPTR);
}

// SIGNAL 15
void QWindow::contentOrientationChanged(Qt::ScreenOrientation _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void QWindow::focusObjectChanged(QObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void QWindow::opacityChanged(qreal _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}
QT_END_MOC_NAMESPACE
