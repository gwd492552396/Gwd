#include "readdata.h"

ReadData::ReadData()
{

}
//weight
QString ReadData::get_real_time_weight()
{
    return real_time_weight;
}

QString ReadData::get_ban_weight()
{
    return ban_weight;
}

QString ReadData::get_total_weight()
{
    return total_weight;
}

QString ReadData::get_total_times()
{
    return total_times;
}

QString ReadData::get_ban_total_times()
{
    return ban_total_times;
}

void ReadData::set_real_time_weight(const QString &rtw)
{
    real_time_weight = rtw;
}

void ReadData::set_ban_weight(const QString &bw)
{
    ban_weight = bw;
}

void ReadData::set_total_weight(const QString &tw)
{
    total_weight = tw;
}

void ReadData::set_total_times(const QString &tt)
{
    total_times = tt;
}

void ReadData::set_ban_total_times(const QString &btt)
{
    ban_total_times = btt;
}
//index
QString ReadData::get_speedup_percent()
{
    return speedup_percent;
}

QString ReadData::get_slowdown_percent()
{
    return slowdown_percent;
}

QString ReadData::get_bus_voltage()
{
    return bus_voltage;
}

QString ReadData::get_isg_power()
{
    return isg_power;
}

QString ReadData::get_tm_power()
{
    return tm_power;
}

QString ReadData::get_power()
{
    return power;
}

void ReadData::set_power(const QString &p)
{
   power = p;
}

void ReadData::set_speedup_percent(const QString &sp)
{
    speedup_percent = sp;
}

void ReadData::set_slowdown_percent(const QString &sd)
{
    slowdown_percent = sd;
}

void ReadData::set_bus_voltage(const QString &bv)
{
    bus_voltage = bv;
}

void ReadData::set_isg_power(const QString &ip)
{
    isg_power = ip;
}

void ReadData::set_tm_power(const QString &tp)
{
    tm_power = tp;
}
//driver_power
QString ReadData::get_direct_current()
{
    return direct_current;
}

QString ReadData::get_real_torque()
{
    return real_torque;
}

QString ReadData::get_real_rev()
{
    return real_rev;
}

QString ReadData::get_em_control_input()
{
    return em_control_input;
}

QString ReadData::get_driver_mc_control()
{
    return driver_mc_control;
}

QString ReadData::get_driver_temper()
{
    return driver_temper;
}

QString ReadData::get_work_mode()
{
    return work_mode;
}

QString ReadData::get_running_state()
{
    return running_state;
}

QString ReadData::get_falut_state()
{
    return falut_state;
}

QString ReadData::get_mc_direction()
{
    return mc_direction;
}

void ReadData::set_direct_current(const QString &dc)
{
    direct_current = dc;
}

void ReadData::set_real_torque(const QString &torque)
{
    real_torque =torque;
}

void ReadData::set_real_rev(const QString &rev)
{
    real_rev = rev;
}

void ReadData::set_em_control_input(const QString &emc)
{
    em_control_input = emc;
}

void ReadData::set_driver_mc_control(const QString &dmc)
{
    driver_mc_control = dmc;
}

void ReadData::set_driver_temper(const QString &dt)
{
    driver_temper = dt;
}

void ReadData::set_work_mode(const QString &wm)
{
    work_mode = wm;
}

void ReadData::set_running_state(const QString &rs)
{
    running_state = rs;
}

void ReadData::set_falut_state(const QString &fs)
{
    falut_state = fs;
}

void ReadData::set_mc_direction(const QString &mcd)
{
    mc_direction = mcd;
}
//enigne
//pressure

//temperature
QString ReadData::get_enigen_rev()
{
    return enigen_rev;
}

QString ReadData::get_enigen_water_temper()
{
    return enigen_water_temper;
}

QString ReadData::get_enigen_oli_pressure()
{
    return enigen_oli_pressure;
}

void ReadData::set_enigen_rev(const QString &rev)
{
    enigen_rev = rev;
}

void ReadData::set_enigen_water_temper(const QString &ewt)
{
    enigen_water_temper = ewt;
}

void ReadData::set_enigen_oli_pressure(const QString &eop)
{
    enigen_oli_pressure = eop;
}
//isgpower
QString ReadData::get_isg_mc_control()
{
    return isg_mc_control;
}

void ReadData::set_isg_mc_control(const QString &imc)
{
    isg_mc_control = imc;
}

QString ReadData::get_isg_direct_current()
{
    return isg_direct_current;
}

QString ReadData::get_isg_real_torque()
{
    return isg_real_torque;
}

QString ReadData::get_isg_real_rev()
{
    return isg_real_rev;
}

QString ReadData::get_isg_control_input()
{
    return isg_control_input;
}
QString ReadData::get_isg_driver_temper()
{
    return isg_driver_temper;
}

QString ReadData::get_isg_work_mode()
{
    return isg_work_mode;
}

QString ReadData::get_isg_running_state()
{
    return isg_running_state;
}

QString ReadData::get_isg_falut_state()
{
    return isg_falut_state;
}

QString ReadData::get_isg_direction()
{
    return isg_mc_direction;
}

void ReadData::set_isg_direct_current(const QString &dc)
{
    isg_direct_current = dc;
}

void ReadData::set_isg_real_torque(const QString &torque)
{
    isg_real_torque =torque;
}

void ReadData::set_isg_real_rev(const QString &rev)
{
    isg_real_rev = rev;
}

void ReadData::set_isg_control_input(const QString &emc)
{
    isg_control_input = emc;
}

void ReadData::set_isg_driver_temper(const QString &dt)
{
    isg_driver_temper = dt;
}
void ReadData::set_isg_work_mode(const QString &wm)
{
    isg_work_mode = wm;
}

void ReadData::set_isg_running_state(const QString &rs)
{
    isg_running_state = rs;
}

void ReadData::set_isg_falut_state(const QString &fs)
{
    isg_falut_state = fs;
}

void ReadData::set_isg_mc_direction(const QString &mcd)
{
    isg_mc_direction = mcd;
}
//liquid
QString ReadData::get_hydraulic()
{
    return hydraulic;
}

QString ReadData::get_cooling()
{
    return cooling;
}

void ReadData::set_hydraulic(const QString &hydraulic)
{
    this->hydraulic = hydraulic;
}

void ReadData::set_cooling(const QString &cooling)
{
    this->cooling = cooling;
}
//power
QString ReadData::get_power_battery_voltage()
{
    return power_battery_voltage;
}

QString ReadData::get_power_battery_current()
{
    return power_battery_current;
}

QString ReadData::get_soc()
{
    return soc;
}

QString ReadData::get_bms_state()
{
    return bms_state;
}

QString ReadData::get_max_current()
{
    return max_current;
}

QString ReadData::get_max_power()
{
    return max_power;
}

QString ReadData::get_max_voltage()
{
    return max_voltage;
}

QString ReadData::get_charing()
{
    return charing;
}

void ReadData::set_power_battery_voltage(const QString &pbv)
{
    power_battery_voltage = pbv;
}

void ReadData::set_power_battery_current(const QString &pbc)
{
    power_battery_current = pbc;
}

void ReadData::set_soc(const QString &soc)
{
    this->soc = soc;
}

void ReadData::set_bms_state(const QString &bms)
{
    bms_state = bms;
}

void ReadData::set_max_current(const QString &mc)
{
    max_current = mc;
}

void ReadData::set_max_power(const QString &mp)
{
    max_power = mp;
}

void ReadData::set_max_voltage(const QString &mv)
{
    max_voltage = mv;
}

void ReadData::set_charing(const QString &charing)
{
    this->charing = charing;
}



//zc
QString ReadData::get_enigne_total_hours()
{
    return enigne_total_hours;
}

void ReadData::set_enigne_total_hours(const QString &eth)
{
    enigne_total_hours = eth;
}






