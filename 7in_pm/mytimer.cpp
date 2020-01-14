#include "mytimer.h"
#include <QString>

#define command0 "/sbin/ip link set can0 type can bitrate 250000"
#define up0 "ifconfig can0 up"//打开CAN1
#define down0 "ifconfig can0 down"//关闭CAN1

#define command1 "/sbin/ip link set can1 type can bitrate 250000"
#define up1 "ifconfig can1 up"//打开CAN1
#define down1 "ifconfig can1 down"//关闭CAN1


MyTimer::MyTimer(QObject *parent) : QThread(parent)
{

}

int MyTimer::ifinclude(QString str)                //返回所在行数
{
    for(int i = 0;i<cache->size();i++)
    {
        if(cache->at(i).contains(str))
            return i;
    }
    return -1;
}

void MyTimer::init_can(int can_No)
{
    switch (can_No) {
    case 0:
        system(down0);
        system(command0);
        system(up0);//上面三行关闭CAN设备，设置波特率后，重新打开CAN设备
        s = socket(PF_CAN, SOCK_RAW, CAN_RAW);//创建套接字
        strcpy(ifr.ifr_name, "can0");
        ioctl(s, SIOCGIFINDEX, &ifr); //指定 can 设备
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        bind(s, (struct sockaddr *)&addr, sizeof(addr));//将套接字与 can 绑定
        break;
    case 1:
        system(down1);
        system(command1);
        system(up1);//上面三行关闭CAN设备，设置波特率后，重新打开CAN设备
        s = socket(PF_CAN, SOCK_RAW, CAN_RAW);//创建套接字
        strcpy(ifr.ifr_name, "can1");
        ioctl(s, SIOCGIFINDEX, &ifr); //指定 can 设备
        addr.can_family = AF_CAN;
        addr.can_ifindex = ifr.ifr_ifindex;
        bind(s, (struct sockaddr *)&addr, sizeof(addr));//将套接字与 can 绑定

        break;
    default:
        break;
    }


}

void MyTimer::run()
{
    Database_7in *db = new Database_7in();
    cache = new QList<QString>;
    while(1)
    {
        read(s, &frame, sizeof(frame));//接收总线上的报文保存在frame中
        QString s0;
        bool ok;
        emit log("ID:"+QString::number(frame.can_id & 0x7fffffff,16));        //log the id
        emit log("Data(Hex):");
        for(int i = 0;i<8;i++)
        {
            QString str = QString("%1").arg(frame.data[i]&0xFF,8,2,QLatin1Char('0'));
            //QString str = QString("%1").arg(frame.data[i],8,2,QLatin1Char('0'));
            log(QString::number(str.toUInt(&ok,2),16));
            s0 += str;
        }
        emit log("Data(Bin):"+s0);               //log the message   s0 is the data

        QString s3 = "BMS电池故障";
        QString s4 = "BMS电池报警";
        QString s5 = "ISG电机故障";
        switch(frame.can_id &CAN_EFF_MASK)
        {
        case 0x1818d0f3:
        {

            emit log("section 1");
            //                rd->set_power_battery_voltage(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)*0.1));
            //                rd->set_power_battery_current(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.1-1000));
            //                rd->set_soc(QString::number(QString::number(s0.mid(32,8).toInt(&ok,2)).toInt(&ok,10)*0.4));
            emit power_battery_voltage(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)*0.1));
            emit power_battery_current(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.1-1000));
            emit soc(QString::number(QString::number(s0.mid(32,8).toInt(&ok,2)).toInt(&ok,10)*0.4));
            QString s2 = "111";
            QDateTime time;
            QString s1 = time.currentDateTime().toString("MM-dd hh:mm");
            if(s0.mid(52,4) == "0000" || s0.mid(52,4) == "0001"){
                int i = ifinclude(s2);
                if(i!=-1)
                {

                    emit delete_row(cache->at(i));
                    cache->removeAt(i);
                }

            }
            else{
                QString ss;
                if(s0.mid(52,4) == "0010")
                {
                    ss = s2 + "轻微故障";
                }
                else if (s0.mid(52,4) == "0011")
                    ss = s2 + "一般故障";
                else if (s0.mid(52,4) == "0100")
                    ss = s2 +"严重故障";
                else if (s0.mid(52,4) == "0101")
                    ss = s2 + "致命故障";
                if(!cache->contains(ss) && ss !="")
                {
                    int i = ifinclude(s2);
                    if(i != -1)
                    {
                      emit delete_row(cache->at(i));
                      cache->removeAt(i);
                    }
                    cache->append(ss);
                    emit error_insert(s1,ss,s3);
                    db->inserterror(s1,ss,s3);
                }
            }
            break;
        }
//        case 0x1819d0f3:{
//            emit log("section 2 \n");
//            emit log("\n");
//            break;}
//        case 0x1829d0f3:{
//            emit log("section 3 \n");
//            emit log("\n");
//            break;}
//        case 0x181ad0f3:
//        {
//            emit log("section 4 \n");
//            emit log("\n");
//            //                rd->set_max_current(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)*0.1));
//            //                rd->set_max_voltage(QString::number(QString::number(s0.mid(48,16).toInt(&ok,2)).toInt(&ok,10)*0.1));
//            emit max_current(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)*0.1));
//            emit max_voltage(QString::number(QString::number(s0.mid(48,16).toInt(&ok,2)).toInt(&ok,10)*0.1));

//            break;
//        }
//        case 0x181bd0f3:
//        {

//            emit log("section 5 \n");
//            emit log("\n");
//            QDateTime time;
//            QString s1 = time.currentDateTime().toString("MM-dd hh:mm");
//            QString s2 = db->geterror("181BD0F3",46);

//            if(s0.mid(46,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",11);
//            if(s0.mid(11,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",45);
//            if(s0.mid(45,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",44);
//            if(s0.mid(44,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",43);
//            if(s0.mid(43,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",10);
//            if(s0.mid(10,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",41);
//            if(s0.mid(41,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",51);
//            if(s0.mid(51,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",50);
//            if(s0.mid(50,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",49);
//            if(s0.mid(49,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",48);
//            if(s0.mid(48,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",0);
//            if(s0.mid(0,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",1);
//            if(s0.mid(1,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",2);
//            if(s0.mid(2,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",3);
//            if(s0.mid(3,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",4);
//            if(s0.mid(4,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->geterror("181BD0F3",5);
//            if(s0.mid(5,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit error_insert(s1,s2,s3);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",6);
//            if(s0.mid(6,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",7);
//            if(s0.mid(7,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",8);
//            if(s0.mid(8,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            s2 =db->getwarnning("181BD0F3",9);
//            if(s0.mid(9,1) == "1"){
//                if(!cache->contains(s2))
//                {
//                   cache->append(s2);
//                   emit warning_insert(s1,s2,s4);
//                }
//            }
//            else{
//                if(cache->contains(s2))
//                {
//                   cache->removeOne(s2);
//                   emit delete_row(s2);
//                }
//            }
//            break;
//        }
//        case 0x18f101f4:{
//            emit log("section 6 \n");
//            emit log("\n");
//            break;}
//        case 0x18ff2bf4:{
//            emit log("section 7 \n");
//            emit log("\n");
//            break;}
//        case 0x18ff2cf4:{
//            emit log("section 8 \n");
//            emit log("\n");
//            //            rd->set_max_power(QString::number(QString::number(s0.mid(0,8).toInt(&ok,2)).toInt(&ok,10)*2));
//            emit max_power(QString::number(QString::number(s0.mid(0,8).toInt(&ok,2)).toInt(&ok,10)*2));
//            break;}
//        case 0x18ff2df4:
//        {
//            emit log("section 9 \n");
//            emit log("\n");
//            int charge = QString::number(s0.mid(32,4).toInt(&ok,2)).toInt(&ok,10);
//            int bms = QString::number(s0.mid(36,4).toInt(&ok,2)).toInt(&ok,10);
//            if(bms == 1){
//                //                    rd->set_bms_state("自检ok");
//                emit bms_state("自检ok");
//            }
//            else if(bms == 0){
//                //                    rd->set_bms_state("预留");
//                emit bms_state("预留");
//            }
//            if(charge == 0){
//                //                    rd->set_charing("未充电");
//                emit charing("未充电");
//            }else if(charge == 1)
//            {
//                //                    rd->set_charing("充电中");
//                emit charing("充电中");
//            }else if(charge == 2)
//            {
//                //                    rd->set_charing("结束充电");
//                emit charing("结束充电");
//            }else if(charge ==3)
//            {
//                //                    rd->set_charing("禁止充电");
//                emit charing("禁止充电");
//            }
//            break;
//        }
//        case 0x0cff00d1:
//        {
//            emit log("section 10 \n");
//            emit log("\n");
//            //                rd->set_real_torque(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)-3200));
//            //                rd->set_real_rev(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.125-4000));
//            //                rd->set_direct_current(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.05-1600));
//            emit real_torque(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)-3200));
//            emit real_rev(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.125-4000));
//            emit direct_current(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.05-1600));

//            QString state = s0.mid(48,2);
//            QString mode = s0.mid(50,2);
//            QString direction = s0.mid(52,2);
//            QString fault = s0.mid(54,2);

//            if(state == "00"){
//                //                    rd->set_running_state("停机");
//                emit running_state("停机");
//            }else if(state == "01"){
//                //                    rd->set_running_state("运行");
//                emit running_state("运行");
//            }

//            if(mode == "01"){
//                //                    rd->set_work_mode("驱动");
//                emit work_mode("驱动");
//            }else if(mode == "10"){
//                //                    rd->set_work_mode("制动/发电");
//                emit work_mode("制动/发电");
//            }

//            if(direction == "01"){
//                //                    rd->set_mc_direction("正转");
//                emit mc_direction("正转");
//            }else if(direction == "10"){
//                //                    rd->set_mc_direction("反转");
//                emit mc_direction("反转");
//            }

//            if(fault == "01"){
//                //                     rd->set_falut_state("正常");
//                emit falut_state("正常");
//            }else if(fault == "10"){
//                //                     rd->set_falut_state("故障");
//                emit falut_state("故障");
//            }

//            break;
//        }
//        case 0x0cff01d1:
//        {
//            emit log("section 11 \n");
//            emit log("\n");
//                //            rd->set_driver_temper(QString::number(QString::number(s0.mid(16,8).toInt(&ok,2)).toInt(&ok,10)-40));
//                //            rd->set_driver_mc_control(QString::number(QString::number(s0.mid(24,8).toInt(&ok,2)).toInt(&ok,10)-40));
//                //            rd->set_em_control_input(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.015));
//                emit driver_temper(QString::number(QString::number(s0.mid(16,8).toInt(&ok,2)).toInt(&ok,10)-40));
//                emit driver_mc_control(QString::number(QString::number(s0.mid(24,8).toInt(&ok,2)).toInt(&ok,10)-40));
//                emit em_control_input(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.015));
//        }
//        case 0x0cff02d1:
//        {
//            emit log("section 12 \n");
//            emit log("\n");
//            QString s2 = db->geterror("0CFF02D1",8);
//            QDateTime time;
//            QString s1 = time.currentDateTime().toString("MM-dd hh:mm");
//            if(s0.mid(8,16) == "0000000000000000"){
//                int i = ifinclude(s2);
//                if(i!=-1)
//                {

//                    emit delete_row(cache->at(i));
//                    cache->removeAt(i);
//                }

//            }
//            else{
//                QString ss;
//                if(s0.mid(8,16) == "0000000000000001")
//                {
//                    ss = s2 + "预冲故障";
//                }
//                else if (s0.mid(8,16) == "0000000000000010")
//                    ss = s2 + "主接触器故障";
//                else if (s0.mid(8,16) == "0000000000000100")
//                    ss = s2 +"IGBT故障";
//                else if (s0.mid(8,16) == "0000000000001000")
//                    ss = s2 + "过流故障";
//                else if (s0.mid(8,16) == "0000000000010000")
//                    ss = s2 + "一般过温";
//                else if (s0.mid(8,16) == "0000000000100000")
//                    ss = s2 + "严重过温";
//                else if (s0.mid(8,16) == "0000000001000000")
//                    ss = s2 + "一般过压";
//                else if (s0.mid(8,16) == "0000000010000000")
//                    ss = s2 + "严重过压";
//                else if (s0.mid(8,16) == "0000000100000000")
//                    ss = s2 + "一般欠压";
//                else if (s0.mid(8,16) == "0000001000000000")
//                    ss = s2 + "严重欠压";
//                else if (s0.mid(8,16) == "0000010000000000")
//                    ss = s2 + "一般堵转";
//                else if (s0.mid(8,16) == "0000100000000000")
//                    ss = s2 + "严重堵转";
//                else if (s0.mid(8,16) == "0001000000000000")
//                    ss = s2 + "超速故障";
//                else if (s0.mid(8,16) == "0010000000000000")
//                    ss = s2 + "点火信号故障";
//                else if (s0.mid(8,16) == "0100000000000000")
//                    ss = s2 + "低压电源电压低";
//                else if (s0.mid(8,16) == "1000000000000000")
//                    ss = s2 + "总线故障";
//                if(!cache->contains(ss))
//                {
//                    int i = ifinclude(s2);
//                    if(i != -1)
//                    {

//                      emit delete_row(cache->at(i));
//                        cache->removeAt(i);
//                    }
//                    cache->append(ss);
//                    emit error_insert(s1,ss,s5);
//                }
//            }


//            QString s = db->geterror("0CFF02D1",24);
//            if(s0.mid(24,16) == "0000000000000000"){
//                int i = ifinclude(s);
//                if(i!=-1)
//                {

//                    emit delete_row(cache->at(i));
//                    cache->removeAt(i);
//                }

//            }
//            else{
//                QString ss;
//                if(s0.mid(24,16) == "0000000000000001")
//                {
//                    ss = s + "中电电压故障";
//                }
//                else if (s0.mid(24,16) == "0000000000000010")
//                    ss = s + "旋变角度故障";
//                else if (s0.mid(24,16) == "0000000000000100")
//                    ss = s +"旋变硬件故障";
//                else if (s0.mid(24,16) == "0000000000001000")
//                    ss = s + "电流滤波故障";
//                else if (s0.mid(24,16) == "0000000000010000")
//                    ss = s + "趋零故障";
//                else if (s0.mid(24,16) == "0000000000100000")
//                    ss = s + "IGBT温度一般异常";
//                else if (s0.mid(24,16) == "0000000001000000")
//                    ss = s + "IGBT温度严重异常";
//                else if (s0.mid(24,16) == "0000000010000000")
//                    ss = s + "W相下管IGBT故障";
//                else if (s0.mid(24,16) == "0000000100000000")
//                    ss = s + "W相上管IGBT故障";
//                else if (s0.mid(24,16) == "0000001000000000")
//                    ss = s + "V相下管IGBT故障";
//                else if (s0.mid(24,16) == "0000010000000000")
//                    ss = s + "V相上管IGBT故障";
//                else if (s0.mid(24,16) == "0000100000000000")
//                    ss = s + "U相下管IGBT故障";
//                else if (s0.mid(24,16) == "0001000000000000")
//                    ss = s + "U相上管IGBT故障";
//                else if (s0.mid(24,16) == "0010000000000000")
//                    ss = s + "自检故障";
//                else if (s0.mid(24,16) == "0100000000000000")
//                    ss = s + "电机一般过温";
//                else if (s0.mid(24,16) == "1000000000000000")
//                    ss = s + "电机严重过温故障";
//                if(!cache->contains(ss))
//                {
//                    int i = ifinclude(s);
//                    if(i != -1)
//                    {

//                        emit delete_row(cache->at(i));
//                        cache->removeAt(i);
//                    }
//                    cache->append(ss);
//                    emit error_insert(s1,ss,s5);
//                }
//            }
//            break;
//        }

//        case 0x0cff00d2:
//        {
//            emit log("section 13 \n");
//            emit log("\n");
//            //                rd->set_isg_real_torque(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)-3200));
//            //                rd->set_isg_real_rev(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.125-4000));
//            //                rd->set_isg_direct_current(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.05-1600));
//            emit isg_real_torque(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)-3200));
//            emit isg_real_rev(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.125-4000));
//            emit isg_direct_current(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.05-1600));

//            QString state = s0.mid(48,2);
//            QString mode = s0.mid(50,2);
//            QString direction = s0.mid(52,2);
//            QString fault = s0.mid(54,2);

//            if(state == "00"){
//                //                    rd->set_isg_running_state("停机");
//                emit isg_running_state("停机");
//            }else if(state == "01"){
//                //                    rd->set_isg_running_state("运行");
//                emit isg_running_state("运行");
//            }

//            if(mode == "00"){
//                //                    rd->set_isg_work_mode("驱动");
//                emit isg_work_mode("驱动");
//            }else if(mode == "10"){
//                //                    rd->set_isg_work_mode("制动/发电");
//                emit isg_work_mode("制动/发电");
//            }

//            if(direction == "00"){
//                //                    rd->set_isg_mc_direction("正转");
//                emit isg_mc_direction("正转");
//            }else if(direction == "10"){
//                //                    rd->set_isg_mc_direction("反转");
//                emit isg_mc_direction("反转");
//            }
//            if(fault == "00"){
//                //                     rd->set_isg_falut_state("正常");
//                emit isg_falut_state("正常");
//            }else if(fault == "10"){
//                emit isg_falut_state("故障");
//                //                     rd->set_isg_falut_state("故障");
//            }
//            break;
//        }
//        case 0x0cff01d2:{
//            emit log("section 14 \n");
//            emit log("\n");
//            //            rd->set_isg_driver_temper(QString::number(QString::number(s0.mid(16,8).toInt(&ok,2)).toInt(&ok,10)-40));
//            //            rd->set_isg_mc_control(QString::number(QString::number(s0.mid(24,8).toInt(&ok,2)).toInt(&ok,10)-40));
//            //            rd->set_isg_control_input(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.015));
//            emit isg_driver_temper(QString::number(QString::number(s0.mid(16,8).toInt(&ok,2)).toInt(&ok,10)-40));
//            emit isg_mc_control(QString::number(QString::number(s0.mid(24,8).toInt(&ok,2)).toInt(&ok,10)-40));
//            emit isg_control_input(QString::number(QString::number(s0.mid(32,16).toInt(&ok,2)).toInt(&ok,10)*0.015));
//            break;}
//        case 0x0cff02d2:
//            {
//            emit log("section 15 \n");
//            emit log("\n");
//            QString s2 = db->geterror("0CFF02D2",8);
//            QDateTime time;
//            QString s1 = time.currentDateTime().toString("MM-dd hh:mm");
//            if(s0.mid(8,16) == "0000000000000000"){
//                int i = ifinclude(s2);
//                if(i!=-1)
//                {

//                    emit delete_row(cache->at(i));
//                    cache->removeAt(i);
//                }

//            }
//            else{
//                QString ss;
//                if(s0.mid(8,16) == "0000000000000001")
//                    ss = s2 + "预冲故障";
//                else if (s0.mid(8,16) == "0000000000000010")
//                    ss = s2 + "主接触器故障";
//                else if (s0.mid(8,16) == "0000000000000100")
//                    ss = s2 +"IGBT故障";
//                else if (s0.mid(8,16) == "0000000000001000")
//                    ss = s2 + "过流故障";
//                else if (s0.mid(8,16) == "0000000000010000")
//                    ss = s2 + "一般过温";
//                else if (s0.mid(8,16) == "0000000000100000")
//                    ss = s2 + "严重过温";
//                else if (s0.mid(8,16) == "0000000001000000")
//                    ss = s2 + "一般过压";
//                else if (s0.mid(8,16) == "0000000010000000")
//                    ss = s2 + "严重过压";
//                else if (s0.mid(8,16) == "0000000100000000")
//                    ss = s2 + "一般欠压";
//                else if (s0.mid(8,16) == "0000001000000000")
//                    ss = s2 + "严重欠压";
//                else if (s0.mid(8,16) == "0000010000000000")
//                    ss = s2 + "一般堵转";
//                else if (s0.mid(8,16) == "0000100000000000")
//                    ss = s2 + "严重堵转";
//                else if (s0.mid(8,16) == "0001000000000000")
//                    ss = s2 + "超速故障";
//                else if (s0.mid(8,16) == "0010000000000000")
//                    ss = s2 + "点火信号故障";
//                else if (s0.mid(8,16) == "0100000000000000")
//                    ss = s2 + "低压电源电压低";
//                else if (s0.mid(8,16) == "1000000000000000")
//                    ss = s2 + "总线故障";
//                if(!cache->contains(ss))
//                {
//                    int i = ifinclude(s2);
//                    if(i != -1)
//                    {

//                        emit delete_row(cache->at(i));
//                        cache->removeAt(i);
//                    }
//                    cache->append(ss);
//                    emit error_insert(s1,ss,s5);
//                }
//            }
//            s2 = db->geterror("0CFF02D2",24);
//            if(s0.mid(24,16) == "0000000000000000"){
//                int i = ifinclude(s2);
//                if(i!=-1)
//                {

//                    emit delete_row(cache->at(i));
//                    cache->removeAt(i);
//                }

//            }
//            else{
//                QString ss;
//                if(s0.mid(24,16) == "0000000000000001")
//                {
//                    ss = s2 + "中电电压故障";
//                }
//                else if (s0.mid(24,16) == "0000000000000010")
//                    ss = s2 + "旋变角度故障";
//                else if (s0.mid(24,16) == "0000000000000100")
//                    ss = s2 +"旋变硬件故障";
//                else if (s0.mid(24,16) == "0000000000001000")
//                    ss = s2 + "电流滤波故障";
//                else if (s0.mid(24,16) == "0000000000010000")
//                    ss = s2 + "趋零故障";
//                else if (s0.mid(24,16) == "0000000000100000")
//                    ss = s2 + "IGBT温度一般异常";
//                else if (s0.mid(24,16) == "0000000001000000")
//                    ss = s2 + "IGBT温度严重异常";
//                else if (s0.mid(24,16) == "0000000010000000")
//                    ss = s2 + "W相下管IGBT故障";
//                else if (s0.mid(24,16) == "0000000100000000")
//                    ss = s2 + "W相上管IGBT故障";
//                else if (s0.mid(24,16) == "0000001000000000")
//                    ss = s2 + "V相下管IGBT故障";
//                else if (s0.mid(24,16) == "0000010000000000")
//                    ss = s2 + "V相上管IGBT故障";
//                else if (s0.mid(24,16) == "0000100000000000")
//                    ss = s2 + "U相下管IGBT故障";
//                else if (s0.mid(24,16) == "0001000000000000")
//                    ss = s2 + "U相上管IGBT故障";
//                else if (s0.mid(24,16) == "0010000000000000")
//                    ss = s2 + "自检故障";
//                else if (s0.mid(24,16) == "0100000000000000")
//                    ss = s2 + "电机一般过温";
//                else if (s0.mid(24,16) == "1000000000000000")
//                    ss = s2 + "电机严重过温故障";
//                if(!cache->contains(ss))
//                {
//                    int i = ifinclude(s2);
//                    if(i != -1)
//                    {

//                      emit delete_row(cache->at(i));
//                        cache->removeAt(i);
//                    }
//                    cache->append(ss);
//                    emit error_insert(s1,ss,s5);
//                }
//            }
//            break;
//        }
//        case 0x0cff0303:
//        {
//            emit log("section 16 \n");
//            emit log("\n");
//            break;
//        }
//        case 0x0cff0403:
//        {
//            emit log("section 17 \n");
//            emit log("\n");
//            break;
//        }
        case 0x18EA0021:
        {
            emit speedup_percent(QString::number(QString::number(s0.mid(0,8).toInt(&ok,2)).toInt(&ok,10)*0.2));
            emit slowdown_percent(QString::number(QString::number(s0.mid(8,8).toInt(&ok,2)).toInt(&ok,10)*0.2));
            break;
        }
        case 0X18FD0321:
        {
            emit battety_vol(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)));
            break;
        }
        case 0x0CF00400:
        {
            emit enging_rev(QString::number(QString::number(s0.mid(0,16).toInt(&ok,2)).toInt(&ok,10)));
            break;

        }
        case 0x18FEE500:
        {
            emit enigne_total_hours(QString::number(QString::number(s0.mid(0,32).toInt(&ok,2)).toInt(&ok,10)*0.05));
            break;
        }
        case 0x18FEEF00:
        {
            emit enigen_oli_pressure(QString::number(QString::number(s0.mid(24,8).toInt(&ok,2)).toInt(&ok,10)*4));
            break;
        }
        case 0X18FC0090:
        {
            emit real_time_weight(QString::number(QString::number(s0.mid(16,16).toInt(&ok,2)).toInt(&ok,10)*0.01));
        }
        case 0X18FD0121:
        {
            if(s0.mid(23,1) == "1")
            {
                emit hydraulic(QString::number(8));
            }
            else {
                emit hydraulic(QString::number(100));
            }
            if(s0.mid(27,1) == "1")
            {
                emit cooling(QString::number(8));
            }
            else
            {
                emit cooling(QString::number(100));
            }


        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));                  //random number for test
        int f = qrand()%10;








//        //weight
//        emit total_times(QString::number(f));
//        //    rd->set_total_times(QString::number(r_num));
//        //    rd->set_ban_total_times(QString::number(f));
//        //    rd->set_ban_weight(QString::number(f));
//        //    rd->set_real_time_weight(QString::number(f));
//        //    rd->set_total_weight(QString::number(f));

//        emit total_weight(QString::number(f));
//        emit ban_total_times(QString::number(f));
//        emit ban_weight(QString::number(f));
//        emit real_time_weight(QString::number(f));
//        //index
//        //    rd->set_speedup_percent(QString::number(f));
//        //    rd->set_slowdown_percent(QString::number(f));
//        //    rd->set_bus_voltage(QString::number(f));
//        //    rd->set_isg_power(QString::number(f));
//        //    rd->set_tm_power(QString::number(f));
//        //    rd->set_power(QString::number(f));
//       // emit speedup_percent(QString::number(f));
//       // emit slowdown_percent(QString::number(f));
//       // emit bus_voltage(QString::number(f));
//       // emit isgg_power(QString::number(f));
//       // emit tm_power(QString::number(f));
//       // emit power_change(QString::number(f));
//        //driverpower




//        //enigne
//        //pressure
//        //temperature
//        //    rd->set_enigen_rev(QString::number(f));
//        //    rd->set_enigen_oli_pressure(QString::number(f));
//        //    rd->set_enigen_water_temper(QString::number(f));
//        emit enigen_rev(QString::number(f));
//        emit enigen_oli_pressure(QString::number(f));
//        emit enigen_water_temper(QString::number(f));
//        emit gearbox_pressure(QString::number(f));
//        emit brake_back(QString::number(f));
//        emit brake_front(QString::number(f));
        //isgpower

        //liquid
        //    rd->set_hydraulic(QString::number(f));
        //    rd->set_cooling(QString::number(f));
//        emit hydraulic(QString::number(f));
//        emit cooling(QString::number(f));
        //power


       // emit log("THREAD aaa");
        //ze
        //    rd->set_enigne_total_hours(QString::number(f));
//        emit enigne_total_hours(QString::number(f));

    }
}
}
}




