#include "weighingparameter.h"
#include "ui_weighingparameter.h"

WeighingParameter::WeighingParameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeighingParameter)
{
    ui->setupUi(this);
    text = new TextWidget(this);
    text->hide();
    Db = new Database_7in();
    ui->le_canshu->setText(Db->selectdata("标定参数"));
    ui->le_ry->setText(Db->selectdata("红黄分界值"));
    ui->le_yg->setText(Db->selectdata("黄绿分界值"));
    ui->le_weight->setText(Db->selectdata("额定载重量"));
    connect(text,SIGNAL(senddata(QString,QString)),this,SLOT(receivedata(QString,QString)));
}

WeighingParameter::~WeighingParameter()
{
    delete ui;
}

void WeighingParameter::on_btn_back_home_clicked()
{
    emit back_home(6);
}

void WeighingParameter::on_btn_back_clicked()
{
    emit previous(22);
}

void WeighingParameter::receivedata(QString name , QString number)
{
    if(name == "修改红黄分界值")
        ui->le_ry->setText(number);
    else if (name == "修改黄绿分界值")
        ui->le_yg->setText(number);
    else if (name == "修改标定参数")
        ui->le_canshu->setText(number);
    else if (name == "修改额定载重量")
        ui->le_weight->setText(number);
}

void WeighingParameter::on_le_ry_clicked()
{
    text->init("红黄分界值");
}

void WeighingParameter::on_le_yg_clicked()
{
    text->init("黄绿分界值");
}

void WeighingParameter::on_le_canshu_clicked()
{
    text->init("标定参数");
}

void WeighingParameter::on_le_weight_clicked()
{

    text->init("额定载重量");
}
