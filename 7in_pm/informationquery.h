#ifndef INFORMATIONQUERY_H
#define INFORMATIONQUERY_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class InformationQuery;
}

class InformationQuery : public QWidget
{
    Q_OBJECT

public:
    explicit InformationQuery(QWidget *parent = 0);
    ~InformationQuery();
signals:
    void zc(int);
    void power(int);
    void error(int);
    void warning(int);
    void back_home(int);
    void previous(int);

private slots:
    void on_btn_zc_clicked();

    void on_btn_error_clicked();

//    void on_btn_power_clicked();

    void on_btn_waring_clicked();

    void on_btn_backhome_clicked();

    void on_btn_back_clicked();

private:
    Ui::InformationQuery *ui;
};

#endif // INFORMATIONQUERY_H
