#include "serial_port.h"

Serial_port::Serial_port(QObject *parent) :
    QObject(parent)
{
}


void Serial_port::init_Serial_port(int port_No,int baud_rate)
{
    myCom = new QSerialPort();
    switch (port_No) {
    case 0:
        myCom->setPortName("/dev/ttymxc0");
        break;
    case 1:
        myCom->setPortName("/dev/ttymxc1");
        break;
    case 2:
        myCom->setPortName("/dev/ttymxc2");
        break;
    default:
        break;

        readTimer = new QTimer(this);
        readTimer->start(50);
        connect(readTimer,SIGNAL(timeout()),this,SLOT(serial_read()));
    }

    myCom->open(QIODevice::ReadWrite);                            //mode: read and write

    switch (baud_rate) {
    case 9600:
        myCom->setBaudRate(QSerialPort::Baud9600);                  //baud rate :9600
        break;
    case 115200:
        myCom->setBaudRate(QSerialPort::Baud115200);                  //baud rate :115200
        break;
    default:
        break;
    }

    myCom->setBaudRate(QSerialPort::Data8);                       //8bits data
    myCom->setParity(QSerialPort::NoParity);                      //no check
    myCom->setStopBits(QSerialPort::OneStop);                     //1bit stop
    myCom->setFlowControl(QSerialPort::NoFlowControl);            //no flow control

}

void Serial_port::serial_write(QString s)
{
    myCom->write("[GWD:]"+s.toLatin1()+"\r\n");
}

QString Serial_port::serial_read()
{
    QByteArray temp = myCom->readAll();
    return QString(temp);
}
