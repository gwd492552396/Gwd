/****************************************************************************
** Meta object code from reading C++ file 'login.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "login.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'login.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Login_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Login_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Login_t qt_meta_stringdata_Login = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Login"
QT_MOC_LITERAL(1, 6, 5), // "login"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 8), // "previous"
QT_MOC_LITERAL(4, 22, 8), // "senddata"
QT_MOC_LITERAL(5, 31, 11), // "loginstatus"
QT_MOC_LITERAL(6, 43, 3), // "log"
QT_MOC_LITERAL(7, 47, 20), // "on_btn_login_clicked"
QT_MOC_LITERAL(8, 68, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(9, 88, 25), // "on_btn_fast_login_clicked"
QT_MOC_LITERAL(10, 114, 7), // "receive"
QT_MOC_LITERAL(11, 122, 13), // "message_close"
QT_MOC_LITERAL(12, 136, 18) // "receive_fast_login"

    },
    "Login\0login\0\0previous\0senddata\0"
    "loginstatus\0log\0on_btn_login_clicked\0"
    "on_btn_back_clicked\0on_btn_fast_login_clicked\0"
    "receive\0message_close\0receive_fast_login"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Login[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   84,    2, 0x08 /* Private */,
       8,    0,   85,    2, 0x08 /* Private */,
       9,    0,   86,    2, 0x08 /* Private */,
      10,    1,   87,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    1,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Login::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Login *_t = static_cast<Login *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->login((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->senddata((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->loginstatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_btn_login_clicked(); break;
        case 6: _t->on_btn_back_clicked(); break;
        case 7: _t->on_btn_fast_login_clicked(); break;
        case 8: _t->receive((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->message_close(); break;
        case 10: _t->receive_fast_login((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Login::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::login)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (Login::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::previous)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (Login::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::senddata)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (Login::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::loginstatus)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (Login::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Login::log)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject Login::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Login.data,
      qt_meta_data_Login,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Login::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Login::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Login.stringdata0))
        return static_cast<void*>(const_cast< Login*>(this));
    return QWidget::qt_metacast(_clname);
}

int Login::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Login::login(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Login::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Login::senddata(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Login::loginstatus(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Login::log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
