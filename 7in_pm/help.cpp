#include "help.h"
#include "ui_help.h"

Help::Help(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
}

Help::~Help()
{
    delete ui;
}

void Help::edit_shortcut_save(int l2,int l3,int r2,int r3)
{
    switch (l2) {
    case 1:
        ui->l_2->setText("温度信息");
        break;
    case 2:
        ui->l_2->setText("液位信息");
        break;
    case 3:
        ui->l_2->setText("称重系统");
        break;
    case 4:
        ui->l_2->setText("发动机信息");
        break;
    case 5:
        ui->l_2->setText("变速箱信息");
        break;
    case 6:
        ui->l_2->setText("压力信息");
        break;
    default:
        break;
    }

    switch (l3) {
    case 1:
        ui->l_3->setText("温度信息");
        break;
    case 2:
        ui->l_3->setText("液位信息");
        break;
    case 3:
        ui->l_3->setText("称重系统");
        break;
    case 4:
        ui->l_3->setText("发动机信息");
        break;
    case 5:
        ui->l_3->setText("变速箱信息");
        break;
    case 6:
        ui->l_3->setText("压力信息");
        break;
    default:
        break;
    }

    switch (r2) {
    case 1:
        ui->r_2->setText("温度信息");
        break;
    case 2:
        ui->r_2->setText("液位信息");
        break;
    case 3:
        ui->r_2->setText("称重系统");
        break;
    case 4:
        ui->r_2->setText("发动机信息");
        break;
    case 5:
        ui->r_2->setText("变速箱信息");
        break;
    case 6:
        ui->r_2->setText("压力信息");
        break;
    default:
        break;
    }

    switch (r3) {
    case 1:
        ui->r_3->setText("温度信息");
        break;
    case 2:
        ui->r_3->setText("液位信息");
        break;
    case 3:
        ui->r_3->setText("称重系统");
        break;
    case 4:
        ui->r_3->setText("发动机信息");
        break;
    case 5:
        ui->r_3->setText("变速箱信息");
        break;
    case 6:
        ui->r_3->setText("压力信息");
        break;
    default:
        break;
    }
}
