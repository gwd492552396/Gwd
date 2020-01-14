#ifndef SERIAL_PORT_H
#define SERIAL_PORT_H

#include <QObject>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>
#include <QString>
class Serial_port : public QObject
{
    Q_OBJECT
public:
    explicit Serial_port(QObject *parent = 0);
    void init_Serial_port(int,int);


signals:

public slots:
     QString serial_read();
     void serial_write(QString);

private:

    QSerialPort *myCom;
    QTimer *readTimer;

};

#endif // SERIAL_PORT_H
