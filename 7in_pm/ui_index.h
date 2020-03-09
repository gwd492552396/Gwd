/********************************************************************************
** Form generated from reading UI file 'index.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INDEX_H
#define UI_INDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Index
{
public:
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QProgressBar *power_bar;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_11;
    QLabel *jia_su;
    QLabel *label_5;
    QLabel *label_8;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_14;
    QVBoxLayout *verticalLayout_10;
    QLabel *huan_xing;
    QLabel *label_7;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_10;
    QVBoxLayout *verticalLayout_8;
    QLabel *battery_vol;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *gearbox;
    QLabel *label_4;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_12;
    QVBoxLayout *verticalLayout_9;
    QLabel *engine_rev;
    QLabel *label_3;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_9;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_control;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *Index)
    {
        if (Index->objectName().isEmpty())
            Index->setObjectName(QStringLiteral("Index"));
        Index->resize(1080, 652);
        Index->setMinimumSize(QSize(1080, 652));
        Index->setMaximumSize(QSize(1080, 652));
        Index->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout_7 = new QVBoxLayout(Index);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(9, 9, 9, 9);
        widget_11 = new QWidget(Index);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        widget_11->setMinimumSize(QSize(0, 20));
        widget_11->setMaximumSize(QSize(16777215, 20));
        horizontalLayout_4 = new QHBoxLayout(widget_11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(1010, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        power_bar = new QProgressBar(widget_11);
        power_bar->setObjectName(QStringLiteral("power_bar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(power_bar->sizePolicy().hasHeightForWidth());
        power_bar->setSizePolicy(sizePolicy);
        power_bar->setMinimumSize(QSize(25, 25));
        power_bar->setMaximumSize(QSize(25, 25));
        power_bar->setStyleSheet(QStringLiteral("background:transparent;"));
        power_bar->setValue(24);
        power_bar->setTextVisible(true);
        power_bar->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(power_bar);


        verticalLayout_7->addWidget(widget_11);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        widget_8 = new QWidget(Index);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        verticalLayout_6 = new QVBoxLayout(widget_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_8);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        horizontalLayout = new QHBoxLayout(widget_6);
        horizontalLayout->setSpacing(50);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        widget_4 = new QWidget(widget_6);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMinimumSize(QSize(240, 240));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);"));
        verticalLayout_4 = new QVBoxLayout(widget_4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        widget_13 = new QWidget(widget_4);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        widget_13->setLayoutDirection(Qt::RightToLeft);
        widget_13->setStyleSheet(QStringLiteral("background:transparent"));
        verticalLayout_11 = new QVBoxLayout(widget_13);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, 25, -1, -1);
        jia_su = new QLabel(widget_13);
        jia_su->setObjectName(QStringLiteral("jia_su"));
        jia_su->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        jia_su->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_11->addWidget(jia_su);

        label_5 = new QLabel(widget_13);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(60, 20));
        label_5->setLayoutDirection(Qt::RightToLeft);
        label_5->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_5->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_5);


        verticalLayout_4->addWidget(widget_13);

        label_8 = new QLabel(widget_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_8);


        horizontalLayout->addWidget(widget_4);

        widget_5 = new QWidget(widget_6);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMinimumSize(QSize(240, 240));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);"));
        verticalLayout_5 = new QVBoxLayout(widget_5);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_14 = new QWidget(widget_5);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        widget_14->setLayoutDirection(Qt::RightToLeft);
        widget_14->setStyleSheet(QStringLiteral("background:transparent"));
        verticalLayout_10 = new QVBoxLayout(widget_14);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 25, -1, -1);
        huan_xing = new QLabel(widget_14);
        huan_xing->setObjectName(QStringLiteral("huan_xing"));
        huan_xing->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        huan_xing->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_10->addWidget(huan_xing);

        label_7 = new QLabel(widget_14);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(60, 20));
        label_7->setLayoutDirection(Qt::RightToLeft);
        label_7->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_7->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_7);


        verticalLayout_5->addWidget(widget_14);

        label_9 = new QLabel(widget_5);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_9);


        horizontalLayout->addWidget(widget_5);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        verticalLayout_6->addWidget(widget_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        widget_7 = new QWidget(widget_8);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        horizontalLayout_2 = new QHBoxLayout(widget_7);
        horizontalLayout_2->setSpacing(50);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        widget = new QWidget(widget_7);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(240, 240));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_10 = new QWidget(widget);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        widget_10->setLayoutDirection(Qt::RightToLeft);
        widget_10->setStyleSheet(QStringLiteral("background:transparent"));
        verticalLayout_8 = new QVBoxLayout(widget_10);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 25, -1, -1);
        battery_vol = new QLabel(widget_10);
        battery_vol->setObjectName(QStringLiteral("battery_vol"));
        battery_vol->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        battery_vol->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_8->addWidget(battery_vol);

        label = new QLabel(widget_10);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(60, 20));
        label->setLayoutDirection(Qt::RightToLeft);
        label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label);


        verticalLayout->addWidget(widget_10);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(240, 240));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 5, 0, 0);
        gearbox = new QLabel(widget_2);
        gearbox->setObjectName(QStringLiteral("gearbox"));
        gearbox->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        gearbox->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(gearbox);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_4->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_4);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_7);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(240, 240));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\260.png);"));
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        widget_12 = new QWidget(widget_3);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        widget_12->setLayoutDirection(Qt::RightToLeft);
        widget_12->setStyleSheet(QStringLiteral("background:transparent"));
        verticalLayout_9 = new QVBoxLayout(widget_12);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 25, -1, -1);
        engine_rev = new QLabel(widget_12);
        engine_rev->setObjectName(QStringLiteral("engine_rev"));
        engine_rev->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        engine_rev->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_9->addWidget(engine_rev);

        label_3 = new QLabel(widget_12);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(60, 20));
        label_3->setLayoutDirection(Qt::RightToLeft);
        label_3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 20px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_3);


        verticalLayout_3->addWidget(widget_12);

        label_6 = new QLabel(widget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 40px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);


        horizontalLayout_2->addWidget(widget_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(widget_7);


        verticalLayout_7->addWidget(widget_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        widget_9 = new QWidget(Index);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        horizontalLayout_3 = new QHBoxLayout(widget_9);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        btn_control = new QPushButton(widget_9);
        btn_control->setObjectName(QStringLiteral("btn_control"));
        sizePolicy.setHeightForWidth(btn_control->sizePolicy().hasHeightForWidth());
        btn_control->setSizePolicy(sizePolicy);
        btn_control->setMinimumSize(QSize(250, 80));
        btn_control->setStyleSheet(QLatin1String("QPushButton#btn_control{\n"
"background-image: url(:/117.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(btn_control);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout_7->addWidget(widget_9);


        retranslateUi(Index);

        QMetaObject::connectSlotsByName(Index);
    } // setupUi

    void retranslateUi(QWidget *Index)
    {
        Index->setWindowTitle(QApplication::translate("Index", "Form", 0));
        jia_su->setText(QApplication::translate("Index", "000", 0));
        label_5->setText(QApplication::translate("Index", "%", 0));
        label_8->setText(QApplication::translate("Index", "\345\212\240\351\200\237\350\270\217\346\235\277\n"
"\347\231\276\345\210\206\346\257\224", 0));
        huan_xing->setText(QApplication::translate("Index", "000", 0));
        label_7->setText(QApplication::translate("Index", "%", 0));
        label_9->setText(QApplication::translate("Index", "\347\274\223\350\241\214\350\270\217\346\235\277\n"
"\347\231\276\345\210\206\346\257\224", 0));
        battery_vol->setText(QApplication::translate("Index", "000", 0));
        label->setText(QApplication::translate("Index", "V", 0));
        label_2->setText(QApplication::translate("Index", "\350\223\204\347\224\265\346\261\240\347\224\265\345\216\213", 0));
        gearbox->setText(QApplication::translate("Index", "000", 0));
        label_4->setText(QApplication::translate("Index", "\345\217\230\351\200\237\347\256\261\345\217\230\346\257\224", 0));
        engine_rev->setText(QApplication::translate("Index", "2356", 0));
        label_3->setText(QApplication::translate("Index", "rpm", 0));
        label_6->setText(QApplication::translate("Index", "\345\217\221\345\212\250\346\234\272\350\275\254\351\200\237", 0));
        btn_control->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Index: public Ui_Index {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INDEX_H
