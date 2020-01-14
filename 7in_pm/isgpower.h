#ifndef ISGPOWER_H
#define ISGPOWER_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class IsgPower;
}

class IsgPower : public QWidget
{
    Q_OBJECT

public:
    explicit IsgPower(QWidget *parent = 0);
    ~IsgPower();

signals:
    void previous(int);

private slots:
    void on_btn_back_clicked();

    void set_direct_current(const QString &dc);
    void set_real_torque(const QString &torque);
    void set_real_rev(const QString &rev);
    void set_em_control_input(const QString &emc);
    void set_isg_mc_control(const QString &imc);
    void set_driver_temper(const QString &dt);
    void set_work_mode(const QString &wm );
    void set_running_state(const QString &rs);
    void set_falut_state(const QString &fs);
    void set_mc_direction(const QString &mcd);

private:
    Ui::IsgPower *ui;
};

#endif // ISGPOWER_H
