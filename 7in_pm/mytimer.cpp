#include "mytimer.h"
#include <QString>

#define command0 "/sbin/ip link set can0 type can bitrate 250000"
#define up0 "ifconfig can0 up"//打开CAN1
#define down0 "ifconfig can0 down"//关闭CAN1

#define command1 "/sbin/ip link set can1 type can bitrate 250000"
#define up1 "ifconfig can1 up"//打开CAN1
#define down1 "ifconfig can1 down"//关闭CAN1

#define can_test 0


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

    emit speedup_percent("---");
    emit slowdown_percent("---");
    emit battety_vol("---");
    emit enging_rev("---");
    emit enigne_total_hours("---");
    emit enigen_oli_pressure("---");
    emit hydraulic(QString::number(100));
    emit cooling(QString::number(100));
    emit enigen_water_temper("---");
    emit gearbox_temper("---");
    emit gearbox_pressure("---");
    emit gearbox_out_rev("---");
    emit gearbox_in_rev("---");
    emit real_time_weight("---");
    emit rated_weight("---");
    emit ban_total_times("---");
    emit total_times("---");
    emit gear_rate("---");

    while(1)
    {
        read(s, &frame, sizeof(frame));//接收总线上的报文保存在frame中
        QString s0;
        bool ok;
#if can_test == 1
        emit log("ID:"+QString::number(frame.can_id & 0x7fffffff,16));        //log the id
#endif
        for(int i = 0;i<8;i++)
        {
            QString str = QString("%1").arg(frame.data[i]&0xFF,8,2,QLatin1Char('0'));
            //QString str = QString("%1").arg(frame.data[i],8,2,QLatin1Char('0'));
            hex = hex.append(QString::number(str.toUInt(&ok,2),16));
            s0 += str;
        }
#if can_test == 1
        emit log("Data(Bin):"+s0);               //log the message   s0 is the data
        emit log("Data(Hex):"+hex);
        emit log("");
#endif
        hex = "" ;

        QString s3 = "BMS电池故障";
        QString s4 = "BMS电池报警";
        QString s5 = "ISG电机故障";
        switch(frame.can_id &CAN_EFF_MASK)
        {
        case 0x1818d0f3:
        {

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
                    emit error_insert("123","456","789");
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

        case 0x0CFFF821:                          //加速踏板百分比、缓行踏板百分比
        {
            temp = (frame.data[0])*0.2;
            if (temp > 0 && temp < 100)
            {
                emit speedup_percent(QString::number(temp));
            }
            else emit speedup_percent("---");

            temp = (frame.data[1])*0.2;
            if (temp > 0 && temp < 100)
            {
                emit slowdown_percent(QString::number(temp));
            }
            else emit slowdown_percent("---");
            break;
        }
        case 0X18FD0321:                       //电池电压
        {
            temp = (frame.data[0] + ( frame.data[1] << 8 ))*0.05;
            if (temp > 0 && temp < 50)
            {
                emit battety_vol(QString::number(temp));
            }
            else emit battety_vol("---");
            break;
        }
        case 0x0CF00400:                       //发动机转数
        {
            temp = (frame.data[3] + ( frame.data[4] << 8 ))* 0.125;
            if (temp > 0 && temp < 5000)
            {
                emit enging_rev(QString::number(temp));
            }
            else emit enging_rev("---");
            break;

        }
        case 0x18FEE500:                       //发动机工作小时数
        {
            float time = (frame.data[0] + (frame.data[1] << 8) + (frame.data[2] << 16) + (frame.data[3] << 24))*0.05;
            temp = (frame.data[0] + (frame.data[1] << 8) + (frame.data[2] << 16) + (frame.data[3] << 24))*0.05;
            time = time - temp;
            int time1 = time * 60;
            if (temp > 0 && temp < 210554060)
            {
                emit enigne_total_hours(QString::number(temp)+"h"+QString::number(time1)+"min");
            }
            else emit enigne_total_hours("---");
            break;
        }
        case 0x18FEEF00:                    //发动机液压力
        {
            temp = ( frame.data[3] ) * 4 ;
            if (temp > 0 && temp < 1000)
            {
                emit enigen_oli_pressure(QString::number(temp));
            }
            else emit enigen_oli_pressure("---");
            break;
        }

        case 0X18FC0090:                                     //称重系统
        {
            temp = (frame.data[2] + ( frame.data[3] << 8 ))*0.01;
            if (temp > 0 && temp < 642)
            {
                emit real_time_weight(QString::number(temp));
            }
            else emit real_time_weight("---");

            temp = (frame.data[0] + ( frame.data[1] << 8 ))*0.01;
            if (temp > 0 && temp < 642)
            {
                emit rated_weight(QString::number(temp));
            }
            else emit rated_weight("---");

            temp = (frame.data[4] + ( frame.data[5] << 8 ))*1;
            if (temp > 0 && temp < 65535)
            {
                emit ban_total_times(QString::number(temp));
            }
            else emit ban_total_times("---");

            temp = (frame.data[6] + ( frame.data[7] << 8 ))*1;
            if (temp > 0 && temp < 65535)
            {
                emit total_times(QString::number(temp));
            }
            else emit total_times("---");

            break;
        }


        case 0X18FD0121:
        {
            temp = frame.data[2] & 0x01;                  //液压油位低
            if (temp == 1)
                emit hydraulic(QString::number(8));
            else
                emit hydraulic(QString::number(100));

            temp = frame.data[3] & 0x10;                //冷却液位低
            temp = temp >> 4;
            if (temp == 1)
                emit cooling(QString::number(8));
            else
                emit cooling(QString::number(100));
            break;
        }
        case 0x18FEEE00:                             //冷却液温度
        {
            temp = (frame.data[0]) - 40 ;
            if (temp > -40 && temp < 210)
            {
                emit enigen_water_temper(QString::number(temp));
            }
            else emit enigen_water_temper("---");

            break;
        }
        case 0x18FEF803:                    //传动箱油温
        {
            temp = (frame.data[4] + (frame.data[5] << 8))*0.03125 - 273;
            if (temp > -273 && temp < 1735)
            {
                emit gearbox_temper(QString::number(temp));
            }
            else emit gearbox_temper("---");


            temp = (frame.data[3]) *16;                 //传输油液压力
            if (temp > 0 && temp < 4000)
            {
                emit gearbox_pressure(QString::number(temp));
            }
            else emit gearbox_pressure("---");
            break;
        }
        case 0x0CF00203:
        {
            temp = (frame.data[1] + ( frame.data[2] << 8 ))* 0.125;    //输出轴速度
            if (temp > 0 && temp < 8031)
            {
                emit gearbox_out_rev(QString::number(temp));
            }
            else emit gearbox_out_rev("---");

            temp = (frame.data[5] + ( frame.data[6] << 8 ))* 0.125;    //输入轴速度
            if (temp > 0 && temp < 8031)
            {
                emit gearbox_in_rev(QString::number(temp));
            }
            else emit gearbox_in_rev("---");
        }
          case 0x18F00503:
        {
            temp = (frame.data[1] + ( frame.data[2] << 8 ))* 0.1;    //变速箱变比
            if (temp > 0 && temp < 6425)
            {
                emit gearbox_out_rev(QString::number(temp/100));
            }
            else emit gearbox_out_rev("---");
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
//
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





