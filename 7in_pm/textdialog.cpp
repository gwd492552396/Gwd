#include "textdialog.h"
#include "ui_textdialog.h"
#include <QGridLayout>

TextDialog::TextDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TextDialog)
{
    QGridLayout *layout = new QGridLayout();
    layout->addWidget(ui->label,0,0,1,1,Qt::AlignVCenter|Qt::AlignHCenter);
    num = new frmNum();
    layout->addWidget(num,1,0,1,1);
    layout->setHorizontalSpacing(10);
    layout->setVerticalSpacing(10);
    this->setLayout(layout);
    ui->setupUi(this);
}

void TextDialog::init(QString str)
{

    ui->label->setText(str);
    this->exec();
}

TextDialog::~TextDialog()
{
    delete ui;
}
