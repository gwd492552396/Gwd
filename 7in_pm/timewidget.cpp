#include "timewidget.h"
#include "ui_timewidget.h"
#include <QDebug>

#define time_test 1

timewidget::timewidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::timewidget)
{
    ui->setupUi(this);

    this->setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,QBrush(QPixmap(":/弹窗.png").scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));// 使用平滑的缩放方式
    this->setPalette(palette);// 给widget加上背景图
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground);
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    keynum = new frmNum();
//    keynum = frmNum::Instance();
    keynum->setVisible(true);
//    keynum->move(410,330);
    QGridLayout *g = new QGridLayout();
    g->addWidget(keynum,0,0,1,1,Qt::AlignCenter | Qt::AlignBottom);
    g->setContentsMargins(0,0,0,25);

    this->setLayout(g);
    ui->le_year->setFocus();
}

timewidget::~timewidget()
{
    delete ui;
}

void timewidget::init()
{
    QDateTime t;
    ui->le_year->setText(t.currentDateTime().toString("yyyy"));
    ui->le_month->setText(t.currentDateTime().toString("M"));
    ui->le_day->setText(t.currentDateTime().toString("d"));
    ui->le_hour->setText(t.currentDateTime().toString("h"));
    ui->le_minute->setText(t.currentDateTime().toString("m"));
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    this->show();
}

int timewidget::configtimetype()
{
    QDate date(ui->le_year->text().toInt(),ui->le_month->text().toInt(),ui->le_day->text().toInt());
    if(!date.isValid())
    {
        return 0;
    }
    QTime time(ui->le_hour->text().toInt(),ui->le_minute->text().toInt(),0);
    if(!time.isValid())
        return 0;
    return 1;

}

void timewidget::on_close_clicked()
{
    if(configtimetype() == 0)
    {
        //弹窗提示时间不合法
        MessageWidget *mess = new MessageWidget(this);
        mess->init("时间格式不合法","");
        qDebug()<<"时间不合法";
        ui->le_day->setText("");
        ui->le_hour->setText("");
        ui->le_minute->setText("");
        ui->le_month->setText("");
        ui->le_year->setText("");
        return;
    }
    QDate  date(ui->le_year->text().toInt(),ui->le_month->text().toInt(),ui->le_day->text().toInt());
    QTime time(ui->le_hour->text().toInt(),ui->le_minute->text().toInt(),0);
    //设置系统时间
    QString str;
    str = "date -s " + date.toString("yyyy") +"/"+ date.toString("MM") +"/"+ date.toString("dd");
    QByteArray s = str.toLatin1();
    system(s.data());
    str = "date -s " + time.toString("hh") +":"+ time.toString("mm");
    int i = 0;
    while(i++<50){}
    s = str.toLatin1();
    system(s.data());
//    QByteArray q = str.toLatin1();
//    system(q.data());
    system("hwclock -w");
    senddata("时间",ui->le_month->text()+"月"+ui->le_day->text()+"日 "+ui->le_hour->text()+":"+ui->le_minute->text());
    this->close();
}
