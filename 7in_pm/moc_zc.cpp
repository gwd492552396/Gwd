/****************************************************************************
** Meta object code from reading C++ file 'zc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "zc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'zc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ZC_t {
    QByteArrayData data[18];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ZC_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ZC_t qt_meta_stringdata_ZC = {
    {
QT_MOC_LITERAL(0, 0, 2), // "ZC"
QT_MOC_LITERAL(1, 3, 9), // "temperate"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 8), // "pressure"
QT_MOC_LITERAL(4, 23, 6), // "liquid"
QT_MOC_LITERAL(5, 30, 8), // "gear_box"
QT_MOC_LITERAL(6, 39, 6), // "enigne"
QT_MOC_LITERAL(7, 46, 9), // "back_home"
QT_MOC_LITERAL(8, 56, 8), // "previous"
QT_MOC_LITERAL(9, 65, 19), // "on_btn_temp_clicked"
QT_MOC_LITERAL(10, 85, 23), // "on_btn_pressure_clicked"
QT_MOC_LITERAL(11, 109, 21), // "on_btn_liquid_clicked"
QT_MOC_LITERAL(12, 131, 21), // "on_btn_engine_clicked"
QT_MOC_LITERAL(13, 153, 22), // "on_btn_gearbox_clicked"
QT_MOC_LITERAL(14, 176, 23), // "on_btn_backhome_clicked"
QT_MOC_LITERAL(15, 200, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(16, 220, 22), // "set_enigne_total_hours"
QT_MOC_LITERAL(17, 243, 3) // "eth"

    },
    "ZC\0temperate\0\0pressure\0liquid\0gear_box\0"
    "enigne\0back_home\0previous\0on_btn_temp_clicked\0"
    "on_btn_pressure_clicked\0on_btn_liquid_clicked\0"
    "on_btn_engine_clicked\0on_btn_gearbox_clicked\0"
    "on_btn_backhome_clicked\0on_btn_back_clicked\0"
    "set_enigne_total_hours\0eth"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ZC[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    1,   95,    2, 0x06 /* Public */,
       5,    1,   98,    2, 0x06 /* Public */,
       6,    1,  101,    2, 0x06 /* Public */,
       7,    1,  104,    2, 0x06 /* Public */,
       8,    1,  107,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  110,    2, 0x08 /* Private */,
      10,    0,  111,    2, 0x08 /* Private */,
      11,    0,  112,    2, 0x08 /* Private */,
      12,    0,  113,    2, 0x08 /* Private */,
      13,    0,  114,    2, 0x08 /* Private */,
      14,    0,  115,    2, 0x08 /* Private */,
      15,    0,  116,    2, 0x08 /* Private */,
      16,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void ZC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ZC *_t = static_cast<ZC *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->temperate((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->pressure((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->liquid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->gear_box((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->enigne((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_btn_temp_clicked(); break;
        case 8: _t->on_btn_pressure_clicked(); break;
        case 9: _t->on_btn_liquid_clicked(); break;
        case 10: _t->on_btn_engine_clicked(); break;
        case 11: _t->on_btn_gearbox_clicked(); break;
        case 12: _t->on_btn_backhome_clicked(); break;
        case 13: _t->on_btn_back_clicked(); break;
        case 14: _t->set_enigne_total_hours((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::temperate)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::pressure)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::liquid)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::gear_box)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::enigne)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::back_home)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ZC::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ZC::previous)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject ZC::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ZC.data,
      qt_meta_data_ZC,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ZC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ZC::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ZC.stringdata0))
        return static_cast<void*>(const_cast< ZC*>(this));
    return QWidget::qt_metacast(_clname);
}

int ZC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void ZC::temperate(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ZC::pressure(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ZC::liquid(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ZC::gear_box(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ZC::enigne(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ZC::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ZC::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
