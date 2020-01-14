#ifndef MESSAGEWIDGET_H
#define MESSAGEWIDGET_H

#include <QWidget>
#include <QDesktopWidget>

namespace Ui {
class MessageWidget;
}

class MessageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MessageWidget(QWidget *parent = 0);
    ~MessageWidget();
    void init(QString ,QString);
private slots:
    void on_close_clicked();
private:
    Ui::MessageWidget *ui;
};

#endif // MESSAGEWIDGET_H
