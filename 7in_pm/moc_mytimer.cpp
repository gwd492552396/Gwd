/****************************************************************************
** Meta object code from reading C++ file 'mytimer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mytimer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mytimer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyTimer_t {
    QByteArrayData data[95];
    char stringdata0[910];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyTimer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyTimer_t qt_meta_stringdata_MyTimer = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyTimer"
QT_MOC_LITERAL(1, 8, 14), // "warning_insert"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "time"
QT_MOC_LITERAL(4, 29, 4), // "type"
QT_MOC_LITERAL(5, 34, 4), // "name"
QT_MOC_LITERAL(6, 39, 12), // "error_insert"
QT_MOC_LITERAL(7, 52, 10), // "delete_row"
QT_MOC_LITERAL(8, 63, 3), // "key"
QT_MOC_LITERAL(9, 67, 16), // "real_time_weight"
QT_MOC_LITERAL(10, 84, 3), // "rtw"
QT_MOC_LITERAL(11, 88, 10), // "ban_weight"
QT_MOC_LITERAL(12, 99, 2), // "bw"
QT_MOC_LITERAL(13, 102, 12), // "total_weight"
QT_MOC_LITERAL(14, 115, 2), // "tw"
QT_MOC_LITERAL(15, 118, 11), // "total_times"
QT_MOC_LITERAL(16, 130, 2), // "tt"
QT_MOC_LITERAL(17, 133, 15), // "ban_total_times"
QT_MOC_LITERAL(18, 149, 3), // "btt"
QT_MOC_LITERAL(19, 153, 12), // "power_change"
QT_MOC_LITERAL(20, 166, 1), // "p"
QT_MOC_LITERAL(21, 168, 15), // "speedup_percent"
QT_MOC_LITERAL(22, 184, 2), // "sp"
QT_MOC_LITERAL(23, 187, 16), // "slowdown_percent"
QT_MOC_LITERAL(24, 204, 2), // "sd"
QT_MOC_LITERAL(25, 207, 11), // "battety_vol"
QT_MOC_LITERAL(26, 219, 2), // "bv"
QT_MOC_LITERAL(27, 222, 9), // "gear_rate"
QT_MOC_LITERAL(28, 232, 2), // "ip"
QT_MOC_LITERAL(29, 235, 10), // "enging_rev"
QT_MOC_LITERAL(30, 246, 2), // "tp"
QT_MOC_LITERAL(31, 249, 14), // "direct_current"
QT_MOC_LITERAL(32, 264, 2), // "dc"
QT_MOC_LITERAL(33, 267, 11), // "real_torque"
QT_MOC_LITERAL(34, 279, 6), // "torque"
QT_MOC_LITERAL(35, 286, 8), // "real_rev"
QT_MOC_LITERAL(36, 295, 3), // "rev"
QT_MOC_LITERAL(37, 299, 16), // "em_control_input"
QT_MOC_LITERAL(38, 316, 3), // "emc"
QT_MOC_LITERAL(39, 320, 17), // "driver_mc_control"
QT_MOC_LITERAL(40, 338, 3), // "dmc"
QT_MOC_LITERAL(41, 342, 13), // "driver_temper"
QT_MOC_LITERAL(42, 356, 2), // "dt"
QT_MOC_LITERAL(43, 359, 9), // "work_mode"
QT_MOC_LITERAL(44, 369, 2), // "wm"
QT_MOC_LITERAL(45, 372, 13), // "running_state"
QT_MOC_LITERAL(46, 386, 2), // "rs"
QT_MOC_LITERAL(47, 389, 11), // "falut_state"
QT_MOC_LITERAL(48, 401, 2), // "fs"
QT_MOC_LITERAL(49, 404, 12), // "mc_direction"
QT_MOC_LITERAL(50, 417, 3), // "mcd"
QT_MOC_LITERAL(51, 421, 19), // "enigen_oli_pressure"
QT_MOC_LITERAL(52, 441, 3), // "eop"
QT_MOC_LITERAL(53, 445, 16), // "gearbox_pressure"
QT_MOC_LITERAL(54, 462, 3), // "gbp"
QT_MOC_LITERAL(55, 466, 11), // "brake_front"
QT_MOC_LITERAL(56, 478, 2), // "bf"
QT_MOC_LITERAL(57, 481, 10), // "brake_back"
QT_MOC_LITERAL(58, 492, 2), // "bb"
QT_MOC_LITERAL(59, 495, 10), // "enigen_rev"
QT_MOC_LITERAL(60, 506, 19), // "enigen_water_temper"
QT_MOC_LITERAL(61, 526, 3), // "ewt"
QT_MOC_LITERAL(62, 530, 14), // "gearbox_temper"
QT_MOC_LITERAL(63, 545, 14), // "gearbox_in_rev"
QT_MOC_LITERAL(64, 560, 15), // "gearbox_out_rev"
QT_MOC_LITERAL(65, 576, 14), // "isg_mc_control"
QT_MOC_LITERAL(66, 591, 3), // "imc"
QT_MOC_LITERAL(67, 595, 18), // "isg_direct_current"
QT_MOC_LITERAL(68, 614, 15), // "isg_real_torque"
QT_MOC_LITERAL(69, 630, 12), // "isg_real_rev"
QT_MOC_LITERAL(70, 643, 17), // "isg_control_input"
QT_MOC_LITERAL(71, 661, 17), // "isg_driver_temper"
QT_MOC_LITERAL(72, 679, 13), // "isg_work_mode"
QT_MOC_LITERAL(73, 693, 17), // "isg_running_state"
QT_MOC_LITERAL(74, 711, 15), // "isg_falut_state"
QT_MOC_LITERAL(75, 727, 16), // "isg_mc_direction"
QT_MOC_LITERAL(76, 744, 9), // "hydraulic"
QT_MOC_LITERAL(77, 754, 7), // "cooling"
QT_MOC_LITERAL(78, 762, 21), // "power_battery_voltage"
QT_MOC_LITERAL(79, 784, 3), // "pbv"
QT_MOC_LITERAL(80, 788, 21), // "power_battery_current"
QT_MOC_LITERAL(81, 810, 3), // "pbc"
QT_MOC_LITERAL(82, 814, 3), // "soc"
QT_MOC_LITERAL(83, 818, 9), // "bms_state"
QT_MOC_LITERAL(84, 828, 3), // "bms"
QT_MOC_LITERAL(85, 832, 11), // "max_current"
QT_MOC_LITERAL(86, 844, 2), // "mc"
QT_MOC_LITERAL(87, 847, 9), // "max_power"
QT_MOC_LITERAL(88, 857, 2), // "mp"
QT_MOC_LITERAL(89, 860, 11), // "max_voltage"
QT_MOC_LITERAL(90, 872, 2), // "mv"
QT_MOC_LITERAL(91, 875, 7), // "charing"
QT_MOC_LITERAL(92, 883, 18), // "enigne_total_hours"
QT_MOC_LITERAL(93, 902, 3), // "eth"
QT_MOC_LITERAL(94, 906, 3) // "log"

    },
    "MyTimer\0warning_insert\0\0time\0type\0"
    "name\0error_insert\0delete_row\0key\0"
    "real_time_weight\0rtw\0ban_weight\0bw\0"
    "total_weight\0tw\0total_times\0tt\0"
    "ban_total_times\0btt\0power_change\0p\0"
    "speedup_percent\0sp\0slowdown_percent\0"
    "sd\0battety_vol\0bv\0gear_rate\0ip\0"
    "enging_rev\0tp\0direct_current\0dc\0"
    "real_torque\0torque\0real_rev\0rev\0"
    "em_control_input\0emc\0driver_mc_control\0"
    "dmc\0driver_temper\0dt\0work_mode\0wm\0"
    "running_state\0rs\0falut_state\0fs\0"
    "mc_direction\0mcd\0enigen_oli_pressure\0"
    "eop\0gearbox_pressure\0gbp\0brake_front\0"
    "bf\0brake_back\0bb\0enigen_rev\0"
    "enigen_water_temper\0ewt\0gearbox_temper\0"
    "gearbox_in_rev\0gearbox_out_rev\0"
    "isg_mc_control\0imc\0isg_direct_current\0"
    "isg_real_torque\0isg_real_rev\0"
    "isg_control_input\0isg_driver_temper\0"
    "isg_work_mode\0isg_running_state\0"
    "isg_falut_state\0isg_mc_direction\0"
    "hydraulic\0cooling\0power_battery_voltage\0"
    "pbv\0power_battery_current\0pbc\0soc\0"
    "bms_state\0bms\0max_current\0mc\0max_power\0"
    "mp\0max_voltage\0mv\0charing\0enigne_total_hours\0"
    "eth\0log"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyTimer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      55,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,  289,    2, 0x06 /* Public */,
       6,    3,  296,    2, 0x06 /* Public */,
       7,    1,  303,    2, 0x06 /* Public */,
       9,    1,  306,    2, 0x06 /* Public */,
      11,    1,  309,    2, 0x06 /* Public */,
      13,    1,  312,    2, 0x06 /* Public */,
      15,    1,  315,    2, 0x06 /* Public */,
      17,    1,  318,    2, 0x06 /* Public */,
      19,    1,  321,    2, 0x06 /* Public */,
      21,    1,  324,    2, 0x06 /* Public */,
      23,    1,  327,    2, 0x06 /* Public */,
      25,    1,  330,    2, 0x06 /* Public */,
      27,    1,  333,    2, 0x06 /* Public */,
      29,    1,  336,    2, 0x06 /* Public */,
      31,    1,  339,    2, 0x06 /* Public */,
      33,    1,  342,    2, 0x06 /* Public */,
      35,    1,  345,    2, 0x06 /* Public */,
      37,    1,  348,    2, 0x06 /* Public */,
      39,    1,  351,    2, 0x06 /* Public */,
      41,    1,  354,    2, 0x06 /* Public */,
      43,    1,  357,    2, 0x06 /* Public */,
      45,    1,  360,    2, 0x06 /* Public */,
      47,    1,  363,    2, 0x06 /* Public */,
      49,    1,  366,    2, 0x06 /* Public */,
      51,    1,  369,    2, 0x06 /* Public */,
      53,    1,  372,    2, 0x06 /* Public */,
      55,    1,  375,    2, 0x06 /* Public */,
      57,    1,  378,    2, 0x06 /* Public */,
      59,    1,  381,    2, 0x06 /* Public */,
      60,    1,  384,    2, 0x06 /* Public */,
      62,    1,  387,    2, 0x06 /* Public */,
      63,    1,  390,    2, 0x06 /* Public */,
      64,    1,  393,    2, 0x06 /* Public */,
      65,    1,  396,    2, 0x06 /* Public */,
      67,    1,  399,    2, 0x06 /* Public */,
      68,    1,  402,    2, 0x06 /* Public */,
      69,    1,  405,    2, 0x06 /* Public */,
      70,    1,  408,    2, 0x06 /* Public */,
      71,    1,  411,    2, 0x06 /* Public */,
      72,    1,  414,    2, 0x06 /* Public */,
      73,    1,  417,    2, 0x06 /* Public */,
      74,    1,  420,    2, 0x06 /* Public */,
      75,    1,  423,    2, 0x06 /* Public */,
      76,    1,  426,    2, 0x06 /* Public */,
      77,    1,  429,    2, 0x06 /* Public */,
      78,    1,  432,    2, 0x06 /* Public */,
      80,    1,  435,    2, 0x06 /* Public */,
      82,    1,  438,    2, 0x06 /* Public */,
      83,    1,  441,    2, 0x06 /* Public */,
      85,    1,  444,    2, 0x06 /* Public */,
      87,    1,  447,    2, 0x06 /* Public */,
      89,    1,  450,    2, 0x06 /* Public */,
      91,    1,  453,    2, 0x06 /* Public */,
      92,    1,  456,    2, 0x06 /* Public */,
      94,    1,  459,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   22,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::QString,   52,
    QMetaType::Void, QMetaType::QString,   54,
    QMetaType::Void, QMetaType::QString,   56,
    QMetaType::Void, QMetaType::QString,   58,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   61,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,   66,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, QMetaType::QString,   50,
    QMetaType::Void, QMetaType::QString,   76,
    QMetaType::Void, QMetaType::QString,   77,
    QMetaType::Void, QMetaType::QString,   79,
    QMetaType::Void, QMetaType::QString,   81,
    QMetaType::Void, QMetaType::QString,   82,
    QMetaType::Void, QMetaType::QString,   84,
    QMetaType::Void, QMetaType::QString,   86,
    QMetaType::Void, QMetaType::QString,   88,
    QMetaType::Void, QMetaType::QString,   90,
    QMetaType::Void, QMetaType::QString,   91,
    QMetaType::Void, QMetaType::QString,   93,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void MyTimer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyTimer *_t = static_cast<MyTimer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->warning_insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->error_insert((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 2: _t->delete_row((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->real_time_weight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->ban_weight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->total_weight((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->total_times((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->ban_total_times((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->power_change((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->speedup_percent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: _t->slowdown_percent((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->battety_vol((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->gear_rate((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->enging_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: _t->direct_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: _t->real_torque((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->real_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: _t->em_control_input((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->driver_mc_control((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 19: _t->driver_temper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: _t->work_mode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 21: _t->running_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->falut_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 23: _t->mc_direction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 24: _t->enigen_oli_pressure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: _t->gearbox_pressure((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->brake_front((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->brake_back((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->enigen_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->enigen_water_temper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->gearbox_temper((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->gearbox_in_rev((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 32: _t->gearbox_out_rev((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 33: _t->isg_mc_control((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->isg_direct_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->isg_real_torque((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->isg_real_rev((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->isg_control_input((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 38: _t->isg_driver_temper((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->isg_work_mode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->isg_running_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 41: _t->isg_falut_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 42: _t->isg_mc_direction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 43: _t->hydraulic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 44: _t->cooling((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 45: _t->power_battery_voltage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 46: _t->power_battery_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 47: _t->soc((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 48: _t->bms_state((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 49: _t->max_current((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 50: _t->max_power((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 51: _t->max_voltage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 52: _t->charing((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 53: _t->enigne_total_hours((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 54: _t->log((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MyTimer::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::warning_insert)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::error_insert)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::delete_row)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::real_time_weight)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::ban_weight)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::total_weight)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::total_times)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::ban_total_times)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::power_change)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::speedup_percent)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::slowdown_percent)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::battety_vol)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::gear_rate)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::enging_rev)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::direct_current)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::real_torque)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::real_rev)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::em_control_input)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::driver_mc_control)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::driver_temper)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::work_mode)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::running_state)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::falut_state)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::mc_direction)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::enigen_oli_pressure)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::gearbox_pressure)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::brake_front)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::brake_back)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::enigen_rev)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::enigen_water_temper)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::gearbox_temper)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::gearbox_in_rev)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::gearbox_out_rev)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_mc_control)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_direct_current)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_real_torque)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_real_rev)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_control_input)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_driver_temper)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_work_mode)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_running_state)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_falut_state)) {
                *result = 41;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::isg_mc_direction)) {
                *result = 42;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::hydraulic)) {
                *result = 43;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::cooling)) {
                *result = 44;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::power_battery_voltage)) {
                *result = 45;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::power_battery_current)) {
                *result = 46;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::soc)) {
                *result = 47;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::bms_state)) {
                *result = 48;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::max_current)) {
                *result = 49;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::max_power)) {
                *result = 50;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::max_voltage)) {
                *result = 51;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::charing)) {
                *result = 52;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::enigne_total_hours)) {
                *result = 53;
                return;
            }
        }
        {
            typedef void (MyTimer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyTimer::log)) {
                *result = 54;
                return;
            }
        }
    }
}

const QMetaObject MyTimer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_MyTimer.data,
      qt_meta_data_MyTimer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyTimer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyTimer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyTimer.stringdata0))
        return static_cast<void*>(const_cast< MyTimer*>(this));
    return QThread::qt_metacast(_clname);
}

int MyTimer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void MyTimer::warning_insert(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyTimer::error_insert(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyTimer::delete_row(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyTimer::real_time_weight(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyTimer::ban_weight(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyTimer::total_weight(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyTimer::total_times(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyTimer::ban_total_times(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MyTimer::power_change(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MyTimer::speedup_percent(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MyTimer::slowdown_percent(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MyTimer::battety_vol(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MyTimer::gear_rate(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MyTimer::enging_rev(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MyTimer::direct_current(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MyTimer::real_torque(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MyTimer::real_rev(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MyTimer::em_control_input(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MyTimer::driver_mc_control(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MyTimer::driver_temper(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MyTimer::work_mode(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MyTimer::running_state(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MyTimer::falut_state(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MyTimer::mc_direction(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MyTimer::enigen_oli_pressure(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void MyTimer::gearbox_pressure(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void MyTimer::brake_front(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void MyTimer::brake_back(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void MyTimer::enigen_rev(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void MyTimer::enigen_water_temper(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void MyTimer::gearbox_temper(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void MyTimer::gearbox_in_rev(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void MyTimer::gearbox_out_rev(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void MyTimer::isg_mc_control(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void MyTimer::isg_direct_current(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void MyTimer::isg_real_torque(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void MyTimer::isg_real_rev(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void MyTimer::isg_control_input(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void MyTimer::isg_driver_temper(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void MyTimer::isg_work_mode(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void MyTimer::isg_running_state(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void MyTimer::isg_falut_state(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void MyTimer::isg_mc_direction(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void MyTimer::hydraulic(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}

// SIGNAL 44
void MyTimer::cooling(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 44, _a);
}

// SIGNAL 45
void MyTimer::power_battery_voltage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 45, _a);
}

// SIGNAL 46
void MyTimer::power_battery_current(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 46, _a);
}

// SIGNAL 47
void MyTimer::soc(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 47, _a);
}

// SIGNAL 48
void MyTimer::bms_state(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 48, _a);
}

// SIGNAL 49
void MyTimer::max_current(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 49, _a);
}

// SIGNAL 50
void MyTimer::max_power(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 50, _a);
}

// SIGNAL 51
void MyTimer::max_voltage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 51, _a);
}

// SIGNAL 52
void MyTimer::charing(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 52, _a);
}

// SIGNAL 53
void MyTimer::enigne_total_hours(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 53, _a);
}

// SIGNAL 54
void MyTimer::log(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 54, _a);
}
QT_END_MOC_NAMESPACE
