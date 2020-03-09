#include "weight.h"
#include "ui_weight.h"

Weight::Weight(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Weight)
{
    ui->setupUi(this);
//    QGridLayout *gLayout = new QGridLayout;      //modified by gwd

//    gLayout->addWidget(ui->splitter,0,0,1,4,Qt::AlignCenter);
//    gLayout->addWidget(ui->splitter_2,1,0,1,4,Qt::AlignCenter);
//    gLayout->addWidget(ui->btn_backhome,2,0,1,1,Qt::AlignRight | Qt::AlignVCenter);
//    gLayout->addWidget(ui->btn_back,2,3,1,1,Qt::AlignLeft | Qt::AlignVCenter);
//    gLayout->setContentsMargins(10,31,5,10);
//    gLayout->setHorizontalSpacing(20);
//    setLayout(gLayout);

}

Weight::~Weight()
{
    delete ui;
}

void Weight::set_real_time_weight(const QString &rtw)
{
    ui->real_time_weight->setText(rtw);
}

void Weight::set_rated_weight(const QString &tw)
{
    ui->total_weight->setText(tw);
}

void Weight::set_total_times(const QString &tt)
{
    ui->total_times->setText(tt);
}

void Weight::set_ban_total_times(const QString &btt)
{
    ui->ban_total_times->setText(btt);
}

void Weight::on_btn_backhome_clicked()
{
    emit back_home(6);
}

void Weight::on_btn_back_clicked()
{
    emit previous(3);
}
