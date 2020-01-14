#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>
#include <QGridLayout>
#include "frmnum.h"
#include "frminput.h"
#include "database_7in.h"
#include "messagewidget.h"
#include <QString>

namespace Ui {
class AddUser;
}

class AddUser : public QWidget
{
    Q_OBJECT

public:
    explicit AddUser(QWidget *parent = 0);
    ~AddUser();

signals:

    void create(int);
    void previous(int);
    void send();
    void log(QString);

private slots:
    void receive(int);
    void on_btn_create_clicked();

    void on_btn_back_clicked();

    void logout(QString);


private:
    MessageWidget * mess;
    Database_7in *Db;
    frmInput *keyinput;
    frmNum *keynum;
    QString username;
    QString password;
    Ui::AddUser *ui;
};

#endif // ADDUSER_H
