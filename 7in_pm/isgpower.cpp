#include "isgpower.h"
#include "ui_isgpower.h"

IsgPower::IsgPower(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IsgPower)
{
    ui->setupUi(this);
//    QGridLayout *gLayout = new QGridLayout;          //modified by gwd
// //   ui->formLayout->setParent(gLayout);
//    gLayout->addWidget(ui->widget,0,0,1,1);
//    gLayout->addWidget(ui->widget_2,0,1,1,1);
//    gLayout->addWidget(ui->widget_3,0,2,1,1);
//    gLayout->addWidget(ui->widget_4,0,3,1,1);
//    gLayout->addWidget(ui->widget_5,1,0,1,1);
//    gLayout->addWidget(ui->widget_6,1,1,1,1);
// //    gLayout->addLayout(ui->formLayout,1,2,1,2);
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

IsgPower::~IsgPower()
{
    delete ui;
}

void IsgPower::set_direct_current(const QString &dc)
{
    ui->direct_current->setText(dc);
}

void IsgPower::set_real_torque(const QString &torque)
{
    ui->real_torque->setText(torque);
}

void IsgPower::set_real_rev(const QString &rev)
{
    ui->real_rev->setText(rev);
}

void IsgPower::set_em_control_input(const QString &emc)
{
    ui->emc_input_v->setText(emc);
}

void IsgPower::set_isg_mc_control(const QString &imc)
{
    ui->isg_control_temp->setText(imc);
}

void IsgPower::set_driver_temper(const QString &dt)
{
    ui->driver_temper->setText(dt);
}

void IsgPower::set_work_mode(const QString &wm)
{
    ui->work_mode->setText(wm);
}

void IsgPower::set_running_state(const QString &rs)
{
    ui->running_state->setText(rs);
}

void IsgPower::set_falut_state(const QString &fs)
{
    ui->falut_state->setText(fs);
}

void IsgPower::set_mc_direction(const QString &mcd)
{
    ui->em_direction->setText(mcd);
}

void IsgPower::on_btn_back_clicked()
{
    emit previous(2);
}
