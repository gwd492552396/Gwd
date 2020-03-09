#include "temperature.h"
#include "ui_temperature.h"

Temperature::Temperature(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Temperature)
{
    ui->setupUi(this);
}

Temperature::~Temperature()
{
    delete ui;
}

void Temperature::set_engine_water_temper(const QString &ewt)
{
    ui->enigne_temper->setText(ewt);
}

void Temperature::on_btn_back_clicked()
{
    emit previous(2);
}

void Temperature::set_gearbox_temper(QString gbt)
{
    ui->gearbox_temper->setText(gbt);
}
