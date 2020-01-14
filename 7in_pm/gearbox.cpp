#include "gearbox.h"
#include "ui_gearbox.h"

gearbox::gearbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gearbox)
{
    ui->setupUi(this);
}

gearbox::~gearbox()
{
    delete ui;
}


void gearbox::on_btn_back_clicked()
{
    emit previous(2);
}

void gearbox::set_gearbox_rate(const QString &gr)
{
    ui->gearbox_rate->setText(gr);
}

void gearbox::set_gearbox_in_rev(const QString &gi)
{
    ui->gearbox_in_rev->setText(gi);
}

void gearbox::set_gearbox_out_rev(const QString &go)
{
    ui->gearbox_out_rev->setText(go);
}
