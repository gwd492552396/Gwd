#ifndef CHOOSECARTYPE_H
#define CHOOSECARTYPE_H

#include <QWidget>
#include "buttonwidget.h"

namespace Ui {
class ChooseCarType;
}

class ChooseCarType : public QWidget
{
    Q_OBJECT

public:
    explicit ChooseCarType(QWidget *parent = 0);
    ~ChooseCarType();

signals:
    void back_home(int);
    void previous(int);

private slots:
    void on_btn_engine_clicked();
    void on_btn_drive_clicked();
    void on_btn_back_home_clicked();
    void on_btn_back_clicked();

private:
    Ui::ChooseCarType *ui;
};

#endif // CHOOSECARTYPE_H
