#include "management.h"
#include "ui_management.h"

Management::Management(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Management)
{
    ui->setupUi(this);


    g = new QButtonGroup ();
    g->addButton(ui->pushButton_1,0);
    g->addButton(ui->pushButton_2,1);
    g->addButton(ui->pushButton_3,2);
    g->addButton(ui->pushButton_4,3);
    g->addButton(ui->pushButton_5,4);
    g->addButton(ui->pushButton_6,5);
    g->addButton(ui->pushButton_7,6);
    g->addButton(ui->pushButton_8,7);
    g->setExclusive(true);
    DB = new Database_7in();
    list = DB->getalluser();

    btnlist<<ui->pushButton_1<<ui->pushButton_2<<ui->pushButton_3<<ui->pushButton_4<<ui->pushButton_5<<ui->pushButton_6<<ui->pushButton_7<<ui->pushButton_8;

    labellist << ui->label_1<<ui->label_2<<ui->label_3<<ui->label_4<<ui->label_5<<ui->label_6<<ui->label_7<<ui->label_8;
    int i = 0;
    for(i = 0;i<list.size();i++)
    {
        QString s = list.at(i);
        btnlist.at(i)->setEnabled(true);
        labellist.at(i)->setText(s);
        qDebug()<<s;
    }
    for(;i<8;i++)
    {
        btnlist.at(i)->setEnabled(false);
        labellist.at(i)->setText("null");
        labellist.at(i)->setEnabled(false);
        labellist.at(i)->setStyleSheet("font: 18px Microsoft YaHei UI ;color: rgb(78, 78, 78); background:transparent");
    }
   // connect(g,SIGNAL(buttonClicked(int)),this,SLOT(on_changeButtonGroup(int)));
}

Management::~Management()
{
    delete ui;
}

void Management::on_btn_add_clicked()
{
    if(list.size() == 8)
    {
        MessageWidget *mess = new MessageWidget();
        mess->init("创建失败","用户数量已达上限");
        return;
    }
    emit add(21);
}

void Management::on_btn_del_clicked()
{
    if(list.size() == 0)
    {
        MessageWidget *mess = new MessageWidget();
        mess->init("删除失败","没有其他用户");
        return;
    }
   // Database_7in * db = new Database_7in();            //modified by gwd
    int id = g->checkedId();
    qDebug()<<labellist.at(id)->text();
    QString username = labellist.at(id)->text();
   //db->deleteUser(username);
    DB->deleteUser(username);
    MessageWidget * mess = new MessageWidget(this);
    mess->init("删除成功","用户"+username+"已删除");
    // list = db->getalluser();
    list = DB->getalluser();
    int i = 0;
    for(i = 0;i<list.size();i++)
    {
        QString s = list.at(i);
        btnlist.at(i)->setEnabled(true);
        labellist.at(i)->setText(s);
    }
    for(;i<8;i++)
    {
        btnlist.at(i)->setEnabled(false);
        labellist.at(i)->setText("null");
        labellist.at(i)->setEnabled(false);
        labellist.at(i)->setStyleSheet("font: 18px Microsoft YaHei UI ;color: rgb(78, 78, 78);background:transparent");
    }
}

void Management::receive()
{
    log("management received");
    //Database_7in * db;
    //list = db->getalluser();
    list = DB->getalluser();
    int i = 0;
    for(i = 0;i<list.size();i++)
    {
        QString s = list.at(i);
        btnlist.at(i)->setEnabled(true);
        labellist.at(i)->setText(s);
        labellist.at(i)->setStyleSheet("font: 18px Microsoft YaHei UI ;color: rgb(255, 255, 255);background:transparent");
    }
    for(;i<8;i++)
    {
        btnlist.at(i)->setEnabled(false);
        labellist.at(i)->setText("null");
        labellist.at(i)->setEnabled(false);
        labellist.at(i)->setStyleSheet("font: 18px Microsoft YaHei UI ;color: rgb(78, 78, 78);background:transparent");
    }
}


void Management::on_btn_back_clicked()
{
    emit previous(18);
}
