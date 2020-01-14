/********************************************************************************
** Form generated from reading UI file 'lightwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTWIDGET_H
#define UI_LIGHTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LightWidget
{
public:
    QProgressBar *progressBar;
    QPushButton *close;
    QPushButton *btn_jia;
    QPushButton *btn_jian;
    QLabel *label;

    void setupUi(QWidget *LightWidget)
    {
        if (LightWidget->objectName().isEmpty())
            LightWidget->setObjectName(QStringLiteral("LightWidget"));
        LightWidget->resize(608, 156);
        LightWidget->setMinimumSize(QSize(608, 156));
        LightWidget->setMaximumSize(QSize(608, 156));
        LightWidget->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 0);\n"
"border-color: rgb(255, 255, 255);"));
        progressBar = new QProgressBar(LightWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(false);
        progressBar->setGeometry(QRect(60, 70, 500, 10));
        progressBar->setStyleSheet(QLatin1String("QProgressBar{\n"
"     \n"
"     border-radius: 6px;\n"
"\n"
"     border: 1px solid #053FB7;\n"
"border-color: rgba(5, 63, 183, 1);\n"
"}\n"
"QProgressBar::chunk {\n"
"        border-radius: 6px;\n"
"        background: rgb(5, 63, 183);\n"
"}\n"
""));
        progressBar->setMinimum(1);
        progressBar->setMaximum(10);
        progressBar->setValue(10);
        progressBar->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        progressBar->setTextVisible(false);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);
        close = new QPushButton(LightWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(560, 10, 40, 40));
        close->setMinimumSize(QSize(40, 40));
        close->setMaximumSize(QSize(40, 40));
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
        btn_jia = new QPushButton(LightWidget);
        btn_jia->setObjectName(QStringLiteral("btn_jia"));
        btn_jia->setGeometry(QRect(450, 110, 40, 40));
        btn_jia->setMinimumSize(QSize(40, 40));
        btn_jia->setMaximumSize(QSize(40, 40));
        btn_jia->setStyleSheet(QString::fromUtf8("QPushButton#btn_jia{\n"
"\n"
"background-image:url(:/\345\242\236\345\212\240.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#btn_jia:pressed{\n"
"background-image: url(:/\345\242\236\345\212\240.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));
        btn_jian = new QPushButton(LightWidget);
        btn_jian->setObjectName(QStringLiteral("btn_jian"));
        btn_jian->setGeometry(QRect(110, 110, 40, 40));
        btn_jian->setMinimumSize(QSize(40, 40));
        btn_jian->setMaximumSize(QSize(40, 40));
        btn_jian->setStyleSheet(QString::fromUtf8("QPushButton#btn_jian{\n"
"\n"
"background-image:url(:/\345\207\217\345\260\217.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}\n"
"QPushButton#btn_jian:pressed{\n"
"background-image: url(:/\345\207\217\345\260\217.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));
        label = new QLabel(LightWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 161, 31));
        label->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255)"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(LightWidget);

        QMetaObject::connectSlotsByName(LightWidget);
    } // setupUi

    void retranslateUi(QWidget *LightWidget)
    {
        LightWidget->setWindowTitle(QApplication::translate("LightWidget", "Form", 0));
        close->setText(QString());
        btn_jia->setText(QString());
        btn_jian->setText(QString());
        label->setText(QApplication::translate("LightWidget", "\345\261\217\345\271\225\344\272\256\345\272\246", 0));
    } // retranslateUi

};

namespace Ui {
    class LightWidget: public Ui_LightWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTWIDGET_H
