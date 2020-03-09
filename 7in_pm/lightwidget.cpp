#include "lightwidget.h"
#include "ui_lightwidget.h"

LightWidget::LightWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LightWidget)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground);
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    db = new Database_7in;

    ui->progressBar->setMaximum(7);
    ui->progressBar->setMinimum(1);
    value = 7 ;
    ui->label->setText("屏幕亮度-"+QString::number(value));
    ui->progressBar->setValue(value);
    set_brightness(7);





}

LightWidget::~LightWidget()
{
    delete ui;
    ::close(fd);
}

void LightWidget::on_close_clicked()
{
    this->close();
}

void LightWidget::on_btn_jia_clicked()
{
    if(value>=7)
    {
        return;
    }
    value = value + 1;
    ui->progressBar->setValue(value);
    set_brightness(value);
    ui->label->setText(QString("屏幕亮度-%1").arg(value));
    emit light_changed(QString("%1").arg(value));
    db->updatedata("屏幕亮度",QString::number(value));
}

void LightWidget::on_btn_jian_clicked()
{
    if(value<=1)
    {
        return;
    }
    value = value - 1;
    ui->progressBar->setValue(value);
    set_brightness(value);
    ui->label->setText(QString("屏幕亮度-%1").arg(value));
    emit light_changed(QString("%1").arg(value));
    db->updatedata("屏幕亮度",QString::number(value));
}

//void LightWidget::on_progressBar_valueChanged(int value)
//{

//}
void LightWidget::set_brightness(int v)
{
    fd = ::open("/sys/class/backlight/backlight/brightness",O_RDWR|O_NONBLOCK);
    char buf[20];
    sprintf(buf,"%d",v);
    ::write(fd,buf,sizeof(buf));
    ::close(fd);

}

