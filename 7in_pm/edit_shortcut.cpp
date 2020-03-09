#include "edit_shortcut.h"
#include "ui_edit_shortcut.h"

edit_shortcut::edit_shortcut(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::edit_shortcut)
{
    ui->setupUi(this);
    reset();

}

edit_shortcut::~edit_shortcut()
{
    delete ui;
}

void edit_shortcut::on_btn_back_home_clicked()
{
    emit back_home(6);
}

void edit_shortcut::on_btn_back_clicked()
{
    emit previous(24);
}

void edit_shortcut::on_l2_temper_clicked()
{
    ui->l3_temper->hide();
    ui->r2_temper->hide();
    ui->r3_temper->hide();

    ui->l2_engine->hide();
    ui->l2_gearbox->hide();
    ui->l2_liquid->hide();
    ui->l2_pressure->hide();
    ui->l2_weight->hide();

    ui->groupBox_4->show();

    l2 = 1;
}
void edit_shortcut::on_l3_temper_clicked()
{
    ui->l2_temper->hide();
    ui->r2_temper->hide();
    ui->r3_temper->hide();

    ui->l3_engine->hide();
    ui->l3_gearbox->hide();
    ui->l3_liquid->hide();
    ui->l3_pressure->hide();
    ui->l3_weight->hide();

    ui->groupBox_5->show();

    l3 = 1;
}
void edit_shortcut::on_r2_temper_clicked()
{
    ui->l2_temper->hide();
    ui->l3_temper->hide();
    ui->r3_temper->hide();

    ui->r2_engine->hide();
    ui->r2_gearbox->hide();
    ui->r2_liquid->hide();
    ui->r2_pressure->hide();
    ui->r2_weight->hide();

    ui->groupBox_6->show();

    r2 = 1;
}
void edit_shortcut::on_r3_temper_clicked()
{
    ui->l2_temper->hide();
    ui->l3_temper->hide();
    ui->r2_temper->hide();

    ui->r3_engine->hide();
    ui->r3_gearbox->hide();
    ui->r3_liquid->hide();
    ui->r3_pressure->hide();
    ui->r3_weight->hide();

    r3 = 1;
}

void edit_shortcut::on_l2_liquid_clicked()
{
    ui->l3_liquid->hide();
    ui->r2_liquid->hide();
    ui->r3_liquid->hide();

    ui->l2_engine->hide();
    ui->l2_gearbox->hide();
    ui->l2_pressure->hide();
    ui->l2_temper->hide();
    ui->l2_weight->hide();

    ui->groupBox_4->show();

    l2 = 2;
}
void edit_shortcut::on_l3_liquid_clicked()
{
    ui->l2_liquid->hide();
    ui->r2_liquid->hide();
    ui->r3_liquid->hide();

    ui->l3_engine->hide();
    ui->l3_gearbox->hide();
    ui->l3_pressure->hide();
    ui->l3_temper->hide();
    ui->l3_weight->hide();

    ui->groupBox_5->show();

    l3 = 2;
}
void edit_shortcut::on_r2_liquid_clicked()
{
    ui->l3_liquid->hide();
    ui->l2_liquid->hide();
    ui->r3_liquid->hide();

    ui->r2_engine->hide();
    ui->r2_gearbox->hide();
    ui->r2_pressure->hide();
    ui->r2_temper->hide();
    ui->r2_weight->hide();

    ui->groupBox_6->show();

    r2 = 2;
}
void edit_shortcut::on_r3_liquid_clicked()
{
    ui->l3_liquid->hide();
    ui->r2_liquid->hide();
    ui->l2_liquid->hide();

    ui->r3_engine->hide();
    ui->r3_gearbox->hide();
    ui->r3_pressure->hide();
    ui->r3_temper->hide();
    ui->r3_weight->hide();

    r3 = 2;
}

void edit_shortcut::on_l2_weight_clicked()
{
    ui->l3_weight->hide();
    ui->r2_weight->hide();
    ui->r3_weight->hide();

    ui->l2_engine->hide();
    ui->l2_gearbox->hide();
    ui->l2_liquid->hide();
    ui->l2_pressure->hide();
    ui->l2_temper->hide();

    ui->groupBox_4->show();

    l2 = 3;
}
void edit_shortcut::on_l3_weight_clicked()
{
    ui->l2_weight->hide();
    ui->r2_weight->hide();
    ui->r3_weight->hide();

    ui->l3_engine->hide();
    ui->l3_gearbox->hide();
    ui->l3_liquid->hide();
    ui->l3_pressure->hide();
    ui->l3_temper->hide();

    ui->groupBox_5->show();

    l3 = 3;
}
void edit_shortcut::on_r2_weight_clicked()
{
    ui->l3_weight->hide();
    ui->l2_weight->hide();
    ui->r3_weight->hide();

    ui->r2_engine->hide();
    ui->r2_gearbox->hide();
    ui->r2_liquid->hide();
    ui->r2_pressure->hide();
    ui->r2_temper->hide();

    ui->groupBox_6->show();

    r2 = 3;
}
void edit_shortcut::on_r3_weight_clicked()
{
    ui->l3_weight->hide();
    ui->r2_weight->hide();
    ui->l2_weight->hide();

    ui->r3_engine->hide();
    ui->r3_gearbox->hide();
    ui->r3_liquid->hide();
    ui->r3_pressure->hide();
    ui->r3_temper->hide();

    r3 = 3;
}

void edit_shortcut::on_l2_engine_clicked()
{
    ui->l3_engine->hide();
    ui->r2_engine->hide();
    ui->r3_engine->hide();

    ui->l2_gearbox->hide();
    ui->l2_liquid->hide();
    ui->l2_pressure->hide();
    ui->l2_temper->hide();
    ui->l2_weight->hide();

    ui->groupBox_4->show();

    l2 = 4;
}
void edit_shortcut::on_l3_engine_clicked()
{
    ui->l2_engine->hide();
    ui->r2_engine->hide();
    ui->r3_engine->hide();

    ui->l3_gearbox->hide();
    ui->l3_liquid->hide();
    ui->l3_pressure->hide();
    ui->l3_temper->hide();
    ui->l3_weight->hide();

    ui->groupBox_5->show();

    l3 = 4;
}
void edit_shortcut::on_r2_engine_clicked()
{
    ui->l3_engine->hide();
    ui->l2_engine->hide();
    ui->r3_engine->hide();

    ui->r2_gearbox->hide();
    ui->r2_liquid->hide();
    ui->r2_pressure->hide();
    ui->r2_temper->hide();
    ui->r2_weight->hide();

    ui->groupBox_6->show();

    r2 = 4;
}
void edit_shortcut::on_r3_engine_clicked()
{
    ui->l3_engine->hide();
    ui->r2_engine->hide();
    ui->l2_engine->hide();

    ui->r3_gearbox->hide();
    ui->r3_liquid->hide();
    ui->r3_pressure->hide();
    ui->r3_temper->hide();
    ui->r3_weight->hide();

    r3 = 4;
}

void edit_shortcut::on_l2_gearbox_clicked()
{
    ui->l3_gearbox->hide();
    ui->r2_gearbox->hide();
    ui->r3_gearbox->hide();

    ui->l2_engine->hide();
    ui->l2_liquid->hide();
    ui->l2_pressure->hide();
    ui->l2_temper->hide();
    ui->l2_weight->hide();

    ui->groupBox_4->show();

    l2 = 5;
}
void edit_shortcut::on_l3_gearbox_clicked()
{
    ui->l2_gearbox->hide();
    ui->r2_gearbox->hide();
    ui->r3_gearbox->hide();

    ui->l3_engine->hide();
    ui->l3_liquid->hide();
    ui->l3_pressure->hide();
    ui->l3_temper->hide();
    ui->l3_weight->hide();

    ui->groupBox_5->show();

    l3 = 5;
}
void edit_shortcut::on_r2_gearbox_clicked()
{
    ui->l3_gearbox->hide();
    ui->l2_gearbox->hide();
    ui->r3_gearbox->hide();

    ui->r2_engine->hide();
    ui->r2_liquid->hide();
    ui->r2_pressure->hide();
    ui->r2_temper->hide();
    ui->r2_weight->hide();

    ui->groupBox_6->show();

    r2 = 5;
}
void edit_shortcut::on_r3_gearbox_clicked()
{
    ui->l3_gearbox->hide();
    ui->r2_gearbox->hide();
    ui->l2_gearbox->hide();

    ui->r3_engine->hide();
    ui->r3_liquid->hide();
    ui->r3_pressure->hide();
    ui->r3_temper->hide();
    ui->r3_weight->hide();

    r3 = 5;
}

void edit_shortcut::on_l2_pressure_clicked()
{
    ui->l3_pressure->hide();
    ui->r2_pressure->hide();
    ui->r3_pressure->hide();

    ui->l2_engine->hide();
    ui->l2_gearbox->hide();
    ui->l2_liquid->hide();
    ui->l2_temper->hide();
    ui->l2_weight->hide();

    ui->groupBox_4->show();

    l2 = 6;
}
void edit_shortcut::on_l3_pressure_clicked()
{
    ui->l2_pressure->hide();
    ui->r2_pressure->hide();
    ui->r3_pressure->hide();

    ui->l3_engine->hide();
    ui->l3_gearbox->hide();
    ui->l3_liquid->hide();
    ui->l3_temper->hide();
    ui->l3_weight->hide();

    ui->groupBox_5->show();

    l3 = 6;
}
void edit_shortcut::on_r2_pressure_clicked()
{
    ui->l3_pressure->hide();
    ui->l2_pressure->hide();
    ui->r3_pressure->hide();

    ui->r2_engine->hide();
    ui->r2_gearbox->hide();
    ui->r2_liquid->hide();
    ui->r2_temper->hide();
    ui->r2_weight->hide();

    ui->groupBox_6->show();

    r2 = 6;
}
void edit_shortcut::on_r3_pressure_clicked()
{
    ui->l3_pressure->hide();
    ui->r2_pressure->hide();
    ui->l2_pressure->hide();

    ui->r3_engine->hide();
    ui->r3_gearbox->hide();
    ui->r3_liquid->hide();
    ui->r3_temper->hide();
    ui->r3_weight->hide();

    r3 = 6;
}

void edit_shortcut::reset()
{
    ui->l2_engine->setChecked(true);
    ui->l3_engine->setChecked(false);
    ui->r2_engine->setChecked(false);
    ui->r3_engine->setChecked(false);
    ui->l2_gearbox->setChecked(false);
    ui->l3_gearbox->setChecked(false);
    ui->r2_gearbox->setChecked(true);
    ui->r3_gearbox->setChecked(false);
    ui->l2_liquid->setChecked(false);
    ui->l3_liquid->setChecked(false);
    ui->r2_liquid->setChecked(false);
    ui->r3_liquid->setChecked(false);
    ui->l2_pressure->setChecked(false);
    ui->l3_pressure->setChecked(false);
    ui->r2_pressure->setChecked(false);
    ui->r3_pressure->setChecked(true);
    ui->l2_temper->setChecked(false);
    ui->l3_temper->setChecked(false);
    ui->r2_temper->setChecked(false);
    ui->r3_temper->setChecked(false);
    ui->l2_weight->setChecked(false);
    ui->l3_weight->setChecked(true);
    ui->r2_weight->setChecked(false);
    ui->r3_weight->setChecked(false);

    ui->l2_engine->show();
    ui->l2_gearbox->show();
    ui->l2_liquid->show();
    ui->l2_pressure->show();
    ui->l2_temper->show();
    if(is_weight==false)
    ui->l2_weight->show();

    ui->l3_engine->show();
    ui->l3_gearbox->show();
    ui->l3_liquid->show();
    ui->l3_pressure->show();
    ui->l3_temper->show();
    if(is_weight==false)
    ui->l3_weight->show();

    ui->r2_engine->show();
    ui->r2_gearbox->show();
    ui->r2_liquid->show();
    ui->r2_pressure->show();
    ui->r2_temper->show();
    if(is_weight==false)
    ui->r2_weight->show();

    ui->r3_engine->show();
    ui->r3_gearbox->show();
    ui->r3_liquid->show();
    ui->r3_pressure->show();
    ui->r3_temper->show();
    if(is_weight==false)
    ui->r3_weight->show();

    ui->groupBox_4->hide();
    ui->groupBox_5->hide();
    ui->groupBox_6->hide();

    l2 = 0;
    l3 = 0;
    r2 = 0;
    r3 = 0;
}

void edit_shortcut::change_weight()
{
    if(is_weight==true)
    {
        is_weight = false;
        ui->l2_weight->show();
        ui->l3_weight->show();
        ui->r2_weight->show();
        ui->r3_weight->show();

    }
    else
    {
        is_weight = true;
        ui->l2_weight->hide();
        ui->l3_weight->hide();
        ui->r2_weight->hide();
        ui->r3_weight->hide();
    }
}

void edit_shortcut::on_btn_reset_clicked()
{
    reset();
}

void edit_shortcut::on_btn_save_clicked()
{
    if( (l2 != 0)&&(l3 != 0)&&(r2 != 0)&&(r3 != 0))
    {
        emit edit_shortcut_save(l2,l3,r2,r3);
    }
    else
    {
        MessageWidget * mess = new MessageWidget(this);
        mess->init("操作失败","请完成全部选择");
    }
}
