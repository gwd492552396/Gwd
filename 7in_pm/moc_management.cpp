/****************************************************************************
** Meta object code from reading C++ file 'management.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "management.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Management_t {
    QByteArrayData data[15];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Management_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Management_t qt_meta_stringdata_Management = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Management"
QT_MOC_LITERAL(1, 11, 3), // "add"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "del"
QT_MOC_LITERAL(4, 20, 8), // "previous"
QT_MOC_LITERAL(5, 29, 3), // "log"
QT_MOC_LITERAL(6, 33, 13), // "loginstatus_s"
QT_MOC_LITERAL(7, 47, 8), // "senddata"
QT_MOC_LITERAL(8, 56, 10), // "fast_login"
QT_MOC_LITERAL(9, 67, 18), // "on_btn_add_clicked"
QT_MOC_LITERAL(10, 86, 18), // "on_btn_del_clicked"
QT_MOC_LITERAL(11, 105, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(12, 125, 25), // "on_btn_fast_login_clicked"
QT_MOC_LITERAL(13, 151, 7), // "receive"
QT_MOC_LITERAL(14, 159, 12) // "get_user_now"

    },
    "Management\0add\0\0del\0previous\0log\0"
    "loginstatus_s\0senddata\0fast_login\0"
    "on_btn_add_clicked\0on_btn_del_clicked\0"
    "on_btn_back_clicked\0on_btn_fast_login_clicked\0"
    "receive\0get_user_now"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Management[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       3,    1,   82,    2, 0x06 /* Public */,
       4,    1,   85,    2, 0x06 /* Public */,
       5,    1,   88,    2, 0x06 /* Public */,
       6,    1,   91,    2, 0x06 /* Public */,
       7,    1,   94,    2, 0x06 /* Public */,
       8,    1,   97,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  100,    2, 0x08 /* Private */,
      10,    0,  101,    2, 0x08 /* Private */,
      11,    0,  102,    2, 0x08 /* Private */,
      12,    0,  103,    2, 0x08 /* Private */,
      13,    0,  104,    2, 0x08 /* Private */,
      14,    1,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Management::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Management *_t = static_cast<Management *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->add((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->del((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->loginstatus_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->senddata((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->fast_login((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->on_btn_add_clicked(); break;
        case 8: _t->on_btn_del_clicked(); break;
        case 9: _t->on_btn_back_clicked(); break;
        case 10: _t->on_btn_fast_login_clicked(); break;
        case 11: _t->receive(); break;
        case 12: _t->get_user_now((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Management::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::add)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Management::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::del)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Management::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::previous)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Management::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::log)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Management::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::loginstatus_s)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (Management::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::senddata)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (Management::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Management::fast_login)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject Management::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Management.data,
      qt_meta_data_Management,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Management::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Management::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Management.stringdata0))
        return static_cast<void*>(const_cast< Management*>(this));
    return QWidget::qt_metacast(_clname);
}

int Management::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Management::add(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Management::del(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Management::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Management::log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Management::loginstatus_s(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Management::senddata(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Management::fast_login(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
