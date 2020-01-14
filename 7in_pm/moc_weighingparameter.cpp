/****************************************************************************
** Meta object code from reading C++ file 'weighingparameter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "weighingparameter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'weighingparameter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WeighingParameter_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WeighingParameter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WeighingParameter_t qt_meta_stringdata_WeighingParameter = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WeighingParameter"
QT_MOC_LITERAL(1, 18, 9), // "back_home"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "previous"
QT_MOC_LITERAL(4, 38, 24), // "on_btn_back_home_clicked"
QT_MOC_LITERAL(5, 63, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(6, 83, 16), // "on_le_ry_clicked"
QT_MOC_LITERAL(7, 100, 16), // "on_le_yg_clicked"
QT_MOC_LITERAL(8, 117, 20), // "on_le_canshu_clicked"
QT_MOC_LITERAL(9, 138, 20), // "on_le_weight_clicked"
QT_MOC_LITERAL(10, 159, 11) // "receivedata"

    },
    "WeighingParameter\0back_home\0\0previous\0"
    "on_btn_back_home_clicked\0on_btn_back_clicked\0"
    "on_le_ry_clicked\0on_le_yg_clicked\0"
    "on_le_canshu_clicked\0on_le_weight_clicked\0"
    "receivedata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WeighingParameter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   65,    2, 0x08 /* Private */,
       5,    0,   66,    2, 0x08 /* Private */,
       6,    0,   67,    2, 0x08 /* Private */,
       7,    0,   68,    2, 0x08 /* Private */,
       8,    0,   69,    2, 0x08 /* Private */,
       9,    0,   70,    2, 0x08 /* Private */,
      10,    2,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void WeighingParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WeighingParameter *_t = static_cast<WeighingParameter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btn_back_home_clicked(); break;
        case 3: _t->on_btn_back_clicked(); break;
        case 4: _t->on_le_ry_clicked(); break;
        case 5: _t->on_le_yg_clicked(); break;
        case 6: _t->on_le_canshu_clicked(); break;
        case 7: _t->on_le_weight_clicked(); break;
        case 8: _t->receivedata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WeighingParameter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeighingParameter::back_home)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WeighingParameter::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WeighingParameter::previous)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WeighingParameter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WeighingParameter.data,
      qt_meta_data_WeighingParameter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WeighingParameter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WeighingParameter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WeighingParameter.stringdata0))
        return static_cast<void*>(const_cast< WeighingParameter*>(this));
    return QWidget::qt_metacast(_clname);
}

int WeighingParameter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WeighingParameter::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WeighingParameter::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
