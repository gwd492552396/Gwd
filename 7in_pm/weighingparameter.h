#ifndef WEIGHINGPARAMETER_H
#define WEIGHINGPARAMETER_H

#include <QWidget>
#include "textwidget.h"
#include "database_7in.h"
namespace Ui {
class WeighingParameter;
}

class WeighingParameter : public QWidget
{
    Q_OBJECT

public:
    explicit WeighingParameter(QWidget *parent = 0);
    ~WeighingParameter();

signals:
    void back_home(int);
    void previous(int);

private slots:
    void on_btn_back_home_clicked();
    void on_btn_back_clicked();

    void on_le_ry_clicked();

    void on_le_yg_clicked();

    void on_le_canshu_clicked();

    void on_le_weight_clicked();

    void receivedata(QString ,QString);

private:
    Database_7in * Db;
    TextWidget *text;
    Ui::WeighingParameter *ui;
};

#endif // WEIGHINGPARAMETER_H
