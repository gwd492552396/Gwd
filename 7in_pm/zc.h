#ifndef ZC_H
#define ZC_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class ZC;
}

class ZC : public QWidget
{
    Q_OBJECT

public:
    explicit ZC(QWidget *parent = 0);
    ~ZC();


signals:
    void temperate(int);
    void pressure(int);
    void liquid(int);
    void gear_box(int);
//    void isg(int);
//    void Tm(int);
    void enigne(int);
    void back_home(int);
    void previous(int);
private slots:
    void on_btn_temp_clicked();

    void on_btn_pressure_clicked();

    void on_btn_liquid_clicked();

//    void on_btn_isg_clicked();

//    void on_btn_tm_clicked();

    void on_btn_engine_clicked();
    void on_btn_gearbox_clicked();

    void on_btn_backhome_clicked();

    void on_btn_back_clicked();



private:
    Ui::ZC *ui;
};

#endif // ZC_H
