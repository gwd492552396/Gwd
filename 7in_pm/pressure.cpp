#include "pressure.h"
#include "ui_pressure.h"

Pressure::Pressure(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pressure)
{
    ui->setupUi(this);
}

Pressure::~Pressure()
{
    delete ui;
}

void Pressure::set_enigne_oil_pressure(const QString &eop)
{
    ui->enigne_pressure->setText(eop);
}

void Pressure::set_gearbox_pressure(const QString &gbp)
{
    ui->gearbox_pressure->setText(gbp);
}
void Pressure::set_brake_front(const QString &bf)
{
    ui->brake_front->setText(bf);
}
void Pressure::set_brake_back(const QString &bb)
{
    ui->brake_back->setText(bb);
}

void Pressure::on_btn_back_clicked()
{
    emit previous(2);
}
