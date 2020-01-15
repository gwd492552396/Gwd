#ifndef MYTIMER_H
#define MYTIMER_H


#include <QObject>
#include <QtGlobal>
#include <QTime>
#include <QDateTime>
#include "readdata.h"
#include <QThread>
#include <QList>
#include <stdlib.h>
#include <string.h>
#include <database_7in.h>
#include <unistd.h>
#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <linux/can.h>
#include <linux/can/raw.h>
#include "messagewidget.h"
#include<QByteArray>



class MyTimer : public QThread
{
    Q_OBJECT
public:
    explicit MyTimer(QObject *parent = 0);
    void init_can(int can_No);
//    MyTimer(ReadData *r):rd(r)
//    {


//    }

protected:
    void run(); //线程执行函数
private:
//    ReadData *rd;
    QList<QString> *cache;
    int s;
    int ifinclude(QString str);
    struct sockaddr_can addr;
    struct ifreq ifr;
    struct can_frame frame;
    Database_7in *db;




signals:
    void warning_insert(const QString &time, const QString &type,const QString &name);
    void error_insert(const QString &time, const QString &type,const QString &name);
    void delete_row(const QString &key);
    //weight
    void real_time_weight(const QString &rtw);
    void ban_weight(const QString &bw);
    void total_weight(const QString &tw);
    void total_times(const QString &tt);
    void ban_total_times(const QString &btt);
    //index
    void power_change(const QString &p);
    void speedup_percent(const QString &sp);
    void slowdown_percent(const QString &sd);
    void battety_vol(const QString &bv);
    void gear_rate(const QString &ip);
    void enging_rev(const QString &tp);
    //driver_power
    void direct_current(const QString &dc);
    void real_torque(const QString &torque);
    void real_rev(const QString &rev);
    void em_control_input(const QString &emc);
    void driver_mc_control(const QString &dmc);
    void driver_temper(const QString &dt);
    void work_mode(const QString &wm );
    void running_state(const QString &rs);
    void falut_state(const QString &fs);
    void mc_direction(const QString &mcd);
    //enigne
    //pressure
    void enigen_oli_pressure(const QString &eop);
    void gearbox_pressure(const QString &gbp);
    void brake_front(const QString &bf);
    void brake_back(const QString &bb);
    //temperature
    void enigen_rev(const QString &rev);
    void enigen_water_temper(const QString &ewt);

    //gearbox
    void gearbox_temper(QString);
    void gearbox_in_rev(QString);
    void gearbox_out_rev(QString);

    //isgpower
    void isg_mc_control(const QString &imc);
    void isg_direct_current(const QString &dc);
    void isg_real_torque(const QString &torque);
    void isg_real_rev(const QString &rev);
    void isg_control_input(const QString &emc);
    void isg_driver_temper(const QString &dt);
    void isg_work_mode(const QString &wm );
    void isg_running_state(const QString &rs);
    void isg_falut_state(const QString &fs);
    void isg_mc_direction(const QString &mcd);

    //liquid
    void hydraulic(const QString &hydraulic);
    void cooling(const QString &cooling);

    //power
    void power_battery_voltage(const QString &pbv);
    void power_battery_current(const QString &pbc);
    void soc(const QString &soc);
    void bms_state(const QString &bms);
    void max_current(const QString &mc);
    void max_power(const QString &mp);
    void max_voltage(const QString &mv);
    void charing(const QString &charing);


    //zc
    void enigne_total_hours(const QString &eth);


    void log(QString);



};

#endif // MYTIMER_H
