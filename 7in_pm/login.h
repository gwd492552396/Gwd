#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QGridLayout>
#include <QMessageBox>
#include <QString>
#include "frmnum.h"
#include "frminput.h"
#include "database_7in.h"
#include "messagewidget.h"

namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = 0);
    ~Login();
    frmNum *keynum;
    frmInput *keyinput;
signals:

    void login(int);

    void previous(int);
    void senddata(QString);
    void loginstatus(int);
    void log(QString);

private slots:

    void on_btn_login_clicked();

    void on_btn_back_clicked();

    void receive(int);


private:

    Database_7in* database;
    QString username;
    QString password;
    Ui::Login *ui;
};

#endif // LOGIN_H
