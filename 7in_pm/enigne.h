#ifndef ENIGNE_H
#define ENIGNE_H

#include <QWidget>

namespace Ui {
class Enigne;
}

class Enigne : public QWidget
{
    Q_OBJECT

public:
    explicit Enigne(QWidget *parent = 0);
    ~Enigne();


signals:
    void previous(int);

private slots:
    void on_btn_back_clicked();

    void set_enigen_rev(const QString &rev);
    void set_enigen_water_temper(const QString &ewt);
    void set_enigen_oli_pressure(const QString &eop);
    void set_enigne_total_hours(const QString &eth);

private:
    Ui::Enigne *ui;
};

#endif // ENIGNE_H
