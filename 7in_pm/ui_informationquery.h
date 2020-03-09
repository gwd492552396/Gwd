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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InformationQuery
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_zc;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btn_error;
    QPushButton *btn_waring;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;

    void setupUi(QWidget *InformationQuery)
    {
        if (InformationQuery->objectName().isEmpty())
            InformationQuery->setObjectName(QStringLiteral("InformationQuery"));
        InformationQuery->resize(1080, 652);
        InformationQuery->setMinimumSize(QSize(674, 400));
        InformationQuery->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout_2 = new QVBoxLayout(InformationQuery);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget_3 = new QWidget(InformationQuery);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btn_zc = new QPushButton(widget_3);
        btn_zc->setObjectName(QStringLiteral("btn_zc"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_zc->sizePolicy().hasHeightForWidth());
        btn_zc->setSizePolicy(sizePolicy);
        btn_zc->setMinimumSize(QSize(420, 320));
        btn_zc->setMaximumSize(QSize(420, 320));
        btn_zc->setStyleSheet(QString::fromUtf8("QPushButton#btn_zc{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\264\350\275\2462.png);\n"
"\n"
"}\n"
"QPushButton#btn_zc:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\264\350\275\246_\346\214\211\344\270\2132.png);\n"
"\n"
"}"));

        horizontalLayout_2->addWidget(btn_zc);

        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btn_error = new QPushButton(widget_2);
        btn_error->setObjectName(QStringLiteral("btn_error"));
        sizePolicy.setHeightForWidth(btn_error->sizePolicy().hasHeightForWidth());
        btn_error->setSizePolicy(sizePolicy);
        btn_error->setMinimumSize(QSize(420, 160));
        btn_error->setMaximumSize(QSize(420, 160));
        btn_error->setStyleSheet(QString::fromUtf8("QPushButton#btn_error{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\205\351\232\234\344\277\241\346\201\2572.png);\n"
"\n"
"}\n"
"QPushButton#btn_error:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\346\225\205\351\232\234\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"\n"
"}"));

        verticalLayout->addWidget(btn_error);

        btn_waring = new QPushButton(widget_2);
        btn_waring->setObjectName(QStringLiteral("btn_waring"));
        sizePolicy.setHeightForWidth(btn_waring->sizePolicy().hasHeightForWidth());
        btn_waring->setSizePolicy(sizePolicy);
        btn_waring->setMinimumSize(QSize(420, 160));
        btn_waring->setMaximumSize(QSize(420, 160));
        btn_waring->setStyleSheet(QString::fromUtf8("QPushButton#btn_waring{\n"
"border-image: url(:/\351\200\211\351\241\271_\346\212\245\350\255\246\344\277\241\346\201\2572.png);\n"
"\n"
"}\n"
"QPushButton#btn_waring:pressed{\n"
"border-image: url(:/\351\200\211\351\241\271_\346\212\245\350\255\246\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"\n"
"}"));

        verticalLayout->addWidget(btn_waring);


        horizontalLayout_2->addWidget(widget_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(widget_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

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


        verticalLayout_2->addWidget(widget);


        retranslateUi(InformationQuery);

        QMetaObject::connectSlotsByName(InformationQuery);
    } // setupUi

    void retranslateUi(QWidget *InformationQuery)
    {
        InformationQuery->setWindowTitle(QApplication::translate("InformationQuery", "Form", 0));
        btn_zc->setText(QString());
        btn_error->setText(QString());
        btn_waring->setText(QString());
        btn_backhome->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class InformationQuery: public Ui_InformationQuery {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATIONQUERY_H
