#ifndef RECEIVER_H
#define RECEIVER_H

#include <QThread>
#include<QString>
#include"serial_port.h"
#include<QTime>
#include"stdio.h"
#include <QImage>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/mman.h>
#include <linux/videodev2.h>

class receiver : public QThread
{
    Q_OBJECT
public:
    explicit receiver(QObject *parent = 0);
    ~receiver();
protected:
    void run();

signals:
      void log(QString);
//      void SendImage(QImage);
      void SendImage(QImage);
      void receiver_stop();
public:
      void stream_on();
      void stream_off();
      void init_video();
      bool stop = false;

public slots:

private:


    Serial_port *serial_port;
    int err11, err19;
    int ret;
    int fd;
    int yuyv_2_rgb888(void);
    int convert_yuv_to_rgb_pixel(int y, int u, int v);
    int convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height);


    struct v4l2_capability *cap;
    struct v4l2_fmtdesc *fmtdesc;
    struct v4l2_format *fmt;
    struct v4l2_requestbuffers *req;
    unsigned char *rgb24 ;
    QImage img;
    v4l2_std_id std;
    struct v4l2_input *input;
    struct v4l2_streamparm  *setfps;
    enum v4l2_buf_type type;
    int width = 720;
    int height = 576;
    int  I420ToRGBA(const unsigned char * src, int width, int height,unsigned char* rgb);
    int rt;
    struct v4l2_buffer *buf;
    struct v4l2_crop *crop;
    struct buffer
    {
        void * start;
        unsigned int length;
    } * buffers;


};

#endif // RECEIVER_H
