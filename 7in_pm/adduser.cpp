    #include "adduser.h"
    #include "ui_adduser.h"

    #include <QMessageBox>

    AddUser::AddUser(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::AddUser)
    {
        ui->setupUi(this);
//        QGridLayout *glayout = new QGridLayout;
//        QGridLayout *g1 = new QGridLayout;
//        keynum = new frmNum();
//        keyinput = new frmInput();
          keyinput = frmInput::Instance();
          keynum = frmNum::Instance();
          keyinput->move(410,354);
          keynum->move(410,354);
//        keynum->setVisible(false);         //modified by gwd
//        keyinput->setVisible(true);

        ui->le_name->setMaximumWidth(120);
        ui->le_passwd->setMaximumWidth(120);
        ui->le_passwd2->setMaximumWidth(120);

        ui->le_name->setFocus();


//        glayout->addWidget(ui->label_tubiao,0,0,3,1,Qt::AlignRight);                      //modified by gwd
//        glayout->addWidget(ui->label_name,0,1,1,1,Qt::AlignRight);
//        glayout->addWidget(ui->label_passwd,1,1,1,1,Qt::AlignRight);
//        glayout->addWidget(ui->label_passwd2,2,1,1,1,Qt::AlignRight);
//        glayout->addWidget(ui->le_name,0,2,1,1,Qt::AlignLeft);
//        glayout->addWidget(ui->le_passwd,1,2,1,1,Qt::AlignLeft);
//        glayout->addWidget(ui->le_passwd2,2,2,1,1,Qt::AlignLeft);
//        glayout->setHorizontalSpacing(15);
//        glayout->setVerticalSpacing(10);

//        g1->addLayout(glayout,0,0,1,3,Qt::AlignHCenter);
//        g1->addWidget(keynum,1,0,2,3,Qt::AlignHCenter | Qt::AlignVCenter);
//        g1->addWidget(keyinput,1,0,2,3,Qt::AlignHCenter | Qt::AlignVCenter);
//        g1->addWidget(ui->btn_back,2,2,1,1,Qt::AlignRight | Qt::AlignVCenter);
//        g1->addWidget(ui->btn_create,2,0,1,1,Qt::AlignLeft | Qt::AlignVCenter);

//        g1->setHorizontalSpacing(20);
//        g1->setVerticalSpacing(5);
//        g1->setContentsMargins(20,30,20,10);

//        setLayout(g1);
        connect(keynum,SIGNAL(change(int)),this,SLOT(receive(int)));
        connect(keyinput,SIGNAL(change(int)),this,SLOT(receive(int)));
        Db = new Database_7in();
        mess = new MessageWidget();
        mess->hide();
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
        emit log("Adduser:\n"+username+"\n"+password+"\n"+"\n");                 //added by gwd for log
        if(username.isEmpty() || password.isEmpty())
        {
            mess->init("创建失败","请输入用户名和密码");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            return;
        }
        else if (username.length()!= 6 || password.length() != 6)
        {
            mess->init("创建失败","用户名或密码长度错误");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            return;
        }
        else if(Db->CheckUsername(username,str) != -1)
        {
            mess->init("创建失败","用户名已存在");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            return;
        }
        else if (password != ui->le_passwd2->text().trimmed())
        {
            mess->init("创建失败","两次输入密码不同");
            ui->le_passwd2->setText("");
            ui->le_passwd2->setFocus();
            return;
        }
        else
        {
            Db->insertuser(username,password);
            mess->init("创建成功","用户"+username+"已创建");
            ui->le_name->setText("");
            ui->le_passwd->setText("");
            ui->le_passwd2->setText("");
            ui->le_name->setFocus();
            emit log("open database result:"+QString::number(Db->result1,10)+"\n");
            emit log("insert user result:"+QString::number(Db->result,10)+"\n");
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

void AddUser::logout(QString s)
{
    emit log(s);
}
