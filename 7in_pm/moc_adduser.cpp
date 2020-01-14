/****************************************************************************
** Meta object code from reading C++ file 'adduser.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adduser.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adduser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddUser_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddUser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddUser_t qt_meta_stringdata_AddUser = {
    {
QT_MOC_LITERAL(0, 0, 7), // "AddUser"
QT_MOC_LITERAL(1, 8, 6), // "create"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 8), // "previous"
QT_MOC_LITERAL(4, 25, 4), // "send"
QT_MOC_LITERAL(5, 30, 3), // "log"
QT_MOC_LITERAL(6, 34, 7), // "receive"
QT_MOC_LITERAL(7, 42, 21), // "on_btn_create_clicked"
QT_MOC_LITERAL(8, 64, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(9, 84, 6) // "logout"

    },
    "AddUser\0create\0\0previous\0send\0log\0"
    "receive\0on_btn_create_clicked\0"
    "on_btn_back_clicked\0logout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddUser[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       3,    1,   57,    2, 0x06 /* Public */,
       4,    0,   60,    2, 0x06 /* Public */,
       5,    1,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   64,    2, 0x08 /* Private */,
       7,    0,   67,    2, 0x08 /* Private */,
       8,    0,   68,    2, 0x08 /* Private */,
       9,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void AddUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddUser *_t = static_cast<AddUser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->create((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->send(); break;
        case 3: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->receive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_btn_create_clicked(); break;
        case 6: _t->on_btn_back_clicked(); break;
        case 7: _t->logout((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddUser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddUser::create)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AddUser::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddUser::previous)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AddUser::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddUser::send)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AddUser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddUser::log)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject AddUser::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddUser.data,
      qt_meta_data_AddUser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddUser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddUser.stringdata0))
        return static_cast<void*>(const_cast< AddUser*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AddUser::create(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddUser::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddUser::send()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AddUser::log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
