/****************************************************************************
** Meta object code from reading C++ file 'lightwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lightwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lightwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LightWidget_t {
    QByteArrayData data[8];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LightWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LightWidget_t qt_meta_stringdata_LightWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LightWidget"
QT_MOC_LITERAL(1, 12, 13), // "light_changed"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 16), // "on_close_clicked"
QT_MOC_LITERAL(4, 44, 18), // "on_btn_jia_clicked"
QT_MOC_LITERAL(5, 63, 19), // "on_btn_jian_clicked"
QT_MOC_LITERAL(6, 83, 14), // "set_brightness"
QT_MOC_LITERAL(7, 98, 1) // "v"

    },
    "LightWidget\0light_changed\0\0on_close_clicked\0"
    "on_btn_jia_clicked\0on_btn_jian_clicked\0"
    "set_brightness\0v"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LightWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   42,    2, 0x08 /* Private */,
       4,    0,   43,    2, 0x08 /* Private */,
       5,    0,   44,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void LightWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LightWidget *_t = static_cast<LightWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->light_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_close_clicked(); break;
        case 2: _t->on_btn_jia_clicked(); break;
        case 3: _t->on_btn_jian_clicked(); break;
        case 4: _t->set_brightness((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LightWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LightWidget::light_changed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject LightWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LightWidget.data,
      qt_meta_data_LightWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LightWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LightWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LightWidget.stringdata0))
        return static_cast<void*>(const_cast< LightWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int LightWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void LightWidget::light_changed(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
