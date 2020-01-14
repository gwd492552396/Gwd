#ifndef SUPERUSERPAGE_H
#define SUPERUSERPAGE_H

#include <QWidget>
#include "database_7in.h"
#include "textwidget.h"

namespace Ui {
class SuperUserPage;
}

class SuperUserPage : public QWidget
{
    Q_OBJECT

public:
    explicit SuperUserPage(QWidget *parent = 0);
    ~SuperUserPage();

signals:
    void ybsz(int);
    void kxgn(int);
    void cxxz(int);
    void czcs(int);
    void clear(int);
    void exit(int);
    void previous(int);

private slots:
    void on_btn_ybsz_clicked();

    void on_btn_kxgn_clicked();

    void on_btn_cxxz_clicked();
    void on_btn_czcs_clicked();
    void on_btn_clear_clicked();

    void on_btn_exit_clicked();

    void on_btn_back_clicked();
    void on_le_number_clicked();
    void on_le_limitspeed_clicked();
    void receivedata(QString ,QString);

private:
    Ui::SuperUserPage *ui;
    TextWidget *text;
    Database_7in * db;
};

#endif // SUPERUSERPAGE_H
