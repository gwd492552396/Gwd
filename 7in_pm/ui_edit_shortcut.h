/********************************************************************************
** Form generated from reading UI file 'edit_shortcut.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_SHORTCUT_H
#define UI_EDIT_SHORTCUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_edit_shortcut
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_16;
    QRadioButton *l2_temper;
    QRadioButton *l2_liquid;
    QRadioButton *l2_weight;
    QRadioButton *l2_engine;
    QRadioButton *l2_gearbox;
    QRadioButton *l2_pressure;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_15;
    QRadioButton *l3_temper;
    QRadioButton *l3_liquid;
    QRadioButton *l3_weight;
    QRadioButton *l3_engine;
    QRadioButton *l3_gearbox;
    QRadioButton *l3_pressure;
    QSpacerItem *verticalSpacer_3;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_9;
    QRadioButton *r2_temper;
    QRadioButton *r2_liquid;
    QRadioButton *r2_weight;
    QRadioButton *r2_engine;
    QRadioButton *r2_gearbox;
    QRadioButton *r2_pressure;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_14;
    QRadioButton *r3_temper;
    QRadioButton *r3_liquid;
    QRadioButton *r3_weight;
    QRadioButton *r3_engine;
    QRadioButton *r3_gearbox;
    QRadioButton *r3_pressure;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_back_home;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_reset;
    QPushButton *btn_save;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *edit_shortcut)
    {
        if (edit_shortcut->objectName().isEmpty())
            edit_shortcut->setObjectName(QStringLiteral("edit_shortcut"));
        edit_shortcut->resize(1080, 652);
        edit_shortcut->setMinimumSize(QSize(1080, 652));
        edit_shortcut->setMaximumSize(QSize(1080, 652));
        verticalLayout = new QVBoxLayout(edit_shortcut);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget = new QWidget(edit_shortcut);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox_3 = new QGroupBox(widget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setStyleSheet(QLatin1String("font: 36px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size: 36px;\n"
"background:transparent;"));
        horizontalLayout_16 = new QHBoxLayout(groupBox_3);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        l2_temper = new QRadioButton(groupBox_3);
        l2_temper->setObjectName(QStringLiteral("l2_temper"));
        l2_temper->setMinimumSize(QSize(70, 70));
        l2_temper->setMaximumSize(QSize(70, 70));
        l2_temper->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));
        l2_temper->setChecked(true);

        horizontalLayout_16->addWidget(l2_temper);

        l2_liquid = new QRadioButton(groupBox_3);
        l2_liquid->setObjectName(QStringLiteral("l2_liquid"));
        l2_liquid->setMinimumSize(QSize(70, 70));
        l2_liquid->setMaximumSize(QSize(70, 70));
        l2_liquid->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_16->addWidget(l2_liquid);

        l2_weight = new QRadioButton(groupBox_3);
        l2_weight->setObjectName(QStringLiteral("l2_weight"));
        l2_weight->setMinimumSize(QSize(70, 70));
        l2_weight->setMaximumSize(QSize(70, 70));
        l2_weight->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_16->addWidget(l2_weight);

        l2_engine = new QRadioButton(groupBox_3);
        l2_engine->setObjectName(QStringLiteral("l2_engine"));
        l2_engine->setMinimumSize(QSize(70, 70));
        l2_engine->setMaximumSize(QSize(70, 70));
        l2_engine->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_16->addWidget(l2_engine);

        l2_gearbox = new QRadioButton(groupBox_3);
        l2_gearbox->setObjectName(QStringLiteral("l2_gearbox"));
        l2_gearbox->setMinimumSize(QSize(70, 70));
        l2_gearbox->setMaximumSize(QSize(70, 70));
        l2_gearbox->setStyleSheet(QLatin1String("\n"
"QRadioButton:unchecked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton::indicator \n"
"{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_16->addWidget(l2_gearbox);

        l2_pressure = new QRadioButton(groupBox_3);
        l2_pressure->setObjectName(QStringLiteral("l2_pressure"));
        l2_pressure->setMinimumSize(QSize(70, 70));
        l2_pressure->setMaximumSize(QSize(70, 70));
        l2_pressure->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_16->addWidget(l2_pressure);


        verticalLayout_2->addWidget(groupBox_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        groupBox_4 = new QGroupBox(widget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setStyleSheet(QLatin1String("font: 36px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size: 36px;\n"
"background:transparent;"));
        horizontalLayout_15 = new QHBoxLayout(groupBox_4);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        l3_temper = new QRadioButton(groupBox_4);
        l3_temper->setObjectName(QStringLiteral("l3_temper"));
        l3_temper->setMinimumSize(QSize(70, 70));
        l3_temper->setMaximumSize(QSize(70, 70));
        l3_temper->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));
        l3_temper->setChecked(true);

        horizontalLayout_15->addWidget(l3_temper);

        l3_liquid = new QRadioButton(groupBox_4);
        l3_liquid->setObjectName(QStringLiteral("l3_liquid"));
        l3_liquid->setMinimumSize(QSize(70, 70));
        l3_liquid->setMaximumSize(QSize(70, 70));
        l3_liquid->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_15->addWidget(l3_liquid);

        l3_weight = new QRadioButton(groupBox_4);
        l3_weight->setObjectName(QStringLiteral("l3_weight"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l3_weight->sizePolicy().hasHeightForWidth());
        l3_weight->setSizePolicy(sizePolicy);
        l3_weight->setMinimumSize(QSize(70, 70));
        l3_weight->setMaximumSize(QSize(70, 70));
        l3_weight->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_15->addWidget(l3_weight);

        l3_engine = new QRadioButton(groupBox_4);
        l3_engine->setObjectName(QStringLiteral("l3_engine"));
        l3_engine->setMinimumSize(QSize(70, 70));
        l3_engine->setMaximumSize(QSize(70, 70));
        l3_engine->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_15->addWidget(l3_engine);

        l3_gearbox = new QRadioButton(groupBox_4);
        l3_gearbox->setObjectName(QStringLiteral("l3_gearbox"));
        l3_gearbox->setMinimumSize(QSize(70, 70));
        l3_gearbox->setMaximumSize(QSize(70, 70));
        l3_gearbox->setStyleSheet(QLatin1String("\n"
"QRadioButton:unchecked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton::indicator \n"
"{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_15->addWidget(l3_gearbox);

        l3_pressure = new QRadioButton(groupBox_4);
        l3_pressure->setObjectName(QStringLiteral("l3_pressure"));
        l3_pressure->setMinimumSize(QSize(70, 70));
        l3_pressure->setMaximumSize(QSize(70, 70));
        l3_pressure->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_15->addWidget(l3_pressure);


        verticalLayout_2->addWidget(groupBox_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        groupBox_5 = new QGroupBox(widget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QLatin1String("font: 36px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size: 36px;\n"
"background:transparent;"));
        horizontalLayout_9 = new QHBoxLayout(groupBox_5);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        r2_temper = new QRadioButton(groupBox_5);
        r2_temper->setObjectName(QStringLiteral("r2_temper"));
        r2_temper->setMinimumSize(QSize(70, 70));
        r2_temper->setMaximumSize(QSize(70, 70));
        r2_temper->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));
        r2_temper->setChecked(true);

        horizontalLayout_9->addWidget(r2_temper);

        r2_liquid = new QRadioButton(groupBox_5);
        r2_liquid->setObjectName(QStringLiteral("r2_liquid"));
        r2_liquid->setMinimumSize(QSize(70, 70));
        r2_liquid->setMaximumSize(QSize(70, 70));
        r2_liquid->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_9->addWidget(r2_liquid);

        r2_weight = new QRadioButton(groupBox_5);
        r2_weight->setObjectName(QStringLiteral("r2_weight"));
        r2_weight->setMinimumSize(QSize(70, 70));
        r2_weight->setMaximumSize(QSize(70, 70));
        r2_weight->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_9->addWidget(r2_weight);

        r2_engine = new QRadioButton(groupBox_5);
        r2_engine->setObjectName(QStringLiteral("r2_engine"));
        r2_engine->setMinimumSize(QSize(70, 70));
        r2_engine->setMaximumSize(QSize(70, 70));
        r2_engine->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_9->addWidget(r2_engine);

        r2_gearbox = new QRadioButton(groupBox_5);
        r2_gearbox->setObjectName(QStringLiteral("r2_gearbox"));
        r2_gearbox->setMinimumSize(QSize(70, 70));
        r2_gearbox->setMaximumSize(QSize(70, 70));
        r2_gearbox->setStyleSheet(QLatin1String("\n"
"QRadioButton:unchecked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton::indicator \n"
"{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout_9->addWidget(r2_gearbox);

        r2_pressure = new QRadioButton(groupBox_5);
        r2_pressure->setObjectName(QStringLiteral("r2_pressure"));
        r2_pressure->setMinimumSize(QSize(70, 70));
        r2_pressure->setMaximumSize(QSize(70, 70));
        r2_pressure->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_9->addWidget(r2_pressure);


        verticalLayout_2->addWidget(groupBox_5);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        groupBox_6 = new QGroupBox(widget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setStyleSheet(QLatin1String("font: 36px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size: 36px;\n"
"background:transparent;"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        r3_temper = new QRadioButton(groupBox_6);
        r3_temper->setObjectName(QStringLiteral("r3_temper"));
        r3_temper->setMinimumSize(QSize(70, 70));
        r3_temper->setMaximumSize(QSize(70, 70));
        r3_temper->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\270\251\345\272\246.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));
        r3_temper->setChecked(true);

        horizontalLayout_14->addWidget(r3_temper);

        r3_liquid = new QRadioButton(groupBox_6);
        r3_liquid->setObjectName(QStringLiteral("r3_liquid"));
        r3_liquid->setMinimumSize(QSize(70, 70));
        r3_liquid->setMaximumSize(QSize(70, 70));
        r3_liquid->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\346\266\262\344\275\215.PNG)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_14->addWidget(r3_liquid);

        r3_weight = new QRadioButton(groupBox_6);
        r3_weight->setObjectName(QStringLiteral("r3_weight"));
        r3_weight->setMinimumSize(QSize(70, 70));
        r3_weight->setMaximumSize(QSize(70, 70));
        r3_weight->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_14->addWidget(r3_weight);

        r3_engine = new QRadioButton(groupBox_6);
        r3_engine->setObjectName(QStringLiteral("r3_engine"));
        r3_engine->setMinimumSize(QSize(70, 70));
        r3_engine->setMaximumSize(QSize(70, 70));
        r3_engine->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\217\221\345\212\250\346\234\272.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}"));

        horizontalLayout_14->addWidget(r3_engine);

        r3_gearbox = new QRadioButton(groupBox_6);
        r3_gearbox->setObjectName(QStringLiteral("r3_gearbox"));
        r3_gearbox->setMinimumSize(QSize(70, 70));
        r3_gearbox->setMaximumSize(QSize(70, 70));
        r3_gearbox->setStyleSheet(QLatin1String("\n"
"QRadioButton:unchecked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/gearbox1.PNG)\n"
"}\n"
"QRadioButton::indicator \n"
"{\n"
"background:transparent;\n"
"}\n"
"\n"
"\n"
""));
        r3_gearbox->setChecked(false);

        horizontalLayout_14->addWidget(r3_gearbox);

        r3_pressure = new QRadioButton(groupBox_6);
        r3_pressure->setObjectName(QStringLiteral("r3_pressure"));
        r3_pressure->setMinimumSize(QSize(70, 70));
        r3_pressure->setMaximumSize(QSize(70, 70));
        r3_pressure->setStyleSheet(QString::fromUtf8("QRadioButton:unchecked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"\n"
"}\n"
"QRadioButton:checked {\n"
"border-image:url(:/\345\216\213\345\212\233.png)\n"
"}\n"
"QRadioButton::indicator {\n"
"background:transparent;\n"
"}\n"
""));

        horizontalLayout_14->addWidget(r3_pressure);


        verticalLayout_2->addWidget(groupBox_6);


        verticalLayout->addWidget(widget);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        widget_2 = new QWidget(edit_shortcut);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 90));
        widget_2->setStyleSheet(QStringLiteral("background:transparent;"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_back_home = new QPushButton(widget_2);
        btn_back_home->setObjectName(QStringLiteral("btn_back_home"));
        btn_back_home->setMinimumSize(QSize(250, 80));
        btn_back_home->setMaximumSize(QSize(250, 80));
        btn_back_home->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2423.png);\n"
"border:none;\n"
""));

        horizontalLayout->addWidget(btn_back_home);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_reset = new QPushButton(widget_2);
        btn_reset->setObjectName(QStringLiteral("btn_reset"));
        btn_reset->setMinimumSize(QSize(150, 60));
        btn_reset->setStyleSheet(QLatin1String("border:5px solid rgb(44,86,191);\n"
"    border-top-left-radius:15px;\n"
"    border-top-right-radius:15px;\n"
"    border-bottom-left-radius:15px;\n"
"    border-bottom-right-radius:15px;\n"
"font: 25pt \"Microsoft YaHei UI\";\n"
"color:rgb(44, 89, 191);\n"
"background-color:rgb(0,0,0)\n"
""));

        horizontalLayout->addWidget(btn_reset);

        btn_save = new QPushButton(widget_2);
        btn_save->setObjectName(QStringLiteral("btn_save"));
        btn_save->setMinimumSize(QSize(150, 60));
        btn_save->setStyleSheet(QLatin1String("\n"
"border:5px solid rgb(44,86,191);\n"
"    border-top-left-radius:15px;\n"
"    border-top-right-radius:15px;\n"
"    border-bottom-left-radius:15px;\n"
"    border-bottom-right-radius:15px;\n"
"font: 25pt \"Microsoft YaHei UI\";\n"
"color:rgb(44, 89, 191);\n"
"background-color:rgb(0,0,0)\n"
""));

        horizontalLayout->addWidget(btn_save);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(widget_2);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setMaximumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);


        retranslateUi(edit_shortcut);

        QMetaObject::connectSlotsByName(edit_shortcut);
    } // setupUi

    void retranslateUi(QWidget *edit_shortcut)
    {
        edit_shortcut->setWindowTitle(QApplication::translate("edit_shortcut", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("edit_shortcut", "\345\267\246\344\272\214", 0));
        l2_temper->setText(QString());
        l2_liquid->setText(QString());
        l2_weight->setText(QString());
        l2_engine->setText(QString());
        l2_gearbox->setText(QString());
        l2_pressure->setText(QString());
        groupBox_4->setTitle(QApplication::translate("edit_shortcut", "\345\267\246\344\270\211", 0));
        l3_temper->setText(QString());
        l3_liquid->setText(QString());
        l3_weight->setText(QString());
        l3_engine->setText(QString());
        l3_gearbox->setText(QString());
        l3_pressure->setText(QString());
        groupBox_5->setTitle(QApplication::translate("edit_shortcut", "\345\217\263\344\272\214", 0));
        r2_temper->setText(QString());
        r2_liquid->setText(QString());
        r2_weight->setText(QString());
        r2_engine->setText(QString());
        r2_gearbox->setText(QString());
        r2_pressure->setText(QString());
        groupBox_6->setTitle(QApplication::translate("edit_shortcut", "\345\217\263\344\270\211", 0));
        r3_temper->setText(QString());
        r3_liquid->setText(QString());
        r3_weight->setText(QString());
        r3_engine->setText(QString());
        r3_gearbox->setText(QString());
        r3_pressure->setText(QString());
        btn_back_home->setText(QString());
        btn_reset->setText(QApplication::translate("edit_shortcut", "\351\207\215\347\275\256", 0));
        btn_save->setText(QApplication::translate("edit_shortcut", "\344\277\235\345\255\230", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class edit_shortcut: public Ui_edit_shortcut {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_SHORTCUT_H
