#include "receiver.h"

#define video_test 0



receiver::receiver(QObject *parent) :
    QThread(parent)
{

}

receiver::~receiver()
{
    emit receiver_stop();
}

void freergb24(void *data)
{
    free(data);
}

void receiver::run()
{
    while(!stop)
    {
        sleep(10);
    }
}
void receiver::init_video_overlay()
{
    if ((fd_v4l = open("/dev/video0",O_RDWR)) == -1)
    {
#if video_test == 1
        emit log("error to open video0 " + QString::number(errno));
#endif
    }
#if video_test == 1
    emit log(QString::number(fd_v4l)+"is the fd");
#endif

    memset(&chip,0,sizeof(chip));
    if (ioctl(fd_v4l, VIDIOC_DBG_G_CHIP_IDENT, &chip))
    {
#if video_test == 1
        emit log("VIDIOC_DBG_G_CHIP_IDENT failed.");
#endif
    }
#if video_test == 1
    emit log("sensor chip is " + QString(chip.match.name));
#endif


    if ((fd_fb_0 = open("/dev/fb0", O_RDWR )) < 0)	{
#if video_test == 1
        emit log ("Unable to open frame buffer 0");
#endif
    }

    /*取得屏幕相关参数*/
    if (ioctl(fd_fb_0, FBIOGET_VSCREENINFO, &fb0_var) < 0) {
        close(fd_fb_0);
    }

    if (ioctl(fd_fb_0, FBIOGET_FSCREENINFO, &fb0_fix) < 0) {
        close(fd_fb_0);
    }

    if (ioctl(fd_v4l, VIDIOC_S_OUTPUT, &g_display_lcd) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_S_OUTPUT failed " + QString::number(errno));
#endif
    }


    memset(&fsize,0,sizeof(fsize));
    fsize.index = g_capture_mode;
    if (ioctl(fd_v4l, VIDIOC_ENUM_FRAMESIZES, &fsize) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_ENUM_FRAMESIZES failed " + QString::number(errno));
#endif
    }
#if video_test == 1
    emit log("sensor frame size is "+QString::number(fsize.discrete.width)+","+QString::number(fsize.discrete.height));
#endif


    memset(&ffmt,0,sizeof(ffmt));
    ffmt.index = g_capture_mode;
    if (ioctl(fd_v4l, VIDIOC_ENUM_FMT, &ffmt) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_ENUM_FMT failed " + QString::number(errno));
#endif
    }
    if (ffmt.pixelformat == V4L2_PIX_FMT_YUYV)
    {
#if video_test == 1
        emit log("sensor frame format is YUYV");
#endif
    }
    else if (ffmt.pixelformat == V4L2_PIX_FMT_UYVY)
    {
#if video_test == 1
        emit log("sensor frame format is UYVY");
#endif
    }

    memset(&parm,0,sizeof(parm));
    parm.type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    parm.parm.capture.timeperframe.numerator = 1;
    parm.parm.capture.timeperframe.denominator = g_camera_framerate;
    parm.parm.capture.capturemode = g_capture_mode;

    if (ioctl(fd_v4l, VIDIOC_S_PARM, &parm) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_S_PARM failed "+ QString::number(errno));
#endif
    }

    parm.parm.capture.timeperframe.numerator = 0;
    parm.parm.capture.timeperframe.denominator = 0;

    if (ioctl(fd_v4l, VIDIOC_G_PARM, &parm) < 0)
    {
#if video_test == 1
        emit log("get frame rate failed " + QString::number(errno));
#endif
    }
#if video_test == 1
    emit log("frame_rate is "+ QString::number(parm.parm.capture.timeperframe.denominator));
#endif

    memset(&ctl,0,sizeof(ctl));
    ctl.id = V4L2_CID_PRIVATE_BASE + 2;
    ctl.value = g_rotate;
    if (ioctl(fd_v4l, VIDIOC_S_CTRL, &ctl) < 0)
    {
#if video_test == 1
        emit log("set control failed " + QString::number(errno));
#endif
    }

    memset(&crop,0,sizeof(crop));
    crop.type = V4L2_BUF_TYPE_VIDEO_OVERLAY;
    crop.c.left = 0;
    crop.c.top = 0;
    crop.c.width = 720;
    crop.c.height = 576;
    if (ioctl(fd_v4l, VIDIOC_S_CROP, &crop) < 0)
    {
#if video_test == 1
        emit log("set cropping failed");
#endif
    }

    fmt.type = V4L2_BUF_TYPE_VIDEO_OVERLAY;
    fmt.fmt.win.w.top=  116 ;
    fmt.fmt.win.w.left= 100;
    fmt.fmt.win.w.width=1080;
    fmt.fmt.win.w.height=864;

    if (ioctl(fd_v4l, VIDIOC_S_FMT, &fmt) < 0)
    {
#if video_test == 1
        emit log("set format failed");
#endif
    }


    if (ioctl(fd_v4l, VIDIOC_G_FMT, &fmt) < 0)
    {
#if video_test == 1
        emit log("get format failed " + QString::number(errno));
#endif
    }
#if video_test == 1
    emit log("display top " + QString::number(fmt.fmt.win.w.top));
    emit log("display left " + QString::number(fmt.fmt.win.w.left));
    emit log("display width " + QString::number(fmt.fmt.win.w.width));
    emit log("display height " + QString::number(fmt.fmt.win.w.height));
#endif


    if (ioctl(fd_v4l, VIDIOC_G_STD, &id) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_G_STD failed "+ QString::number(errno));
#endif
    }


    g_alpha.alpha = 0;
    g_alpha.enable = 1;
    if (ioctl(fd_fb_0, MXCFB_SET_GBL_ALPHA, &g_alpha) < 0)
    {
#if video_test == 1
        emit log("Set global alpha failed");
#endif
    }

    color_key.color_key = 0x00080808;
    color_key.enable = 0;
    if (ioctl(fd_fb_0, MXCFB_SET_CLR_KEY, &color_key) < 0)
    {
#if video_test == 1
        emit log("Set color key failed");
#endif
    }

    if (ioctl(fd_v4l, VIDIOC_G_FBUF, &fb_v4l2) < 0)
    {
#if video_test == 1
        emit log("Get framebuffer failed");
#endif
    }

    fb_v4l2.flags = V4L2_FBUF_FLAG_OVERLAY;

    close(fd_fb_0);

    if (ioctl(fd_v4l, VIDIOC_S_FBUF, &fb_v4l2) < 0)
    {
#if video_test == 1
        emit log("set framebuffer failed" + QString::number(errno));
#endif
    }
    if (ioctl(fd_v4l, VIDIOC_G_FBUF, &fb_v4l2) < 0)
    {
#if video_test == 1
        emit log("set framebuffer failed" + QString::number(errno));
#endif
    }
#if video_test == 1
    emit log("frame buffer width " + QString::number(fb_v4l2.fmt.width) + ",height "+
             QString::number(fb_v4l2.fmt.height)+",bytesperline "+QString::number(fb_v4l2.fmt.bytesperline));
#endif

}

void receiver::video_start()
{
    int overlay = 1;
    if (ioctl(fd_v4l, VIDIOC_OVERLAY, &overlay) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_OVERLAY start failed");
#endif
    }
    for (int i = 0; i < 3 ; i++) {
        // flash a frame
        ctl.id = V4L2_CID_PRIVATE_BASE + 1;
        if (ioctl(fd_v4l, VIDIOC_S_CTRL, &ctl) < 0)
        {
#if video_test == 1
            emit log("set ctl failed");
#endif
        }
        sleep(1);
    }
}


void receiver::video_stop()
{
    int overlay = 0;
    if (ioctl(fd_v4l, VIDIOC_OVERLAY, &overlay) < 0)
    {
#if video_test == 1
        emit log("VIDIOC_OVERLAY stop failed");
#endif
    }
}
