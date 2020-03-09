#include "auto_brightness.h"

#define autobri_mesg 0

Auto_brightness::Auto_brightness(QObject *parent) :
    QThread(parent)
{

}
void Auto_brightness::run()
{
#if autobri_mesg == 1
    emit log("-----auto_brightness start-----");
#endif
    setbacklight(7);
    while(1){
        msleep(1000);
        fs = open("/sys/bus/iio/devices/iio:device0/in_illuminance_input",O_RDONLY|O_NONBLOCK);
        ret =  read(fs,&bright_now,32);
#if autobri_mesg == 1
        emit log("read bright now:"+QString::number(ret));
#endif
        if(ret == -1) emit log("errno:"+QString::number(errno));
#if autobri_mesg == 1
        emit log(QString("%1").arg(bright_now));
#endif
        close(fs);

        bright = (QString("%1").arg(bright_now)).toFloat();
        if(bright == -1)
        {
#if autobri_mesg == 1
            emit log("auto bright error");
#endif
            if(status)
                setbacklight(7);
        }
        if(bright>10)
        {
#if autobri_mesg == 1
            emit log("high");
#endif
            if(status)
                setbacklight(7);
        }


//        if((bright>10) && (bright<200))
//        {
//#if autobri_mesg == 1
//            emit log("middle");
//#endif
//            if(status)
//                setbacklight(5);
//        }
        if(bright <= 10 && bright != -1)
        {
#if autobri_mesg == 1
            emit log("low");
#endif
            if(status)
                setbacklight(5);
        }



        last_bright = bright;
    }
}


void Auto_brightness::setbacklight(int v)
{
    fd = open("/sys/class/backlight/backlight/brightness",O_RDWR|O_NONBLOCK);
    char buf[20];
    sprintf(buf,"%d",v);
    write(fd,buf,sizeof(buf));
    close(fd);
#if autobri_mesg == 1
    emit log("auto_brightness set");
#endif
}

void Auto_brightness::set_auto_status(bool state)
{
    status = state;
}
void Auto_brightness::init()
{
#if autobri_mesg == 1
    emit log("auto_bright");
#endif
    //    falling_value = "100";
    //    rising_value = "55000";
    //    enable = "1";
    //    disable = "0";


    //    fd_device0 = open("/dev/iio:device0",O_RDWR|O_NONBLOCK);
    //    emit log("fd_device0:"+QString::number(fd_device0));
    //    ret = ioctl(fd_device0,IIO_GET_EVENT_FD_IOCTL,&fd);
    //    emit log("fd:"+QString::number(fd)+"  ret:"+QString::number(ret));
    //    fd_falling_value = open("/sys/bus/iio/devices/iio:device0/events/in_illuminance_thresh_falling_value",O_RDWR|O_NONBLOCK);
    //    emit log("fd_falling_v:"+QString::number(fd_falling_value));
    //    fd_rising_value = open("/sys/bus/iio/devices/iio:device0/events/in_illuminance_thresh_rising_value",O_RDWR|O_NONBLOCK);
    //    emit log("fd_rising_v:"+QString::number(fd_rising_value));
    //    ret = write(fd_falling_value,falling_value,strlen(falling_value));
    //    emit log("write falling value:"+QString::number(ret));
    //    if (ret == -1) emit log("errno:"+QString::number(errno));
    //    ret = write(fd_rising_value,rising_value,strlen(rising_value));
    //    emit log("write rising value:"+QString::number(ret));
    //    if (ret == -1) emit log("errno:"+QString::number(errno));
    //    close(fd_falling_value);
    //    close(fd_rising_value);

    //    fd_falling_en = open("/sys/bus/iio/devices/iio:device0/events/in_illuminance_thresh_falling_en",O_RDWR|O_NONBLOCK);
    //    fd_rising_en = open("/sys/bus/iio/devices/iio:device0/events/in_illuminance_thresh_rising_en",O_RDWR|O_NONBLOCK);
    //    write(fd_falling_en,enable,strlen(enable));
    //    write(fd_rising_en,enable,strlen(enable));
    //    close(fd_rising_en);
    //    close(fd_falling_en);



}
