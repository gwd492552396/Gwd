#include "set.h"
#include "ui_set.h"

set::set(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);
 //   QGridLayout *glayout = new QGridLayout;                  //modified by gwd
//    glayout->addWidget(ui->btn_login,0,0,1,2,Qt::AlignCenter);
//    glayout->addWidget(ui->btn_management,1,0,1,2,Qt::AlignCenter);

//    glayout->addWidget(ui->btn_back,2,1,1,1,Qt::AlignRight | Qt::AlignVCenter);
//    glayout->addWidget(ui->btn_backhome,2,0,1,1,Qt::AlignLeft | Qt::AlignVCenter);
//    glayout->setContentsMargins(45,81,45,10);
//    glayout->setHorizontalSpacing(8);
//    glayout->setVerticalSpacing(8);
//    setLayout(glayout);

}

set::~set()
{
    delete ui;
}

void  set::loginstatus(int f)
{
    flag = f;
}

void set::on_btn_login_clicked()
{
    if(flag == 0)
        emit login(22);
    else if(flag == 1)
        emit login (23);
    else
       emit login(19);
}

void set::on_btn_management_clicked()
{
    qDebug()<<flag;
//    if(flag == 0)
//        emit management(20);
//    else
//    {
//        MessageWidget * mes = new MessageWidget(this);
//        mes->init("进入失败","请登录管理员账户进入");
//    }
    emit management(20);


}

void set::on_btn_backhome_clicked()
{
    emit back_home(6);
}

void set::on_btn_back_clicked()
{
    emit previous(3);
}
