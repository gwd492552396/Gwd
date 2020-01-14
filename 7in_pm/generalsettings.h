#ifndef GENERALSETTINGS_H
#define GENERALSETTINGS_H

#include <QWidget>
#include <QMessageBox>
#include <QDialog>
#include <QString>
#include <QMouseEvent>
#include "buttonwidget.h"
#include "textwidget.h"
#include "buttondialog.h"
#include "timewidget.h"
#include "database_7in.h"
#include "lightwidget.h"
#include <QTimer>
#include <QTime>
#include <QDate>
namespace Ui {
class GeneralSettings;
}

class GeneralSettings : public QWidget
{
    Q_OBJECT

public:
    explicit GeneralSettings(QWidget *parent = 0);
    ~GeneralSettings();

signals:

    void back_home(int);
    void previous(int);
    void log(QString);
    void ckb_autobri(bool);

private slots:
    void on_btn_lang_clicked();
    void on_btn_unit_clicked();
    void on_btn_bright_clicked();
    void on_btn_time_clicked();
    void on_btn_back_home_clicked();
    void on_btn_back_clicked();

    void on_le_drivernum_clicked();

   void on_le_carnum_clicked();

    void on_le_weigh_clicked();

   void on_le_limit_clicked();

    void receivedata(QString,QString);

    void loginstatus(int);
    void set_light(QString);
    void set_sys_value();
    void ckb_autobri_change(int);




private:
    int flag;
    Database_7in *Db;
    TextWidget * text;
    timewidget * time ;
    Ui::GeneralSettings *ui;
    LightWidget *light;
    QTimer *timer1;
};

#endif // GENERALSETTINGS_H
