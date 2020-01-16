#ifndef VIDEO_H
#define VIDEO_H

#include <QWidget>
#include <QCamera>
#include <QCameraViewfinder>
#include "receiver.h"
#include "serial_port.h"
#include <QString>
#include <QThread>
#include <QThreadPool>
#include <QImage>
#include <QPixmap>
#include <QTime>
#include <QTimer>
#include <QPainter>

namespace Ui {
class Video;
}

class Video : public QWidget
{
    Q_OBJECT


public:
    explicit Video(QWidget *parent = 0);
    ~Video();

    void start();

    //   void  showEvent(QShowEvent* event);
    //   void  hideEvent(QHideEvent *event);
signals:
    void back_home(int);
    void previous(int);
    void log(QString);
private slots:
    //    void on_btn_backhome_clicked();

    //    void on_btn_back_clicked();

    void ReceiveImage(QImage);

    //    void ReceiveImage(unsigned char* rgb,int width ,int height);

private:
    Ui::Video *ui;
    QCamera *camera;
    QCameraViewfinder *cameraviewfinder;
    receiver *rec;
    Serial_port *serial;
    QImage image;
    QTimer *timer3;
};

#endif // VIDEO_H
