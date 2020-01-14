/********************************************************************************
** Form generated from reading UI file 'textwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTWIDGET_H
#define UI_TEXTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextWidget
{
public:
    QLineEdit *le_number;
    QPushButton *close;
    QLabel *lb_prog;

    void setupUi(QWidget *TextWidget)
    {
        if (TextWidget->objectName().isEmpty())
            TextWidget->setObjectName(QStringLiteral("TextWidget"));
        TextWidget->resize(600, 500);
        TextWidget->setMinimumSize(QSize(447, 310));
        TextWidget->setMaximumSize(QSize(600, 500));
        TextWidget->setSizeIncrement(QSize(447, 310));
        TextWidget->setStyleSheet(QStringLiteral(""));
        le_number = new QLineEdit(TextWidget);
        le_number->setObjectName(QStringLiteral("le_number"));
        le_number->setGeometry(QRect(150, 110, 281, 61));
        le_number->setMinimumSize(QSize(149, 31));
        le_number->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 22pt \"Ubuntu\";\n"
"color: rgb(16, 24, 117);"));
        le_number->setAlignment(Qt::AlignCenter);
        close = new QPushButton(TextWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(540, 10, 40, 40));
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
        lb_prog = new QLabel(TextWidget);
        lb_prog->setObjectName(QStringLiteral("lb_prog"));
        lb_prog->setGeometry(QRect(180, 30, 231, 51));
        lb_prog->setMinimumSize(QSize(73, 24));
        lb_prog->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"font: 22pt \"Ubuntu\";\n"
"color: rgb(16, 24, 117);"));
        lb_prog->setAlignment(Qt::AlignCenter);

        retranslateUi(TextWidget);

        QMetaObject::connectSlotsByName(TextWidget);
    } // setupUi

    void retranslateUi(QWidget *TextWidget)
    {
        TextWidget->setWindowTitle(QApplication::translate("TextWidget", "Form", 0));
        le_number->setText(QString());
        close->setText(QString());
        lb_prog->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TextWidget: public Ui_TextWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTWIDGET_H
