#include "video.h"
#include "ui_video.h"

Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);
    img = new QImage();

}

Video::~Video()
{
    delete ui;
}


void Video::ReceiveImage(QImage img)

{
    if (! img.isNull() )
    {
        emit log("here received an image");
        ui->mainlabel->clear();
        QSize size(720,576);
//        *img = QImage(rgb24, width, height, QImage::Format_RGB888);
        ui->mainlabel->setPixmap(QPixmap::fromImage(img));

    }
}
//{

//    if(image!=NULL)
//    {
//       emit log("I receive an image");
//            ui->mainlabel->clear();

//            //Success
//                ui->mainlabel->setPixmap(QPixmap::fromImage(image));



//        }
//    else log("there's no data , check your camera");
//    }



//void Video::on_btn_backhome_clicked()
//{

//    emit back_home(6);


//}

//void Video::on_btn_back_clicked()
//{

//    emit previous(3);
//}
