/****************************************************************************
** Meta object code from reading C++ file 'qgraphicsview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../graphicsview/qgraphicsview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgraphicsview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QGraphicsView_t {
    QByteArrayData data[57];
    char stringdata0[862];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QGraphicsView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QGraphicsView_t qt_meta_stringdata_QGraphicsView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QGraphicsView"
QT_MOC_LITERAL(1, 14, 17), // "rubberBandChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "viewportRect"
QT_MOC_LITERAL(4, 46, 14), // "fromScenePoint"
QT_MOC_LITERAL(5, 61, 12), // "toScenePoint"
QT_MOC_LITERAL(6, 74, 11), // "updateScene"
QT_MOC_LITERAL(7, 86, 13), // "QList<QRectF>"
QT_MOC_LITERAL(8, 100, 5), // "rects"
QT_MOC_LITERAL(9, 106, 15), // "invalidateScene"
QT_MOC_LITERAL(10, 122, 4), // "rect"
QT_MOC_LITERAL(11, 127, 27), // "QGraphicsScene::SceneLayers"
QT_MOC_LITERAL(12, 155, 6), // "layers"
QT_MOC_LITERAL(13, 162, 15), // "updateSceneRect"
QT_MOC_LITERAL(14, 178, 13), // "setupViewport"
QT_MOC_LITERAL(15, 192, 8), // "QWidget*"
QT_MOC_LITERAL(16, 201, 6), // "widget"
QT_MOC_LITERAL(17, 208, 20), // "_q_setViewportCursor"
QT_MOC_LITERAL(18, 229, 22), // "_q_unsetViewportCursor"
QT_MOC_LITERAL(19, 252, 15), // "backgroundBrush"
QT_MOC_LITERAL(20, 268, 15), // "foregroundBrush"
QT_MOC_LITERAL(21, 284, 11), // "interactive"
QT_MOC_LITERAL(22, 296, 9), // "sceneRect"
QT_MOC_LITERAL(23, 306, 9), // "alignment"
QT_MOC_LITERAL(24, 316, 13), // "Qt::Alignment"
QT_MOC_LITERAL(25, 330, 11), // "renderHints"
QT_MOC_LITERAL(26, 342, 21), // "QPainter::RenderHints"
QT_MOC_LITERAL(27, 364, 8), // "dragMode"
QT_MOC_LITERAL(28, 373, 8), // "DragMode"
QT_MOC_LITERAL(29, 382, 9), // "cacheMode"
QT_MOC_LITERAL(30, 392, 9), // "CacheMode"
QT_MOC_LITERAL(31, 402, 20), // "transformationAnchor"
QT_MOC_LITERAL(32, 423, 14), // "ViewportAnchor"
QT_MOC_LITERAL(33, 438, 12), // "resizeAnchor"
QT_MOC_LITERAL(34, 451, 18), // "viewportUpdateMode"
QT_MOC_LITERAL(35, 470, 18), // "ViewportUpdateMode"
QT_MOC_LITERAL(36, 489, 23), // "rubberBandSelectionMode"
QT_MOC_LITERAL(37, 513, 21), // "Qt::ItemSelectionMode"
QT_MOC_LITERAL(38, 535, 17), // "optimizationFlags"
QT_MOC_LITERAL(39, 553, 17), // "OptimizationFlags"
QT_MOC_LITERAL(40, 571, 8), // "NoAnchor"
QT_MOC_LITERAL(41, 580, 16), // "AnchorViewCenter"
QT_MOC_LITERAL(42, 597, 16), // "AnchorUnderMouse"
QT_MOC_LITERAL(43, 614, 9), // "CacheNone"
QT_MOC_LITERAL(44, 624, 15), // "CacheBackground"
QT_MOC_LITERAL(45, 640, 6), // "NoDrag"
QT_MOC_LITERAL(46, 647, 14), // "ScrollHandDrag"
QT_MOC_LITERAL(47, 662, 14), // "RubberBandDrag"
QT_MOC_LITERAL(48, 677, 18), // "FullViewportUpdate"
QT_MOC_LITERAL(49, 696, 21), // "MinimalViewportUpdate"
QT_MOC_LITERAL(50, 718, 19), // "SmartViewportUpdate"
QT_MOC_LITERAL(51, 738, 16), // "NoViewportUpdate"
QT_MOC_LITERAL(52, 755, 26), // "BoundingRectViewportUpdate"
QT_MOC_LITERAL(53, 782, 15), // "DontClipPainter"
QT_MOC_LITERAL(54, 798, 20), // "DontSavePainterState"
QT_MOC_LITERAL(55, 819, 25), // "DontAdjustForAntialiasing"
QT_MOC_LITERAL(56, 845, 16) // "IndirectPainting"

    },
    "QGraphicsView\0rubberBandChanged\0\0"
    "viewportRect\0fromScenePoint\0toScenePoint\0"
    "updateScene\0QList<QRectF>\0rects\0"
    "invalidateScene\0rect\0QGraphicsScene::SceneLayers\0"
    "layers\0updateSceneRect\0setupViewport\0"
    "QWidget*\0widget\0_q_setViewportCursor\0"
    "_q_unsetViewportCursor\0backgroundBrush\0"
    "foregroundBrush\0interactive\0sceneRect\0"
    "alignment\0Qt::Alignment\0renderHints\0"
    "QPainter::RenderHints\0dragMode\0DragMode\0"
    "cacheMode\0CacheMode\0transformationAnchor\0"
    "ViewportAnchor\0resizeAnchor\0"
    "viewportUpdateMode\0ViewportUpdateMode\0"
    "rubberBandSelectionMode\0Qt::ItemSelectionMode\0"
    "optimizationFlags\0OptimizationFlags\0"
    "NoAnchor\0AnchorViewCenter\0AnchorUnderMouse\0"
    "CacheNone\0CacheBackground\0NoDrag\0"
    "ScrollHandDrag\0RubberBandDrag\0"
    "FullViewportUpdate\0MinimalViewportUpdate\0"
    "SmartViewportUpdate\0NoViewportUpdate\0"
    "BoundingRectViewportUpdate\0DontClipPainter\0"
    "DontSavePainterState\0DontAdjustForAntialiasing\0"
    "IndirectPainting"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QGraphicsView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
      13,   88, // properties
       5,  127, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   66,    2, 0x0a /* Public */,
       9,    2,   69,    2, 0x0a /* Public */,
       9,    1,   74,    2, 0x2a /* Public | MethodCloned */,
       9,    0,   77,    2, 0x2a /* Public | MethodCloned */,
      13,    1,   78,    2, 0x0a /* Public */,
      14,    1,   81,    2, 0x09 /* Protected */,
      17,    1,   84,    2, 0x08 /* Private */,
      18,    0,   87,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QRect, QMetaType::QPointF, QMetaType::QPointF,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QRectF, 0x80000000 | 11,   10,   12,
    QMetaType::Void, QMetaType::QRectF,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QRectF,   10,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QCursor,    2,
    QMetaType::Void,

 // properties: name, type, flags
      19, QMetaType::QBrush, 0x00095103,
      20, QMetaType::QBrush, 0x00095103,
      21, QMetaType::Bool, 0x00095103,
      22, QMetaType::QRectF, 0x00095103,
      23, 0x80000000 | 24, 0x0009510b,
      25, 0x80000000 | 26, 0x0009510b,
      27, 0x80000000 | 28, 0x0009510b,
      29, 0x80000000 | 30, 0x0009510b,
      31, 0x80000000 | 32, 0x0009510b,
      33, 0x80000000 | 32, 0x0009510b,
      34, 0x80000000 | 35, 0x0009510b,
      36, 0x80000000 | 37, 0x0009510b,
      38, 0x80000000 | 39, 0x0009510b,

 // enums: name, flags, count, data
      32, 0x0,    3,  147,
      30, 0x1,    2,  153,
      28, 0x0,    3,  157,
      35, 0x0,    5,  163,
      39, 0x1,    4,  173,

 // enum data: key, value
      40, uint(QGraphicsView::NoAnchor),
      41, uint(QGraphicsView::AnchorViewCenter),
      42, uint(QGraphicsView::AnchorUnderMouse),
      43, uint(QGraphicsView::CacheNone),
      44, uint(QGraphicsView::CacheBackground),
      45, uint(QGraphicsView::NoDrag),
      46, uint(QGraphicsView::ScrollHandDrag),
      47, uint(QGraphicsView::RubberBandDrag),
      48, uint(QGraphicsView::FullViewportUpdate),
      49, uint(QGraphicsView::MinimalViewportUpdate),
      50, uint(QGraphicsView::SmartViewportUpdate),
      51, uint(QGraphicsView::NoViewportUpdate),
      52, uint(QGraphicsView::BoundingRectViewportUpdate),
      53, uint(QGraphicsView::DontClipPainter),
      54, uint(QGraphicsView::DontSavePainterState),
      55, uint(QGraphicsView::DontAdjustForAntialiasing),
      56, uint(QGraphicsView::IndirectPainting),

       0        // eod
};

void QGraphicsView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QGraphicsView *_t = static_cast<QGraphicsView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rubberBandChanged((*reinterpret_cast< QRect(*)>(_a[1])),(*reinterpret_cast< QPointF(*)>(_a[2])),(*reinterpret_cast< QPointF(*)>(_a[3]))); break;
        case 1: _t->updateScene((*reinterpret_cast< const QList<QRectF>(*)>(_a[1]))); break;
        case 2: _t->invalidateScene((*reinterpret_cast< const QRectF(*)>(_a[1])),(*reinterpret_cast< QGraphicsScene::SceneLayers(*)>(_a[2]))); break;
        case 3: _t->invalidateScene((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 4: _t->invalidateScene(); break;
        case 5: _t->updateSceneRect((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 6: _t->setupViewport((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 7: _t->d_func()->_q_setViewportCursor((*reinterpret_cast< const QCursor(*)>(_a[1]))); break;
        case 8: _t->d_func()->_q_unsetViewportCursor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QRectF> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QGraphicsView::*_t)(QRect , QPointF , QPointF );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QGraphicsView::rubberBandChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        QGraphicsView *_t = static_cast<QGraphicsView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->backgroundBrush(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->foregroundBrush(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isInteractive(); break;
        case 3: *reinterpret_cast< QRectF*>(_v) = _t->sceneRect(); break;
        case 4: *reinterpret_cast< Qt::Alignment*>(_v) = _t->alignment(); break;
        case 5: *reinterpret_cast<int*>(_v) = QFlag(_t->renderHints()); break;
        case 6: *reinterpret_cast< DragMode*>(_v) = _t->dragMode(); break;
        case 7: *reinterpret_cast<int*>(_v) = QFlag(_t->cacheMode()); break;
        case 8: *reinterpret_cast< ViewportAnchor*>(_v) = _t->transformationAnchor(); break;
        case 9: *reinterpret_cast< ViewportAnchor*>(_v) = _t->resizeAnchor(); break;
        case 10: *reinterpret_cast< ViewportUpdateMode*>(_v) = _t->viewportUpdateMode(); break;
        case 11: *reinterpret_cast< Qt::ItemSelectionMode*>(_v) = _t->rubberBandSelectionMode(); break;
        case 12: *reinterpret_cast<int*>(_v) = QFlag(_t->optimizationFlags()); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        QGraphicsView *_t = static_cast<QGraphicsView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setForegroundBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setInteractive(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSceneRect(*reinterpret_cast< QRectF*>(_v)); break;
        case 4: _t->setAlignment(*reinterpret_cast< Qt::Alignment*>(_v)); break;
        case 5: _t->setRenderHints(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 6: _t->setDragMode(*reinterpret_cast< DragMode*>(_v)); break;
        case 7: _t->setCacheMode(QFlag(*reinterpret_cast<int*>(_v))); break;
        case 8: _t->setTransformationAnchor(*reinterpret_cast< ViewportAnchor*>(_v)); break;
        case 9: _t->setResizeAnchor(*reinterpret_cast< ViewportAnchor*>(_v)); break;
        case 10: _t->setViewportUpdateMode(*reinterpret_cast< ViewportUpdateMode*>(_v)); break;
        case 11: _t->setRubberBandSelectionMode(*reinterpret_cast< Qt::ItemSelectionMode*>(_v)); break;
        case 12: _t->setOptimizationFlags(QFlag(*reinterpret_cast<int*>(_v))); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QGraphicsView[] = {
        &QPainter::staticMetaObject,
    Q_NULLPTR
};

const QMetaObject QGraphicsView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QGraphicsView.data,
      qt_meta_data_QGraphicsView,  qt_static_metacall, qt_meta_extradata_QGraphicsView, Q_NULLPTR}
};


const QMetaObject *QGraphicsView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QGraphicsView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QGraphicsView.stringdata0))
        return static_cast<void*>(const_cast< QGraphicsView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QGraphicsView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QGraphicsView::rubberBandChanged(QRect _t1, QPointF _t2, QPointF _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
