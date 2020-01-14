#ifndef OPTIONALFUNCTION_H
#define OPTIONALFUNCTION_H

#include <QWidget>

namespace Ui {
class OptionalFunction;
}

class OptionalFunction : public QWidget
{
    Q_OBJECT

public:
    explicit OptionalFunction(QWidget *parent = 0);
    ~OptionalFunction();

signals:
    void back_home(int);
    void previous(int);
    void video();
    void weight();
private slots:
    void on_btn_back_home_clicked();
    void on_btn_back_clicked();


    void on_ckb_weigh_clicked();

    void on_ckb_video_clicked();

private:
    Ui::OptionalFunction *ui;
};

#endif // OPTIONALFUNCTION_H
