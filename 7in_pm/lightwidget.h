#ifndef LIGHTWIDGET_H
#define LIGHTWIDGET_H

#include <QWidget>
#include <QDesktopWidget>
#include <QFile>
#include <QString>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include"database_7in.h"


namespace Ui {
class LightWidget;
}

class LightWidget : public QWidget
{
    Q_OBJECT

public:
    explicit LightWidget(QWidget *parent = 0);
    ~LightWidget();


signals:
    void light_changed(QString);
private slots:
    void on_close_clicked();

    void on_btn_jia_clicked();

    void on_btn_jian_clicked();
    void set_brightness(int v);

//    void on_progressBar_valueChanged(int value);

private:
    int fd;
    int value;


    Ui::LightWidget *ui;
    Database_7in *db;
};

#endif // LIGHTWIDGET_H
