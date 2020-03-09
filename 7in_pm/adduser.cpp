    #include "adduser.h"
    #include "ui_adduser.h"

    #include <QMessageBox>

    AddUser::AddUser(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::AddUser)
    {
        ui->setupUi(this);
          keyinput = frmInput::Instance();
          keynum = frmNum::Instance();
          keyinput->move(350,354);
          keynum->move(410,354);
//        keynum->setVisible(false);         //modified by gwd
//        keyinput->setVisible(true);

        ui->le_name->setMaximumWidth(120);
        ui->le_passwd->setMaximumWidth(120);
        ui->le_passwd2->setMaximumWidth(120);

       // ui->le_name->activateWindow();
        ui->le_name->setFocus();

        connect(keynum,SIGNAL(change(int)),this,SLOT(receive(int)));
        connect(keyinput,SIGNAL(change(int)),this,SLOT(receive(int)));
        Db = new Database_7in();

    }

    AddUser::~AddUser()
    {
        delete ui;
    }


    void AddUser::on_btn_create_clicked()
    {
        username = ui->le_name->text().trimmed();
        password = ui->le_passwd->text().trimmed();
        QString str = "";

        if(username.isEmpty() || password.isEmpty())
        {
            MessageWidget *mess = new MessageWidget();
            connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
            mess->init("创建失败","请输入用户名和密码");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            keyinput->hide();
            keynum->hide();
            return;
        }
        else if (username.length()!= 6 || password.length() != 6)
        {
            MessageWidget *mess = new MessageWidget();
            mess->init("创建失败","用户名或密码长度错误");
            connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            keyinput->hide();
            keynum->hide();
            return;
        }
        else if(Db->CheckUsername(username,str) != -1)
        {
            MessageWidget *mess = new MessageWidget(this);
            mess->init("创建失败","用户名已存在");
            connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            keyinput->hide();
            keynum->hide();
            return;
        }
        else if (password != ui->le_passwd2->text().trimmed())
        {
            MessageWidget *mess = new MessageWidget();
            connect(mess,SIGNAL(message_close()),this,SLOT(message_close()));
            mess->init("创建失败","两次输入密码不同");
            ui->le_passwd2->setText("");
            ui->le_passwd2->setFocus();
            keyinput->hide();
            keynum->hide();
            return;
        }
        else
        {
            Db->insertuser(username,password);
            MessageWidget *mess = new MessageWidget();
            mess->init("创建成功","用户"+username+"已创建");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            emit send();
            emit previous(20);
        }

    }

    void AddUser::on_btn_back_clicked()
    {
        emit previous(20);
    }
void AddUser::receive(int i)
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


void AddUser::message_close()
{
    keyinput->show();
}
