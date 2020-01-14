/****************************************************************************
** Meta object code from reading C++ file 'set.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "set.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'set.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_set_t {
    QByteArrayData data[11];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_set_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_set_t qt_meta_stringdata_set = {
    {
QT_MOC_LITERAL(0, 0, 3), // "set"
QT_MOC_LITERAL(1, 4, 5), // "login"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 10), // "management"
QT_MOC_LITERAL(4, 22, 9), // "back_home"
QT_MOC_LITERAL(5, 32, 8), // "previous"
QT_MOC_LITERAL(6, 41, 20), // "on_btn_login_clicked"
QT_MOC_LITERAL(7, 62, 25), // "on_btn_management_clicked"
QT_MOC_LITERAL(8, 88, 23), // "on_btn_backhome_clicked"
QT_MOC_LITERAL(9, 112, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(10, 132, 11) // "loginstatus"

    },
    "set\0login\0\0management\0back_home\0"
    "previous\0on_btn_login_clicked\0"
    "on_btn_management_clicked\0"
    "on_btn_backhome_clicked\0on_btn_back_clicked\0"
    "loginstatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_set[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       3,    1,   62,    2, 0x06 /* Public */,
       4,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void set::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        set *_t = static_cast<set *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->management((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_btn_login_clicked(); break;
        case 5: _t->on_btn_management_clicked(); break;
        case 6: _t->on_btn_backhome_clicked(); break;
        case 7: _t->on_btn_back_clicked(); break;
        case 8: _t->loginstatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (set::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&set::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (set::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&set::management)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (set::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&set::back_home)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (set::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&set::previous)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject set::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_set.data,
      qt_meta_data_set,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *set::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *set::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_set.stringdata0))
        return static_cast<void*>(const_cast< set*>(this));
    return QWidget::qt_metacast(_clname);
}

int set::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void set::login(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void set::management(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void set::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void set::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
