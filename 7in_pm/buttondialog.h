#ifndef BUTTONDIALOG_H
#define BUTTONDIALOG_H

#include <QDialog>


namespace Ui {
class ButtonDialog;
}

class ButtonDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ButtonDialog(QWidget *parent = 0);
    void init(int flag);

    ~ButtonDialog();
private slots:
    void on_btn1_clicked();

    void on_btn2_clicked();

private:

    int flag;
    Ui::ButtonDialog *ui;

};

#endif // BUTTONDIALOG_H
