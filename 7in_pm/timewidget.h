#ifndef TIMEWIDGET_H
#define TIMEWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include <QDate>
#include <QTime>
#include "frmnum.h"
#include "messagewidget.h"
#include <QDesktopWidget>
#include <QByteArray>
#include <unistd.h>

namespace Ui {
class timewidget;
}

class timewidget : public QWidget
{
    Q_OBJECT

public:
    explicit timewidget(QWidget *parent = 0);
    void init();
    ~timewidget();

signals:
    void senddata(QString,QString);
private slots:
    void on_close_clicked();

private:

    int configtimetype();

    frmNum *keynum;
    Ui::timewidget *ui;
};

#endif // TIMEWIDGET_H
