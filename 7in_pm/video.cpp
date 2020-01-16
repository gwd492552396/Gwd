#include "video.h"
#include "ui_video.h"

Video::Video(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Video)
{
    ui->setupUi(this);

}

Video::~Video()
{
    delete ui;
}
void Video::ReceiveImage(QImage img)
{
    if ( ! img.isNull())
    {
        emit log("here received an image");
        ui->mainlabel->clear();
        QSize size(1000,600);
//        img = QImage(rgb, width, height, QImage::Format_RGB888);
        ui->mainlabel->setPixmap(QPixmap::fromImage(img.scaled(size)));
        image = img;


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
