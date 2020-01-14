#include "textwidget.h"
#include "ui_textwidget.h"

TextWidget::TextWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextWidget)
{
    ui->setupUi(this);

    this->setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,QBrush(QPixmap(":/弹窗.png").scaled(this->size(),Qt::IgnoreAspectRatio,Qt::SmoothTransformation)));// 使用平滑的缩放方式
    this->setPalette(palette);// 给widget加上背景图
//    keyinput = frmInput::Instance();
//    keynum = frmNum::Instance();

    keyinput = new frmInput;
    keynum = new frmNum;
    keynum->show();
    keyinput->hide();
    QGridLayout *g = new QGridLayout();
    g->addWidget(keynum,0,0,1,1,Qt::AlignCenter | Qt::AlignBottom);
    g->addWidget(keyinput,0,0,1,1,Qt::AlignCenter | Qt::AlignBottom);
    g->setContentsMargins(0,0,0,25);

    this->setLayout(g);
    ui->le_number->setFocus();
    Db = new Database_7in();
    connect(keynum,SIGNAL(change(int)),this,SLOT(receive(int)));
    connect(keyinput,SIGNAL(change(int)),this,SLOT(receive(int)));


}

TextWidget::~TextWidget()
{
    delete ui;
}

void TextWidget::init(QString str)
{
    this->setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);
    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以
    this->move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);
    ui->le_number->setText("");
    this->ui->lb_prog->setText("修改"+str);
    ui->le_number->setFocus();
    this->show();
}

void TextWidget::on_close_clicked()
{
    Db->updatedata(ui->lb_prog->text().remove("修改"),ui->le_number->text());
    senddata(ui->lb_prog->text(),ui->le_number->text());

    this->close();
}

void TextWidget::receive(int i)
{
    if(i == 0)
    {
        keynum->hide();
        keyinput->show();
    }
    else
    {
        keyinput->hide();
        keynum->show();
    }
}
