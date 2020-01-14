/********************************************************************************
** Form generated from reading UI file 'enigne.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENIGNE_H
#define UI_ENIGNE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Enigne
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *enigne_temp;
    QLabel *label;
    QLabel *label_14;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *enigne_pressure;
    QLabel *label_2;
    QLabel *label_16;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *enigne_speed;
    QLabel *label_3;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QPushButton *btn_back;

    void setupUi(QWidget *Enigne)
    {
        if (Enigne->objectName().isEmpty())
            Enigne->setObjectName(QStringLiteral("Enigne"));
        Enigne->resize(1080, 652);
        Enigne->setMinimumSize(QSize(674, 400));
        Enigne->setMaximumSize(QSize(1080, 652));
        gridLayout = new QGridLayout(Enigne);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(Enigne);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(1080, 16777215));
        widget->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(300, 300));
        widget_7->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_7 = new QVBoxLayout(widget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 0, -1, 0);
        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setLayoutDirection(Qt::RightToLeft);
        widget_2->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        enigne_temp = new QLabel(widget_2);
        enigne_temp->setObjectName(QStringLiteral("enigne_temp"));
        enigne_temp->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        enigne_temp->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(enigne_temp);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout->addWidget(label);


        verticalLayout_7->addWidget(widget_2);

        label_14 = new QLabel(widget_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 50px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);


        horizontalLayout_2->addWidget(widget_7);

        widget_8 = new QWidget(widget);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(300, 300));
        widget_8->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_8 = new QVBoxLayout(widget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 0, -1, 0);
        widget_3 = new QWidget(widget_8);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setLayoutDirection(Qt::RightToLeft);
        widget_3->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        enigne_pressure = new QLabel(widget_3);
        enigne_pressure->setObjectName(QStringLiteral("enigne_pressure"));
        enigne_pressure->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        enigne_pressure->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(enigne_pressure);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 20));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_2->addWidget(label_2);


        verticalLayout_8->addWidget(widget_3);

        label_16 = new QLabel(widget_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 46px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_16);


        horizontalLayout_2->addWidget(widget_8);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(300, 300));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, -1, 0);
        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setLayoutDirection(Qt::RightToLeft);
        widget_4->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        enigne_speed = new QLabel(widget_4);
        enigne_speed->setObjectName(QStringLiteral("enigne_speed"));
        enigne_speed->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        enigne_speed->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_3->addWidget(enigne_speed);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 20));
        label_3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_3->addWidget(label_3);


        verticalLayout_6->addWidget(widget_4);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 50px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);


        horizontalLayout_2->addWidget(widget_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addWidget(widget, 1, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        sign = new QLabel(Enigne);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setMinimumSize(QSize(1000, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        btn_back = new QPushButton(Enigne);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 2);


        retranslateUi(Enigne);

        QMetaObject::connectSlotsByName(Enigne);
    } // setupUi

    void retranslateUi(QWidget *Enigne)
    {
        Enigne->setWindowTitle(QApplication::translate("Enigne", "Form", 0));
        enigne_temp->setText(QApplication::translate("Enigne", "000", 0));
        label->setText(QApplication::translate("Enigne", " \342\204\203", 0));
        label_14->setText(QApplication::translate("Enigne", "\346\260\264\346\270\251", 0));
        enigne_pressure->setText(QApplication::translate("Enigne", "0000", 0));
        label_2->setText(QApplication::translate("Enigne", "kPa", 0));
        label_16->setText(QApplication::translate("Enigne", "\346\262\271\345\216\213", 0));
        enigne_speed->setText(QApplication::translate("Enigne", "0000", 0));
        label_3->setText(QApplication::translate("Enigne", "rpm", 0));
        label_12->setText(QApplication::translate("Enigne", "\350\275\254\351\200\237", 0));
        sign->setText(QApplication::translate("Enigne", "\345\217\221\345\212\250\346\234\272", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Enigne: public Ui_Enigne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENIGNE_H
