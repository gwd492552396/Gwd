#ifndef EDIT_SHORTCUT_H
#define EDIT_SHORTCUT_H

#include <QWidget>
#include <messagewidget.h>

namespace Ui {
class edit_shortcut;
}

class edit_shortcut : public QWidget
{
    Q_OBJECT

public:
    explicit edit_shortcut(QWidget *parent = 0);
    ~edit_shortcut();

private slots:
    void on_btn_back_home_clicked();
    void on_btn_back_clicked();

    void change_weight();

    void on_l2_temper_clicked();
    void on_l3_temper_clicked();
    void on_r2_temper_clicked();
    void on_r3_temper_clicked();

    void on_l2_liquid_clicked();
    void on_l3_liquid_clicked();
    void on_r2_liquid_clicked();
    void on_r3_liquid_clicked();

    void on_l2_weight_clicked();
    void on_l3_weight_clicked();
    void on_r2_weight_clicked();
    void on_r3_weight_clicked();

    void on_l2_engine_clicked();
    void on_l3_engine_clicked();
    void on_r2_engine_clicked();
    void on_r3_engine_clicked();

    void on_l2_gearbox_clicked();
    void on_l3_gearbox_clicked();
    void on_r2_gearbox_clicked();
    void on_r3_gearbox_clicked();

    void on_l2_pressure_clicked();
    void on_l3_pressure_clicked();
    void on_r2_pressure_clicked();
    void on_r3_pressure_clicked();

    void on_btn_reset_clicked();
    void on_btn_save_clicked();

signals:
    void back_home(int);
    void previous(int);
    void edit_shortcut_save(int,int,int,int);


private:
    Ui::edit_shortcut *ui;
    void reset();
    bool is_weight = false;
    int l2,l3,r2,r3 = 0;
};

#endif // EDIT_SHORTCUT_H
