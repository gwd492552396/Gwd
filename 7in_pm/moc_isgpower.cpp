/****************************************************************************
** Meta object code from reading C++ file 'isgpower.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "isgpower.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'isgpower.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_IsgPower_t {
    QByteArrayData data[24];
    char stringdata0[248];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IsgPower_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IsgPower_t qt_meta_stringdata_IsgPower = {
    {
QT_MOC_LITERAL(0, 0, 8), // "IsgPower"
QT_MOC_LITERAL(1, 9, 8), // "previous"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(4, 39, 18), // "set_direct_current"
QT_MOC_LITERAL(5, 58, 2), // "dc"
QT_MOC_LITERAL(6, 61, 15), // "set_real_torque"
QT_MOC_LITERAL(7, 77, 6), // "torque"
QT_MOC_LITERAL(8, 84, 12), // "set_real_rev"
QT_MOC_LITERAL(9, 97, 3), // "rev"
QT_MOC_LITERAL(10, 101, 20), // "set_em_control_input"
QT_MOC_LITERAL(11, 122, 3), // "emc"
QT_MOC_LITERAL(12, 126, 18), // "set_isg_mc_control"
QT_MOC_LITERAL(13, 145, 3), // "imc"
QT_MOC_LITERAL(14, 149, 17), // "set_driver_temper"
QT_MOC_LITERAL(15, 167, 2), // "dt"
QT_MOC_LITERAL(16, 170, 13), // "set_work_mode"
QT_MOC_LITERAL(17, 184, 2), // "wm"
QT_MOC_LITERAL(18, 187, 17), // "set_running_state"
QT_MOC_LITERAL(19, 205, 2), // "rs"
QT_MOC_LITERAL(20, 208, 15), // "set_falut_state"
QT_MOC_LITERAL(21, 224, 2), // "fs"
QT_MOC_LITERAL(22, 227, 16), // "set_mc_direction"
QT_MOC_LITERAL(23, 244, 3) // "mcd"

    },
    "IsgPower\0previous\0\0on_btn_back_clicked\0"
    "set_direct_current\0dc\0set_real_torque\0"
    "torque\0set_real_rev\0rev\0set_em_control_input\0"
    "emc\0set_isg_mc_control\0imc\0set_driver_temper\0"
    "dt\0set_work_mode\0wm\0set_running_state\0"
    "rs\0set_falut_state\0fs\0set_mc_direction\0"
    "mcd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IsgPower[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   77,    2, 0x08 /* Private */,
       4,    1,   78,    2, 0x08 /* Private */,
       6,    1,   81,    2, 0x08 /* Private */,
       8,    1,   84,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      14,    1,   93,    2, 0x08 /* Private */,
      16,    1,   96,    2, 0x08 /* Private */,
      18,    1,   99,    2, 0x08 /* Private */,
      20,    1,  102,    2, 0x08 /* Private */,
      22,    1,  105,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void IsgPower::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        IsgPower *_t = static_cast<IsgPower *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->set_direct_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->set_real_torque((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->set_real_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->set_em_control_input((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->set_isg_mc_control((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->set_driver_temper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->set_work_mode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->set_running_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->set_falut_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->set_mc_direction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (IsgPower::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&IsgPower::previous)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject IsgPower::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_IsgPower.data,
      qt_meta_data_IsgPower,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *IsgPower::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IsgPower::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_IsgPower.stringdata0))
        return static_cast<void*>(const_cast< IsgPower*>(this));
    return QWidget::qt_metacast(_clname);
}

int IsgPower::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void IsgPower::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
