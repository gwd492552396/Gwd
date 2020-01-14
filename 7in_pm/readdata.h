#ifndef READDATA_H
#define READDATA_H
#include <QString>
#include <QObject>

class ReadData
{
public:
    ReadData();
    //weight
    QString get_real_time_weight();
    QString get_ban_weight();
    QString get_total_weight();
    QString get_total_times();
    QString get_ban_total_times();
    void set_real_time_weight(const QString &rtw);
    void set_ban_weight(const QString &bw);
    void set_total_weight(const QString &tw);
    void set_total_times(const QString &tt);
    void set_ban_total_times(const QString &btt);
    //index
    QString get_speedup_percent();
    QString get_slowdown_percent();
    QString get_bus_voltage();
    QString get_isg_power();
    QString get_tm_power();
    QString get_power();
    void set_power(const QString &p);
    void set_speedup_percent(const QString &sp);
    void set_slowdown_percent(const QString &sd);
    void set_bus_voltage(const QString &bv);
    void set_isg_power(const QString &ip);
    void set_tm_power(const QString &tp);
    //driver_power
    QString get_direct_current();
    QString get_real_torque();
    QString get_real_rev();
    QString get_em_control_input();
    QString get_driver_mc_control();
    QString get_driver_temper();
    QString get_work_mode();
    QString get_running_state();
    QString get_falut_state();
    QString get_mc_direction();

    void set_direct_current(const QString &dc);
    void set_real_torque(const QString &torque);
    void set_real_rev(const QString &rev);
    void set_em_control_input(const QString &emc);
    void set_driver_mc_control(const QString &dmc);
    void set_driver_temper(const QString &dt);
    void set_work_mode(const QString &wm );
    void set_running_state(const QString &rs);
    void set_falut_state(const QString &fs);
    void set_mc_direction(const QString &mcd);
    //enigne
    //pressure

    //temperature
    QString get_enigen_rev();
    QString get_enigen_water_temper();
    QString get_enigen_oli_pressure();

    void set_enigen_rev(const QString &rev);
    void set_enigen_water_temper(const QString &ewt);
    void set_enigen_oli_pressure(const QString &eop);
    //isgpower

    QString get_isg_mc_control();
    void set_isg_mc_control(const QString &imc);

    QString get_isg_direct_current();
    QString get_isg_real_torque();
    QString get_isg_real_rev();
    QString get_isg_control_input();
    QString get_isg_driver_temper();
    QString get_isg_work_mode();
    QString get_isg_running_state();
    QString get_isg_falut_state();
    QString get_isg_direction();

    void set_isg_direct_current(const QString &dc);
    void set_isg_real_torque(const QString &torque);
    void set_isg_real_rev(const QString &rev);
    void set_isg_control_input(const QString &emc);
    void set_isg_driver_temper(const QString &dt);
    void set_isg_work_mode(const QString &wm );
    void set_isg_running_state(const QString &rs);
    void set_isg_falut_state(const QString &fs);
    void set_isg_mc_direction(const QString &mcd);

    //liquid
    QString get_hydraulic();
    QString get_cooling();
    void set_hydraulic(const QString &hydraulic);
    void set_cooling(const QString &cooling);

    //power
    QString get_power_battery_voltage();
    QString get_power_battery_current();
    QString get_soc();
    QString get_bms_state();
    QString get_max_current();
    QString get_max_power();
    QString get_max_voltage();
    QString get_charing();

    void set_power_battery_voltage(const QString &pbv);
    void set_power_battery_current(const QString &pbc);
    void set_soc(const QString &soc);
    void set_bms_state(const QString &bms);
    void set_max_current(const QString &mc);
    void set_max_power(const QString &mp);
    void set_max_voltage(const QString &mv);
    void set_charing(const QString &charing);


    //zc
    QString get_enigne_total_hours();
    void set_enigne_total_hours(const QString &eth);


private:
    //weight
    QString real_time_weight;
    QString ban_weight;
    QString ban_total_times;
    QString total_times;
    QString total_weight;
    //index
    QString power;
    QString speedup_percent;
    QString slowdown_percent;
    QString bus_voltage;
    QString isg_power;
    QString tm_power;
    //driver_power
    QString direct_current;
    QString real_torque;
    QString real_rev;
    QString em_control_input;
    QString driver_mc_control;
    QString driver_temper;
    QString work_mode;
    QString running_state;
    QString falut_state;
    QString mc_direction;


    //enigne
    QString enigen_rev;
      //temperature
    QString enigen_water_temper;
     //pressure
    QString enigen_oli_pressure;


    //isg_power
    QString isg_mc_control;
    QString isg_direct_current;
    QString isg_real_torque;
    QString isg_real_rev;
    QString isg_control_input;
    QString isg_driver_temper;
    QString isg_work_mode;
    QString isg_running_state;
    QString isg_falut_state;
    QString isg_mc_direction;
    //liquid
    QString hydraulic;
    QString cooling;
    //power
    QString power_battery_voltage;
    QString power_battery_current;
    QString soc;
    QString bms_state;
    QString max_current;
    QString max_power;
    QString max_voltage;
    QString charing;
    //zc
    QString enigne_total_hours;


};

#endif // READDATA_H
