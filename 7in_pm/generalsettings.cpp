#include "generalsettings.h"
#include "ui_generalsettings.h"
#include <QPalette>
#include <QGridLayout>

GeneralSettings::GeneralSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GeneralSettings)
{
    ui->setupUi(this);
    text = new TextWidget(this);

    text->hide();
    time = new timewidget(this);
    time->hide();
    light = new LightWidget(this);
    light->hide();
    connect(light,SIGNAL(light_changed(QString)),this,SLOT(set_light(QString)));
    Db = new Database_7in();
    ui->le_carnum->setText(Db->selectdata("车辆代号"));
    ui->le_drivernum->setText(Db->selectdata("司机代号"));
    ui->le_limit->setText(Db->selectdata("超速预警预设值") +" km/h");
    ui->le_weigh->setText(Db->selectdata("称重参数"));
    ui->btn_bright->setText(Db->selectdata("屏幕亮度")+"0");
    ui->btn_bright->hide();
    ui->label_3->hide();
    ui->ckb_autobri->isChecked();
    QDateTime t;
    ui->btn_time->setText(t.currentDateTime().toString("M")+"月"+t.currentDateTime().toString("d")+"日 "+t.currentDateTime().toString("h")+":"+t.currentDateTime().toString("m"));
    connect(text,SIGNAL(senddata(QString,QString)),this,SLOT(receivedata(QString,QString)));
    connect(time,SIGNAL(senddata(QString,QString)),this,SLOT(receivedata(QString,QString)));
    connect(ui->ckb_autobri,SIGNAL(stateChanged(int)),this,SLOT(ckb_autobri_change(int)));


    QTimer *timer1 = new QTimer;
    connect(timer1, SIGNAL(timeout()),this,SLOT(set_sys_value()));
    timer1->start(100); // 每隔1s

}


void GeneralSettings::set_sys_value()
{
    //获取系统现在的时间
    QTime time = QTime::currentTime();
    QDate date = QDate::currentDate();
    //设置系统时间显示格式
    QString str = time.toString("hh:mm");
    QString d = date.toString("MM月dd日");
ui->btn_time->setText(d+str);
}

GeneralSettings::~GeneralSettings()
{
    delete ui;
}

void GeneralSettings::receivedata(QString name, QString number)
{
    if(name == "修改司机代号")
        ui->le_drivernum->setText(number);
    else if (name == "修改车辆代号")
        ui->le_carnum->setText(number);
    else if (name == "修改称重参数")
        ui->le_weigh->setText(number);
    else if (name == "修改超速预警预设值")
        ui->le_limit->setText(number +" km/h");
    else if (name == "时间")
        ui->btn_time->setText(number);
}

void GeneralSettings::loginstatus(int f)
{
    flag = f;
}

void GeneralSettings::ckb_autobri_change(int state)
{
    switch (state) {
    case 0:
        ui->btn_bright->show();
        ui->label_3->show();
        emit ckb_autobri(false);
        break;
    case 2:
        ui->btn_bright->hide();
        ui->label_3->hide();
        emit ckb_autobri(true);
    default:
        break;
    }
}

void GeneralSettings::on_btn_lang_clicked()
{

    ButtonWidget * wid = new ButtonWidget(this);
    wid->init(1);
}

void GeneralSettings::on_btn_unit_clicked()
{

    ButtonWidget * wid = new ButtonWidget(this);
    wid->init(2);
}

void GeneralSettings::on_btn_bright_clicked()
{

    light->show();
    //QMessageBox::about(this,tr("亮度"),tr(""));

}

void GeneralSettings::on_btn_time_clicked()
{
    time->init();
    time->show();
}

void GeneralSettings::on_btn_back_home_clicked()
{
    emit back_home(6);
}

void GeneralSettings::on_btn_back_clicked()
{
    if(flag == 0)
        emit previous(22);
    else
        emit previous(18);
}


void GeneralSettings::set_light(QString value)

{
    log("get the light");
    ui->btn_bright->setText(value);
}

void GeneralSettings::on_le_drivernum_clicked()
{ 
    text->init("司机代号");

}

void GeneralSettings::on_le_carnum_clicked()
{
    text->init("车辆代号");

}

void GeneralSettings::on_le_weigh_clicked()
{
    text->init("称重参数");

}

void GeneralSettings::on_le_limit_clicked()
{
    text->init("超速预警预设值");

}
