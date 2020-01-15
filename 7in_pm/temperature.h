#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <QWidget>

namespace Ui {
class Temperature;
}

class Temperature : public QWidget
{
    Q_OBJECT

public:
    explicit Temperature(QWidget *parent = 0);
    ~Temperature();

signals:
    void previous(int);

private slots:
    void on_btn_back_clicked();

    void set_engine_water_temper(const QString &ewt);

    void set_gearbox_temper(QString gbt);

private:
    Ui::Temperature *ui;
};

#endif // TEMPERATURE_H
