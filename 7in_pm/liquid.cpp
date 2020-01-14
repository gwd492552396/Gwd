#include "liquid.h"
#include "ui_liquid.h"

Liquid::Liquid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Liquid)
{
    ui->setupUi(this);
    ui->cooling_bar->setMaximum(100);
    ui->cooling_bar->setMinimum(0);
    ui->hydraulic_bar->setMaximum(100);
    ui->hydraulic_bar->setMinimum(0);
    show_hydraulic_bar("90");
    show_cooling_bar("61");
}

Liquid::~Liquid()
{
    delete ui;
}

void Liquid::show_hydraulic_bar(const QString &current_hydrulic)
{
    ui->hydraulic_bar->setValue(current_hydrulic.toFloat());
    if(current_hydrulic.toFloat() <= 20)
    {
        ui->hydraulic_bar->setFormat(QString::fromUtf8("低"));
        ui->hydraulic_bar->setStyleSheet("QProgressBar#hydraulic_bar{border:none;color:white;font: 75 18pt MicrosoftYaHeiUI;text-align:center;background:rgb(0, 0, 0);}QProgressBar#hydraulic_bar::chunk {border:none;font: 75 18pt MicrosoftYaHeiUI; background:red;}");

    }
    else
    {
         ui->hydraulic_bar->setFormat(QString::fromUtf8("正常"));
         ui->hydraulic_bar->setStyleSheet("QProgressBar#hydraulic_bar{border:none;color:white;font: 75 18pt MicrosoftYaHeiUI;text-align:center;background:rgb(0, 0, 0);}QProgressBar#hydraulic_bar::chunk {border:none;font: 75 18pt MicrosoftYaHeiUI; background:blue;}");

    }
}

void Liquid::show_cooling_bar(const QString &current_cooling)
{
    ui->cooling_bar->setValue(current_cooling.toFloat());
    if(current_cooling.toFloat() <= 20)
    {
        ui->cooling_bar->setFormat(QString::fromUtf8("低"));
        ui->cooling_bar->setStyleSheet("QProgressBar#cooling_bar{border:none;color:white;font: 75 18pt MicrosoftYaHeiUI;text-align:center;background:rgb(0, 0, 0);}QProgressBar#cooling_bar::chunk {border:none;font: 75 18pt MicrosoftYaHeiUI; background:red;}");

    }
    else
    {
         ui->cooling_bar->setFormat(QString::fromUtf8("正常"));
         ui->cooling_bar->setStyleSheet("QProgressBar#cooling_bar{border:none;color:white;font: 75 18pt MicrosoftYaHeiUI;text-align:center;background:rgb(0, 0, 0);}QProgressBar#cooling_bar::chunk {border:none;font: 75 18pt MicrosoftYaHeiUI; background:blue;}");

    }
}

void Liquid::on_btn_back_clicked()
{
    emit previous(2);
}
