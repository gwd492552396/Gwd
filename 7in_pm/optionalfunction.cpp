#include "optionalfunction.h"
#include "ui_optionalfunction.h"

OptionalFunction::OptionalFunction(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OptionalFunction)
{
    ui->setupUi(this);
    connect(ui->btn_edit,SIGNAL(clicked()),this,SLOT(on_edit_clicked()));
}

OptionalFunction::~OptionalFunction()
{
    delete ui;
}


void OptionalFunction::on_btn_back_home_clicked()
{
    emit back_home(6);
}

void OptionalFunction::on_btn_back_clicked()
{
    emit previous(22);
}

void OptionalFunction::on_ckb_weigh_clicked()
{
    emit weight();
}

void OptionalFunction::on_ckb_video_clicked()
{
    emit video();
}

void OptionalFunction::on_edit_clicked()
{
    emit slide_edit(28);
}
