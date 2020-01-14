#ifndef INDEX_H
#define INDEX_H

#include <QWidget>

namespace Ui {
class Index;
}

class Index : public QWidget
{
    Q_OBJECT

public:
    explicit Index(QWidget *parent = 0);
    ~Index();



signals:
    void control_page(int);
private slots:
    void on_btn_control_clicked();

    void power_changed(const QString &current_power);
    void set_speedup_percent(const QString &sp);
    void set_slowdown_percent(const QString &sd);
    void set_battery_voltage(const QString &bv);
    void set_gear_rate(const QString &ip);
    void set_engine_rev(const QString &tp);

private:

    Ui::Index *ui;
};

#endif // INDEX_H
