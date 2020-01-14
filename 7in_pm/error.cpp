#include "error.h"
#include "ui_error.h"
#include <QScrollBar>
static int nCurScroller=0; //翻页时的当时滑动条位置
static int pageValue = 5;
Error::Error(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Error)
{
    ui->setupUi(this);
    create_table();

    connect(ui->btn_previous,SIGNAL(clicked(bool)),this,SLOT(previous_page()));
    connect(ui->btn_next,SIGNAL(clicked(bool)),this,SLOT(next_page()));

}

Error::~Error()
{
    delete ui;
}
void Error::update_table(const QString &error_time, const QString &error_type, const QString &error_name)
{
    int row_count;
    row_count = ui->qTableWidget->rowCount();
    int total_pages;
    ui->qTableWidget->insertRow(row_count);
    ui->qTableWidget->setRowHeight(row_count,46);
    ui->qTableWidget->setColumnWidth(1,180);
    ui->qTableWidget->setColumnWidth(0,237);
    ui->qTableWidget->setColumnWidth(2,237);
    ui->qTableWidget->setItem(row_count,0,new QTableWidgetItem(error_time));
    ui->qTableWidget->item(row_count,0)->setTextAlignment(Qt::AlignCenter);
    ui->qTableWidget->setItem(row_count,1,new QTableWidgetItem(error_type));
    ui->qTableWidget->item(row_count,1)->setTextAlignment(Qt::AlignCenter);
    ui->qTableWidget->setItem(row_count,2,new QTableWidgetItem(error_name));
    ui->qTableWidget->item(row_count,2)->setTextAlignment(Qt::AlignCenter);
    row_count = ui->qTableWidget->rowCount();
    total_pages = row_count/5+1;
    ui->page_number->setText(QString("%1 / %2").arg(1).arg(total_pages));
}

void Error::delete_row(const QString &key)
{
    int row_count = ui->qTableWidget->rowCount();
    int total_pages;
    for(int i=0;i<row_count;i++){
        if(ui->qTableWidget->item(i,1)!=NULL){               //一定要先判断非空，否则会报错
            if(ui->qTableWidget->item(i,1)->text() == key)
            {
                ui->qTableWidget->removeRow(i);
                break;
            }
        }
    }
    row_count = ui->qTableWidget->rowCount();
    total_pages = row_count/5+1;
    ui->page_number->setText(QString("%1 / %2").arg(1).arg(total_pages));
}

void Error::next_page()
{
    int count = ui->qTableWidget->rowCount();
    int maxValue = ui->qTableWidget->verticalScrollBar()->maximum(); // 当前SCROLLER最大显示值25
    int total_pages = (count/5)+1;

    nCurScroller = ui->qTableWidget->verticalScrollBar()->value(); //获得当前scroller值
    int current_page = ((nCurScroller+5)/5)+1;
    if(nCurScroller<maxValue)
    {
        ui->qTableWidget->verticalScrollBar()->setSliderPosition(pageValue+nCurScroller);
        ui->page_number->setText(QString("%1 / %2").arg(current_page).arg(total_pages));
    }

}

void Error::previous_page()
{
    int count = ui->qTableWidget->rowCount();
//    int maxValue = ui->qTableWidget->verticalScrollBar()->maximum(); // 当前SCROLLER最大显示值25
    int total_pages = (count/5)+1;
    nCurScroller = ui->qTableWidget->verticalScrollBar()->value();
    int current_page = ((nCurScroller)/5)+1;
    if(nCurScroller>0)
    {
        ui->qTableWidget->verticalScrollBar()->setSliderPosition(nCurScroller-pageValue);
        ui->page_number->setText(QString("%1 / %2").arg(current_page).arg(total_pages));
    }

}

void Error::create_table()
{
    ui->qTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    ui->qTableWidget->setColumnCount(3);

    QStringList t_header;
    t_header<<QString("故障发生时间")<<QString("故障类型")<<QString("故障名称");
    ui->qTableWidget->setHorizontalHeaderLabels(t_header);
    ui->qTableWidget->horizontalHeader()->setFixedHeight(70);
    ui->qTableWidget->horizontalHeader()->setVisible(true);
    ui->qTableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->qTableWidget->horizontalHeader()->resizeSection(0,237);
    ui->qTableWidget->horizontalHeader()->resizeSection(1,187);
    ui->qTableWidget->horizontalHeader()->setStyleSheet(
                "QHeaderView::section {text-align:center;height:46px;border-left:none;}");
    ui->qTableWidget->setFocusPolicy(Qt::NoFocus);
    ui->qTableWidget->horizontalHeader()->setFocusPolicy(Qt::NoFocus);
    ui->qTableWidget->verticalHeader()->setVisible(false);
    ui->qTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->qTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->qTableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->qTableWidget->verticalScrollBar()->setStyleSheet("QScrollBar{background:transparent; width:0px;}"
            "QScrollBar::handle{background:transparent; border:0px solid transparent; border-radius:5px;}"
            "QScrollBar::handle:hover{background:transparent;;}"
            "QScrollBar::sub-line{background:transparent;}"
            "QScrollBar::add-line{background:transparent;}");

    ui->qTableWidget->setStyleSheet(tr("QTableWidget{background:transparent;border:1px solid #979797;gridline-color:#979797;font:75 30pt Microsoft YaHei ;color:#FFFFFF;}QHeaderView::section{background:transparent;border:1px solid #979797;font:75 32pt Microsoft YaHei UI;color:#FFFFFF}"));

}

void Error::on_btn_back_clicked()
{
    emit previous(5);
}