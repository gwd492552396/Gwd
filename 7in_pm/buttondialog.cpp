#include "buttondialog.h"
#include "ui_buttondialog.h"
#include <QMessageBox>


ButtonDialog::ButtonDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ButtonDialog)
{
    ui->setupUi(this);
}

ButtonDialog::~ButtonDialog()
{
    delete ui;
}

void ButtonDialog::init(int f)
{
    flag = f;
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    if(flag == 1)
    {
        ui->btn1->setText("中文");
        ui->btn2->setText("英文");
    }
    else if(flag == 2)
    {
        ui->btn1->setText("公制");
        ui->btn2->setText("英制");
    }
    else if (flag == 3)
    {
        ui->btn1->setText("康明斯");
        ui->btn2->setText("");
    }
    else if (flag == 4)
    {
        ui->btn1->setText("艾里逊");
        ui->btn2->setText("");
    }
    this->exec();
}


void ButtonDialog::on_btn1_clicked()
{
    if(flag == 1)
    {
        QMessageBox::about(NULL,tr("a"),tr("中文"));
        this->close();
    }
    else if(flag == 2)
    {
        QMessageBox::about(NULL,tr("a"),tr("公制"));
        this->close();
    }
}

void ButtonDialog::on_btn2_clicked()
{
    if(flag == 1){
    QMessageBox::about(NULL,tr("a"),tr("英文"));
    this->close();
    }
    else if(flag == 2){
    QMessageBox::about(NULL,tr("a"),tr("英制"));
    this->close();
    }
}
