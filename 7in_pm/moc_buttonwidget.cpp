/****************************************************************************
** Meta object code from reading C++ file 'buttonwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "buttonwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ButtonWidget_t {
    QByteArrayData data[7];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonWidget_t qt_meta_stringdata_ButtonWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ButtonWidget"
QT_MOC_LITERAL(1, 13, 8), // "language"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "unit"
QT_MOC_LITERAL(4, 28, 16), // "on_close_clicked"
QT_MOC_LITERAL(5, 45, 15), // "on_btn1_clicked"
QT_MOC_LITERAL(6, 61, 15) // "on_btn2_clicked"

    },
    "ButtonWidget\0language\0\0unit\0"
    "on_close_clicked\0on_btn1_clicked\0"
    "on_btn2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       3,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   45,    2, 0x08 /* Private */,
       5,    0,   46,    2, 0x08 /* Private */,
       6,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ButtonWidget *_t = static_cast<ButtonWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->language((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->unit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->on_close_clicked(); break;
        case 3: _t->on_btn1_clicked(); break;
        case 4: _t->on_btn2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ButtonWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonWidget::language)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ButtonWidget::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ButtonWidget::unit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ButtonWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ButtonWidget.data,
      qt_meta_data_ButtonWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonWidget.stringdata0))
        return static_cast<void*>(const_cast< ButtonWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ButtonWidget::language(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ButtonWidget::unit(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
