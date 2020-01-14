#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class ButtonWidget;
}

class ButtonWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ButtonWidget(QWidget *parent = 0);

    void init(int flag);
    ~ButtonWidget();
protected:
    //void paintEvent(QPaintEvent *event);

private slots:
    void on_close_clicked();
    void on_btn1_clicked();

    void on_btn2_clicked();


private:
    int flag;
    Ui::ButtonWidget *ui;
};

#endif // BUTTONWIDGET_H
