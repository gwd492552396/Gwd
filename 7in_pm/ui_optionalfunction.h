/********************************************************************************
** Form generated from reading UI file 'optionalfunction.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONALFUNCTION_H
#define UI_OPTIONALFUNCTION_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionalFunction
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_5;
    QCheckBox *ckb_video;
    QCheckBox *ckb_weigh;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *cbk_line;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *cbk_oil;
    QCheckBox *cbk_press;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_back_home;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *OptionalFunction)
    {
        if (OptionalFunction->objectName().isEmpty())
            OptionalFunction->setObjectName(QStringLiteral("OptionalFunction"));
        OptionalFunction->resize(1154, 688);
        OptionalFunction->setMinimumSize(QSize(674, 400));
        OptionalFunction->setStyleSheet(QLatin1String("font: 12pt \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255)"));
        verticalLayout = new QVBoxLayout(OptionalFunction);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(OptionalFunction);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QStringLiteral("background:transparent"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 4, 1, 1);

        label_5 = new QLabel(widget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 5, 4, 1, 1);

        ckb_video = new QCheckBox(widget_2);
        ckb_video->setObjectName(QStringLiteral("ckb_video"));
        ckb_video->setMinimumSize(QSize(45, 25));
        ckb_video->setMaximumSize(QSize(45, 25));
        ckb_video->setStyleSheet(QLatin1String("QCheckBox::indicator:unchecked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/132.png);\n"
"}\n"
""));

        gridLayout->addWidget(ckb_video, 3, 2, 1, 1);

        ckb_weigh = new QCheckBox(widget_2);
        ckb_weigh->setObjectName(QStringLiteral("ckb_weigh"));
        ckb_weigh->setMinimumSize(QSize(45, 25));
        ckb_weigh->setMaximumSize(QSize(45, 25));
        ckb_weigh->setStyleSheet(QLatin1String("QCheckBox::indicator:unchecked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/132.png);\n"
"}\n"
""));

        gridLayout->addWidget(ckb_weigh, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 2, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 6, 1, 1);

        cbk_line = new QCheckBox(widget_2);
        cbk_line->setObjectName(QStringLiteral("cbk_line"));
        cbk_line->setMinimumSize(QSize(45, 25));
        cbk_line->setMaximumSize(QSize(45, 25));
        cbk_line->setStyleSheet(QLatin1String("QCheckBox::indicator:unchecked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/132.png);\n"
"}\n"
""));

        gridLayout->addWidget(cbk_line, 1, 5, 1, 1);

        label_4 = new QLabel(widget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 3, 4, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 1, 1, 1);

        cbk_oil = new QCheckBox(widget_2);
        cbk_oil->setObjectName(QStringLiteral("cbk_oil"));
        cbk_oil->setMinimumSize(QSize(45, 25));
        cbk_oil->setMaximumSize(QSize(45, 25));
        cbk_oil->setStyleSheet(QLatin1String("QCheckBox::indicator:unchecked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/132.png);\n"
"}\n"
""));

        gridLayout->addWidget(cbk_oil, 5, 5, 1, 1);

        cbk_press = new QCheckBox(widget_2);
        cbk_press->setObjectName(QStringLiteral("cbk_press"));
        cbk_press->setMinimumSize(QSize(45, 25));
        cbk_press->setMaximumSize(QSize(45, 25));
        cbk_press->setStyleSheet(QLatin1String("QCheckBox::indicator:unchecked {\n"
"image: url(:/131.png);\n"
"\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"image: url(:/132.png);\n"
"}\n"
""));

        gridLayout->addWidget(cbk_press, 3, 5, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 5, 1, 1);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget = new QWidget(OptionalFunction);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:transparent"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_back_home = new QPushButton(widget);
        btn_back_home->setObjectName(QStringLiteral("btn_back_home"));
        btn_back_home->setMinimumSize(QSize(250, 80));
        btn_back_home->setStyleSheet(QString::fromUtf8("QPushButton#btn_back_home{\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2423.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_back_home:pressed{\n"
"\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\2422.png);\n"
"}"));

        horizontalLayout->addWidget(btn_back_home);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout->addWidget(widget);


        retranslateUi(OptionalFunction);

        QMetaObject::connectSlotsByName(OptionalFunction);
    } // setupUi

    void retranslateUi(QWidget *OptionalFunction)
    {
        OptionalFunction->setWindowTitle(QApplication::translate("OptionalFunction", "Form", 0));
        label_3->setText(QApplication::translate("OptionalFunction", "\346\236\266\347\272\277\345\212\237\350\203\275", 0));
        label_5->setText(QApplication::translate("OptionalFunction", "\351\233\206\344\270\255\346\266\246\346\273\221", 0));
        ckb_video->setText(QString());
        ckb_weigh->setText(QString());
        cbk_line->setText(QString());
        label_4->setText(QApplication::translate("OptionalFunction", "\350\203\216\345\216\213\345\212\237\350\203\275", 0));
        label->setText(QApplication::translate("OptionalFunction", "\347\247\260\351\207\215\347\263\273\347\273\237", 0));
        label_2->setText(QApplication::translate("OptionalFunction", "\347\216\257\350\275\246\345\275\261\345\203\217", 0));
        cbk_oil->setText(QString());
        cbk_press->setText(QString());
        btn_back_home->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class OptionalFunction: public Ui_OptionalFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONALFUNCTION_H
