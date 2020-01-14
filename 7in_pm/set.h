#ifndef SET_H
#define SET_H

#include <QWidget>
#include <QGridLayout>
#include <QMessageBox>
#include "messagewidget.h"
#include "qdebug.h"

namespace Ui {
class set;
}

class set : public QWidget
{
    Q_OBJECT

public:
    explicit set(QWidget *parent = 0);
    ~set();

signals:
    void login(int);
    void management(int);
    void back_home(int);
    void previous(int);

private slots:
    void on_btn_login_clicked();

    void on_btn_management_clicked();

    void on_btn_backhome_clicked();

    void on_btn_back_clicked();

    void loginstatus(int );

private:
    int flag;
    Ui::set *ui;
};

#endif // SET_H
