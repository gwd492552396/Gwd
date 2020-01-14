#include "zc.h"
#include "ui_zc.h"

ZC::ZC(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZC)
{
    ui->setupUi(this);
//    QGridLayout *gLayout = new QGridLayout;                       //modified by gwd
//    gLayout->addWidget(ui->btn_temp,0,0,1,1);
//    gLayout->addWidget(ui->btn_pressure,0,1,1,1);
//    gLayout->addWidget(ui->total_hours,0,2,1,2);
//    gLayout->addWidget(ui->btn_liquid,1,0,1,1);
//    gLayout->addWidget(ui->btn_isg,1,1,1,1);
//    gLayout->addWidget(ui->btn_tm,1,2,1,1);
//    gLayout->addWidget(ui->btn_engine,1,3,1,1);
//    gLayout->addWidget(ui->btn_backhome,2,0,1,1,Qt::AlignLeft|Qt::AlignVCenter);
//    gLayout->addWidget(ui->btn_back,2,3,1,1,Qt::AlignLeft | Qt::AlignVCenter);
//    gLayout->setContentsMargins(41,20,41,10);

//    gLayout->setHorizontalSpacing(20);
//    setLayout(gLayout);
}

ZC::~ZC()
{
    delete ui;
}

void ZC::set_enigne_total_hours(const QString &eth)
{
    ui->enegin_hours->setText(eth);
}

void ZC::on_btn_temp_clicked()
{
    emit temperate(9);
}

void ZC::on_btn_pressure_clicked()
{
    emit pressure(10);
}

void ZC::on_btn_liquid_clicked()
{
    emit liquid(13);
}

//void ZC::on_btn_isg_clicked()
//{
//    emit isg(11);
//}

//void ZC::on_btn_tm_clicked()
//{
//    emit Tm(12);
//}

void ZC::on_btn_engine_clicked()
{
    emit enigne(8);
}

void ZC::on_btn_gearbox_clicked()
{
    emit gear_box(27);
}

void ZC::on_btn_backhome_clicked()
{
    emit back_home(3);
}

void ZC::on_btn_back_clicked()
{
    emit previous(5);
}
