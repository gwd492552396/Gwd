/****************************************************************************
** Meta object code from reading C++ file 'homepage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "homepage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'homepage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_HomePage_t {
    QByteArrayData data[18];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_HomePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_HomePage_t qt_meta_stringdata_HomePage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "HomePage"
QT_MOC_LITERAL(1, 9, 10), // "show_video"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "show_weight"
QT_MOC_LITERAL(4, 33, 10), // "show_query"
QT_MOC_LITERAL(5, 44, 12), // "show_setting"
QT_MOC_LITERAL(6, 57, 9), // "back_home"
QT_MOC_LITERAL(7, 67, 8), // "previous"
QT_MOC_LITERAL(8, 76, 13), // "change_weight"
QT_MOC_LITERAL(9, 90, 12), // "change_video"
QT_MOC_LITERAL(10, 103, 21), // "on_btn_weight_clicked"
QT_MOC_LITERAL(11, 125, 20), // "on_btn_query_clicked"
QT_MOC_LITERAL(12, 146, 22), // "on_btn_setting_clicked"
QT_MOC_LITERAL(13, 169, 20), // "on_btn_video_clicked"
QT_MOC_LITERAL(14, 190, 23), // "on_btn_backhome_clicked"
QT_MOC_LITERAL(15, 214, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(16, 234, 13), // "power_changed"
QT_MOC_LITERAL(17, 248, 13) // "current_power"

    },
    "HomePage\0show_video\0\0show_weight\0"
    "show_query\0show_setting\0back_home\0"
    "previous\0change_weight\0change_video\0"
    "on_btn_weight_clicked\0on_btn_query_clicked\0"
    "on_btn_setting_clicked\0on_btn_video_clicked\0"
    "on_btn_backhome_clicked\0on_btn_back_clicked\0"
    "power_changed\0current_power"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_HomePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       3,    1,   92,    2, 0x06 /* Public */,
       4,    1,   95,    2, 0x06 /* Public */,
       5,    1,   98,    2, 0x06 /* Public */,
       6,    1,  101,    2, 0x06 /* Public */,
       7,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,  107,    2, 0x08 /* Private */,
       9,    0,  108,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
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
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void HomePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        HomePage *_t = static_cast<HomePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_video((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->show_weight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->show_query((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->show_setting((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->change_weight(); break;
        case 7: _t->change_video(); break;
        case 8: _t->on_btn_weight_clicked(); break;
        case 9: _t->on_btn_query_clicked(); break;
        case 10: _t->on_btn_setting_clicked(); break;
        case 11: _t->on_btn_video_clicked(); break;
        case 12: _t->on_btn_backhome_clicked(); break;
        case 13: _t->on_btn_back_clicked(); break;
        case 14: _t->power_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::show_video)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::show_weight)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::show_query)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::show_setting)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::back_home)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (HomePage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&HomePage::previous)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject HomePage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HomePage.data,
      qt_meta_data_HomePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *HomePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *HomePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_HomePage.stringdata0))
        return static_cast<void*>(const_cast< HomePage*>(this));
    return QWidget::qt_metacast(_clname);
}

int HomePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void HomePage::show_video(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void HomePage::show_weight(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void HomePage::show_query(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void HomePage::show_setting(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void HomePage::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void HomePage::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
