/****************************************************************************
** Meta object code from reading C++ file 'pressure.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "pressure.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pressure.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Pressure_t {
    QByteArrayData data[6];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Pressure_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Pressure_t qt_meta_stringdata_Pressure = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Pressure"
QT_MOC_LITERAL(1, 9, 8), // "previous"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(4, 39, 23), // "set_enigne_oil_pressure"
QT_MOC_LITERAL(5, 63, 20) // "set_gearbox_pressure"

    },
    "Pressure\0previous\0\0on_btn_back_clicked\0"
    "set_enigne_oil_pressure\0set_gearbox_pressure"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Pressure[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   37,    2, 0x08 /* Private */,
       4,    1,   38,    2, 0x08 /* Private */,
       5,    1,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Pressure::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Pressure *_t = static_cast<Pressure *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_btn_back_clicked(); break;
        case 2: _t->set_enigne_oil_pressure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->set_gearbox_pressure((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Pressure::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Pressure::previous)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Pressure::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Pressure.data,
      qt_meta_data_Pressure,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Pressure::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Pressure::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Pressure.stringdata0))
        return static_cast<void*>(const_cast< Pressure*>(this));
    return QWidget::qt_metacast(_clname);
}

int Pressure::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Pressure::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
