/********************************************************************************
** Form generated from reading UI file 'gearbox.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GEARBOX_H
#define UI_GEARBOX_H

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

class Ui_gearbox
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_8;
    QLabel *gearbox_rate;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout_6;
    QLabel *gearbox_in_rev;
    QLabel *label;
    QLabel *label_5;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_7;
    QLabel *gearbox_out_rev;
    QLabel *label_2;
    QLabel *label_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QPushButton *btn_back;

    void setupUi(QWidget *gearbox)
    {
        if (gearbox->objectName().isEmpty())
            gearbox->setObjectName(QStringLiteral("gearbox"));
        gearbox->resize(1080, 652);
        gearbox->setMaximumSize(QSize(1080, 652));
        verticalLayout = new QVBoxLayout(gearbox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, -1, 0, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(gearbox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(1080, 16777215));
        widget->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, -1, 5, -1);
        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(300, 300));
        widget_5->setMaximumSize(QSize(300, 300));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        widget_6 = new QWidget(widget_5);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_5 = new QVBoxLayout(widget_6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 0, -1, -1);
        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setLayoutDirection(Qt::RightToLeft);
        verticalLayout_8 = new QVBoxLayout(widget_9);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, -1, -1, 0);
        gearbox_rate = new QLabel(widget_9);
        gearbox_rate->setObjectName(QStringLiteral("gearbox_rate"));
        gearbox_rate->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox_rate->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_8->addWidget(gearbox_rate);

        label_3 = new QLabel(widget_9);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 20));
        label_3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_8->addWidget(label_3);


        verticalLayout_5->addWidget(widget_9);


        verticalLayout_2->addWidget(widget_6);

        label_4 = new QLabel(widget_5);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 50px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout->addWidget(widget_5);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(300, 300));
        widget_4->setMaximumSize(QSize(300, 300));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, 0, -1, 0);
        widget_7 = new QWidget(widget_4);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setLayoutDirection(Qt::RightToLeft);
        widget_7->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_6 = new QVBoxLayout(widget_7);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gearbox_in_rev = new QLabel(widget_7);
        gearbox_in_rev->setObjectName(QStringLiteral("gearbox_in_rev"));
        gearbox_in_rev->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox_in_rev->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_6->addWidget(gearbox_in_rev);

        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_6->addWidget(label);


        verticalLayout_3->addWidget(widget_7);

        label_5 = new QLabel(widget_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 48px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_5);


        horizontalLayout->addWidget(widget_4);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(300, 300));
        widget_3->setMaximumSize(QSize(300, 300));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_4 = new QVBoxLayout(widget_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, 0);
        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setLayoutDirection(Qt::RightToLeft);
        widget_8->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_7 = new QVBoxLayout(widget_8);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        gearbox_out_rev = new QLabel(widget_8);
        gearbox_out_rev->setObjectName(QStringLiteral("gearbox_out_rev"));
        gearbox_out_rev->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox_out_rev->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_7->addWidget(gearbox_out_rev);

        label_2 = new QLabel(widget_8);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 20));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_7->addWidget(label_2);


        verticalLayout_4->addWidget(widget_8);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 48px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_6);


        horizontalLayout->addWidget(widget_3);


        verticalLayout->addWidget(widget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(gearbox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(1080, 16777215));
        widget_2->setStyleSheet(QStringLiteral("background:transparent"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_7 = new QLabel(widget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(1000, 80));
        label_7->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_7);

        btn_back = new QPushButton(widget_2);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;"));

        horizontalLayout_2->addWidget(btn_back);


        verticalLayout->addWidget(widget_2);


        retranslateUi(gearbox);

        QMetaObject::connectSlotsByName(gearbox);
    } // setupUi

    void retranslateUi(QWidget *gearbox)
    {
        gearbox->setWindowTitle(QApplication::translate("gearbox", "Form", 0));
        gearbox_rate->setText(QApplication::translate("gearbox", "000", 0));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("gearbox", "\345\217\230\351\200\237\347\256\261\346\257\224", 0));
        gearbox_in_rev->setText(QApplication::translate("gearbox", "000", 0));
        label->setText(QApplication::translate("gearbox", "rpm", 0));
        label_5->setText(QApplication::translate("gearbox", "\350\276\223\345\205\245\350\275\264\350\275\254\351\200\237", 0));
        gearbox_out_rev->setText(QApplication::translate("gearbox", "000", 0));
        label_2->setText(QApplication::translate("gearbox", "rpm", 0));
        label_6->setText(QApplication::translate("gearbox", "\350\276\223\345\207\272\350\275\264\350\275\254\351\200\237", 0));
        label_7->setText(QApplication::translate("gearbox", "\345\217\230\351\200\237\347\256\261", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class gearbox: public Ui_gearbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GEARBOX_H