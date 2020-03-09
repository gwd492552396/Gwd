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
#include <linux/mxcfb.h>


#define ipu_fourcc(a,b,c,d)\
    (((__u32)(a)<<0)|((__u32)(b)<<8)|((__u32)(c)<<16)|((__u32)(d)<<24))

#define IPU_PIX_FMT_RGB332  ipu_fourcc('R','G','B','1') /*!<  8  RGB-3-3-2     */
#define IPU_PIX_FMT_RGB555  ipu_fourcc('R','G','B','O') /*!< 16  RGB-5-5-5     */
#define IPU_PIX_FMT_RGB565  ipu_fourcc('R','G','B','P') /*!< 16  RGB-5-6-5     */
#define IPU_PIX_FMT_RGB666  ipu_fourcc('R','G','B','6') /*!< 18  RGB-6-6-6     */
#define IPU_PIX_FMT_BGR24   ipu_fourcc('B','G','R','3') /*!< 24  BGR-8-8-8     */
#define IPU_PIX_FMT_RGB24   ipu_fourcc('R','G','B','3') /*!< 24  RGB-8-8-8     */
#define IPU_PIX_FMT_BGR32   ipu_fourcc('B','G','R','4') /*!< 32  BGR-8-8-8-8   */
#define IPU_PIX_FMT_BGRA32  ipu_fourcc('B','G','R','A') /*!< 32  BGR-8-8-8-8   */
#define IPU_PIX_FMT_RGB32   ipu_fourcc('R','G','B','4') /*!< 32  RGB-8-8-8-8   */
#define IPU_PIX_FMT_RGBA32  ipu_fourcc('R','G','B','A') /*!< 32  RGB-8-8-8-8   */
#define IPU_PIX_FMT_ABGR32  ipu_fourcc('A','B','G','R') /*!< 32  ABGR-8-8-8-8  */

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
    void SendImage(QImage);
    //      void SendImage(unsigned char*,int,int);
    void receiver_stop();
public:
    //      void stream_on();
    //      void stream_off();
    //  void init_video_capture();
    void init_video_overlay();

    void video_start();
    void video_stop();

    bool stop = false;

public slots:

private:


    Serial_port *serial_port;
    int err11, err19;
    int ret;
    int fd_capture_v4l;
    int fd_output_v4l;
    int fd_fb;


    struct v4l2_capability *cap;
    //    struct v4l2_fmtdesc *fmtdesc;
    struct v4l2_fmtdesc ffmt;
    struct v4l2_format fmt;
    struct v4l2_requestbuffers *req,*req_out;
    unsigned char *rgb24 ;
    QImage img;
    v4l2_std_id id;
    struct v4l2_input *input;
    struct v4l2_streamparm parm;
    enum v4l2_buf_type type;
    int width = 720;
    int height = 576;
    int rt;
    struct v4l2_buffer *buf,*output_buf;
    struct v4l2_crop crop;
    struct v4l2_cropcap *cropcap;
    struct v4l2_framebuffer fb_v4l2;
    struct v4l2_control ctl;
    struct mxcfb_gbl_alpha g_alpha;
    struct mxcfb_loc_alpha l_alpha;

    struct v4l2_dbg_chip_ident chip;
    int g_output = 3;
    int g_frame_size ;
    struct buffer
    {
        void * start;
        unsigned int length;
    } * buffers,*buffers_out;

    struct v4l2_frmsizeenum fsize;
    struct mxcfb_color_key color_key;


    int fd_v4l = 0;
    int g_sensor_width = 720;
    int g_sensor_height = 576;
    int g_sensor_top = 0;
    int g_sensor_left = 0;
    int g_display_width = 720;
    int g_display_height = 576;
    int g_display_top = 150;
    int g_display_left = 300;
    int g_rotate = 0;
    int g_timeout = 3600;
    int g_display_lcd = 0;
    int g_overlay = 0;
    int g_camera_color = 0;
    int g_camera_framerate = 30;
    int g_capture_mode = 0;
    int g_alpha_mode = 0;
    char *alpha_buf0 = NULL;
    char *alpha_buf1 = NULL;

    unsigned long loc_alpha_phy_addr0;
    unsigned long loc_alpha_phy_addr1;
    int alpha_buf_size = 0;
    int ctrl_c_rev = 0;
    int g_fd_fb_fg = 0;

    int fd_fb_0 = 0;

    struct fb_fix_screeninfo fb0_fix, fb_fg_fix;
    struct fb_var_screeninfo fb0_var, fb_fg_var;


};

#endif // RECEIVER_H
