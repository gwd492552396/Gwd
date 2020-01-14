#include "superuserpage.h"
#include "ui_superuserpage.h"

SuperUserPage::SuperUserPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SuperUserPage)
{

    ui->setupUi(this);
    Database_7in * db = new Database_7in();
    ui->le_limitspeed->setText(db->selectdata("车辆限速")+" km/h");
    ui->le_number->setText(db->selectdata("车架号"));
    text = new TextWidget(this);
    text->hide();
    connect(text,SIGNAL(senddata(QString,QString)),this,SLOT(receivedata(QString,QString)));
}

SuperUserPage::~SuperUserPage()
{
    delete ui;
}

void SuperUserPage::receivedata(QString name , QString number)
{
    if(name == "修改车辆限速")
        ui->le_limitspeed->setText(number+" km/h");
    else if (name == "修改车架号")
        ui->le_number->setText(number);
}

void SuperUserPage::on_btn_ybsz_clicked()
{
    emit ybsz(23);
}

void SuperUserPage::on_btn_kxgn_clicked()
{
    emit kxgn(24);
}
void SuperUserPage::on_btn_cxxz_clicked()
{
    emit cxxz(25);
}

void SuperUserPage::on_btn_czcs_clicked()
{
    emit czcs(26);
}
void SuperUserPage::on_btn_clear_clicked()
{

}
void SuperUserPage::on_btn_exit_clicked()
{
    emit exit(6);
}

void SuperUserPage::on_btn_back_clicked()
{
    emit previous(18);
}

void SuperUserPage::on_le_limitspeed_clicked()
{
        text->init("车辆限速");
}

void SuperUserPage::on_le_number_clicked()
{
        text->init("车架号");
}
