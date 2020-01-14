#ifndef ERROR_H
#define ERROR_H

#include <QWidget>

namespace Ui {
class Error;
}

class Error : public QWidget
{
    Q_OBJECT

public:
    explicit Error(QWidget *parent = 0);
    ~Error();


private slots:
    void next_page();
    void previous_page();
    void on_btn_back_clicked();
    void update_table(const QString &error_time, const QString &error_type,  const QString &error_name);
    void delete_row(const QString &key);

signals:
    void previous(int);
private:
    Ui::Error *ui;
    void create_table();
};

#endif // ERROR_H
