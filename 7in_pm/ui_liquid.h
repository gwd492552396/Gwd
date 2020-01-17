/********************************************************************************
** Form generated from reading UI file 'liquid.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIQUID_H
#define UI_LIQUID_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Liquid
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_cooling;
    QVBoxLayout *verticalLayout;
    QProgressBar *cooling_bar;
    QLabel *label;
    QWidget *widget_hydraulic;
    QVBoxLayout *verticalLayout_2;
    QProgressBar *hydraulic_bar;
    QLabel *label_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QPushButton *btn_back;

    void setupUi(QWidget *Liquid)
    {
        if (Liquid->objectName().isEmpty())
            Liquid->setObjectName(QStringLiteral("Liquid"));
        Liquid->resize(1080, 652);
        Liquid->setMinimumSize(QSize(1080, 652));
        Liquid->setMaximumSize(QSize(1292, 16777215));
        Liquid->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout_3 = new QVBoxLayout(Liquid);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        widget = new QWidget(Liquid);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(1080, 16777215));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget_cooling = new QWidget(widget);
        widget_cooling->setObjectName(QStringLiteral("widget_cooling"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_cooling->sizePolicy().hasHeightForWidth());
        widget_cooling->setSizePolicy(sizePolicy);
        widget_cooling->setMinimumSize(QSize(135, 270));
        widget_cooling->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\266\262\344\275\215\347\212\266\346\200\201_\346\255\243\345\270\270.png);"));
        verticalLayout = new QVBoxLayout(widget_cooling);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        cooling_bar = new QProgressBar(widget_cooling);
        cooling_bar->setObjectName(QStringLiteral("cooling_bar"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cooling_bar->sizePolicy().hasHeightForWidth());
        cooling_bar->setSizePolicy(sizePolicy1);
        cooling_bar->setLayoutDirection(Qt::LeftToRight);
        cooling_bar->setAutoFillBackground(false);
        cooling_bar->setStyleSheet(QLatin1String("QProgressBar{\n"
"        border: none;\n"
"        color: white;\n"
"        text-align: center;\n"
"        background: rgb(0, 0, 0);\n"
"		font: 75 18pt \"Microsoft YaHei UI\";\n"
"}\n"
"QProgressBar::chunk {\n"
"        border: none;\n"
"        background: rgb(0, 160, 230);\n"
"}"));
        cooling_bar->setValue(31);
        cooling_bar->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cooling_bar->setTextVisible(true);
        cooling_bar->setOrientation(Qt::Vertical);
        cooling_bar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout->addWidget(cooling_bar);

        label = new QLabel(widget_cooling);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(117, 41));
        label->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 24px;\n"
"color: #FFFFFF;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_cooling);

        widget_hydraulic = new QWidget(widget);
        widget_hydraulic->setObjectName(QStringLiteral("widget_hydraulic"));
        sizePolicy.setHeightForWidth(widget_hydraulic->sizePolicy().hasHeightForWidth());
        widget_hydraulic->setSizePolicy(sizePolicy);
        widget_hydraulic->setMinimumSize(QSize(135, 270));
        widget_hydraulic->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\266\262\344\275\215\347\212\266\346\200\201_\346\255\243\345\270\270.png);"));
        verticalLayout_2 = new QVBoxLayout(widget_hydraulic);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        hydraulic_bar = new QProgressBar(widget_hydraulic);
        hydraulic_bar->setObjectName(QStringLiteral("hydraulic_bar"));
        sizePolicy1.setHeightForWidth(hydraulic_bar->sizePolicy().hasHeightForWidth());
        hydraulic_bar->setSizePolicy(sizePolicy1);
        hydraulic_bar->setStyleSheet(QLatin1String("QProgressBar{\n"
"        border: none;\n"
"        color: white;\n"
"		\n"
"		font: 75 18pt \"Microsoft YaHei UI\";\n"
"        text-align: center;\n"
"        background: rgb(0, 0, 0);\n"
"}\n"
"QProgressBar::chunk {\n"
"        border: none;\n"
"        background: rgb(0, 160, 230);\n"
"}"));
        hydraulic_bar->setValue(24);
        hydraulic_bar->setOrientation(Qt::Vertical);
        hydraulic_bar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_2->addWidget(hydraulic_bar);

        label_2 = new QLabel(widget_hydraulic);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 24px;\n"
"color: #FFFFFF;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_2);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addWidget(widget_hydraulic);


        verticalLayout_3->addWidget(widget);

        widget_2 = new QWidget(Liquid);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(1080, 80));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sign = new QLabel(widget_2);
        sign->setObjectName(QStringLiteral("sign"));
        sizePolicy.setHeightForWidth(sign->sizePolicy().hasHeightForWidth());
        sign->setSizePolicy(sizePolicy);
        sign->setMinimumSize(QSize(1000, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        btn_back = new QPushButton(widget_2);
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

        sign->raise();
        btn_back->raise();
        widget->raise();

        verticalLayout_3->addWidget(widget_2);


        retranslateUi(Liquid);

        QMetaObject::connectSlotsByName(Liquid);
    } // setupUi

    void retranslateUi(QWidget *Liquid)
    {
        Liquid->setWindowTitle(QApplication::translate("Liquid", "Form", 0));
        label->setText(QApplication::translate("Liquid", "\345\206\267\345\215\264\346\266\262\344\275\215", 0));
        label_2->setText(QApplication::translate("Liquid", "\346\266\262\345\216\213\346\262\271\344\275\215", 0));
        sign->setText(QApplication::translate("Liquid", "\346\266\262\344\275\215\344\277\241\346\201\257", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Liquid: public Ui_Liquid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIQUID_H
