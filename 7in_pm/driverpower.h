#ifndef DRIVERPOWER_H
#define DRIVERPOWER_H

#include <QWidget>

namespace Ui {
class DriverPower;
}

class DriverPower : public QWidget
{
    Q_OBJECT

public:
    explicit DriverPower(QWidget *parent = 0);
    ~DriverPower();

signals:
    void previous(int);
private slots:
    void on_btn_back_clicked();

    void set_direct_current(const QString &dc);
    void set_real_torque(const QString &torque);
    void set_real_rev(const QString &rev);
    void set_em_control_input(const QString &emc);
    void set_driver_mc_control(const QString &dmc);
    void set_driver_temper(const QString &dt);
    void set_work_mode(const QString &wm );
    void set_running_state(const QString &rs);
    void set_falut_state(const QString &fs);
    void set_mc_direction(const QString &mcd);

private:
    Ui::DriverPower *ui;
};

#endif // DRIVERPOWER_H
