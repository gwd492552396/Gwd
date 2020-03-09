/****************************************************************************
** Meta object code from reading C++ file 'optionalfunction.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "optionalfunction.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'optionalfunction.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OptionalFunction_t {
    QByteArrayData data[12];
    char stringdata0[164];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OptionalFunction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OptionalFunction_t qt_meta_stringdata_OptionalFunction = {
    {
QT_MOC_LITERAL(0, 0, 16), // "OptionalFunction"
QT_MOC_LITERAL(1, 17, 9), // "back_home"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "previous"
QT_MOC_LITERAL(4, 37, 10), // "slide_edit"
QT_MOC_LITERAL(5, 48, 5), // "video"
QT_MOC_LITERAL(6, 54, 6), // "weight"
QT_MOC_LITERAL(7, 61, 24), // "on_btn_back_home_clicked"
QT_MOC_LITERAL(8, 86, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(9, 106, 20), // "on_ckb_weigh_clicked"
QT_MOC_LITERAL(10, 127, 20), // "on_ckb_video_clicked"
QT_MOC_LITERAL(11, 148, 15) // "on_edit_clicked"

    },
    "OptionalFunction\0back_home\0\0previous\0"
    "slide_edit\0video\0weight\0"
    "on_btn_back_home_clicked\0on_btn_back_clicked\0"
    "on_ckb_weigh_clicked\0on_ckb_video_clicked\0"
    "on_edit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OptionalFunction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       3,    1,   67,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       5,    0,   73,    2, 0x06 /* Public */,
       6,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   75,    2, 0x08 /* Private */,
       8,    0,   76,    2, 0x08 /* Private */,
       9,    0,   77,    2, 0x08 /* Private */,
      10,    0,   78,    2, 0x08 /* Private */,
      11,    0,   79,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void OptionalFunction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OptionalFunction *_t = static_cast<OptionalFunction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->slide_edit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->video(); break;
        case 4: _t->weight(); break;
        case 5: _t->on_btn_back_home_clicked(); break;
        case 6: _t->on_btn_back_clicked(); break;
        case 7: _t->on_ckb_weigh_clicked(); break;
        case 8: _t->on_ckb_video_clicked(); break;
        case 9: _t->on_edit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OptionalFunction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionalFunction::back_home)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OptionalFunction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionalFunction::previous)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OptionalFunction::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionalFunction::slide_edit)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OptionalFunction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionalFunction::video)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OptionalFunction::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OptionalFunction::weight)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject OptionalFunction::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_OptionalFunction.data,
      qt_meta_data_OptionalFunction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OptionalFunction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OptionalFunction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OptionalFunction.stringdata0))
        return static_cast<void*>(const_cast< OptionalFunction*>(this));
    return QWidget::qt_metacast(_clname);
}

int OptionalFunction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void OptionalFunction::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OptionalFunction::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OptionalFunction::slide_edit(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OptionalFunction::video()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void OptionalFunction::weight()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
