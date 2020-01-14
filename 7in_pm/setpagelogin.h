#ifndef SETPAGELOGIN_H
#define SETPAGELOGIN_H

#include <QWidget>

namespace Ui {
class SetPageLogin;
}

class SetPageLogin : public QWidget
{
    Q_OBJECT

public:
    explicit SetPageLogin(QWidget *parent = 0);
    ~SetPageLogin();

private:
    Ui::SetPageLogin *ui;
};

#endif // SETPAGELOGIN_H
