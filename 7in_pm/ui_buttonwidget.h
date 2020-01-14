/********************************************************************************
** Form generated from reading UI file 'buttonwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONWIDGET_H
#define UI_BUTTONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ButtonWidget
{
public:
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *close;
    QLabel *label;

    void setupUi(QWidget *ButtonWidget)
    {
        if (ButtonWidget->objectName().isEmpty())
            ButtonWidget->setObjectName(QStringLiteral("ButtonWidget"));
        ButtonWidget->resize(447, 310);
        ButtonWidget->setMinimumSize(QSize(447, 310));
        ButtonWidget->setMaximumSize(QSize(447, 310));
        ButtonWidget->setStyleSheet(QStringLiteral(""));
        btn1 = new QPushButton(ButtonWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(123, 88, 200, 60));
        btn1->setMinimumSize(QSize(200, 60));
        btn1->setMaximumSize(QSize(200, 60));
        btn1->setStyleSheet(QString::fromUtf8("QPushButton#btn1{\n"
"\n"
"background-image:url(:/\346\214\211\351\224\256_\351\200\211\351\241\271.png);\n"
"border:none;\n"
"font:  18pt \"Microsoft YaHei UI\";\n"
"\n"
"	color: rgb(0, 0, 0);\n"
"\n"
"}\n"
"QPushButton#btn1:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\351\200\211\351\241\271_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font:  18pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);\n"
"\n"
"}"));
        btn2 = new QPushButton(ButtonWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(123, 166, 200, 60));
        btn2->setMinimumSize(QSize(200, 60));
        btn2->setMaximumSize(QSize(200, 60));
        btn2->setStyleSheet(QString::fromUtf8("QPushButton#btn2{\n"
"\n"
"background-image:url(:/\346\214\211\351\224\256_\351\200\211\351\241\271.png);\n"
"border:none;\n"
"font: 18pt  \"Microsoft YaHei UI\";\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QPushButton#btn2:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\351\200\211\351\241\271_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font:  18pt \"Microsoft YaHei UI\";\n"
"color:rgb(0, 0, 0);\n"
"}"));
        close = new QPushButton(ButtonWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(390, 10, 40, 40));
        close->setStyleSheet(QString::fromUtf8("QPushButton#close{\n"
"\n"
"background-image:url(:/29.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#close:pressed{\n"
"background-image: url(:/\344\276\247\351\224\256_\345\205\263\351\227\255\345\274\271\347\252\227_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(ButtonWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 447, 310));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/\345\274\271\347\252\227.png);"));
        label->raise();
        btn1->raise();
        btn2->raise();
        close->raise();

        retranslateUi(ButtonWidget);

        QMetaObject::connectSlotsByName(ButtonWidget);
    } // setupUi

    void retranslateUi(QWidget *ButtonWidget)
    {
        ButtonWidget->setWindowTitle(QApplication::translate("ButtonWidget", "Form", 0));
        btn1->setText(QString());
        btn2->setText(QString());
        close->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ButtonWidget: public Ui_ButtonWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONWIDGET_H
