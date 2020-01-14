/********************************************************************************
** Form generated from reading UI file 'choosecartype.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSECARTYPE_H
#define UI_CHOOSECARTYPE_H

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

class Ui_ChooseCarType
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QPushButton *btn_drive;
    QPushButton *btn_engine;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btn_back_home;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *ChooseCarType)
    {
        if (ChooseCarType->objectName().isEmpty())
            ChooseCarType->setObjectName(QStringLiteral("ChooseCarType"));
        ChooseCarType->resize(1080, 652);
        ChooseCarType->setMinimumSize(QSize(1080, 652));
        ChooseCarType->setMaximumSize(QSize(1080, 652));
        verticalLayout = new QVBoxLayout(ChooseCarType);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(ChooseCarType);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setStyleSheet(QStringLiteral("background:transparent"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(90, 24));
        label->setMaximumSize(QSize(180, 48));
        label->setStyleSheet(QLatin1String("font: 36px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size: 36px;"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(108, 24));
        label_2->setStyleSheet(QLatin1String("font: 18px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"font-size:36px;"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        btn_drive = new QPushButton(widget_2);
        btn_drive->setObjectName(QStringLiteral("btn_drive"));
        btn_drive->setMinimumSize(QSize(242, 62));
        btn_drive->setMaximumSize(QSize(242, 62));
        btn_drive->setStyleSheet(QString::fromUtf8("QPushButton#btn_drive{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 35px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_drive:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(btn_drive, 2, 3, 1, 1);

        btn_engine = new QPushButton(widget_2);
        btn_engine->setObjectName(QStringLiteral("btn_engine"));
        btn_engine->setMinimumSize(QSize(242, 62));
        btn_engine->setMaximumSize(QSize(212, 62));
        btn_engine->setStyleSheet(QString::fromUtf8("QPushButton#btn_engine{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 35px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#btn_engine:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(btn_engine, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 1, 1, 1);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(ChooseCarType);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:transparent"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

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

        horizontalLayout->addWidget(btn_back_home);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setMaximumSize(QSize(125, 16777215));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_6 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget);


        retranslateUi(ChooseCarType);

        QMetaObject::connectSlotsByName(ChooseCarType);
    } // setupUi

    void retranslateUi(QWidget *ChooseCarType)
    {
        ChooseCarType->setWindowTitle(QApplication::translate("ChooseCarType", "Form", 0));
        label->setText(QApplication::translate("ChooseCarType", "\345\217\221\345\212\250\346\234\272\351\200\211\346\213\251", 0));
        label_2->setText(QApplication::translate("ChooseCarType", "\351\251\261\345\212\250\347\263\273\347\273\237\351\200\211\346\213\251", 0));
        btn_drive->setText(QApplication::translate("ChooseCarType", "\350\245\277\351\227\250\345\255\220", 0));
        btn_engine->setText(QApplication::translate("ChooseCarType", "\345\272\267\346\230\216\346\226\257", 0));
        btn_back_home->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseCarType: public Ui_ChooseCarType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSECARTYPE_H
