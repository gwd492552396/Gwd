#include "power.h"
#include "ui_power.h"

Power::Power(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Power)
{
    ui->setupUi(this);
//    QGridLayout *gLayout = new QGridLayout;                 //modified by gwd
//    gLayout->addWidget(ui->widget,0,0,1,1);
//    gLayout->addWidget(ui->widget_2,0,1,1,1);
//    gLayout->addWidget(ui->widget_3,0,2,1,1);
//    gLayout->addWidget(ui->widget_4,0,3,1,1);
//    gLayout->addWidget(ui->widget_5,1,0,1,1);
//    gLayout->addWidget(ui->widget_6,1,1,1,1);
//    gLayout->addWidget(ui->widget_7,1,2,1,1);
//    gLayout->addWidget(ui->widget_8,1,3,1,1);
// //    gLayout->addWidget(ui->sign,2,0,1,3,Qt::AlignLeft| Qt::AlignVCenter);
// //    gLayout->addWidget(ui->btn_back,2,3,1,1,Qt::AlignRight | Qt::AlignVCenter);
// //    gLayout->addLayout(ui->horizontalLayout,2,0,1,4);
//    gLayout->setContentsMargins(55,40,50,90);
//    gLayout->setHorizontalSpacing(10);
//    gLayout->setVerticalSpacing(10);
//    setLayout(gLayout);
}

Power::~Power()
{
    delete ui;
}

void Power::set_power_battery_voltage(const QString &pbv)
{
    ui->dong_power_v->setText(pbv);
}

void Power::set_power_battery_current(const QString &pbc)
{
    ui->dong_power_a->setText(pbc);
}

void Power::set_soc(const QString &soc)
{
    ui->soc->setText(soc);
}

void Power::set_bms_state(const QString &bms)
{
    ui->bms->setText(bms);
}

void Power::set_max_current(const QString &mc)
{
    ui->max_power_a->setText(mc);
}

void Power::set_max_power(const QString &mp)
{
    ui->max_kw->setText(mp);
}

void Power::set_max_voltage(const QString &mv)
{
    ui->max_power_v->setText(mv);
}

void Power::set_charing(const QString &charing)
{
    ui->power_state->setText(charing);
}

void Power::on_btn_back_clicked()
{
    emit previous(5);
}
