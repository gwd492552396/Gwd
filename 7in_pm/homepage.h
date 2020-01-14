#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include <QWidget>
#include <QHBoxLayout>
#include <QPushButton>

namespace Ui {
class HomePage;
}

class HomePage : public QWidget
{
    Q_OBJECT


public:
    explicit HomePage(QWidget *parent = 0);
    ~HomePage();




private slots:
    void change_weight();
    void change_video();



    void on_btn_weight_clicked();

    void on_btn_query_clicked();

    void on_btn_setting_clicked();

    void on_btn_video_clicked();

    void on_btn_backhome_clicked();

    void on_btn_back_clicked();

    void power_changed(const QString &current_power);

signals:
    void show_video(int);
    void show_weight(int);
    void show_query(int);
    void show_setting(int);
    void back_home(int);
    void previous(int);
private:
    Ui::HomePage *ui;
    bool is_weight;
    bool is_video;
    QHBoxLayout *hlayout;

};

#endif // HOMEPAGE_H
