#include "driverpower.h"
#include "ui_driverpower.h"

DriverPower::DriverPower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DriverPower)
{
    ui->setupUi(this);
 //   QGridLayout *gLayout = new QGridLayout;
//  //    ui->formLayout->setParent(gLayout);            //modified by gwd
//    gLayout->addWidget(ui->widget,0,0,1,1);
//    gLayout->addWidget(ui->widget_2,0,1,1,1);
//    gLayout->addWidget(ui->widget_3,0,2,1,1);
//    gLayout->addWidget(ui->widget_4,0,3,1,1);
//    gLayout->addWidget(ui->widget_5,1,0,1,1);
//    gLayout->addWidget(ui->widget_6,1,1,1,1);
//  //    gLayout->addLayout(ui->formLayout,1,2,1,2);
//    gLayout->setContentsMargins(50,30,50,70);
//    gLayout->setHorizontalSpacing(10);
//    gLayout->setVerticalSpacing(10);
//    setLayout(gLayout);
//    ui->work_mode->setAlignment(Qt::AlignCenter);
//    ui->work_mode->setReadOnly(true);
//    ui->running_state->setAlignment(Qt::AlignCenter);
//    ui->running_state->setReadOnly(true);
//    ui->falut_state->setAlignment(Qt::AlignCenter);
//    ui->falut_state->setReadOnly(true);
//    ui->em_direction->setAlignment(Qt::AlignCenter);
//    ui->em_direction->setReadOnly(true);
    set_direct_current("100");
    set_work_mode("正常");

}

DriverPower::~DriverPower()
{
    delete ui;
}

void DriverPower::set_direct_current(const QString &dc)
{
    ui->direct_current->setText(dc);
}

void DriverPower::set_real_torque(const QString &torque)
{
    ui->real_torque->setText(torque);
}

void DriverPower::set_real_rev(const QString &rev)
{
    ui->real_rev->setText(rev);
}

void DriverPower::set_em_control_input(const QString &emc)
{
    ui->emc_input_v->setText(emc);
}

void DriverPower::set_driver_mc_control(const QString &dmc)
{
    ui->driver_control_temp->setText(dmc);
}

void DriverPower::set_driver_temper(const QString &dt)
{
    ui->driver_temper->setText(dt);
}

void DriverPower::set_work_mode(const QString &wm)
{
    ui->work_mode->setText(wm);
}

void DriverPower::set_running_state(const QString &rs)
{
    ui->running_state->setText(rs);
}

void DriverPower::set_falut_state(const QString &fs)
{
    ui->falut_state->setText(fs);
}

void DriverPower::set_mc_direction(const QString &mcd)
{
    ui->em_direction->setText(mcd);
}

void DriverPower::on_btn_back_clicked()
{
    emit previous(2);
}
