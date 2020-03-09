#ifndef MANAGEMENT_H
#define MANAGEMENT_H

#include <QWidget>
#include <QMessageBox>
#include "database_7in.h"
#include <QButtonGroup>
#include <QString>

namespace Ui {
class Management;
}

class Management : public QWidget
{
    Q_OBJECT

public:
    explicit Management(QWidget *parent = 0);
    ~Management();

signals:
    void add(int);
    void del(int);
    void previous(int);
    void log(QString);
    void loginstatus_s(int);
    void senddata(QString);
    void fast_login(QString);

private slots:
    void on_btn_add_clicked();

    void on_btn_del_clicked();

    void on_btn_back_clicked();

    void on_btn_fast_login_clicked();

    void receive();
    void get_user_now(QString);

private:
    QList <QPushButton*> btnlist;
    QList <QLabel*> labellist;
    QStringList list;
    QString user_now;
    QButtonGroup *g;
    Ui::Management *ui;
    Database_7in * DB;
};

#endif // MANAGEMENT_H
