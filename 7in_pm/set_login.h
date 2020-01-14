#ifndef SET_LOGIN_H
#define SET_LOGIN_H

#include <QWidget>

namespace Ui {
class Set_Login;
}

class Set_Login : public QWidget
{
    Q_OBJECT

public:
    explicit Set_Login(QWidget *parent = 0);
    ~Set_Login();

private:
    Ui::Set_Login *ui;
};

#endif // SET_LOGIN_H
