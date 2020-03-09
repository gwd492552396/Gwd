#include "informationquery.h"
#include "ui_informationquery.h"

InformationQuery::InformationQuery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationQuery)
{
    ui->setupUi(this);
}

InformationQuery::~InformationQuery()
{
    delete ui;
}



void InformationQuery::on_btn_zc_clicked()
{
    emit zc(2);
}

void InformationQuery::on_btn_error_clicked()
{
    emit error(14);
}

//void InformationQuery::on_btn_power_clicked()
//{
//    emit power(7);
//}

void InformationQuery::on_btn_waring_clicked()
{
    emit warning(15);
}

void InformationQuery::on_btn_backhome_clicked()
{
    emit back_home(6);
}

void InformationQuery::on_btn_back_clicked()
{
    emit previous(3);
}
