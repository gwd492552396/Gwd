#ifndef HELP_H
#define HELP_H

#include <QWidget>

namespace Ui {
class Help;
}

class Help : public QWidget
{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = 0);
    ~Help();

private slots:
    void edit_shortcut_save(int,int,int,int);

private:
    Ui::Help *ui;
};

#endif // HELP_H
