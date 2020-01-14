/********************************************************************************
** Form generated from reading UI file 'informationquery.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATIONQUERY_H
#define UI_INFORMATIONQUERY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationQuery
{
public:
    QGridLayout *gridLayout;
    QPushButton *btn_zc;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QPushButton *btn_error;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_waring;
    QPushButton *btn_lubricate;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *InformationQuery)
    {
        if (InformationQuery->objectName().isEmpty())
            InformationQuery->setObjectName(QStringLiteral("InformationQuery"));
        InformationQuery->resize(1080, 652);
        InformationQuery->setMinimumSize(QSize(674, 400));
        InformationQuery->setStyleSheet(QStringLiteral("background:transparent;"));
        gridLayout = new QGridLayout(InformationQuery);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(10);
        btn_zc = new QPushButton(InformationQuery);
        btn_zc->setObjectName(QStringLiteral("btn_zc"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_zc->sizePolicy().hasHeightForWidth());
        btn_zc->setSizePolicy(sizePolicy);
        btn_zc->setMinimumSize(QSize(360, 120));
        btn_zc->setStyleSheet(QString::fromUtf8("QPushButton#btn_zc{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\264\350\275\2462.png);\n"
"\n"
"}\n"
"QPushButton#btn_zc:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\264\350\275\246_\346\214\211\344\270\2132png);\n"
"\n"
"}"));

        gridLayout->addWidget(btn_zc, 1, 1, 1, 1);

        widget = new QWidget(InformationQuery);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btn_backhome = new QPushButton(widget);
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

        horizontalLayout->addWidget(btn_backhome);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy1);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);


        gridLayout->addWidget(widget, 5, 1, 1, 2);

        btn_error = new QPushButton(InformationQuery);
        btn_error->setObjectName(QStringLiteral("btn_error"));
        sizePolicy.setHeightForWidth(btn_error->sizePolicy().hasHeightForWidth());
        btn_error->setSizePolicy(sizePolicy);
        btn_error->setMinimumSize(QSize(480, 160));
        btn_error->setStyleSheet(QString::fromUtf8("QPushButton#btn_error{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\205\351\232\234\344\277\241\346\201\2572.png);\n"
"\n"
"}\n"
"QPushButton#btn_error:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\205\351\232\234\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"\n"
"}"));

        gridLayout->addWidget(btn_error, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        btn_waring = new QPushButton(InformationQuery);
        btn_waring->setObjectName(QStringLiteral("btn_waring"));
        sizePolicy.setHeightForWidth(btn_waring->sizePolicy().hasHeightForWidth());
        btn_waring->setSizePolicy(sizePolicy);
        btn_waring->setMinimumSize(QSize(480, 160));
        btn_waring->setStyleSheet(QString::fromUtf8("QPushButton#btn_waring{\n"
"border-image: url(:/\351\200\211\351\241\271_\346\212\245\350\255\246\344\277\241\346\201\2572.png);\n"
"\n"
"}\n"
"QPushButton#btn_waring:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\346\212\245\350\255\246\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"\n"
"}"));

        gridLayout->addWidget(btn_waring, 3, 2, 1, 1);

        btn_lubricate = new QPushButton(InformationQuery);
        btn_lubricate->setObjectName(QStringLiteral("btn_lubricate"));
        sizePolicy.setHeightForWidth(btn_lubricate->sizePolicy().hasHeightForWidth());
        btn_lubricate->setSizePolicy(sizePolicy);
        btn_lubricate->setMinimumSize(QSize(480, 160));
        btn_lubricate->setStyleSheet(QString::fromUtf8("QPushButton#btn_lubricate{\n"
"border-image: url(:/\351\200\211\351\241\271_\351\233\206\344\270\255\346\266\246\346\273\2212.png);\n"
"\n"
"}\n"
"QPushButton#btn_lubricate:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\351\233\206\344\270\255\346\266\246\346\273\221_\346\214\211\344\270\2132.png);\n"
"\n"
"\n"
"}"));

        gridLayout->addWidget(btn_lubricate, 3, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);


        retranslateUi(InformationQuery);

        QMetaObject::connectSlotsByName(InformationQuery);
    } // setupUi

    void retranslateUi(QWidget *InformationQuery)
    {
        InformationQuery->setWindowTitle(QApplication::translate("InformationQuery", "Form", 0));
        btn_zc->setText(QString());
        btn_backhome->setText(QString());
        btn_back->setText(QString());
        btn_error->setText(QString());
        btn_waring->setText(QString());
        btn_lubricate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InformationQuery: public Ui_InformationQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONQUERY_H
