#ifndef POWER_H
#define POWER_H

#include <QWidget>
#include <QGridLayout>
namespace Ui {
class Power;
}

class Power : public QWidget
{
    Q_OBJECT

public:
    explicit Power(QWidget *parent = 0);
    ~Power();

signals:
    void previous(int);
private slots:
    void on_btn_back_clicked();

    void set_power_battery_voltage(const QString &pbv);
    void set_power_battery_current(const QString &pbc);
    void set_soc(const QString &soc);
    void set_bms_state(const QString &bms);
    void set_max_current(const QString &mc);
    void set_max_power(const QString &mp);
    void set_max_voltage(const QString &mv);
    void set_charing(const QString &charing);

private:
    Ui::Power *ui;
};

#endif // POWER_H
