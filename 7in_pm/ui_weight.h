/********************************************************************************
** Form generated from reading UI file 'weight.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEIGHT_H
#define UI_WEIGHT_H

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

class Ui_Weight
{
public:
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_10;
    QLabel *total_times;
    QLabel *label_11;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_7;
    QLabel *ban_total_times;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout;
    QLabel *real_time_weight;
    QLabel *label;
    QLabel *label_3;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_9;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *total_weight;
    QLabel *label_2;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Weight)
    {
        if (Weight->objectName().isEmpty())
            Weight->setObjectName(QStringLiteral("Weight"));
        Weight->resize(1080, 652);
        Weight->setMinimumSize(QSize(674, 400));
        Weight->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout_6 = new QVBoxLayout(Weight);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(9, 9, 9, 9);
        widget_7 = new QWidget(Weight);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 9, -1, 9);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(240, 240));
        widget_4->setMaximumSize(QSize(240, 240));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_10 = new QVBoxLayout(widget_4);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        total_times = new QLabel(widget_4);
        total_times->setObjectName(QStringLiteral("total_times"));
        total_times->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        total_times->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(total_times);

        label_11 = new QLabel(widget_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_11->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_11);


        horizontalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_7);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(240, 240));
        widget_5->setMaximumSize(QSize(240, 240));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_7 = new QVBoxLayout(widget_5);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        ban_total_times = new QLabel(widget_5);
        ban_total_times->setObjectName(QStringLiteral("ban_total_times"));
        ban_total_times->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        ban_total_times->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(ban_total_times);

        label_10 = new QLabel(widget_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_10->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_10);


        horizontalLayout_2->addWidget(widget_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_6->addWidget(widget_7);

        widget = new QWidget(Weight);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QLatin1String("border:none;\n"
"background:transparent;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 9, -1, 9);
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        widget_6 = new QWidget(widget);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMinimumSize(QSize(240, 240));
        widget_6->setMaximumSize(QSize(240, 240));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_11 = new QVBoxLayout(widget_6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        widget_9 = new QWidget(widget_6);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        widget_9->setLayoutDirection(Qt::RightToLeft);
        widget_9->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout = new QVBoxLayout(widget_9);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        real_time_weight = new QLabel(widget_9);
        real_time_weight->setObjectName(QStringLiteral("real_time_weight"));
        real_time_weight->setLayoutDirection(Qt::LeftToRight);
        real_time_weight->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        real_time_weight->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout->addWidget(real_time_weight);

        label = new QLabel(widget_9);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout->addWidget(label);


        verticalLayout_11->addWidget(widget_9);

        label_3 = new QLabel(widget_6);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_3);


        horizontalLayout->addWidget(widget_6);

        widget_3 = new QWidget(widget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(240, 240));
        widget_3->setMaximumSize(QSize(240, 240));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);\n"
""));
        verticalLayout_9 = new QVBoxLayout(widget_3);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(widget_3);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setLayoutDirection(Qt::RightToLeft);
        widget_10->setStyleSheet(QStringLiteral("background:none;"));
        verticalLayout_2 = new QVBoxLayout(widget_10);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 20, -1, 0);
        total_weight = new QLabel(widget_10);
        total_weight->setObjectName(QStringLiteral("total_weight"));
        total_weight->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        total_weight->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(total_weight);

        label_2 = new QLabel(widget_10);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(60, 20));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));

        verticalLayout_2->addWidget(label_2);


        verticalLayout_9->addWidget(widget_10);

        label_7 = new QLabel(widget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_7);


        horizontalLayout->addWidget(widget_3);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);


        verticalLayout_6->addWidget(widget);

        widget_8 = new QWidget(Weight);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setMinimumSize(QSize(0, 0));
        widget_8->setMaximumSize(QSize(16777215, 300));
        horizontalLayout_3 = new QHBoxLayout(widget_8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_backhome = new QPushButton(widget_8);
        btn_backhome->setObjectName(QStringLiteral("btn_backhome"));
        btn_backhome->setMinimumSize(QSize(250, 80));
        btn_backhome->setStyleSheet(QString::fromUtf8("QPushButton#btn_backhome{\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2423.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_backhome:pressed{\n"
"\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2422.png);\n"
"}"));

        horizontalLayout_3->addWidget(btn_backhome);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_back = new QPushButton(widget_8);
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

        horizontalLayout_3->addWidget(btn_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(widget_8);


        retranslateUi(Weight);

        QMetaObject::connectSlotsByName(Weight);
    } // setupUi

    void retranslateUi(QWidget *Weight)
    {
        Weight->setWindowTitle(QApplication::translate("Weight", "Form", 0));
        total_times->setText(QApplication::translate("Weight", "000", 0));
        label_11->setText(QApplication::translate("Weight", "\346\200\273\350\277\220\350\276\223\346\254\241\346\225\260", 0));
        ban_total_times->setText(QApplication::translate("Weight", "000", 0));
        label_10->setText(QApplication::translate("Weight", "\347\217\255\350\277\220\350\276\223\346\254\241\346\225\260", 0));
        real_time_weight->setText(QApplication::translate("Weight", "000", 0));
        label->setText(QApplication::translate("Weight", "     \345\220\250", 0));
        label_3->setText(QApplication::translate("Weight", " \345\256\236\346\227\266\351\207\215\351\207\217", 0));
        total_weight->setText(QApplication::translate("Weight", "2356", 0));
        label_2->setText(QApplication::translate("Weight", "     \345\220\250", 0));
        label_7->setText(QApplication::translate("Weight", "\351\242\235\345\256\232\351\207\215\351\207\217", 0));
        btn_backhome->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Weight: public Ui_Weight {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHT_H
