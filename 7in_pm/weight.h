#ifndef WEIGHT_H
#define WEIGHT_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class Weight;
}

class Weight : public QWidget
{
    Q_OBJECT

public:
    explicit Weight(QWidget *parent = 0);
    ~Weight();

signals:
    void back_home(int);
    void previous(int);

private slots:
    void on_btn_backhome_clicked();
    void on_btn_back_clicked();

    void set_total_times(const QString &tt);
    void set_real_time_weight(const QString &rtw);
    void set_ban_weight(const QString &bw);
    void set_total_weight(const QString &tw);
    void set_ban_total_times(const QString &btt);

private:
    Ui::Weight *ui;
};

#endif // WEIGHT_H
