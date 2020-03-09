#include "frmnum.h"
#include "ui_frmnum.h"
#include "qdebug.h"
#include <QFile>

frmNum *frmNum::_instance = 0;    //test
frmNum::frmNum(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmNum)
{
    ui->setupUi(this);
    this->InitForm();//初始化窗体数据
    this->InitProperty();//初始化属性
    this->setVisible(false);              //added by gwd
}

frmNum::~frmNum()
{
    delete ui;
}



void frmNum::InitForm()
{
    this->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    isFirst = true;
    isPress = false;
    timerPress = new QTimer(this);
    connect(timerPress, SIGNAL(timeout()), this, SLOT(reClicked()));
    currentWidget = 0;



    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn) {
        connect(b, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    }

    //绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)),this, SLOT(focusChanged(QWidget *, QWidget *)));
    //绑定按键事件过滤器
    qApp->installEventFilter(this);
}

void frmNum::InitProperty()
{
    ui->btnabc->setProperty("btnOther", true);
    ui->btn1->setProperty("btnNum", true);
    ui->btn2->setProperty("btnNum", true);
    ui->btn3->setProperty("btnNum", true);
    ui->btn4->setProperty("btnNum", true);
    ui->btn5->setProperty("btnNum", true);
    ui->btn6->setProperty("btnNum", true);
    ui->btn7->setProperty("btnNum", true);
    ui->btn8->setProperty("btnNum", true);
    ui->btn9->setProperty("btnNum", true);
    ui->btn00->setProperty("btnNum", true);
    ui->btnDelete->setProperty("btnOther", true);
}

void frmNum::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
    emit log("focusChanged");                          //modified by gwd
    //qDebug() << "oldWidget:" << oldWidget << " nowWidget:" << nowWidget;
    if (nowWidget != 0 && !this->isAncestorOf(nowWidget)) {
        //在Qt5和linux系统中(嵌入式linux除外),当输入法面板关闭时,焦点会变成无,然后焦点会再次移到焦点控件处
        //这样导致输入法面板的关闭按钮不起作用,关闭后马上有控件获取焦点又显示.
        //为此,增加判断,当焦点是从有对象转为无对象再转为有对象时不要显示.
        //这里又要多一个判断,万一首个窗体的第一个焦点就是落在可输入的对象中,则要过滤掉
#ifndef __arm__
        if (oldWidget == 0x0 && !isFirst) {
            return;
        }
#endif

        isFirst = false;
        if (nowWidget->inherits("QLineEdit")) {
            currentLineEdit = (QLineEdit *)nowWidget;
            currentEditType = "QLineEdit";
            //this->setVisible(true);
        }
        else
        {
            currentLineEdit = 0;
            currentEditType = "";
        }
        /* else if (nowWidget->inherits("QTextEdit")) {
            currentTextEdit = (QTextEdit *)nowWidget;
            currentEditType = "QTextEdit";
            //this->setVisible(true);
        } else if (nowWidget->inherits("QPlainTextEdit")) {
            currentPlain = (QPlainTextEdit *)nowWidget;
            currentEditType = "QPlainTextEdit";
            //this->setVisible(true);
        } else if (nowWidget->inherits("QTextBrowser")) {
            currentBrowser = (QTextBrowser *)nowWidget;
            currentEditType = "QTextBrowser";
            //this->setVisible(true);
        } else if (nowWidget->inherits("QComboBox")) {
            QComboBox *cbox = (QComboBox *)nowWidget;
            //只有当下拉选择框处于编辑模式才可以输入
            if (cbox->isEditable()) {
                currentLineEdit = cbox->lineEdit() ;
                currentEditType = "QLineEdit";
                //this->setVisible(true);
            }
        } else if (nowWidget->inherits("QSpinBox") ||
                   nowWidget->inherits("QDoubleSpinBox") ||
                   nowWidget->inherits("QDateEdit") ||
                   nowWidget->inherits("QTimeEdit") ||
                   nowWidget->inherits("QDateTimeEdit")) {
            currentWidget = nowWidget;
            currentEditType = "QWidget";
            //this->setVisible(true);
        } else {
            currentWidget = 0;
            currentLineEdit = 0;
            currentTextEdit = 0;
            currentPlain = 0;
            currentBrowser = 0;
            currentEditType = "";
            //this->setVisible(true);
        }*/

        //QRect rect = nowWidget->rect();
        //QPoint pos = QPoint(rect.left(), rect.bottom() + 2);
        //pos = nowWidget->mapToGlobal(pos);
        //this->setGeometry(pos.x(), pos.y(), this->width(), this->height());
    }

    //Q_UNUSED(oldWidget);//未使用参数
}

bool frmNum::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress) {
        if (currentEditType != "") {
            if (obj != ui->btnabc) {

                //this->setVisible(true);
            }
            btnPress = (QPushButton *)obj;
            if (checkPress()) {
                isPress = true;
                timerPress->start(500);
            }
        }
        return false;
    } else if (event->type() == QEvent::MouseButtonRelease) {
        btnPress = (QPushButton *)obj;
        if (checkPress()) {
            isPress = false;
            timerPress->stop();
        }
        return false;
    }
    return QWidget::eventFilter(obj, event);
}

bool frmNum::checkPress()
{
    //只有属于数字键盘的合法按钮才继续处理
    bool num_ok = btnPress->property("btnNum").toBool();
    bool other_ok = btnPress->property("btnOther").toBool();
    if (num_ok || other_ok) {
        return true;
    }
    return false;
}

void frmNum::reClicked()
{
    if (isPress) {
        timerPress->setInterval(30);
        btnPress->click();
    }
}

void frmNum::btn_clicked()
{
if(currentLineEdit == NULL)
{
emit log("current line edit is null");
}
else emit log("current line edit is not null");              //added by gwd

    QPushButton *btn = (QPushButton *)sender();
    QString objectName = btn->objectName();
    if (objectName == "btnabc")
    {
        emit change(0);
        return;
    }
    if(currentEditType == "")
        return;
    if (objectName == "btnDelete")
    {
        deleteValue();
        return;
    }
    QString value = btn->text();
    insertValue(value);
}

void frmNum::insertValue(QString value)
{
    if (currentEditType == NULL)
    {
        emit log("current edit type is NULL");
    }
    if (currentEditType == "QLineEdit") {
        emit log("current edit type is line edit");
        currentLineEdit->insert(value);
    } /*else if (currentEditType == "QTextEdit") {
        currentTextEdit->insertPlainText(value);
    } else if (currentEditType == "QPlainTextEdit") {
        currentPlain->insertPlainText(value);
    } else if (currentEditType == "QTextBrowser") {
        currentBrowser->insertPlainText(value);
    } else if (currentEditType == "QWidget") {
        QKeyEvent keyPress(QEvent::KeyPress, 0, Qt::NoModifier, QString(value));
        QApplication::sendEvent(currentWidget, &keyPress);
    }*/
}

void frmNum::deleteValue()
{
    if (currentEditType == "QLineEdit") {
        currentLineEdit->backspace();
    } /*else if (currentEditType == "QTextEdit") {
        //获取当前QTextEdit光标,如果光标有选中,则移除选中字符,否则删除光标前一个字符
        QTextCursor cursor = currentTextEdit->textCursor();
        if(cursor.hasSelection()) {
            cursor.removeSelectedText();
        } else {
            cursor.deletePreviousChar();
        }
    } else if (currentEditType == "QPlainTextEdit") {
        //获取当前QTextEdit光标,如果光标有选中,则移除选中字符,否则删除光标前一个字符
        QTextCursor cursor = currentPlain->textCursor();
        if(cursor.hasSelection()) {
            cursor.removeSelectedText();
        } else {
            cursor.deletePreviousChar();
        }
    } else if (currentEditType == "QTextBrowser") {
        //获取当前QTextEdit光标,如果光标有选中,则移除选中字符,否则删除光标前一个字符
        QTextCursor cursor = currentBrowser->textCursor();
        if(cursor.hasSelection()) {
            cursor.removeSelectedText();
        } else {
            cursor.deletePreviousChar();
        }
    } else if (currentEditType == "QWidget") {
        QKeyEvent keyPress(QEvent::KeyPress, Qt::Key_Delete, Qt::NoModifier, QString());
        QApplication::sendEvent(currentWidget, &keyPress);
    }*/
}




