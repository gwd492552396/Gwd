/********************************************************************************
** Form generated from reading UI file 'weighingparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEIGHINGPARAMETER_H
#define UI_WEIGHINGPARAMETER_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeighingParameter
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QPushButton *le_canshu;
    QSpacerItem *verticalSpacer_3;
    QPushButton *le_weight;
    QLabel *label;
    QPushButton *le_ry;
    QLabel *label_4;
    QPushButton *le_yg;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_back_home;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WeighingParameter)
    {
        if (WeighingParameter->objectName().isEmpty())
            WeighingParameter->setObjectName(QStringLiteral("WeighingParameter"));
        WeighingParameter->resize(1080, 652);
        WeighingParameter->setMinimumSize(QSize(1080, 652));
        WeighingParameter->setMaximumSize(QSize(1080, 652));
        gridLayout_2 = new QGridLayout(WeighingParameter);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, -1, 15);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(30);
        label_3 = new QLabel(WeighingParameter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(0, 24));
        label_3->setMaximumSize(QSize(16777215, 80));
        label_3->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_2 = new QLabel(WeighingParameter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 24));
        label_2->setMaximumSize(QSize(16777215, 80));
        label_2->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        le_canshu = new QPushButton(WeighingParameter);
        le_canshu->setObjectName(QStringLiteral("le_canshu"));
        le_canshu->setMinimumSize(QSize(198, 46));
        le_canshu->setMaximumSize(QSize(198, 46));
        le_canshu->setStyleSheet(QString::fromUtf8("QPushButton#le_canshu{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font:30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_canshu:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_canshu, 5, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        le_weight = new QPushButton(WeighingParameter);
        le_weight->setObjectName(QStringLiteral("le_weight"));
        le_weight->setMinimumSize(QSize(198, 46));
        le_weight->setMaximumSize(QSize(198, 46));
        le_weight->setStyleSheet(QString::fromUtf8("QPushButton#le_weight{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_weight:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_weight, 7, 2, 1, 1);

        label = new QLabel(WeighingParameter);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(0, 24));
        label->setMaximumSize(QSize(16777215, 80));
        label->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        le_ry = new QPushButton(WeighingParameter);
        le_ry->setObjectName(QStringLiteral("le_ry"));
        le_ry->setMinimumSize(QSize(198, 46));
        le_ry->setMaximumSize(QSize(198, 46));
        le_ry->setStyleSheet(QString::fromUtf8("QPushButton#le_ry{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_ry:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_ry, 0, 2, 1, 1);

        label_4 = new QLabel(WeighingParameter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(0, 24));
        label_4->setMaximumSize(QSize(16777215, 80));
        label_4->setStyleSheet(QLatin1String("font: 40px \"Microsoft JhengHei UI\";\n"
"color:rgb(255,255,255);\n"
"background:transparent"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 7, 0, 1, 1);

        le_yg = new QPushButton(WeighingParameter);
        le_yg->setObjectName(QStringLiteral("le_yg"));
        le_yg->setMinimumSize(QSize(198, 46));
        le_yg->setMaximumSize(QSize(198, 46));
        le_yg->setStyleSheet(QString::fromUtf8("QPushButton#le_yg{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_yg:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        gridLayout->addWidget(le_yg, 3, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 4, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 6, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(60, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_back_home = new QPushButton(WeighingParameter);
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

        btn_back = new QPushButton(WeighingParameter);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);


        retranslateUi(WeighingParameter);

        QMetaObject::connectSlotsByName(WeighingParameter);
    } // setupUi

    void retranslateUi(QWidget *WeighingParameter)
    {
        WeighingParameter->setWindowTitle(QApplication::translate("WeighingParameter", "Form", 0));
        label_3->setText(QApplication::translate("WeighingParameter", "\346\240\207\345\256\232\345\217\202\346\225\260\347\225\214\351\235\242", 0));
        label_2->setText(QApplication::translate("WeighingParameter", "\351\273\204\347\273\277\345\210\206\347\225\214\350\256\276\345\256\232\345\200\274", 0));
        le_canshu->setText(QString());
        le_weight->setText(QString());
        label->setText(QApplication::translate("WeighingParameter", "\347\272\242\351\273\204\345\210\206\350\247\243\347\202\271\350\256\276\345\256\232\345\200\274", 0));
        le_ry->setText(QString());
        label_4->setText(QApplication::translate("WeighingParameter", "\351\242\235\345\256\232\350\275\275\351\207\215\351\207\217", 0));
        le_yg->setText(QString());
        btn_back_home->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WeighingParameter: public Ui_WeighingParameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEIGHINGPARAMETER_H
