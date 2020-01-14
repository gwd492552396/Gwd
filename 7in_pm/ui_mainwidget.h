/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *top_widget;
    QHBoxLayout *horizontalLayout;
    QLabel *logo;
    QLabel *name;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QLabel *time;
    QLabel *date;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QLabel *type;
    QStackedWidget *state_stack;
    QWidget *page_3;
    QLabel *state;
    QWidget *page_4;
    QLabel *label;
    QSplitter *splitter;
    QWidget *left_widget;
    QGridLayout *gridLayout;
    QPushButton *btn_home;
    QPushButton *btn_weight;
    QPushButton *btn_video;
    QPushButton *btn_engine;
    QStackedWidget *c_stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QWidget *right_widget;
    QGridLayout *gridLayout_2;
    QPushButton *btn_gearbox;
    QPushButton *btn_back;
    QPushButton *btn_help;
    QPushButton *btn_pressure;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(1280, 768);
        MainWidget->setMinimumSize(QSize(800, 480));
        MainWidget->setStyleSheet(QString::fromUtf8("background-image: url(:/img/resources/\345\243\201\347\272\270.png);"));
        verticalLayout = new QVBoxLayout(MainWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        top_widget = new QWidget(MainWidget);
        top_widget->setObjectName(QStringLiteral("top_widget"));
        top_widget->setMinimumSize(QSize(1280, 116));
        top_widget->setMaximumSize(QSize(1280, 116));
        top_widget->setStyleSheet(QString::fromUtf8("background-image: url(:/\351\241\266\346\240\217\345\243\201\347\272\270.png);"));
        horizontalLayout = new QHBoxLayout(top_widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        logo = new QLabel(top_widget);
        logo->setObjectName(QStringLiteral("logo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(43);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logo->sizePolicy().hasHeightForWidth());
        logo->setSizePolicy(sizePolicy);
        logo->setMinimumSize(QSize(430, 116));
        logo->setStyleSheet(QStringLiteral("background-image: url(:/LOGO2.png);"));

        horizontalLayout->addWidget(logo);

        name = new QLabel(top_widget);
        name->setObjectName(QStringLiteral("name"));
        name->setStyleSheet(QLatin1String("font: 18pt \"Microsoft YaHei UI\";\n"
"\n"
"\n"
"color: #FFFFFF;\n"
"background:transparent;\n"
""));
        name->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(name);

        label_2 = new QLabel(top_widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(15, 0));
        label_2->setMaximumSize(QSize(15, 16777215));
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        widget = new QWidget(top_widget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(60, 116));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 0);
        time = new QLabel(widget);
        time->setObjectName(QStringLiteral("time"));
        time->setStyleSheet(QLatin1String("font: 40pt \"Microsoft YaHei UI\";\n"
"\n"
"\n"
"color: #FFFFFF;\n"
"background:transparent;\n"
""));
        time->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(time);

        date = new QLabel(widget);
        date->setObjectName(QStringLiteral("date"));
        date->setStyleSheet(QLatin1String("font: 25pt \"Microsoft YaHei UI\";\n"
"\n"
"\n"
"color: #FFFFFF;\n"
"background:transparent;\n"
""));
        date->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(date);


        horizontalLayout->addWidget(widget);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        label_3 = new QLabel(top_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(15, 0));
        label_3->setMaximumSize(QSize(15, 16777215));
        label_3->setAutoFillBackground(false);
        label_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));

        horizontalLayout->addWidget(label_3);

        type = new QLabel(top_widget);
        type->setObjectName(QStringLiteral("type"));
        type->setStyleSheet(QLatin1String("font: 18pt \"Microsoft YaHei UI\";\n"
"\n"
"\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        type->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(type);

        state_stack = new QStackedWidget(top_widget);
        state_stack->setObjectName(QStringLiteral("state_stack"));
        state_stack->setMinimumSize(QSize(430, 0));
        state_stack->setStyleSheet(QStringLiteral("background:transparent"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        state = new QLabel(page_3);
        state->setObjectName(QStringLiteral("state"));
        state->setGeometry(QRect(0, 0, 430, 116));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(80);
        sizePolicy2.setHeightForWidth(state->sizePolicy().hasHeightForWidth());
        state->setSizePolicy(sizePolicy2);
        state->setMinimumSize(QSize(430, 116));
        state->setLayoutDirection(Qt::LeftToRight);
        state->setStyleSheet(QString::fromUtf8("border-image: url(:/\347\212\266\346\200\201\347\201\257_\350\223\2352.png);\n"
"font: 30pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
""));
        state->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        state_stack->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label = new QLabel(page_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 430, 116));
        label->setMinimumSize(QSize(430, 116));
        label->setStyleSheet(QLatin1String("border-image: url(:/118.png);\n"
"font: 30pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
""));
        label->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);
        state_stack->addWidget(page_4);

        horizontalLayout->addWidget(state_stack);


        verticalLayout->addWidget(top_widget);

        splitter = new QSplitter(MainWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setHandleWidth(0);
        left_widget = new QWidget(splitter);
        left_widget->setObjectName(QStringLiteral("left_widget"));
        left_widget->setMinimumSize(QSize(100, 688));
        left_widget->setMaximumSize(QSize(100, 688));
        left_widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(left_widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setVerticalSpacing(56);
        gridLayout->setContentsMargins(11, 43, 11, 29);
        btn_home = new QPushButton(left_widget);
        btn_home->setObjectName(QStringLiteral("btn_home"));
        btn_home->setMinimumSize(QSize(80, 80));
        btn_home->setStyleSheet(QString::fromUtf8("QPushButton#btn_home{\n"
"	background-image: url(:/0_4.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_home:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}\n"
"	"));

        gridLayout->addWidget(btn_home, 3, 0, 1, 1);

        btn_weight = new QPushButton(left_widget);
        btn_weight->setObjectName(QStringLiteral("btn_weight"));
        btn_weight->setMinimumSize(QSize(80, 80));
        btn_weight->setStyleSheet(QString::fromUtf8("QPushButton#btn_weight{\n"
"background-image: url(:/\344\276\247\351\224\256_\347\247\260\351\207\2152.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_weight:pressed{\n"
"background-image: url(:/\344\276\247\351\224\256_\347\247\260\351\207\215_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}\n"
""));
        btn_weight->setIconSize(QSize(60, 60));

        gridLayout->addWidget(btn_weight, 2, 0, 1, 1);

        btn_video = new QPushButton(left_widget);
        btn_video->setObjectName(QStringLiteral("btn_video"));
        btn_video->setMinimumSize(QSize(80, 80));
        btn_video->setMaximumSize(QSize(80, 80));
        btn_video->setStyleSheet(QString::fromUtf8("QPushButton#btn_video{\n"
"	background-image: url(:/\344\276\247\351\224\256_\345\275\261\345\203\2172.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_video:pressed{\n"
"background-image: url(:/\344\276\247\351\224\256_\345\275\261\345\203\217_\346\214\211\344\270\2132.png);\n"
"border:none;\n"
"}\n"
""));
        btn_video->setIconSize(QSize(80, 80));

        gridLayout->addWidget(btn_video, 0, 0, 1, 1);

        btn_engine = new QPushButton(left_widget);
        btn_engine->setObjectName(QStringLiteral("btn_engine"));
        btn_engine->setMinimumSize(QSize(80, 80));
        btn_engine->setStyleSheet(QString::fromUtf8("background-image: url(:/\345\217\221\345\212\250\346\234\272.png);\n"
"border:none"));

        gridLayout->addWidget(btn_engine, 1, 0, 1, 1);

        splitter->addWidget(left_widget);
        c_stackedWidget = new QStackedWidget(splitter);
        c_stackedWidget->setObjectName(QStringLiteral("c_stackedWidget"));
        c_stackedWidget->setMinimumSize(QSize(1080, 652));
        c_stackedWidget->setMaximumSize(QSize(1080, 652));
        c_stackedWidget->setStyleSheet(QString::fromUtf8("background:url(:/\345\243\201\347\272\270.png)"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        c_stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        c_stackedWidget->addWidget(page_2);
        splitter->addWidget(c_stackedWidget);
        right_widget = new QWidget(splitter);
        right_widget->setObjectName(QStringLiteral("right_widget"));
        right_widget->setMinimumSize(QSize(100, 688));
        right_widget->setMaximumSize(QSize(100, 688));
        right_widget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        gridLayout_2 = new QGridLayout(right_widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(56);
        gridLayout_2->setContentsMargins(11, 43, 12, 29);
        btn_gearbox = new QPushButton(right_widget);
        btn_gearbox->setObjectName(QStringLiteral("btn_gearbox"));
        btn_gearbox->setMinimumSize(QSize(80, 80));
        btn_gearbox->setStyleSheet(QLatin1String("background-image: url(:/gearbox1.PNG);\n"
"border:none;\n"
"	"));

        gridLayout_2->addWidget(btn_gearbox, 2, 0, 1, 1);

        btn_back = new QPushButton(right_widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(80, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\344\276\247\351\224\256_\345\233\236\351\200\2002.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_back:pressed{\n"
"	\n"
"	background-image: url(:/\344\276\247\351\224\256_\345\233\236\351\200\200_\346\214\211\344\270\2132.png);\n"
"\n"
"border:none;\n"
"}\n"
"	"));

        gridLayout_2->addWidget(btn_back, 3, 0, 1, 1);

        btn_help = new QPushButton(right_widget);
        btn_help->setObjectName(QStringLiteral("btn_help"));
        btn_help->setMinimumSize(QSize(80, 80));
        btn_help->setStyleSheet(QString::fromUtf8("QPushButton#btn_help{\n"
"background-image: url(:/\344\276\247\351\224\256_\345\270\256\345\212\2512.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_help:pressed{\n"
"	\n"
"	background-image: url(:/\344\276\247\351\224\256_\345\270\256\345\212\251_\346\214\211\344\270\2132.png);\n"
"\n"
"border:none;\n"
"}\n"
"	"));

        gridLayout_2->addWidget(btn_help, 0, 0, 1, 1);

        btn_pressure = new QPushButton(right_widget);
        btn_pressure->setObjectName(QStringLiteral("btn_pressure"));
        btn_pressure->setMinimumSize(QSize(80, 80));
        btn_pressure->setStyleSheet(QString::fromUtf8("background-image: url(:/\345\216\213\345\212\233.png);\n"
"border:none;"));

        gridLayout_2->addWidget(btn_pressure, 1, 0, 1, 1);

        splitter->addWidget(right_widget);

        verticalLayout->addWidget(splitter);


        retranslateUi(MainWidget);

        state_stack->setCurrentIndex(0);
        c_stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", 0));
        logo->setText(QString());
        name->setText(QApplication::translate("MainWidget", "***", 0));
        label_2->setText(QString());
        time->setText(QApplication::translate("MainWidget", "15:38", 0));
        date->setText(QApplication::translate("MainWidget", "11\346\234\21012\346\227\245", 0));
        label_3->setText(QString());
        type->setText(QApplication::translate("MainWidget", "\345\210\232\346\200\247\350\275\246", 0));
        state->setText(QApplication::translate("MainWidget", "\350\277\220\350\275\254\346\255\243\345\270\270", 0));
        label->setText(QApplication::translate("MainWidget", "\345\256\236\346\227\266\346\225\205\351\232\234", 0));
        btn_home->setText(QString());
        btn_weight->setText(QString());
        btn_video->setText(QString());
        btn_engine->setText(QString());
        btn_gearbox->setText(QString());
        btn_back->setText(QString());
        btn_help->setText(QString());
        btn_pressure->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
