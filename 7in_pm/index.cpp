#include "index.h"
#include "ui_index.h"

Index::Index(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Index)
{
    ui->setupUi(this);
//    QGridLayout *gLayout = new QGridLayout;                                 //modified by gwd

//    gLayout->addWidget(ui->splitter_2,0,0,1,3,Qt::AlignCenter);
//    gLayout->addWidget(ui->splitter,1,0,1,3,Qt::AlignCenter);
//    gLayout->addWidget(ui->btn_control,2,2,1,1,Qt::AlignRight | Qt::AlignVCenter);
//    gLayout->addWidget(ui->power_widget,0,2,1,1,Qt::AlignRight	| Qt::AlignVCenter);
//    gLayout->setContentsMargins(10,60,5,10);
//    gLayout->setHorizontalSpacing(20);
//    setLayout(gLayout);
    ui->power_bar->hide();
    ui->widget_6->hide();
    power_changed("8");
}

Index::~Index()
{
    delete ui;
}

void Index::power_changed(const QString &current_power)
{
    ui->power_bar->setValue(current_power.toFloat());
    if(current_power.toFloat() <= 20)
    {
        ui->power_bar->setStyleSheet("QProgressBar#power_bar{border:none;color:white;font: 75 8pt MicrosoftYaHeiUI;text-align:center;background:rgb(125, 125, 125);}QProgressBar#power_bar::chunk {border:none;font: 75 8pt MicrosoftYaHeiUI; background:red;}");
    }
    else
    {
        ui->power_bar->setStyleSheet("QProgressBar#power_bar{border:none;color:white;font: 75 8pt MicrosoftYaHeiUI;text-align:center;background:rgb(125, 125, 125);}QProgressBar#power_bar::chunk {border:none;font: 75 8pt MicrosoftYaHeiUI; background:rgb(0,160,230);}");
    }
}

void Index::set_speedup_percent(const QString &sp)
{
    ui->jia_su->setText(sp);
}

void Index::set_slowdown_percent(const QString &sd)
{
    ui->huan_xing->setText(sd);
}

void Index::set_battery_voltage(const QString &bv)
{
    ui->battery_vol->setText(bv);
}

void Index::set_gear_rate(const QString &ip)
{
    ui->gearbox->setText(ip);
}

void Index::set_engine_rev(const QString &tp)
{
    ui->engine_rev->setText(tp);
}

void Index::on_btn_control_clicked()
{
    emit control_page(3);
}
