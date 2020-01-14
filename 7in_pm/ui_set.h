/********************************************************************************
** Form generated from reading UI file 'set.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_H
#define UI_SET_H

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

class Ui_set
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QPushButton *btn_login;
    QSpacerItem *verticalSpacer_3;
    QPushButton *btn_management;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *set)
    {
        if (set->objectName().isEmpty())
            set->setObjectName(QStringLiteral("set"));
        set->resize(1080, 652);
        set->setMinimumSize(QSize(1080, 652));
        set->setMaximumSize(QSize(1080, 652));
        gridLayout = new QGridLayout(set);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        btn_login = new QPushButton(set);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setMinimumSize(QSize(568, 190));
        btn_login->setStyleSheet(QString::fromUtf8("QPushButton#btn_login{\n"
"background-image:url(:/\346\214\211\351\224\256_\347\224\250\346\210\267\347\231\273\345\275\2252.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_login:pressed{\n"
"background-image: url(:/i\346\214\211\351\224\256_\347\224\250\346\210\267\347\231\273\345\275\225_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_login, 1, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        btn_management = new QPushButton(set);
        btn_management->setObjectName(QStringLiteral("btn_management"));
        btn_management->setMinimumSize(QSize(568, 190));
        btn_management->setStyleSheet(QLatin1String("QPushButton#btn_management{\n"
"background-image:url(:/Group42.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_management:pressed{\n"
"background-image: url(:/Group42.png);\n"
"border:none;\n"
"}"));

        gridLayout->addWidget(btn_management, 3, 1, 1, 1);

        widget = new QWidget(set);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:transparent;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

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
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        gridLayout->addWidget(widget, 5, 0, 1, 3);


        retranslateUi(set);

        QMetaObject::connectSlotsByName(set);
    } // setupUi

    void retranslateUi(QWidget *set)
    {
        set->setWindowTitle(QApplication::translate("set", "Form", 0));
        btn_login->setText(QString());
        btn_management->setText(QString());
        btn_backhome->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class set: public Ui_set {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_H
