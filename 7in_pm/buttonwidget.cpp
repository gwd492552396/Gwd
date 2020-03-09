#include "buttonwidget.h"
#include "ui_buttonwidget.h"
#include <qpainter.h>

ButtonWidget::ButtonWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ButtonWidget)
{
    ui->setupUi(this);
}

ButtonWidget::~ButtonWidget()
{
    delete ui;
}
void ButtonWidget::init(int f)
{
    flag = f;
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    if(flag == 1)
    {
        ui->btn1->setText("中文");
        ui->btn2->setText("英文");
    }
    else if(flag == 2)
    {
        ui->btn1->setText("公制");
        ui->btn2->setText("英制");
    }
    else if (flag == 3)
    {
        ui->btn1->setText("康明斯");
        ui->btn2->setText("");
    }
    else if (flag == 4)
    {
        ui->btn1->setText("艾里逊");
        ui->btn2->setText("");
    }
    this->show();
}



void ButtonWidget::on_btn1_clicked()
{
    if(flag == 1)
    {
        emit language("中文");
        this->close();
        //QMessageBox::about(NULL,tr("a"),tr("中文"));

    }
    else if(flag == 2)
    {
        emit unit("公制");
        this->close();
        //QMessageBox::about(NULL,tr("a"),tr("公制"));

    }
    else if(flag == 3)
    {

    }
    else if(flag == 4)
    {

    }
}

void ButtonWidget::on_btn2_clicked()
{
    if(flag == 1){
    //QMessageBox::about(NULL,tr("a"),tr("英文"));
        emit language("英文");
        this->close();
    }
    else if(flag == 2){
    //QMessageBox::about(NULL,tr("a"),tr("英制"));
        emit unit("英制");
        this->close();
    }
    else if(flag == 3)
    {

    }
    else if(flag == 4)
    {

    }
}

void ButtonWidget::on_close_clicked()
{
    this->close();
}
