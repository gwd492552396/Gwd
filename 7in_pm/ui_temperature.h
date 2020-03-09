/********************************************************************************
** Form generated from reading UI file 'temperature.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEMPERATURE_H
#define UI_TEMPERATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Temperature
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *gearbox_temper;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *enigne_temper;
    QLabel *label_4;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;

    void setupUi(QWidget *Temperature)
    {
        if (Temperature->objectName().isEmpty())
            Temperature->setObjectName(QStringLiteral("Temperature"));
        Temperature->resize(1290, 688);
        Temperature->setMinimumSize(QSize(1080, 652));
        Temperature->setMaximumSize(QSize(1290, 16777215));
        Temperature->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout = new QVBoxLayout(Temperature);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(Temperature);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(300, 300));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        gearbox_temper = new QLabel(widget_4);
        gearbox_temper->setObjectName(QStringLiteral("gearbox_temper"));
        gearbox_temper->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox_temper->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_4->addWidget(gearbox_temper);

        label = new QLabel(widget_4);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QStringLiteral("border-image:url(:/temp.png)"));

        verticalLayout_4->addWidget(label);


        verticalLayout_2->addWidget(widget_4);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 50px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_2->addWidget(widget_2);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(300, 300));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);\n"
""));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(-1, 0, -1, 0);
        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        enigne_temper = new QLabel(widget_5);
        enigne_temper->setObjectName(QStringLiteral("enigne_temper"));
        enigne_temper->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        enigne_temper->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(enigne_temper);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(60, 20));
        label_4->setStyleSheet(QStringLiteral("border-image:url(:/temp.png)"));

        verticalLayout_5->addWidget(label_4);


        verticalLayout_6->addWidget(widget_5);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 50px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);


        horizontalLayout_2->addWidget(widget_6);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        sign = new QLabel(Temperature);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setMinimumSize(QSize(1000, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(Temperature);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Temperature);

        QMetaObject::connectSlotsByName(Temperature);
    } // setupUi

    void retranslateUi(QWidget *Temperature)
    {
        Temperature->setWindowTitle(QApplication::translate("Temperature", "Form", 0));
        gearbox_temper->setText(QApplication::translate("Temperature", "000", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("Temperature", "\345\217\230\351\200\237\347\256\261\346\270\251\345\272\246", 0));
        enigne_temper->setText(QApplication::translate("Temperature", "000", 0));
        label_4->setText(QString());
        label_12->setText(QApplication::translate("Temperature", "\345\217\221\345\212\250\346\234\272\346\260\264\346\270\251", 0));
        sign->setText(QApplication::translate("Temperature", "\346\270\251\345\272\246\344\277\241\346\201\257", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Temperature: public Ui_Temperature {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEMPERATURE_H
