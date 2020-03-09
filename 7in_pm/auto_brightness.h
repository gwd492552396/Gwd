#ifndef AUTO_BRIGHTNESS_H
#define AUTO_BRIGHTNESS_H

#include <QThread>
#include <QFile>
#include <QString>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <linux/iio/events.h>
#include <QByteArray>
#include <QString>
#include "serial_port.h"




class Auto_brightness : public QThread
{
    Q_OBJECT
public:
    explicit Auto_brightness(QObject *parent = 0);
    void init();
protected:
    void run(); //线程执行函数
signals:
    void log(QString);
    void set_bright(int);
public slots:
    void  set_auto_status(bool state);


private:
    void setbacklight(int v);
    int fd_device0;
    int fd;
    int fs;
    int fd_falling_value;
    int fd_rising_value;
    int fd_falling_en;
    int fd_rising_en;
    char *falling_value;
    char *rising_value;
    QByteArray *buff;
    char  bright_now[32];
    int ret;
    float bright;
    int count;
    float last_bright;
    bool status = true;


};

#endif // AUTO_BRIGHTNESS_H
