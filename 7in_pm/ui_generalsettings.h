/********************************************************************************
** Form generated from reading UI file 'generalsettings.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERALSETTINGS_H
#define UI_GENERALSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GeneralSettings
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QPushButton *btn_time;
    QPushButton *le_carnum;
    QLabel *label_5;
    QLabel *label_2;
    QPushButton *le_drivernum;
    QPushButton *btn_unit;
    QLabel *label_7;
    QLabel *label;
    QLabel *label_6;
    QPushButton *btn_bright;
    QPushButton *btn_lang;
    QPushButton *le_weigh;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_9;
    QLabel *label_8;
    QPushButton *le_limit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *ckb_autobri;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_back_home;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *GeneralSettings)
    {
        if (GeneralSettings->objectName().isEmpty())
            GeneralSettings->setObjectName(QStringLiteral("GeneralSettings"));
        GeneralSettings->resize(1080, 652);
        GeneralSettings->setMinimumSize(QSize(1080, 652));
        GeneralSettings->setMaximumSize(QSize(1080, 652));
        GeneralSettings->setLayoutDirection(Qt::LeftToRight);
        gridLayout_2 = new QGridLayout(GeneralSettings);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 15);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(-1, -1, -1, 10);
        widget_2 = new QWidget(GeneralSettings);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 60));
        widget_2->setMaximumSize(QSize(16777215, 60));
        widget_2->setStyleSheet(QStringLiteral("background:transparent;"));
        btn_time = new QPushButton(widget_2);
        btn_time->setObjectName(QStringLiteral("btn_time"));
        btn_time->setGeometry(QRect(0, 10, 198, 46));
        btn_time->setMinimumSize(QSize(198, 46));
        btn_time->setMaximumSize(QSize(198, 46));
        btn_time->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 10.5pt \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(widget_2, 2, 1, 1, 1);

        le_carnum = new QPushButton(GeneralSettings);
        le_carnum->setObjectName(QStringLiteral("le_carnum"));
        le_carnum->setMinimumSize(QSize(198, 46));
        le_carnum->setMaximumSize(QSize(198, 46));
        le_carnum->setFocusPolicy(Qt::NoFocus);
        le_carnum->setStyleSheet(QString::fromUtf8("QPushButton#le_carnum{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_carnum:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_carnum, 1, 3, 1, 1);

        label_5 = new QLabel(GeneralSettings);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        label_2 = new QLabel(GeneralSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        le_drivernum = new QPushButton(GeneralSettings);
        le_drivernum->setObjectName(QStringLiteral("le_drivernum"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_drivernum->sizePolicy().hasHeightForWidth());
        le_drivernum->setSizePolicy(sizePolicy);
        le_drivernum->setMinimumSize(QSize(198, 46));
        le_drivernum->setMaximumSize(QSize(198, 46));
        le_drivernum->setStyleSheet(QString::fromUtf8("QPushButton#le_drivernum{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_drivernum:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_drivernum, 0, 3, 1, 1);

        btn_unit = new QPushButton(GeneralSettings);
        btn_unit->setObjectName(QStringLiteral("btn_unit"));
        btn_unit->setMinimumSize(QSize(198, 46));
        btn_unit->setMaximumSize(QSize(198, 46));
        btn_unit->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 10.5pt \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(btn_unit, 1, 1, 1, 1);

        label_7 = new QLabel(GeneralSettings);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label = new QLabel(GeneralSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(GeneralSettings);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        btn_bright = new QPushButton(GeneralSettings);
        btn_bright->setObjectName(QStringLiteral("btn_bright"));
        btn_bright->setMinimumSize(QSize(198, 46));
        btn_bright->setMaximumSize(QSize(198, 46));
        btn_bright->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 10.5pt \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(btn_bright, 4, 1, 1, 1);

        btn_lang = new QPushButton(GeneralSettings);
        btn_lang->setObjectName(QStringLiteral("btn_lang"));
        btn_lang->setMinimumSize(QSize(198, 46));
        btn_lang->setMaximumSize(QSize(198, 46));
        btn_lang->setStyleSheet(QString::fromUtf8("QPushButton#btn_lang{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_lang:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(btn_lang, 0, 1, 1, 1);

        le_weigh = new QPushButton(GeneralSettings);
        le_weigh->setObjectName(QStringLiteral("le_weigh"));
        le_weigh->setMinimumSize(QSize(198, 46));
        le_weigh->setMaximumSize(QSize(198, 46));
        le_weigh->setStyleSheet(QString::fromUtf8("QPushButton#le_weigh{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_weigh:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_weigh, 2, 3, 1, 1);

        label_4 = new QLabel(GeneralSettings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(GeneralSettings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        label_9 = new QLabel(GeneralSettings);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));

        gridLayout->addWidget(label_9, 3, 0, 1, 1);

        label_8 = new QLabel(GeneralSettings);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        le_limit = new QPushButton(GeneralSettings);
        le_limit->setObjectName(QStringLiteral("le_limit"));
        le_limit->setMinimumSize(QSize(198, 46));
        le_limit->setMaximumSize(QSize(198, 46));
        le_limit->setStyleSheet(QString::fromUtf8("QPushButton#le_limit{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_limit:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_limit, 3, 3, 1, 1);

        widget_3 = new QWidget(GeneralSettings);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setStyleSheet(QStringLiteral("background:transparent"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        ckb_autobri = new QCheckBox(widget_3);
        ckb_autobri->setObjectName(QStringLiteral("ckb_autobri"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ckb_autobri->sizePolicy().hasHeightForWidth());
        ckb_autobri->setSizePolicy(sizePolicy1);
        ckb_autobri->setMaximumSize(QSize(100, 16777215));
        ckb_autobri->setStyleSheet(QLatin1String("QCheckBox::indicator:checked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"image: url(:/132.png);\n"
"}\n"
""));
        ckb_autobri->setCheckable(true);
        ckb_autobri->setChecked(true);
        ckb_autobri->setTristate(false);

        horizontalLayout->addWidget(ckb_autobri);


        gridLayout->addWidget(widget_3, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        widget = new QWidget(GeneralSettings);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy2);
        widget->setMaximumSize(QSize(16777215, 90));
        widget->setStyleSheet(QLatin1String("background:transparent;\n"
"border:none;"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        btn_back_home = new QPushButton(widget);
        btn_back_home->setObjectName(QStringLiteral("btn_back_home"));
        btn_back_home->setMinimumSize(QSize(250, 80));
        btn_back_home->setMaximumSize(QSize(125, 16777215));
        btn_back_home->setStyleSheet(QString::fromUtf8("QPushButton#btn_back_home{\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2423.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_back_home:pressed{\n"
"\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2422.png);\n"
"}"));

        horizontalLayout_2->addWidget(btn_back_home);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setMaximumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_back);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        gridLayout_2->addWidget(widget, 3, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 110, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 130, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);


        retranslateUi(GeneralSettings);

        QMetaObject::connectSlotsByName(GeneralSettings);
    } // setupUi

    void retranslateUi(QWidget *GeneralSettings)
    {
        GeneralSettings->setWindowTitle(QApplication::translate("GeneralSettings", "Form", 0));
        btn_time->setText(QApplication::translate("GeneralSettings", "12:59", 0));
        le_carnum->setText(QString());
        label_5->setText(QApplication::translate("GeneralSettings", "\345\217\270\346\234\272\344\273\243\345\217\267", 0));
        label_2->setText(QApplication::translate("GeneralSettings", "\350\256\241\351\207\217\345\215\225\344\275\215", 0));
        le_drivernum->setText(QString());
        btn_unit->setText(QApplication::translate("GeneralSettings", "\345\205\254\345\210\266", 0));
        label_7->setText(QApplication::translate("GeneralSettings", "\347\247\260\351\207\215\345\217\202\346\225\260", 0));
        label->setText(QApplication::translate("GeneralSettings", "\347\263\273\347\273\237\350\257\255\350\250\200", 0));
        label_6->setText(QApplication::translate("GeneralSettings", "\350\275\246\350\276\206\344\273\243\345\217\267", 0));
        btn_bright->setText(QApplication::translate("GeneralSettings", "100%", 0));
        btn_lang->setText(QApplication::translate("GeneralSettings", "\344\270\255\346\226\207", 0));
        le_weigh->setText(QString());
        label_4->setText(QApplication::translate("GeneralSettings", "\346\227\266       \351\227\264", 0));
        label_3->setText(QApplication::translate("GeneralSettings", "\345\261\217\345\271\225\344\272\256\345\272\246", 0));
        label_9->setText(QApplication::translate("GeneralSettings", "\350\207\252\345\212\250\344\272\256\345\272\246", 0));
        label_8->setText(QApplication::translate("GeneralSettings", "\350\266\205\351\200\237\351\242\204\350\255\246\n"
"\351\242\204\350\256\276\345\200\274", 0));
        le_limit->setText(QString());
        ckb_autobri->setText(QString());
        btn_back_home->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GeneralSettings: public Ui_GeneralSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERALSETTINGS_H
