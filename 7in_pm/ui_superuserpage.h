/********************************************************************************
** Form generated from reading UI file 'superuserpage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERUSERPAGE_H
#define UI_SUPERUSERPAGE_H

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

class Ui_SuperUserPage
{
public:
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_ybsz;
    QPushButton *btn_kxgn;
    QPushButton *btn_cxxz;
    QPushButton *btn_czcs;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_limitspeed;
    QPushButton *le_limitspeed;
    QLabel *label_number;
    QPushButton *le_number;
    QLabel *label_clear;
    QPushButton *btn_clear;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_exit;
    QPushButton *btn_back;

    void setupUi(QWidget *SuperUserPage)
    {
        if (SuperUserPage->objectName().isEmpty())
            SuperUserPage->setObjectName(QStringLiteral("SuperUserPage"));
        SuperUserPage->resize(1080, 652);
        SuperUserPage->setMinimumSize(QSize(674, 400));
        verticalLayout = new QVBoxLayout(SuperUserPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(15);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        btn_ybsz = new QPushButton(SuperUserPage);
        btn_ybsz->setObjectName(QStringLiteral("btn_ybsz"));
        btn_ybsz->setMinimumSize(QSize(341, 114));
        btn_ybsz->setStyleSheet(QString::fromUtf8("QPushButton#btn_ybsz{\n"
"border-image:url(:/\351\200\211\351\241\271_\344\270\200\350\210\254\350\256\276\347\275\256.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_ybsz:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\344\270\200\350\210\254\350\256\276\347\275\256_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_ybsz, 0, 1, 1, 1);

        btn_kxgn = new QPushButton(SuperUserPage);
        btn_kxgn->setObjectName(QStringLiteral("btn_kxgn"));
        btn_kxgn->setMinimumSize(QSize(341, 114));
        btn_kxgn->setStyleSheet(QString::fromUtf8("QPushButton#btn_kxgn{\n"
"border-image:url(:/\351\200\211\351\241\271_\345\217\257\351\200\211\345\212\237\350\203\275\350\256\276\347\275\256.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_kxgn:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\345\217\257\351\200\211\345\212\237\350\203\275\350\256\276\347\275\256_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_kxgn, 0, 2, 1, 1);

        btn_cxxz = new QPushButton(SuperUserPage);
        btn_cxxz->setObjectName(QStringLiteral("btn_cxxz"));
        btn_cxxz->setMinimumSize(QSize(341, 114));
        btn_cxxz->setStyleSheet(QString::fromUtf8("QPushButton#btn_cxxz{\n"
"border-image:url(:/\351\200\211\351\241\271_\350\275\246\345\236\213\351\200\211\346\213\251.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_cxxz:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\350\275\246\345\236\213\351\200\211\346\213\251_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_cxxz, 1, 1, 1, 1);

        btn_czcs = new QPushButton(SuperUserPage);
        btn_czcs->setObjectName(QStringLiteral("btn_czcs"));
        btn_czcs->setMinimumSize(QSize(341, 114));
        btn_czcs->setStyleSheet(QString::fromUtf8("QPushButton#btn_czcs{\n"
"border-image:url(:/\351\200\211\351\241\271_\347\247\260\351\207\215\347\263\273\347\273\237.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_czcs:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\347\247\260\351\207\215\347\263\273\347\273\237_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_czcs, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        label_limitspeed = new QLabel(SuperUserPage);
        label_limitspeed->setObjectName(QStringLiteral("label_limitspeed"));
        label_limitspeed->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 20pt \"Microsoft YaHei UI\";\n"
"background:transparent;\n"
""));
        label_limitspeed->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_limitspeed);

        le_limitspeed = new QPushButton(SuperUserPage);
        le_limitspeed->setObjectName(QStringLiteral("le_limitspeed"));
        le_limitspeed->setMinimumSize(QSize(198, 46));
        le_limitspeed->setMaximumSize(QSize(198, 46));
        le_limitspeed->setStyleSheet(QString::fromUtf8("QPushButton#le_limitspeed{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_limitspeed:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        horizontalLayout->addWidget(le_limitspeed);

        label_number = new QLabel(SuperUserPage);
        label_number->setObjectName(QStringLiteral("label_number"));
        label_number->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 20pt \"Microsoft YaHei UI\";\n"
"background:transparent\n"
""));
        label_number->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_number);

        le_number = new QPushButton(SuperUserPage);
        le_number->setObjectName(QStringLiteral("le_number"));
        le_number->setMinimumSize(QSize(198, 46));
        le_number->setMaximumSize(QSize(198, 46));
        le_number->setStyleSheet(QString::fromUtf8("QPushButton#le_number{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 30px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}\n"
"QPushButton#le_number:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213_\345\244\247.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 14px \"Microsoft YaHei UI\";\n"
"border:1px solid #979797;\n"
"	border-color: rgba(151, 151, 151, 1);\n"
"border-radius:5px;\n"
"}"));

        horizontalLayout->addWidget(le_number);

        label_clear = new QLabel(SuperUserPage);
        label_clear->setObjectName(QStringLiteral("label_clear"));
        label_clear->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 20pt \"Microsoft YaHei UI\";\n"
"background:transparent\n"
""));
        label_clear->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_clear);

        btn_clear = new QPushButton(SuperUserPage);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setMinimumSize(QSize(108, 46));
        btn_clear->setMaximumSize(QSize(108, 16777215));
        btn_clear->setLayoutDirection(Qt::LeftToRight);
        btn_clear->setStyleSheet(QString::fromUtf8("QPushButton#btn_clear{\n"
"border-image:url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 20pt \"Microsoft YaHei UI\";\n"
"border:none;\n"
"}\n"
"QPushButton#btn_clear:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\274\271\347\252\227\350\256\276\347\275\256_\346\214\211\344\270\213.png);\n"
"color:rgb(255, 255, 255);\n"
"font: 15pt \"Microsoft YaHei UI\";\n"
"border:none;\n"
"}\n"
"\n"
""));

        horizontalLayout->addWidget(btn_clear);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(500);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 40);
        btn_exit = new QPushButton(SuperUserPage);
        btn_exit->setObjectName(QStringLiteral("btn_exit"));
        btn_exit->setMinimumSize(QSize(186, 80));
        btn_exit->setMaximumSize(QSize(93, 40));
        btn_exit->setStyleSheet(QString::fromUtf8("QPushButton#btn_exit{\n"
"background-image:url(:/\346\214\211\351\224\256_\347\231\273\345\275\225 copy.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_exit:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\347\231\273\345\275\225_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(btn_exit);

        btn_back = new QPushButton(SuperUserPage);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setMaximumSize(QSize(125, 40));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_back);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(SuperUserPage);

        QMetaObject::connectSlotsByName(SuperUserPage);
    } // setupUi

    void retranslateUi(QWidget *SuperUserPage)
    {
        SuperUserPage->setWindowTitle(QApplication::translate("SuperUserPage", "Form", 0));
        btn_ybsz->setText(QString());
        btn_kxgn->setText(QString());
        btn_cxxz->setText(QString());
        btn_czcs->setText(QString());
        label_limitspeed->setText(QApplication::translate("SuperUserPage", "\350\275\246\350\276\206\351\231\220\351\200\237", 0));
        le_limitspeed->setText(QString());
        label_number->setText(QApplication::translate("SuperUserPage", "\350\275\246\346\236\266\345\217\267", 0));
        le_number->setText(QString());
        label_clear->setText(QApplication::translate("SuperUserPage", "\346\270\205\351\231\244\346\225\260\346\215\256", 0));
        btn_clear->setText(QApplication::translate("SuperUserPage", "   Clear", 0));
        btn_exit->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SuperUserPage: public Ui_SuperUserPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERUSERPAGE_H
