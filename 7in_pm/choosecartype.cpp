#include "choosecartype.h"
#include "ui_choosecartype.h"
#include <QMessageBox>

ChooseCarType::ChooseCarType(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChooseCarType)
{
    ui->setupUi(this);
}

ChooseCarType::~ChooseCarType()
{
    delete ui;
}

void ChooseCarType::on_btn_engine_clicked()
{
    ButtonWidget * wid = new ButtonWidget(this);
    wid->init(3);
    //QMessageBox::about(this,tr("发动机"),tr(""));
}

void ChooseCarType::on_btn_drive_clicked()
{
    ButtonWidget * wid = new ButtonWidget(this);
    wid->init(4);
    //QMessageBox::about(this,tr("驱动"),tr(""));
}

void ChooseCarType::on_btn_back_home_clicked()
{
    emit back_home(6);
}

void ChooseCarType::on_btn_back_clicked()
{
    emit previous(22);
}
