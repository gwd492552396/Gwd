/********************************************************************************
** Form generated from reading UI file 'buttondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTONDIALOG_H
#define UI_BUTTONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ButtonDialog
{
public:
    QPushButton *btn1;
    QPushButton *btn2;

    void setupUi(QDialog *ButtonDialog)
    {
        if (ButtonDialog->objectName().isEmpty())
            ButtonDialog->setObjectName(QStringLiteral("ButtonDialog"));
        ButtonDialog->resize(600, 500);
        ButtonDialog->setMinimumSize(QSize(600, 500));
        ButtonDialog->setMaximumSize(QSize(600, 500));
        ButtonDialog->setStyleSheet(QLatin1String("\n"
"border:5px solid rgb(44,86,191);\n"
"    border-top-left-radius:15px;\n"
"    border-top-right-radius:15px;\n"
"    border-bottom-left-radius:15px;\n"
"    border-bottom-right-radius:15px;\n"
"font: 25pt \"Microsoft YaHei UI\";\n"
"color:rgb(44, 89, 191);\n"
"background-color:rgb(0,0,0)\n"
""));
        btn1 = new QPushButton(ButtonDialog);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(210, 130, 200, 60));
        btn1->setMinimumSize(QSize(200, 60));
        btn1->setMaximumSize(QSize(200, 60));
        btn1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-image:url(:/\346\214\211\351\224\256_\351\200\211\351\241\2711.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\351\200\211\351\241\2711_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));
        btn2 = new QPushButton(ButtonDialog);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(210, 250, 200, 60));
        btn2->setMinimumSize(QSize(200, 60));
        btn2->setMaximumSize(QSize(200, 60));
        btn2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"background-image:url(:/\346\214\211\351\224\256_\351\200\211\351\241\2711.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\351\200\211\351\241\2711_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));

        retranslateUi(ButtonDialog);

        QMetaObject::connectSlotsByName(ButtonDialog);
    } // setupUi

    void retranslateUi(QDialog *ButtonDialog)
    {
        ButtonDialog->setWindowTitle(QApplication::translate("ButtonDialog", "Dialog", 0));
        btn1->setText(QString());
        btn2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ButtonDialog: public Ui_ButtonDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTONDIALOG_H
