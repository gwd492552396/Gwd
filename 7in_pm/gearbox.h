#ifndef GEARBOX_H
#define GEARBOX_H

#include <QWidget>

namespace Ui {
class gearbox;
}

class gearbox : public QWidget
{
    Q_OBJECT
public:
    explicit gearbox(QWidget *parent = 0);
    ~gearbox();

signals:
    void previous(int);


private slots:
    void on_btn_back_clicked();

    void set_gearbox_rate(const QString &gr);
    void set_gearbox_in_rev(const QString &gi);
    void set_gearbox_out_rev(const QString &go);
private:
    Ui::gearbox *ui;
};

#endif // GEARBOX_H
