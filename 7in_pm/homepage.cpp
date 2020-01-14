#include "homepage.h"
#include "ui_homepage.h"
#include <QDebug>

HomePage::HomePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HomePage)
{
    ui->setupUi(this);
    is_weight = true;
    is_video = true;
//    ui->btn_back->hide();
//    ui->btn_backhome->hide();
    ui->power_widget->hide();
    power_changed("55");
}

HomePage::~HomePage()
{
    delete ui;
}

void HomePage::power_changed(const QString &current_power)
{
    ui->power_bar->setValue(current_power.toFloat());
    if(current_power.toFloat() <= 20)
    {
        ui->power_bar->setStyleSheet("QProgressBar#power_bar{border:none;color:white;font: 75 8pt MicrosoftYaHeiUI;text-align:center;background:rgb(125, 125, 125);}QProgressBar#power_bar::chunk {border:none;font: 75 8pt MicrosoftYaHeiUI; background:red;}");
    }
    else
    {
        ui->power_bar->setStyleSheet("QProgressBar#power_bar{border:none;color:white;font: 75 8pt MicrosoftYaHeiUI;text-align:center;background:rgb(125, 125, 125);}QProgressBar#power_bar::chunk {border:none;font: 75 8pt MicrosoftYaHeiUI; background:rgb(0,160,230);}");
    }
}
void HomePage::change_weight()
{
    if(is_weight==true)
    {
        is_weight = false;
        ui->hlayout->removeWidget(ui->btn_weight);
        ui->btn_weight->setHidden(true);
    }
    else
    {
        is_weight = true;
        ui->hlayout->addWidget(ui->btn_weight);
        ui->btn_weight->setHidden(false);
    }
}

void HomePage::change_video()
{
    if(is_video == true)
    {
        is_video = false;
        ui->hlayout->removeWidget(ui->btn_video);
        ui->btn_video->setHidden(true);
    }

    else
    {
        is_video = true;
        ui->hlayout->addWidget(ui->btn_video);
        ui->btn_video->setHidden(false);
    }

}


void HomePage::on_btn_weight_clicked()
{
    emit show_video(4);

}

void HomePage::on_btn_query_clicked()
{
    emit show_query(5);
}

void HomePage::on_btn_setting_clicked()
{
    emit show_setting(18);
}

void HomePage::on_btn_video_clicked()
{
    emit show_video(16);

}

void HomePage::on_btn_backhome_clicked()
{
    emit back_home(6);
}

void HomePage::on_btn_back_clicked()
{
    emit previous(6);
}
