#include "setpagelogin.h"
#include "ui_setpagelogin.h"

SetPageLogin::SetPageLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SetPageLogin)
{
    ui->setupUi(this);
}

SetPageLogin::~SetPageLogin()
{
    delete ui;
}
