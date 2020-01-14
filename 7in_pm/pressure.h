#ifndef PRESSURE_H
#define PRESSURE_H

#include <QWidget>

namespace Ui {
class Pressure;
}

class Pressure : public QWidget
{
    Q_OBJECT

public:
    explicit Pressure(QWidget *parent = 0);
    ~Pressure();


private slots:
    void on_btn_back_clicked();

    void set_enigne_oil_pressure(const QString &eop);
    void set_gearbox_pressure(const QString &gbp);
    void set_brake_front(const QString &bf);
    void set_brake_back(const QString &bb);
signals:
    void previous(int);

private:
    Ui::Pressure *ui;
};

#endif // PRESSURE_H
