/********************************************************************************
** Form generated from reading UI file 'timewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEWIDGET_H
#define UI_TIMEWIDGET_H

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

class Ui_timewidget
{
public:
    QLineEdit *le_year;
    QLabel *label_2;
    QLineEdit *le_month;
    QLineEdit *le_day;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_minute;
    QLineEdit *le_hour;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *close;

    void setupUi(QWidget *timewidget)
    {
        if (timewidget->objectName().isEmpty())
            timewidget->setObjectName(QStringLiteral("timewidget"));
        timewidget->resize(600, 500);
        timewidget->setMinimumSize(QSize(600, 500));
        timewidget->setMaximumSize(QSize(600, 500));
        le_year = new QLineEdit(timewidget);
        le_year->setObjectName(QStringLiteral("le_year"));
        le_year->setGeometry(QRect(169, 39, 68, 31));
        le_year->setMinimumSize(QSize(68, 31));
        le_year->setMaximumSize(QSize(68, 31));
        le_year->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgba(13, 53, 136, 1);\n"
"border: 1px solid #979797;\n"
""));
        le_year->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(timewidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(242, 40, 32, 31));
        label_2->setMinimumSize(QSize(32, 31));
        label_2->setSizeIncrement(QSize(32, 31));
        label_2->setStyleSheet(QLatin1String("font-family: MicrosoftYaHei;\n"
"font-size: 18px;\n"
"color: #FFFFFF;"));
        label_2->setAlignment(Qt::AlignCenter);
        le_month = new QLineEdit(timewidget);
        le_month->setObjectName(QStringLiteral("le_month"));
        le_month->setGeometry(QRect(279, 39, 43, 31));
        le_month->setMinimumSize(QSize(43, 31));
        le_month->setMaximumSize(QSize(43, 31));
        le_month->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgba(13, 53, 136, 1);\n"
"border: 1px solid #979797;\n"
""));
        le_month->setAlignment(Qt::AlignCenter);
        le_day = new QLineEdit(timewidget);
        le_day->setObjectName(QStringLiteral("le_day"));
        le_day->setGeometry(QRect(359, 39, 43, 31));
        le_day->setMinimumSize(QSize(43, 31));
        le_day->setMaximumSize(QSize(43, 31));
        le_day->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgba(13, 53, 136, 1);\n"
"border: 1px solid #979797;\n"
""));
        le_day->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(timewidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(327, 40, 32, 31));
        label_4->setMinimumSize(QSize(32, 31));
        label_4->setSizeIncrement(QSize(32, 31));
        label_4->setStyleSheet(QLatin1String("font-family: MicrosoftYaHei;\n"
"font-size: 18px;\n"
"color: #FFFFFF;"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(timewidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(407, 40, 32, 31));
        label_5->setMinimumSize(QSize(32, 31));
        label_5->setSizeIncrement(QSize(32, 31));
        label_5->setStyleSheet(QLatin1String("font-family: MicrosoftYaHei;\n"
"font-size: 18px;\n"
"color: #FFFFFF;"));
        label_5->setAlignment(Qt::AlignCenter);
        le_minute = new QLineEdit(timewidget);
        le_minute->setObjectName(QStringLiteral("le_minute"));
        le_minute->setGeometry(QRect(307, 79, 43, 31));
        le_minute->setMinimumSize(QSize(43, 31));
        le_minute->setMaximumSize(QSize(43, 31));
        le_minute->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgba(13, 53, 136, 1);\n"
"border: 1px solid #979797;\n"
""));
        le_minute->setAlignment(Qt::AlignCenter);
        le_hour = new QLineEdit(timewidget);
        le_hour->setObjectName(QStringLiteral("le_hour"));
        le_hour->setGeometry(QRect(222, 79, 43, 31));
        le_hour->setMinimumSize(QSize(43, 31));
        le_hour->setMaximumSize(QSize(43, 31));
        le_hour->setStyleSheet(QLatin1String("font: 18px \"Microsoft YaHei UI\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgb(0, 0, 0);\n"
"color: rgba(13, 53, 136, 1);\n"
"border: 1px solid #979797;\n"
""));
        le_hour->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(timewidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(355, 80, 32, 31));
        label_6->setMinimumSize(QSize(32, 31));
        label_6->setSizeIncrement(QSize(32, 31));
        label_6->setStyleSheet(QLatin1String("font-family: MicrosoftYaHei;\n"
"font-size: 18px;\n"
"color: #FFFFFF;"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(timewidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(270, 80, 32, 31));
        label_7->setMinimumSize(QSize(32, 31));
        label_7->setSizeIncrement(QSize(32, 31));
        label_7->setStyleSheet(QLatin1String("font-family: MicrosoftYaHei;\n"
"font-size: 18px;\n"
"color: #FFFFFF;"));
        label_7->setAlignment(Qt::AlignCenter);
        close = new QPushButton(timewidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(530, 20, 40, 40));
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

        retranslateUi(timewidget);

        QMetaObject::connectSlotsByName(timewidget);
    } // setupUi

    void retranslateUi(QWidget *timewidget)
    {
        timewidget->setWindowTitle(QApplication::translate("timewidget", "Form", 0));
        label_2->setText(QApplication::translate("timewidget", "\345\271\264", 0));
        label_4->setText(QApplication::translate("timewidget", "\346\234\210", 0));
        label_5->setText(QApplication::translate("timewidget", "\346\227\245", 0));
        label_6->setText(QApplication::translate("timewidget", "\345\210\206", 0));
        label_7->setText(QApplication::translate("timewidget", "\346\227\266", 0));
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class timewidget: public Ui_timewidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEWIDGET_H
