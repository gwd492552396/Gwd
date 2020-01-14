#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "frmnum.h"
#include "frminput.h"
#include "database_7in.h"
#include <QDesktopWidget>

namespace Ui {
class TextWidget;
}

class TextWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TextWidget(QWidget *parent = 0);
    ~TextWidget();
    void init(QString);
    frmNum *keynum;
    frmInput *keyinput;
signals:
    void senddata(QString,QString);
private slots:
    void on_close_clicked();
    void receive(int);

private:
    Database_7in * Db;
    Ui::TextWidget *ui;
};

#endif // TEXTWIDGET_H
