#include "auto_brightness.h"

Auto_brightness::Auto_brightness(QObject *parent) :
    QThread(parent)
{

}
void Auto_brightness::run()
{
    emit log("-----auto_brightness start-----");
    setbacklight(5);
    while(1){
        msleep(1000);
        fs = open("/sys/bus/iio/devices/iio:device0/in_illuminance_input",O_RDONLY|O_NONBLOCK);
        ret =  read(fs,&bright_now,32);
        emit log("read bright now:"+QString::number(ret));
        if(ret == -1) emit log("errno:"+QString::number(errno));
        emit log(QString("%1").arg(bright_now));
        close(fs);

        bright = (QString("%1").arg(bright_now)).toFloat();
        if(bright == -1)
        {
            emit log("auto bright error");
            if(status)
            setbacklight(5);
        }
        if(bright>200)
        {
            emit log("high");
            if(status)
            setbacklight(7);
        }


        if((bright>20) && (bright<200))
        {
            emit log("middle");
            if(status)
            setbacklight(5);
        }
        if(bright<20 && bright != -1)
        {
            emit log("low");
            if(status)
            setbacklight(2);
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
    emit log("auto_brightness set");
}

void Auto_brightness::set_auto_status(bool state)
{
    status = state;
}
void Auto_brightness::init()
{

    emit log("auto_bright");
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
