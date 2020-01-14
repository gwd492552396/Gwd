#ifndef LIQUID_H
#define LIQUID_H

#include <QWidget>

namespace Ui {
class Liquid;
}

class Liquid : public QWidget
{
    Q_OBJECT

public:
    explicit Liquid(QWidget *parent = 0);
    ~Liquid();

signals:
    void previous(int);
private slots:
    void on_btn_back_clicked();

    void show_hydraulic_bar(const QString &current_hydrulic);
    void show_cooling_bar(const QString &current_cooling);

private:
    Ui::Liquid *ui;
};

#endif // LIQUID_H
