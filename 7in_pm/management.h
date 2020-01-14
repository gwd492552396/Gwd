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

private slots:
    void on_btn_add_clicked();

    void on_btn_del_clicked();

    void on_btn_back_clicked();

    void receive();

private:
    QList <QPushButton*> btnlist;
    QList <QLabel*> labellist;
    QStringList list;
    QButtonGroup *g;
    Ui::Management *ui;
    Database_7in * DB;
};

#endif // MANAGEMENT_H
