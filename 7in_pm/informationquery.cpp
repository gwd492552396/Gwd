#include "informationquery.h"
#include "ui_informationquery.h"

InformationQuery::InformationQuery(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InformationQuery)
{
    ui->setupUi(this);
//    QGridLayout *glayout = new QGridLayout;           //modified by gwd
//    glayout->addWidget(ui->btn_zc,0,0,1,1);
//    glayout->addWidget(ui->btn_error,0,1,1,1);
//    glayout->addWidget(ui->btn_power,1,0,1,1);
//    glayout->addWidget(ui->btn_waring,1,1,1,1);
//    glayout->addWidget(ui->btn_back,2,1,1,1,Qt::AlignRight | Qt::AlignVCenter);
//    glayout->addWidget(ui->btn_backhome,2,0,1,1,Qt::AlignLeft | Qt::AlignVCenter);
//    glayout->setContentsMargins(45,81,45,10);
//    glayout->setHorizontalSpacing(10);
//    glayout->setVerticalSpacing(10);
//    setLayout(glayout);

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
