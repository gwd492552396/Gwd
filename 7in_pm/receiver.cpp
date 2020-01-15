#include "receiver.h"



receiver::receiver(QObject *parent) :
    QThread(parent)
{
    // init_video();

}

receiver::~receiver()
{
    stream_off();
    emit receiver_stop();
}

void freergb24(void *data)
{
    free(data);
}

void receiver::run()
{
    emit log("-----thread start-----");
    while(!stop)
    {
        msleep(1000/25);
        emit log("-----thread running");
        memset(buf, 0, sizeof(*buf));
        buf->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        buf->memory=V4L2_MEMORY_MMAP;
        if(ioctl(fd, VIDIOC_DQBUF, buf) == -1)
        {
            emit  log("grab yuv failed");
        }
        else
        {
            emit log("grab yuv success");
            rgb24 = (unsigned char*)calloc(1,width*height*3*sizeof(char));
            if(rgb24 != NULL)
            {
                emit log("memory for rgb24 is ready");
                rt = I420ToRGBA((unsigned char*)buffers[buf->index].start,width, height,rgb24);
                emit log("convert result:"+QString::number(ret));
                if(rt == 0)
                {
                    emit log("start yuv2rgb");
                    img = QImage(rgb24, width, height, QImage::Format_RGB888,freergb24,(void *)rgb24);
                    emit  log("yuv2rgb success");
                    emit SendImage(img);
                    //          emit SendImage(rgb24,width,height);
                    emit log("send image out");
                }
                else emit log("yuv2rgb failed");
            }else emit log("there is no memory for rgb24");


            if (-1 != (ioctl(fd, VIDIOC_QBUF, buf)))
                emit log(" put in success!");
            else
                emit log("put in failed!");
        }
    }
}



void receiver::init_video()
{
    //    img = new QImage;
    if ((fd = open("/dev/video0",O_RDWR)) == -1)
    {
        emit log("error to open video0");
    }

    log(QString::number(fd)+"is the fd");
    //query cap
    cap = (struct v4l2_capability*)calloc(1, sizeof(struct v4l2_capability));
    if(cap != NULL){
        emit log("memory for cap is ready");
        if ((ret = ioctl(fd, VIDIOC_QUERYCAP, cap)) == -1)
        {
            emit log("unable to query device.");
        }
        else
        {
            emit log(QString::number(ret)+" QUERYCP success");
            emit log(QString::fromLatin1((char *)cap->driver));
            emit log(QString::fromLatin1((char *)cap->card));
            emit log(QString::fromLatin1((char *)cap->bus_info));
        }
        free(cap);
        cap = NULL;
        emit log("free the memory for cap");}
    else emit log("there is no memory for cap");

//    //enum format
//    fmtdesc = (struct v4l2_fmtdesc*)calloc(1, sizeof(struct v4l2_fmtdesc));
//    if(fmtdesc != NULL){
//        emit log("memory for fmtdesc is ready");
//        fmtdesc->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
//        fmtdesc->index = 0;
//        while ((ret = ioctl(fd, VIDIOC_ENUM_FMT, fmtdesc)) != -1)
//        {
//            emit log("-------format--------");
//            emit log(QString::fromLatin1((char *)fmtdesc->description));
//            fmtdesc->index ++ ;
//        }
//        emit log("errno :" + QString::number(errno));
//        free(fmtdesc);
//        fmtdesc = NULL;
//        emit log("free the memory for fmtdesc");}
//    else emit log("there is no memory for fmtdesc");

    //set crop
//    crop = (struct v4l2_crop*)calloc(1,sizeof(struct v4l2_crop));
//    if (crop != NULL){
//        emit log("memory for crop is ready");
//        crop->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
//        crop->c.width = width;
//        crop->c.height = height;
//        crop->c.top = 0;
//        crop->c.left = 0;
//        if (ioctl(fd, VIDIOC_S_CROP, crop) == -1){
//            emit log("Unable to set crop");
//        }
//        else emit log("set crop success");
//    }
//    free(crop);
//    crop = NULL;
//    emit log("free the memory for crop");

//    //get crop
//    crop = (struct v4l2_crop*)calloc(1,sizeof(struct v4l2_crop));
//    if (crop != NULL){
//        emit log("memory for crop is ready");
//        crop->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
//        if (ioctl(fd, VIDIOC_G_CROP, crop) != -1){
//            emit log("-----get the crop:");
//            emit log(QString::fromLatin1((char *)crop->c.width));
//            emit log(QString::fromLatin1((char *)crop->c.height));
//            emit log(QString::fromLatin1((char *)crop->c.top));
//            emit log(QString::fromLatin1((char *)crop->c.left));
//        }
//        else emit log("Unable to get crop");
//    }
//    else emit log("errno :" + QString::number(errno));
//    free(crop);
//    crop = NULL;
//    emit log("free the memory for crop");

    //set std
    std = 0xff;
    if((ret = ioctl(fd, VIDIOC_S_STD, &std)) == -1)
    {
        emit  log("Unable to set std");
    }
    else
    {
        emit log(QString::number(ret)+" set std OK");

    }

    //get std
    std = 0;
    if((ret = ioctl(fd, VIDIOC_G_STD, &std)) == -1)
    {
        emit  log("Unable to get std");
    }
    else
    {
        emit log("-----get the std now :" + QString::number(std));

    }


    //set input
    input = (struct v4l2_input*)calloc(1,sizeof(struct v4l2_input));
    if (input != NULL){
        emit log("memory for input is ready");
        input->index = 0;
        if((ret = ioctl(fd, VIDIOC_S_INPUT, input)) == -1)
        {
            emit log("Unable to set input");
        }
        else
        {
            emit log(QString::number(ret)+" set input OK");
        }
        free(input);
        input=NULL;
        emit log("free the memory for input");
    }
    else emit log("there is no memory for input");

    //set streamparm
    setfps = (struct v4l2_streamparm*)calloc(1, sizeof(struct v4l2_streamparm));
    if (setfps != NULL){
        emit log("memory for setfps is ready");
        // memset(setfps,0, sizeof(*setfps));
        setfps->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        setfps->parm.capture.timeperframe.numerator =1;
        setfps->parm.capture.timeperframe.denominator = 25;
        setfps->parm.capture.capturemode = 0;
        if((ret = ioctl(fd, VIDIOC_S_PARM, setfps)) == -1)
        {
            emit log("Unable to set parm");
        }
        else
        {
            emit log(QString::number(ret)+" set parm OK");
        }
        free(setfps);
        setfps=NULL;
        emit log("free the memory for setfps");
    }
    else emit log("there is no memory for setfps");

    //get streamparm
    setfps = (struct v4l2_streamparm*)calloc(1, sizeof(struct v4l2_streamparm));
    if (setfps != NULL){
        emit log("memory for setfps is ready");
        setfps->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if((ret = ioctl(fd, VIDIOC_G_PARM, setfps)) == -1)
        {
            emit log("errno :" + QString::number(errno));
            emit log("Unable to get parm");
        }
        else
        {
            emit log("------get the parm now :");
            emit log(QString("fps :  %1 %2").arg(QString::number(setfps->parm.capture.timeperframe.numerator)).arg(QString::number(setfps->parm.capture.timeperframe.denominator)));
        }
        free(setfps);
        setfps=NULL;
        emit log("free the memory for setfps");
    }
    else emit log("there is no memory for setfps");

    //set format
    fmt = (struct v4l2_format*)calloc(1, sizeof(struct v4l2_format));
    // memset(fmt,0, sizeof(*fmt));
    if (fmt != NULL){
        emit log("memory for fmt is ready");
        fmt->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        fmt->fmt.pix.pixelformat = V4L2_PIX_FMT_YUV420;
        fmt->fmt.pix.height = height;
        fmt->fmt.pix.width = width;
        fmt->fmt.pix.field = V4L2_FIELD_INTERLACED;
        //fmt->fmt.pix.bytesperline = width;

        if((ret = ioctl(fd, VIDIOC_S_FMT, fmt)) == -1)
        {
            emit log("Unable to set format");
        }
        else
        {
            emit  log(QString::number(ret)+" set format OK");
        }
        free(fmt);
        fmt=NULL;
        emit log("free the memory for fmt");
    }
    else emit log("there is no memory for fmt");

    //get format now
    fmt = (struct v4l2_format*)calloc(1, sizeof(struct v4l2_format));
    if (fmt != NULL){
        emit log("memory for fmt is ready");
        fmt->type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
        if((ret = ioctl(fd, VIDIOC_G_FMT, fmt)) == -1)
        {
            emit log("errno :" + QString::number(errno));
            emit log("Unable to get format");
        }
        else
        {
           emit log("------the format now :");
           emit log("width:"+QString::number(fmt->fmt.pix.width));
           emit log("width:"+QString::number(fmt->fmt.pix.height));
           emit log("pixelformat:"+QString::number(fmt->fmt.pix.pixelformat));
        }
        free(fmt);
        fmt=NULL;
        emit log("free the memory for fmt");
    }
    else emit log("there is no memory for fmt");

    //request buff
    req = (struct v4l2_requestbuffers*)calloc(1, sizeof(struct v4l2_requestbuffers));
    // memset(&req, 0, sizeof(struct v4l2_requestbuffers));
    if(req != NULL){
        emit log("memory for req is ready");
        req->count = 4;
        req->type=V4L2_BUF_TYPE_VIDEO_CAPTURE;
        req->memory=V4L2_MEMORY_MMAP;
        if((ret = ioctl(fd,VIDIOC_REQBUFS,req)) == -1)
        {
            emit  log("Unable to request buff"+QString::number(ret));
            emit  log(QString::number(errno));
        }
        else
        {
            emit log("request buff OK"+QString::number(ret));
        }
    }
    else emit log("free the memory for req");
    //mmap
    buffers =(buffer*)calloc (req->count, sizeof (*buffers));
    if (!buffers) {
        emit log("Out of memory");
    }
    for (unsigned int n_buffers = 0; n_buffers < req->count; ++n_buffers)
    {
        emit log("n_buffers: " + QString::number(n_buffers));
        buf =(struct v4l2_buffer*)calloc (1, sizeof (struct v4l2_buffer));
        buf->type =V4L2_BUF_TYPE_VIDEO_CAPTURE;
        buf->memory =V4L2_MEMORY_MMAP;
        buf->index =n_buffers;
        // 查询序号为n_buffers 的缓冲区，得到其起始物理地址和大小
        if (-1 == ioctl(fd, VIDIOC_QUERYBUF, buf))
            emit  log("query failed");
        else
            emit log("query success");
        buffers[n_buffers].length= buf->length;
        emit log("buffer length : " + QString::number(buf->length));
        // 映射内存
        buffers[n_buffers].start=mmap (NULL,buf->length,PROT_READ ,MAP_SHARED,fd, buf->m.offset);
        if (MAP_FAILED== buffers[n_buffers].start)
            emit log("mmap failed");
        else
            emit log("mmap success");

        //    }

        //    //queue
        //    for (unsigned int n_buffers = 0; n_buffers < req->count; n_buffers++)
        //    {
        //        buf->index = n_buffers;
        if(-1 == ioctl(fd, VIDIOC_QBUF, buf))
            emit log("queue failed");
        else emit log("queue success");
    }
}


void receiver::stream_on()
{
    type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    ioctl (fd, VIDIOC_STREAMON, &type);
}

void receiver::stream_off()
{
    type = V4L2_BUF_TYPE_VIDEO_CAPTURE;
    ioctl (fd, VIDIOC_STREAMOFF, &type);
    int i;
    for (i = 0; i < (int)req->count; i++)
        munmap (buffers[i].start, buffers[i].length);
    close (fd);
}



int receiver:: convert_yuv_to_rgb_pixel(int y, int u, int v)
{
    unsigned int pixel32 = 0;
    unsigned char *pixel = (unsigned char *)&pixel32;
    int r, g, b;
    r = y + (1.370705 * (v-128));
    g = y - (0.698001 * (v-128)) - (0.337633 * (u-128));
    b = y + (1.732446 * (u-128));
    if(r > 255) r = 255;
    if(g > 255) g = 255;
    if(b > 255) b = 255;
    if(r < 0) r = 0;
    if(g < 0) g = 0;
    if(b < 0) b = 0;
    pixel[0] = r ;
    pixel[1] = g ;
    pixel[2] = b ;
    return pixel32;
}

int receiver::convert_yuv_to_rgb_buffer(unsigned char *yuv, unsigned char *rgb, unsigned int width, unsigned int height)
{
    unsigned int in, out = 0;
    unsigned int pixel_16;
    unsigned char pixel_24[3];
    unsigned int pixel32;
    int y0, u, y1, v;

    for(in = 0; in < width * height; in += 4)
    {
        if (in > 0 && ((in / 2) % width == 0))
            out += width * 3;

        pixel_16 =
                yuv[in + 3] << 24 |
                               yuv[in + 2] << 16 |
                                              yuv[in + 1] <<  8 |
                                                              yuv[in + 0];
        u  = (pixel_16 & 0x000000ff);
        y0 = (pixel_16 & 0x0000ff00) >>  8;
        v  = (pixel_16 & 0x00ff0000) >> 16;
        y1 = (pixel_16 & 0xff000000) >> 24;
        pixel32 = convert_yuv_to_rgb_pixel(y0, u, v);
        //emit log("convert yuv2pixel success 1");
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
        pixel32 = convert_yuv_to_rgb_pixel(y1, u, v);
        //emit log("convert yuv2pixel success 2");
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
    }

    out = 0;
    for(in = width * height; in < width * height * 2; in += 4)
    {
        if (((in / 2) % width == 0))
            out += width * 3;

        pixel_16 =
                yuv[in + 3] << 24 |
                               yuv[in + 2] << 16 |
                                              yuv[in + 1] <<  8 |
                                                              yuv[in + 0];
        u  = (pixel_16 & 0x000000ff);
        y0 = (pixel_16 & 0x0000ff00) >>  8;
        v  = (pixel_16 & 0x00ff0000) >> 16;
        y1 = (pixel_16 & 0xff000000) >> 24;
        pixel32 = convert_yuv_to_rgb_pixel(y0, u, v);
        //emit log("convert yuv2pixel success 1");
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
        pixel32 = convert_yuv_to_rgb_pixel(y1, u, v);
        //emit log("convert yuv2pixel success 2");
        pixel_24[0] = (pixel32 & 0x000000ff);
        pixel_24[1] = (pixel32 & 0x0000ff00) >> 8;
        pixel_24[2] = (pixel32 & 0x00ff0000) >> 16;
        rgb[out++] = pixel_24[0];
        rgb[out++] = pixel_24[1];
        rgb[out++] = pixel_24[2];
    }
    return 0;
}


int receiver::I420ToRGBA(const unsigned char * src, int width, int height,unsigned char* rgb)
{
    int temp = 0;
    for(int i=0; i<height; i++){
        int startY = i*width;
        int step = (i/2)*(width/2);
        int startV = width*height* 5 /4 + step;
        int startU = width*height + step;

        for(int j = 0; j < width; j++){
            int Y = startY + j;
            int V = startV + j/2;
            int U = startU + j/2;
            int index = Y*3;
            temp = ((src[Y]&0xff) + 1.4075 * ((src[V]&0xff)-128));
            rgb[index+2] = temp<0 ? 0 : (temp > 255 ? 255 : temp);
            temp =  ((src[Y]&0xff) -  0.3455* ((src[U]&0xff)-128) - 0.7169*((src[V]&0xff)-128));
            rgb[index+1] =   temp<0 ? 0 : (temp > 255 ? 255 : temp);
            temp =  ((src[Y]&0xff) +  1.779* ((src[U]&0xff)-128));
            rgb[index+0] =temp<0 ? 0 : (temp > 255 ? 255 : temp);
        }
    }
    return 0;
}
