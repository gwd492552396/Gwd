/****************************************************************************
** Meta object code from reading C++ file 'superuserpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "superuserpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'superuserpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SuperUserPage_t {
    QByteArrayData data[19];
    char stringdata0[254];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SuperUserPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SuperUserPage_t qt_meta_stringdata_SuperUserPage = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SuperUserPage"
QT_MOC_LITERAL(1, 14, 4), // "ybsz"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 4), // "kxgn"
QT_MOC_LITERAL(4, 25, 4), // "cxxz"
QT_MOC_LITERAL(5, 30, 4), // "czcs"
QT_MOC_LITERAL(6, 35, 5), // "clear"
QT_MOC_LITERAL(7, 41, 4), // "exit"
QT_MOC_LITERAL(8, 46, 8), // "previous"
QT_MOC_LITERAL(9, 55, 19), // "on_btn_ybsz_clicked"
QT_MOC_LITERAL(10, 75, 19), // "on_btn_kxgn_clicked"
QT_MOC_LITERAL(11, 95, 19), // "on_btn_cxxz_clicked"
QT_MOC_LITERAL(12, 115, 19), // "on_btn_czcs_clicked"
QT_MOC_LITERAL(13, 135, 20), // "on_btn_clear_clicked"
QT_MOC_LITERAL(14, 156, 19), // "on_btn_exit_clicked"
QT_MOC_LITERAL(15, 176, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(16, 196, 20), // "on_le_number_clicked"
QT_MOC_LITERAL(17, 217, 24), // "on_le_limitspeed_clicked"
QT_MOC_LITERAL(18, 242, 11) // "receivedata"

    },
    "SuperUserPage\0ybsz\0\0kxgn\0cxxz\0czcs\0"
    "clear\0exit\0previous\0on_btn_ybsz_clicked\0"
    "on_btn_kxgn_clicked\0on_btn_cxxz_clicked\0"
    "on_btn_czcs_clicked\0on_btn_clear_clicked\0"
    "on_btn_exit_clicked\0on_btn_back_clicked\0"
    "on_le_number_clicked\0on_le_limitspeed_clicked\0"
    "receivedata"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SuperUserPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x06 /* Public */,
       3,    1,  102,    2, 0x06 /* Public */,
       4,    1,  105,    2, 0x06 /* Public */,
       5,    1,  108,    2, 0x06 /* Public */,
       6,    1,  111,    2, 0x06 /* Public */,
       7,    1,  114,    2, 0x06 /* Public */,
       8,    1,  117,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,  120,    2, 0x08 /* Private */,
      10,    0,  121,    2, 0x08 /* Private */,
      11,    0,  122,    2, 0x08 /* Private */,
      12,    0,  123,    2, 0x08 /* Private */,
      13,    0,  124,    2, 0x08 /* Private */,
      14,    0,  125,    2, 0x08 /* Private */,
      15,    0,  126,    2, 0x08 /* Private */,
      16,    0,  127,    2, 0x08 /* Private */,
      17,    0,  128,    2, 0x08 /* Private */,
      18,    2,  129,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

       0        // eod
};

void SuperUserPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SuperUserPage *_t = static_cast<SuperUserPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ybsz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->kxgn((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->cxxz((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->czcs((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->clear((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_btn_ybsz_clicked(); break;
        case 8: _t->on_btn_kxgn_clicked(); break;
        case 9: _t->on_btn_cxxz_clicked(); break;
        case 10: _t->on_btn_czcs_clicked(); break;
        case 11: _t->on_btn_clear_clicked(); break;
        case 12: _t->on_btn_exit_clicked(); break;
        case 13: _t->on_btn_back_clicked(); break;
        case 14: _t->on_le_number_clicked(); break;
        case 15: _t->on_le_limitspeed_clicked(); break;
        case 16: _t->receivedata((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::ybsz)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::kxgn)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::cxxz)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::czcs)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::clear)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::exit)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SuperUserPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SuperUserPage::previous)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject SuperUserPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SuperUserPage.data,
      qt_meta_data_SuperUserPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SuperUserPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SuperUserPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SuperUserPage.stringdata0))
        return static_cast<void*>(const_cast< SuperUserPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int SuperUserPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void SuperUserPage::ybsz(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SuperUserPage::kxgn(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SuperUserPage::cxxz(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SuperUserPage::czcs(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SuperUserPage::clear(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SuperUserPage::exit(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SuperUserPage::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
