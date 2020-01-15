/********************************************************************************
** Form generated from reading UI file 'homepage.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEPAGE_H
#define UI_HOMEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomePage
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QWidget *power_widget;
    QProgressBar *power_bar;
    QHBoxLayout *hlayout;
    QPushButton *btn_video;
    QPushButton *btn_weight;
    QPushButton *btn_query;
    QPushButton *btn_setting;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_backhome;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *HomePage)
    {
        if (HomePage->objectName().isEmpty())
            HomePage->setObjectName(QStringLiteral("HomePage"));
        HomePage->resize(1080, 652);
        HomePage->setMinimumSize(QSize(1080, 652));
        HomePage->setMaximumSize(QSize(1080, 652));
        HomePage->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout = new QVBoxLayout(HomePage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(HomePage);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(0, 90));
        widget_2->setMaximumSize(QSize(16777215, 90));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        power_widget = new QWidget(widget_2);
        power_widget->setObjectName(QStringLiteral("power_widget"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(power_widget->sizePolicy().hasHeightForWidth());
        power_widget->setSizePolicy(sizePolicy);
        power_widget->setMinimumSize(QSize(30, 60));
        power_widget->setMaximumSize(QSize(30, 60));
        power_widget->setStyleSheet(QStringLiteral("background-image: url(:/img/resources/3211.png);"));
        power_bar = new QProgressBar(power_widget);
        power_bar->setObjectName(QStringLiteral("power_bar"));
        power_bar->setGeometry(QRect(0, 0, 25, 60));
        sizePolicy.setHeightForWidth(power_bar->sizePolicy().hasHeightForWidth());
        power_bar->setSizePolicy(sizePolicy);
        power_bar->setMinimumSize(QSize(25, 60));
        power_bar->setMaximumSize(QSize(25, 60));
        power_bar->setStyleSheet(QStringLiteral("background:transparent;"));
        power_bar->setValue(24);
        power_bar->setTextVisible(true);
        power_bar->setOrientation(Qt::Vertical);

        horizontalLayout_4->addWidget(power_widget);


        verticalLayout->addWidget(widget_2);

        hlayout = new QHBoxLayout();
        hlayout->setObjectName(QStringLiteral("hlayout"));
        btn_video = new QPushButton(HomePage);
        btn_video->setObjectName(QStringLiteral("btn_video"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_video->sizePolicy().hasHeightForWidth());
        btn_video->setSizePolicy(sizePolicy1);
        btn_video->setMinimumSize(QSize(224, 384));
        btn_video->setMaximumSize(QSize(224, 384));
        btn_video->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\214\211\351\224\256_\345\275\261\345\203\2172.png);"));
        btn_video->setIconSize(QSize(224, 384));

        hlayout->addWidget(btn_video);

        btn_weight = new QPushButton(HomePage);
        btn_weight->setObjectName(QStringLiteral("btn_weight"));
        sizePolicy1.setHeightForWidth(btn_weight->sizePolicy().hasHeightForWidth());
        btn_weight->setSizePolicy(sizePolicy1);
        btn_weight->setMinimumSize(QSize(224, 380));
        btn_weight->setMaximumSize(QSize(224, 380));
        btn_weight->setStyleSheet(QString::fromUtf8("QPushButton#btn_weight{\n"
"background:url(:/\346\214\211\351\224\256_\347\247\260\351\207\2152.png);\n"
"border:none;\n"
"}QPushButton#btn_weight:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\347\247\260\351\207\215_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        hlayout->addWidget(btn_weight);

        btn_query = new QPushButton(HomePage);
        btn_query->setObjectName(QStringLiteral("btn_query"));
        sizePolicy1.setHeightForWidth(btn_query->sizePolicy().hasHeightForWidth());
        btn_query->setSizePolicy(sizePolicy1);
        btn_query->setMinimumSize(QSize(224, 380));
        btn_query->setMaximumSize(QSize(16777215, 380));
        btn_query->setStyleSheet(QString::fromUtf8("QPushButton#btn_query{\n"
"background:url(:/\346\214\211\351\224\256_\344\277\241\346\201\2572.png);\n"
"border:none;\n"
"}QPushButton#btn_query:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\277\241\346\201\257_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}"));

        hlayout->addWidget(btn_query);

        btn_setting = new QPushButton(HomePage);
        btn_setting->setObjectName(QStringLiteral("btn_setting"));
        sizePolicy1.setHeightForWidth(btn_setting->sizePolicy().hasHeightForWidth());
        btn_setting->setSizePolicy(sizePolicy1);
        btn_setting->setMinimumSize(QSize(224, 380));
        btn_setting->setMaximumSize(QSize(16777215, 380));
        btn_setting->setStyleSheet(QLatin1String("QPushButton#btn_setting{\n"
"background-image: url(:/Group 11.png);\n"
"border:none;\n"
"}QPushButton#btn_setting:pressed{\n"
"border-image: url(:/11.png);\n"
"border:none;\n"
"}"));

        hlayout->addWidget(btn_setting);


        verticalLayout->addLayout(hlayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_back = new QPushButton(HomePage);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        sizePolicy1.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy1);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_backhome = new QPushButton(HomePage);
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

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(HomePage);

        QMetaObject::connectSlotsByName(HomePage);
    } // setupUi

    void retranslateUi(QWidget *HomePage)
    {
        HomePage->setWindowTitle(QApplication::translate("HomePage", "Form", 0));
        btn_video->setText(QString());
        btn_weight->setText(QString());
        btn_query->setText(QString());
        btn_setting->setText(QString());
        btn_back->setText(QString());
        btn_backhome->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class HomePage: public Ui_HomePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEPAGE_H
