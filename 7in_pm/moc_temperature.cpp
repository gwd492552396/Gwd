/****************************************************************************
** Meta object code from reading C++ file 'temperature.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "temperature.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'temperature.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Temperature_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Temperature_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Temperature_t qt_meta_stringdata_Temperature = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Temperature"
QT_MOC_LITERAL(1, 12, 8), // "previous"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(4, 42, 23), // "set_engine_water_temper"
QT_MOC_LITERAL(5, 66, 3) // "ewt"

    },
    "Temperature\0previous\0\0on_btn_back_clicked\0"
    "set_engine_water_temper\0ewt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Temperature[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   32,    2, 0x08 /* Private */,
       4,    1,   33,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Temperature::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Temperature *_t = static_cast<Temperature *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->set_engine_water_temper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Temperature::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Temperature::previous)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Temperature::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Temperature.data,
      qt_meta_data_Temperature,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Temperature::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Temperature::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Temperature.stringdata0))
        return static_cast<void*>(const_cast< Temperature*>(this));
    return QWidget::qt_metacast(_clname);
}

int Temperature::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void Temperature::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
