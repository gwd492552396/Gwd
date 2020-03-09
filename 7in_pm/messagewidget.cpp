#include "messagewidget.h"
#include "ui_messagewidget.h"

MessageWidget::MessageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessageWidget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    this->setAttribute(Qt::WA_TranslucentBackground);
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
}

MessageWidget::~MessageWidget()
{
    ui->lb_message->setText("");
    ui->lb_error->setText("");
    delete ui;
}

void MessageWidget::init(QString message, QString error)
{

    ui->lb_message->setText(message);
    ui->lb_error->setText(error);
   // this->setWindowFlags(Qt::WindowStaysOnTopHint);
    this->show();
}

void MessageWidget::on_close_clicked()
{
    emit message_close();
    this->close();
}
