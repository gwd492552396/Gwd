/****************************************************************************
** Meta object code from reading C++ file 'power.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "power.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'power.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Power_t {
    QByteArrayData data[20];
    char stringdata0[201];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Power_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Power_t qt_meta_stringdata_Power = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Power"
QT_MOC_LITERAL(1, 6, 8), // "previous"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(4, 36, 25), // "set_power_battery_voltage"
QT_MOC_LITERAL(5, 62, 3), // "pbv"
QT_MOC_LITERAL(6, 66, 25), // "set_power_battery_current"
QT_MOC_LITERAL(7, 92, 3), // "pbc"
QT_MOC_LITERAL(8, 96, 7), // "set_soc"
QT_MOC_LITERAL(9, 104, 3), // "soc"
QT_MOC_LITERAL(10, 108, 13), // "set_bms_state"
QT_MOC_LITERAL(11, 122, 3), // "bms"
QT_MOC_LITERAL(12, 126, 15), // "set_max_current"
QT_MOC_LITERAL(13, 142, 2), // "mc"
QT_MOC_LITERAL(14, 145, 13), // "set_max_power"
QT_MOC_LITERAL(15, 159, 2), // "mp"
QT_MOC_LITERAL(16, 162, 15), // "set_max_voltage"
QT_MOC_LITERAL(17, 178, 2), // "mv"
QT_MOC_LITERAL(18, 181, 11), // "set_charing"
QT_MOC_LITERAL(19, 193, 7) // "charing"

    },
    "Power\0previous\0\0on_btn_back_clicked\0"
    "set_power_battery_voltage\0pbv\0"
    "set_power_battery_current\0pbc\0set_soc\0"
    "soc\0set_bms_state\0bms\0set_max_current\0"
    "mc\0set_max_power\0mp\0set_max_voltage\0"
    "mv\0set_charing\0charing"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Power[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   67,    2, 0x08 /* Private */,
       4,    1,   68,    2, 0x08 /* Private */,
       6,    1,   71,    2, 0x08 /* Private */,
       8,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      14,    1,   83,    2, 0x08 /* Private */,
      16,    1,   86,    2, 0x08 /* Private */,
      18,    1,   89,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

void Power::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Power *_t = static_cast<Power *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->set_power_battery_voltage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->set_power_battery_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->set_soc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_bms_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->set_max_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->set_max_power((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->set_max_voltage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->set_charing((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Power::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Power::previous)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Power::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Power.data,
      qt_meta_data_Power,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Power::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Power::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Power.stringdata0))
        return static_cast<void*>(const_cast< Power*>(this));
    return QWidget::qt_metacast(_clname);
}

int Power::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Power::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
