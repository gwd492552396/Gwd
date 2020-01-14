/********************************************************************************
** Form generated from reading UI file 'pressure.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESSURE_H
#define UI_PRESSURE_H

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

class Ui_Pressure
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *gearbox_pressure;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *enigne_pressure;
    QLabel *label_3;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_9;
    QLabel *brake_front;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *brake_back;
    QLabel *label_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QPushButton *btn_back;

    void setupUi(QWidget *Pressure)
    {
        if (Pressure->objectName().isEmpty())
            Pressure->setObjectName(QStringLiteral("Pressure"));
        Pressure->resize(1280, 652);
        Pressure->setMinimumSize(QSize(674, 400));
        verticalLayout = new QVBoxLayout(Pressure);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 9, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_5 = new QWidget(Pressure);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setSpacing(50);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(240, 240));
        widget_3->setMaximumSize(QSize(240, 16777215));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, -1);
        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setLayoutDirection(Qt::RightToLeft);
        widget_7->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_5 = new QVBoxLayout(widget_7);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gearbox_pressure = new QLabel(widget_7);
        gearbox_pressure->setObjectName(QStringLiteral("gearbox_pressure"));
        gearbox_pressure->setLayoutDirection(Qt::LeftToRight);
        gearbox_pressure->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox_pressure->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_5->addWidget(gearbox_pressure);

        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_5->addWidget(label);


        verticalLayout_2->addWidget(widget_7);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_3->addWidget(widget_3);

        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(240, 240));
        widget_6->setMaximumSize(QSize(240, 16777215));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_8 = new QVBoxLayout(widget_6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 0, -1, -1);
        widget_8 = new QWidget(widget_6);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setLayoutDirection(Qt::RightToLeft);
        widget_8->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_6 = new QVBoxLayout(widget_8);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        enigne_pressure = new QLabel(widget_8);
        enigne_pressure->setObjectName(QStringLiteral("enigne_pressure"));
        enigne_pressure->setLayoutDirection(Qt::LeftToRight);
        enigne_pressure->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        enigne_pressure->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_6->addWidget(enigne_pressure);

        label_3 = new QLabel(widget_8);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 20));
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_6->addWidget(label_3);


        verticalLayout_8->addWidget(widget_8);

        label_14 = new QLabel(widget_6);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_14);


        horizontalLayout_3->addWidget(widget_6);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_5);

        widget = new QWidget(Pressure);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(240, 240));
        widget_4->setMaximumSize(QSize(240, 16777215));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, -1);
        widget_9 = new QWidget(widget_4);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setLayoutDirection(Qt::RightToLeft);
        widget_9->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_9 = new QVBoxLayout(widget_9);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        brake_front = new QLabel(widget_9);
        brake_front->setObjectName(QStringLiteral("brake_front"));
        brake_front->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        brake_front->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_9->addWidget(brake_front);

        label_5 = new QLabel(widget_9);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 20));
        label_5->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_9->addWidget(label_5);


        verticalLayout_3->addWidget(widget_9);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_4);


        horizontalLayout_2->addWidget(widget_4);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(240, 240));
        widget_2->setMaximumSize(QSize(240, 16777215));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        widget_10 = new QWidget(widget_2);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setLayoutDirection(Qt::RightToLeft);
        widget_10->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_7 = new QVBoxLayout(widget_10);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        brake_back = new QLabel(widget_10);
        brake_back->setObjectName(QStringLiteral("brake_back"));
        brake_back->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        brake_back->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_7->addWidget(brake_back);

        label_7 = new QLabel(widget_10);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(60, 20));
        label_7->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_7->addWidget(label_7);


        verticalLayout_4->addWidget(widget_10);

        label_6 = new QLabel(widget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        sign = new QLabel(Pressure);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setMinimumSize(QSize(1000, 46));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        btn_back = new QPushButton(Pressure);
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


        retranslateUi(Pressure);

        QMetaObject::connectSlotsByName(Pressure);
    } // setupUi

    void retranslateUi(QWidget *Pressure)
    {
        Pressure->setWindowTitle(QApplication::translate("Pressure", "Form", 0));
        gearbox_pressure->setText(QApplication::translate("Pressure", "000", 0));
        label->setText(QApplication::translate("Pressure", "kPa", 0));
        label_2->setText(QApplication::translate("Pressure", "\345\217\230\351\200\237\347\256\261\346\262\271\345\216\213", 0));
        enigne_pressure->setText(QApplication::translate("Pressure", "000", 0));
        label_3->setText(QApplication::translate("Pressure", "kPa", 0));
        label_14->setText(QApplication::translate("Pressure", " \345\217\221\345\212\250\346\234\272\346\262\271\345\216\213", 0));
        brake_front->setText(QApplication::translate("Pressure", "000", 0));
        label_5->setText(QApplication::translate("Pressure", "kPa", 0));
        label_4->setText(QApplication::translate("Pressure", " \345\211\215\345\210\266\345\212\250\350\223\204\350\203\275\n"
" \345\231\250\345\216\213\345\212\233", 0));
        brake_back->setText(QApplication::translate("Pressure", "000", 0));
        label_7->setText(QApplication::translate("Pressure", "kPa", 0));
        label_6->setText(QApplication::translate("Pressure", " \345\220\216\345\210\266\345\212\250\350\223\204\350\203\275\n"
" \345\231\250\345\216\213\345\212\233", 0));
        sign->setText(QApplication::translate("Pressure", "\345\216\213\345\212\233\344\277\241\346\201\257", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Pressure: public Ui_Pressure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESSURE_H
