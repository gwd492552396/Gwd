#ifndef TEXTDIALOG_H
#define TEXTDIALOG_H

#include <QDialog>
#include "frmnum.h"

namespace Ui {
class TextDialog;
}

class TextDialog : public QDialog
{
    Q_OBJECT

public:
    void init(QString str);
    explicit TextDialog(QWidget *parent = 0);
    ~TextDialog();

private:

    frmNum *num;
    Ui::TextDialog *ui;
};

#endif // TEXTDIALOG_H
