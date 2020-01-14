#include "frminput.h"
#include "ui_frminput.h"



frmInput *frmInput::_instance = 0;           //test
frmInput::frmInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::frmInput)
{
    ui->setupUi(this);
    this->InitProperty();
    this->InitForm();
    this->setVisible(false);                //added by gwd

}

frmInput::~frmInput()
{
    delete ui;
}





void frmInput::InitForm()
{
    this->setWindowFlags(Qt::Tool | Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint);

    isFirst = true;
    isPress = false;
    timerPress = new QTimer(this);
    connect(timerPress, SIGNAL(timeout()), this, SLOT(reClicked()));

    currentWidget = 0;
    currentLineEdit = 0;
    currentTextEdit = 0;
    currentPlain = 0;
    currentBrowser = 0;
    currentEditType = "";


    currentType = "min";
    changeType(currentType);

    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn) {
        connect(b, SIGNAL(clicked()), this, SLOT(btn_clicked()));
    }

    //绑定全局改变焦点信号槽
    connect(qApp, SIGNAL(focusChanged(QWidget *, QWidget *)), this, SLOT(focusChanged(QWidget *, QWidget *)));
    //绑定按键事件过滤器
    qApp->installEventFilter(this);
}

void frmInput::InitProperty()
{



    ui->btnSpace->setProperty("btnOther", true);
    ui->btnDelete->setProperty("btnOther", true);
    ui->btnEmoi->setProperty("btnOther", true);
    ui->btnSpeak->setProperty("btnOther", true);
    ui->btnReturn->setProperty("btnOther", true);
    ui->btnType->setProperty("btnOther", true);
    ui->btn123->setProperty("btnOther", true);

//    ui->btn123->focusPolicy(Qt::NoFocus);
//    ui->btnDelete->focusPolicy(Qt::NoFocus);
//    ui->btnEmoi->focusPolicy(Qt::NoFocus);
//    ui->btnReturn->focusPolicy(Qt::NoFocus);
//    ui->btnSpace->focusPolicy(Qt::NoFocus);
//    ui->btnSpeak->focusPolicy(Qt::NoFocus);

    ui->btna->setProperty("btnLetter", true);
    ui->btnb->setProperty("btnLetter", true);
    ui->btnc->setProperty("btnLetter", true);
    ui->btnd->setProperty("btnLetter", true);
    ui->btne->setProperty("btnLetter", true);
    ui->btnf->setProperty("btnLetter", true);
    ui->btng->setProperty("btnLetter", true);
    ui->btnh->setProperty("btnLetter", true);
    ui->btni->setProperty("btnLetter", true);
    ui->btnj->setProperty("btnLetter", true);
    ui->btnk->setProperty("btnLetter", true);
    ui->btnl->setProperty("btnLetter", true);
    ui->btnm->setProperty("btnLetter", true);
    ui->btnn->setProperty("btnLetter", true);
    ui->btno->setProperty("btnLetter", true);
    ui->btnp->setProperty("btnLetter", true);
    ui->btnq->setProperty("btnLetter", true);
    ui->btnr->setProperty("btnLetter", true);
    ui->btns->setProperty("btnLetter", true);
    ui->btnt->setProperty("btnLetter", true);
    ui->btnu->setProperty("btnLetter", true);
    ui->btnv->setProperty("btnLetter", true);
    ui->btnw->setProperty("btnLetter", true);
    ui->btnx->setProperty("btnLetter", true);
    ui->btny->setProperty("btnLetter", true);
    ui->btnz->setProperty("btnLetter", true);


}

//事件过滤器,用于识别鼠标单击汉字标签处获取对应汉字
bool frmInput::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::MouseButtonPress){
        if (currentEditType != ""){
            if(obj != ui->btn123)
            {

            }
            btnPress = (QPushButton *)obj;
            if (checkPress()) {
                isPress = true;
                timerPress->start(500);
            }
        }
        return false;
    }else if (event->type() == QEvent::MouseButtonRelease) {
        btnPress = (QPushButton *)obj;
        if (checkPress()) {
            isPress = false;
            timerPress->stop();
        }
        return false;
    }/*else if (event->type() == QEvent::KeyPress) {
        //如果输入法窗体不可见,则不需要处理
        if (!isVisible())
        {
            return QWidget::eventFilter(obj, event);
        } else {
            return false;
        }
    } else {
        if (currentEditType == "QWidget") {
            return false;
        }

    }*/
    return QWidget::eventFilter(obj, event);
}



bool frmInput::checkPress()
{
    //只有属于输入法键盘的合法按钮才继续处理

    bool other_ok = btnPress->property("btnOther").toBool();
    bool letter_ok = btnPress->property("btnLetter").toBool();
    if (other_ok || letter_ok) {
        return true;
    }
    return false;
}

void frmInput::reClicked()
{
    if (isPress){
        timerPress->setInterval(30);
        btnPress->click();
    }
}

void frmInput::focusChanged(QWidget *oldWidget, QWidget *nowWidget)
{
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
            //this->setVisible(false);
        } else {
            //需要将输入法切换到最初的原始状态--小写,同时将之前的对象指针置为零
            currentWidget = 0;
            currentLineEdit = 0;
            currentTextEdit = 0;
            currentPlain = 0;
            currentBrowser = 0;
            currentEditType = "";
            currentType = "min";
            changeType(currentType);
            //this->setVisible(false);
        }*/

       // QRect rect = nowWidget->rect();
       // QPoint pos = QPoint(rect.left(), rect.bottom() + 2);
        //pos = nowWidget->mapToGlobal(pos);
        //this->setGeometry(pos.x(), pos.y(), this->width(), this->height());
    }
}

void frmInput::changeType(QString type)
{
    if (type == "max") {
        changeLetter(true);
    }
    if (type == "min") {
        changeLetter(false);
    }
}

void frmInput::changeLetter(bool isUpper)
{
    QList<QPushButton *> btn = this->findChildren<QPushButton *>();
    foreach (QPushButton * b, btn) {
        if (b->property("btnLetter").toBool()) {
            if (isUpper) {
                b->setText(b->text().toUpper());
            } else {
                b->setText(b->text().toLower());
            }
        }
    }
}



void frmInput::btn_clicked()
{

    QPushButton *btn = (QPushButton *)sender();
    QString objectName = btn->objectName();
    if (objectName == "btnType") {
        if (currentType == "min") {
            currentType = "max";
        }else
        {
            currentType = "min";
        }
        changeType(currentType);
        return;
    }
    else if (objectName == "btn123") {
        emit change(1);
        return;
    }
    else if(currentEditType == "") {
        return;
    }
    else if (objectName == "btnDelete") {
        deleteValue();

    }
    else if (objectName == "btnSpace") {
        insertValue(" ");
    }
    else if(objectName == "btnEmoi"){

    }
    else if(objectName == "btnSpeak"){

    }
    else if(objectName == "btnReturn"){

    }
    else{

        QString value = btn->text();
        insertValue(value);
    }
}


void frmInput::insertValue(QString value)
{
    if (currentEditType == "QLineEdit") {
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

void frmInput::deleteValue()
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
