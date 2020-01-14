/****************************************************************************
** Meta object code from reading C++ file 'index.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "index.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'index.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Index_t {
    QByteArrayData data[16];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Index_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Index_t qt_meta_stringdata_Index = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Index"
QT_MOC_LITERAL(1, 6, 12), // "control_page"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 22), // "on_btn_control_clicked"
QT_MOC_LITERAL(4, 43, 13), // "power_changed"
QT_MOC_LITERAL(5, 57, 13), // "current_power"
QT_MOC_LITERAL(6, 71, 19), // "set_speedup_percent"
QT_MOC_LITERAL(7, 91, 2), // "sp"
QT_MOC_LITERAL(8, 94, 20), // "set_slowdown_percent"
QT_MOC_LITERAL(9, 115, 2), // "sd"
QT_MOC_LITERAL(10, 118, 19), // "set_battery_voltage"
QT_MOC_LITERAL(11, 138, 2), // "bv"
QT_MOC_LITERAL(12, 141, 13), // "set_gear_rate"
QT_MOC_LITERAL(13, 155, 2), // "ip"
QT_MOC_LITERAL(14, 158, 14), // "set_engine_rev"
QT_MOC_LITERAL(15, 173, 2) // "tp"

    },
    "Index\0control_page\0\0on_btn_control_clicked\0"
    "power_changed\0current_power\0"
    "set_speedup_percent\0sp\0set_slowdown_percent\0"
    "sd\0set_battery_voltage\0bv\0set_gear_rate\0"
    "ip\0set_engine_rev\0tp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Index[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x08 /* Private */,
       4,    1,   58,    2, 0x08 /* Private */,
       6,    1,   61,    2, 0x08 /* Private */,
       8,    1,   64,    2, 0x08 /* Private */,
      10,    1,   67,    2, 0x08 /* Private */,
      12,    1,   70,    2, 0x08 /* Private */,
      14,    1,   73,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   15,

       0        // eod
};

void Index::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Index *_t = static_cast<Index *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->control_page((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btn_control_clicked(); break;
        case 2: _t->power_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->set_speedup_percent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->set_slowdown_percent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_battery_voltage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->set_gear_rate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->set_engine_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Index::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Index::control_page)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Index::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Index.data,
      qt_meta_data_Index,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Index::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Index::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Index.stringdata0))
        return static_cast<void*>(const_cast< Index*>(this));
    return QWidget::qt_metacast(_clname);
}

int Index::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Index::control_page(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
