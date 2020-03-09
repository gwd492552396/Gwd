#include "set.h"
#include "ui_set.h"

set::set(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set)
{
    ui->setupUi(this);

}

set::~set()
{
    delete ui;
}

void  set::loginstatus(int f)
{
    flag = f;
    if((flag == 0)||(flag == 1))
    {
        ui->btn_login->setStyleSheet("border-image: url(:/按键_设置2.png);border:none;");
    }
    else ui->btn_login->setStyleSheet("border-image:url(:/按键_用户登录2.png); border:none;");
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
