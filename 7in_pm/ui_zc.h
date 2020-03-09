/********************************************************************************
** Form generated from reading UI file 'zc.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZC_H
#define UI_ZC_H

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

class Ui_ZC
{
public:
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_temp;
    QPushButton *btn_pressure;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_gearbox;
    QPushButton *btn_liquid;
    QPushButton *btn_engine;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_6;

    void setupUi(QWidget *ZC)
    {
        if (ZC->objectName().isEmpty())
            ZC->setObjectName(QStringLiteral("ZC"));
        ZC->resize(1098, 652);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ZC->sizePolicy().hasHeightForWidth());
        ZC->setSizePolicy(sizePolicy);
        ZC->setMinimumSize(QSize(1080, 652));
        ZC->setMaximumSize(QSize(1098, 652));
        ZC->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout_2 = new QVBoxLayout(ZC);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 15, -1, -1);
        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        widget_2 = new QWidget(ZC);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(1080, 16777215));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_2 = new QHBoxLayout(widget_3);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        btn_temp = new QPushButton(widget_3);
        btn_temp->setObjectName(QStringLiteral("btn_temp"));
        sizePolicy.setHeightForWidth(btn_temp->sizePolicy().hasHeightForWidth());
        btn_temp->setSizePolicy(sizePolicy);
        btn_temp->setMinimumSize(QSize(180, 180));
        btn_temp->setMaximumSize(QSize(180, 180));
        btn_temp->setStyleSheet(QString::fromUtf8("QPushButton#btn_temp{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\270\251\345\272\246\344\277\241\346\201\2572.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_temp:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\270\251\345\272\246\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(btn_temp);

        btn_pressure = new QPushButton(widget_3);
        btn_pressure->setObjectName(QStringLiteral("btn_pressure"));
        btn_pressure->setMinimumSize(QSize(180, 180));
        btn_pressure->setMaximumSize(QSize(180, 180));
        btn_pressure->setStyleSheet(QString::fromUtf8("QPushButton#btn_pressure{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\216\213\345\212\233\344\277\241\346\201\2572.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_pressure:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\216\213\345\212\233\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        horizontalLayout_2->addWidget(btn_pressure);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 6, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btn_gearbox = new QPushButton(widget_4);
        btn_gearbox->setObjectName(QStringLiteral("btn_gearbox"));
        btn_gearbox->setMinimumSize(QSize(180, 180));
        btn_gearbox->setStyleSheet(QLatin1String("QPushButton#btn_gearbox{\n"
"background-image: url(:/gearbox.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_gearbox:pressed{\n"
"background-image: url(:/gearbox.png);\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(btn_gearbox);

        btn_liquid = new QPushButton(widget_4);
        btn_liquid->setObjectName(QStringLiteral("btn_liquid"));
        btn_liquid->setMinimumSize(QSize(180, 180));
        btn_liquid->setMaximumSize(QSize(180, 180));
        btn_liquid->setStyleSheet(QString::fromUtf8("QPushButton#btn_liquid{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\266\262\344\275\215\344\277\241\346\201\2572.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_liquid:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\266\262\344\275\215\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        horizontalLayout_3->addWidget(btn_liquid);

        btn_engine = new QPushButton(widget_4);
        btn_engine->setObjectName(QStringLiteral("btn_engine"));
        btn_engine->setMinimumSize(QSize(180, 180));
        btn_engine->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\214\211\351\224\256_\345\217\221\345\212\250\346\234\2722.png);\n"
"border:none;\n"
""));

        horizontalLayout_3->addWidget(btn_engine);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_4);


        verticalLayout_2->addWidget(widget_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        widget = new QWidget(ZC);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(1080, 0));
        widget->setMaximumSize(QSize(1080, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);


        verticalLayout_2->addWidget(widget);


        retranslateUi(ZC);

        QMetaObject::connectSlotsByName(ZC);
    } // setupUi

    void retranslateUi(QWidget *ZC)
    {
        ZC->setWindowTitle(QApplication::translate("ZC", "Form", 0));
        btn_temp->setText(QString());
        btn_pressure->setText(QString());
        btn_gearbox->setText(QString());
        btn_liquid->setText(QString());
        btn_engine->setText(QString());
        btn_backhome->setText(QString());
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ZC: public Ui_ZC {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZC_H
