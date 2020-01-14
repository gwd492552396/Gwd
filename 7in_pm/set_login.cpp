#include "set_login.h"
#include "ui_set_login.h"

Set_Login::Set_Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Set_Login)
{
    ui->setupUi(this);
}

Set_Login::~Set_Login()
{
    delete ui;
}
