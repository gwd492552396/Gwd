#ifndef WARNING_H
#define WARNING_H

#include <QWidget>
#include <QTableWidget>
#include <QVBoxLayout>

namespace Ui {
class Warning;
}

class Warning : public QWidget
{
    Q_OBJECT

public:
    explicit Warning(QWidget *parent = 0);
    ~Warning();



private slots:
    void next_page();
    void previous_page();
    void on_btn_back_clicked();
    void update_table(const QString &warning_time, const QString &warning_type, const QString &warning_name);
    void delete_row(const QString &key);
signals:
    void previous(int);
private:
    Ui::Warning *ui;
    void create_table();



};

#endif // WARNING_H
