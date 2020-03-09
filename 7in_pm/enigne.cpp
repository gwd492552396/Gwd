#include "enigne.h"
#include "ui_enigne.h"

Enigne::Enigne(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Enigne)
{
    ui->setupUi(this);
}

Enigne::~Enigne()
{
    delete ui;
}

void Enigne::set_enigen_rev(const QString &rev)
{
    ui->enigne_speed->setText(rev);
}

void Enigne::set_enigen_water_temper(const QString &ewt)
{
    ui->enigne_temp->setText(ewt);
}

void Enigne::set_enigen_oli_pressure(const QString &eop)
{
    ui->enigne_pressure->setText(eop);
}

void Enigne::on_btn_back_clicked()
{
    emit previous(2);
}

void Enigne::set_enigne_total_hours(const QString &eth)
{
    ui->enegin_hours->setText(eth);
}
