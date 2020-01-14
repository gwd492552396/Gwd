/****************************************************************************
** Meta object code from reading C++ file 'informationquery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "informationquery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'informationquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_InformationQuery_t {
    QByteArrayData data[13];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InformationQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InformationQuery_t qt_meta_stringdata_InformationQuery = {
    {
QT_MOC_LITERAL(0, 0, 16), // "InformationQuery"
QT_MOC_LITERAL(1, 17, 2), // "zc"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "power"
QT_MOC_LITERAL(4, 27, 5), // "error"
QT_MOC_LITERAL(5, 33, 7), // "warning"
QT_MOC_LITERAL(6, 41, 9), // "back_home"
QT_MOC_LITERAL(7, 51, 8), // "previous"
QT_MOC_LITERAL(8, 60, 17), // "on_btn_zc_clicked"
QT_MOC_LITERAL(9, 78, 20), // "on_btn_error_clicked"
QT_MOC_LITERAL(10, 99, 21), // "on_btn_waring_clicked"
QT_MOC_LITERAL(11, 121, 23), // "on_btn_backhome_clicked"
QT_MOC_LITERAL(12, 145, 19) // "on_btn_back_clicked"

    },
    "InformationQuery\0zc\0\0power\0error\0"
    "warning\0back_home\0previous\0on_btn_zc_clicked\0"
    "on_btn_error_clicked\0on_btn_waring_clicked\0"
    "on_btn_backhome_clicked\0on_btn_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InformationQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    1,   72,    2, 0x06 /* Public */,
       4,    1,   75,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   87,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,

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

       0        // eod
};

void InformationQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        InformationQuery *_t = static_cast<InformationQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->zc((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->power((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->error((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->warning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->back_home((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_btn_zc_clicked(); break;
        case 7: _t->on_btn_error_clicked(); break;
        case 8: _t->on_btn_waring_clicked(); break;
        case 9: _t->on_btn_backhome_clicked(); break;
        case 10: _t->on_btn_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::zc)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::power)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::error)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::warning)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::back_home)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (InformationQuery::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&InformationQuery::previous)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject InformationQuery::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_InformationQuery.data,
      qt_meta_data_InformationQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *InformationQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InformationQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_InformationQuery.stringdata0))
        return static_cast<void*>(const_cast< InformationQuery*>(this));
    return QWidget::qt_metacast(_clname);
}

int InformationQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void InformationQuery::zc(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void InformationQuery::power(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InformationQuery::error(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InformationQuery::warning(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void InformationQuery::back_home(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void InformationQuery::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
