#include "login.h"
#include "ui_login.h"
#include "qdebug.h"


Login::Login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    ui->le_name->setMaximumWidth(120);
    ui->le_passewd->setMaximumWidth(120);

    keyinput = frmInput::Instance();
    keynum = frmNum::Instance();
    keyinput->move(350,330);
    keynum->move(410,330);
    connect(keynum,SIGNAL(change(int)),this,SLOT(receive(int)));
    connect(keyinput,SIGNAL(change(int)),this,SLOT(receive(int)));
    ui->le_name->setFocus();
    database = new Database_7in();
    database->initdb();
    emit log(QString::number(database->result1));

   // ui->le_name->activateWindow();
}

Login::~Login()
{
    delete ui;
}

//void Login::mousePressEvent(QMouseEvent *ev)
//{
//   if (ev->button() == Qt::LeftButton)
//   {
//       if (ev->x())
//   }
//}


void Login::on_btn_login_clicked()
{
    username = ui->le_name->text().trimmed();
    password = ui->le_passewd->text().trimmed();
    if(username.isEmpty() || password.isEmpty())
    {
        MessageWidget * mess = new MessageWidget(this);
        connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
        mess->init("登录失败","请输入用户名和密码");
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
        keynum->hide();
        keyinput->hide();
        return;
    }
    else if(username.length()!= 6 || password.length()!= 6)
    {
        MessageWidget * mess = new MessageWidget(this);
        connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
        mess->init("登录失败","用户名或密码长度错误");
        ui->le_name->setText("");
        ui->le_passewd->setText("");
        ui->le_name->setFocus();
        keynum->hide();
        keyinput->hide();
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
         connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
        mess->init("登录失败","用户名不存在");
        keynum->hide();
        keyinput->hide();
    }
    else if(str != password)
    {
        ui->le_passewd->setText("");
        ui->le_passewd->setFocus();
         MessageWidget * mess = new MessageWidget(this);
         connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
        mess->init("登录失败","密码错误");
        keynum->hide();
        keyinput->hide();
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

void Login::message_close()
{
    keynum->show();
}

void Login::on_btn_fast_login_clicked()
{
    emit previous(20);
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

void Login::receive_fast_login(QString name)
{
    ui->le_name->setText(name);
    ui->le_passewd->setFocus();
}
