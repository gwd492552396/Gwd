/****************************************************************************
** Meta object code from reading C++ file 'warning.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "warning.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'warning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Warning_t {
    QByteArrayData data[12];
    char stringdata0[129];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Warning_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Warning_t qt_meta_stringdata_Warning = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Warning"
QT_MOC_LITERAL(1, 8, 8), // "previous"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "next_page"
QT_MOC_LITERAL(4, 28, 13), // "previous_page"
QT_MOC_LITERAL(5, 42, 19), // "on_btn_back_clicked"
QT_MOC_LITERAL(6, 62, 12), // "update_table"
QT_MOC_LITERAL(7, 75, 12), // "warning_time"
QT_MOC_LITERAL(8, 88, 12), // "warning_type"
QT_MOC_LITERAL(9, 101, 12), // "warning_name"
QT_MOC_LITERAL(10, 114, 10), // "delete_row"
QT_MOC_LITERAL(11, 125, 3) // "key"

    },
    "Warning\0previous\0\0next_page\0previous_page\0"
    "on_btn_back_clicked\0update_table\0"
    "warning_time\0warning_type\0warning_name\0"
    "delete_row\0key"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Warning[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   47,    2, 0x08 /* Private */,
       4,    0,   48,    2, 0x08 /* Private */,
       5,    0,   49,    2, 0x08 /* Private */,
       6,    3,   50,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void Warning::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Warning *_t = static_cast<Warning *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->previous((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->next_page(); break;
        case 2: _t->previous_page(); break;
        case 3: _t->on_btn_back_clicked(); break;
        case 4: _t->update_table((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 5: _t->delete_row((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Warning::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Warning::previous)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Warning::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Warning.data,
      qt_meta_data_Warning,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Warning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Warning::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Warning.stringdata0))
        return static_cast<void*>(const_cast< Warning*>(this));
    return QWidget::qt_metacast(_clname);
}

int Warning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Warning::previous(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
