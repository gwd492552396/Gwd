/********************************************************************************
** Form generated from reading UI file 'power.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POWER_H
#define UI_POWER_H

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

class Ui_Power
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *soc;
    QLabel *label_6;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *dong_power_v;
    QLabel *label_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *dong_power_a;
    QLabel *label_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *bms;
    QLabel *label_8;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *max_power_a;
    QLabel *label_10;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *max_kw;
    QLabel *label_12;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *max_power_v;
    QLabel *label_14;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *power_state;
    QLabel *label_16;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QPushButton *btn_back;

    void setupUi(QWidget *Power)
    {
        if (Power->objectName().isEmpty())
            Power->setObjectName(QStringLiteral("Power"));
        Power->resize(1080, 652);
        Power->setMinimumSize(QSize(674, 400));
        Power->setStyleSheet(QStringLiteral("background:transparent;"));
        gridLayout = new QGridLayout(Power);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(9, 30, 9, 9);
        widget_3 = new QWidget(Power);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(210, 210));
        widget_3->setMaximumSize(QSize(210, 210));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        soc = new QLabel(widget_3);
        soc->setObjectName(QStringLiteral("soc"));
        soc->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        soc->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(soc);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);


        gridLayout->addWidget(widget_3, 0, 3, 1, 1);

        widget = new QWidget(Power);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(210, 210));
        widget->setMaximumSize(QSize(210, 210));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        dong_power_v = new QLabel(widget);
        dong_power_v->setObjectName(QStringLiteral("dong_power_v"));
        dong_power_v->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        dong_power_v->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(dong_power_v);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        gridLayout->addWidget(widget, 0, 1, 1, 1);

        widget_2 = new QWidget(Power);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(210, 210));
        widget_2->setMaximumSize(QSize(210, 210));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        dong_power_a = new QLabel(widget_2);
        dong_power_a->setObjectName(QStringLiteral("dong_power_a"));
        dong_power_a->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        dong_power_a->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(dong_power_a);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        gridLayout->addWidget(widget_2, 0, 2, 1, 1);

        widget_4 = new QWidget(Power);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(210, 210));
        widget_4->setMaximumSize(QSize(210, 16777215));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        bms = new QLabel(widget_4);
        bms->setObjectName(QStringLiteral("bms"));
        bms->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        bms->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(bms);

        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);


        gridLayout->addWidget(widget_4, 0, 4, 1, 1);

        widget_5 = new QWidget(Power);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(210, 210));
        widget_5->setMaximumSize(QSize(210, 210));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        max_power_a = new QLabel(widget_5);
        max_power_a->setObjectName(QStringLiteral("max_power_a"));
        max_power_a->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        max_power_a->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(max_power_a);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_10);


        gridLayout->addWidget(widget_5, 1, 1, 1, 1);

        widget_6 = new QWidget(Power);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(210, 210));
        widget_6->setMaximumSize(QSize(210, 210));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_6 = new QVBoxLayout(widget_6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        max_kw = new QLabel(widget_6);
        max_kw->setObjectName(QStringLiteral("max_kw"));
        max_kw->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        max_kw->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(max_kw);

        label_12 = new QLabel(widget_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);


        gridLayout->addWidget(widget_6, 1, 2, 1, 1);

        widget_7 = new QWidget(Power);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMinimumSize(QSize(135, 135));
        widget_7->setMaximumSize(QSize(210, 210));
        widget_7->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_7 = new QVBoxLayout(widget_7);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        max_power_v = new QLabel(widget_7);
        max_power_v->setObjectName(QStringLiteral("max_power_v"));
        max_power_v->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        max_power_v->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(max_power_v);

        label_14 = new QLabel(widget_7);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_14);


        gridLayout->addWidget(widget_7, 1, 3, 1, 1);

        widget_8 = new QWidget(Power);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(135, 135));
        widget_8->setMaximumSize(QSize(210, 210));
        widget_8->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_8 = new QVBoxLayout(widget_8);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        power_state = new QLabel(widget_8);
        power_state->setObjectName(QStringLiteral("power_state"));
        power_state->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        power_state->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(power_state);

        label_16 = new QLabel(widget_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_16);


        gridLayout->addWidget(widget_8, 1, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sign = new QLabel(Power);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setMinimumSize(QSize(1000, 46));
        sign->setMaximumSize(QSize(16777215, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 28px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        btn_back = new QPushButton(Power);
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


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 5);


        retranslateUi(Power);

        QMetaObject::connectSlotsByName(Power);
    } // setupUi

    void retranslateUi(QWidget *Power)
    {
        Power->setWindowTitle(QApplication::translate("Power", "Form", 0));
        soc->setText(QApplication::translate("Power", "000", 0));
        label_6->setText(QApplication::translate("Power", "SOC(%)", 0));
        dong_power_v->setText(QApplication::translate("Power", "000", 0));
        label_2->setText(QApplication::translate("Power", "\345\212\250\345\212\233\347\224\265\346\261\240\347\224\265\345\216\213(V)", 0));
        dong_power_a->setText(QApplication::translate("Power", "000", 0));
        label_4->setText(QApplication::translate("Power", "\345\212\250\345\212\233\347\224\265\346\261\240\347\224\265\346\265\201(A)", 0));
        bms->setText(QApplication::translate("Power", "000", 0));
        label_8->setText(QApplication::translate("Power", "BMS\350\207\252\346\243\200\347\212\266\346\200\201", 0));
        max_power_a->setText(QApplication::translate("Power", "000", 0));
        label_10->setText(QApplication::translate("Power", "\346\234\200\345\244\247\345\217\257\346\224\276\347\224\265\346\265\201(A)", 0));
        max_kw->setText(QApplication::translate("Power", "000", 0));
        label_12->setText(QApplication::translate("Power", "\346\234\200\345\244\247\345\217\257\346\224\276\347\224\265\n"
"\345\212\237\347\216\207(KW)", 0));
        max_power_v->setText(QApplication::translate("Power", "000", 0));
        label_14->setText(QApplication::translate("Power", "\346\234\200\345\244\247\345\205\201\350\256\270\347\224\265\345\216\213(V)", 0));
        power_state->setText(QApplication::translate("Power", "000", 0));
        label_16->setText(QApplication::translate("Power", "\347\224\265\346\261\240\345\205\205\347\224\265\347\212\266\346\200\201", 0));
        sign->setText(QApplication::translate("Power", "\347\224\265\346\261\240\347\256\241\347\220\206", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Power: public Ui_Power {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POWER_H
