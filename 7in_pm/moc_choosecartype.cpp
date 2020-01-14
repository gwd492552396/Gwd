/****************************************************************************
** Meta object code from reading C++ file 'choosecartype.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "choosecartype.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choosecartype.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ChooseCarType_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChooseCarType_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChooseCarType_t qt_meta_stringdata_ChooseCarType = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ChooseCarType"
QT_MOC_LITERAL(1, 14, 9), // "back_home"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "previous"
QT_MOC_LITERAL(4, 34, 21), // "on_btn_engine_clicked"
QT_MOC_LITERAL(5, 56, 20), // "on_btn_drive_clicked"
QT_MOC_LITERAL(6, 77, 24), // "on_btn_back_home_clicked"
QT_MOC_LITERAL(7, 102, 19) // "on_btn_back_clicked"

    },
    "ChooseCarType\0back_home\0\0previous\0"
    "on_btn_engine_clicked\0on_btn_drive_clicked\0"
    "on_btn_back_home_clicked\0on_btn_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseCarType[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   50,    2, 0x08 /* Private */,
       5,    0,   51,    2, 0x08 /* Private */,
       6,    0,   52,    2, 0x08 /* Private */,
       7,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChooseCarType::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ChooseCarType *_t = static_cast<ChooseCarType *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_btn_engine_clicked(); break;
        case 3: _t->on_btn_drive_clicked(); break;
        case 4: _t->on_btn_back_home_clicked(); break;
        case 5: _t->on_btn_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ChooseCarType::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseCarType::back_home)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ChooseCarType::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ChooseCarType::previous)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ChooseCarType::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ChooseCarType.data,
      qt_meta_data_ChooseCarType,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ChooseCarType::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseCarType::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseCarType.stringdata0))
        return static_cast<void*>(const_cast< ChooseCarType*>(this));
    return QWidget::qt_metacast(_clname);
}

int ChooseCarType::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ChooseCarType::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChooseCarType::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
