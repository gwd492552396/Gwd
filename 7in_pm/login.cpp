#include "login.h"
#include "ui_login.h"
#include "qdebug.h"


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
       ui->setupUi(this);



//    QGridLayout *glayout = new QGridLayout;
//    QGridLayout *g1 = new QGridLayout;
//    keynum = new frmNum();
//    keyinput = new frmInput();
      keyinput = frmInput::Instance();
      keynum = frmNum::Instance();
      keyinput->move(410,330);
      keynum->move(410,330);
//    keynum->setVisible(false);           //modified by gwd
//    keyinput->setVisible(true);
    ui->le_name->setMaximumWidth(120);
    ui->le_passewd->setMaximumWidth(120);




//    glayout->addWidget(ui->label_tubiao,0,0,2,1,Qt::AlignRight);             //modified by gwd
//    glayout->addWidget(ui->label_name,0,1,1,1,Qt::AlignRight);
//    glayout->addWidget(ui->label_passwd,1,1,1,1,Qt::AlignRight);
//    glayout->addWidget(ui->le_name,0,2,1,1,Qt::AlignLeft);
//    glayout->addWidget(ui->le_passewd,1,2,1,1,Qt::AlignLeft);
//    glayout->setHorizontalSpacing(15);
//    glayout->setVerticalSpacing(10);

//    g1->addLayout(glayout,0,0,1,3,Qt::AlignHCenter);
//    g1->addWidget(keynum,1,0,2,3,Qt::AlignHCenter | Qt::AlignVCenter);
//    g1->addWidget(keyinput,1,0,2,3,Qt::AlignHCenter | Qt::AlignVCenter);
//    g1->addWidget(ui->btn_back,2,2,1,1,Qt::AlignRight | Qt::AlignVCenter);
//    g1->addWidget(ui->btn_login,2,0,1,1,Qt::AlignLeft | Qt::AlignVCenter);

//    g1->setHorizontalSpacing(20);
//    g1->setVerticalSpacing(5);
//    g1->setContentsMargins(20,30,20,10);

//    setLayout(g1);
    ui->le_name->setFocus();

    connect(keynum,SIGNAL(change(int)),this,SLOT(receive(int)));
    connect(keyinput,SIGNAL(change(int)),this,SLOT(receive(int)));



    database = new Database_7in();
    database->initdb();
}

Login::~Login()
{
    delete ui;
}


void Login::on_btn_login_clicked()
{
    username = ui->le_name->text().trimmed();
    password = ui->le_passewd->text().trimmed();
    if(username.isEmpty() || password.isEmpty())
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("登录失败","请输入用户名和密码");
        emit log("failed,please input\n");
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
        return;
    }
    else if(username.length()!= 6 || password.length()!= 6)
    {
         MessageWidget * mess = new MessageWidget(this);
        mess->init("登录失败","用户名或密码长度错误");
        emit log("failed,length error\n");
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
        return;
    }
    QString str = "";
    int key = database->CheckUsername(username,str);

    if(key == -1)
    {
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
         MessageWidget * mess = new MessageWidget(this);
        mess->init("登录失败","用户名不存在");
        emit log("failed,non-existent\n");
    }
    else if(str != password)
    {
        ui->le_passewd->setText("");
        ui->le_passewd->setFocus();
         MessageWidget * mess = new MessageWidget(this);
        mess->init("登录失败","密码错误");
        emit log("failed,password error\n");
    }

    else
    {
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
        emit loginstatus(key);
        emit senddata(username);
        if(key == 0)
            emit login(22);
        else
            emit login(23);
    }

}

void Login::on_btn_back_clicked()
{
    emit previous(18);
}

void Login::receive(int i)
{
    if(i == 0)
    {
        keynum->setVisible(false);
        keyinput->setVisible(true);
    }
    else
    {
        keyinput->setVisible(false);
        keynum->setVisible(true);
    }
}
