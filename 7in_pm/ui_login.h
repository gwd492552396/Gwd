/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_tubiao;
    QLabel *label_name;
    QLineEdit *le_name;
    QLabel *label_passwd;
    QLineEdit *le_passewd;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_login;
    QPushButton *btn_fast_login;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(1154, 688);
        Login->setMinimumSize(QSize(674, 400));
        Login->setStyleSheet(QLatin1String("Login:{\n"
"}"));
        gridLayout_2 = new QGridLayout(Login);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(40);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(0, -1, -1, -1);
        label_tubiao = new QLabel(Login);
        label_tubiao->setObjectName(QStringLiteral("label_tubiao"));
        label_tubiao->setMinimumSize(QSize(94, 94));
        label_tubiao->setStyleSheet(QString::fromUtf8("image: url(:/\345\233\276\346\240\207_\346\231\256\351\200\232\347\224\250\346\210\267.png);"));
        label_tubiao->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tubiao, 0, 0, 2, 1);

        label_name = new QLabel(Login);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setLayoutDirection(Qt::LeftToRight);
        label_name->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 75 26pt \"Microsoft JhengHei UI\";"));
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_name, 0, 1, 1, 1);

        le_name = new QLineEdit(Login);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setMinimumSize(QSize(149, 31));
        le_name->setMaximumSize(QSize(200, 600));
        le_name->setStyleSheet(QLatin1String("font:24px \"Microsoft JhengHei\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgba(255,255,255);\n"
"color:rgb(0,0,0)"));

        gridLayout->addWidget(le_name, 0, 2, 1, 1);

        label_passwd = new QLabel(Login);
        label_passwd->setObjectName(QStringLiteral("label_passwd"));
        label_passwd->setLayoutDirection(Qt::LeftToRight);
        label_passwd->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 75 26pt \"Microsoft JhengHei UI\";"));
        label_passwd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_passwd, 1, 1, 1, 1);

        le_passewd = new QLineEdit(Login);
        le_passewd->setObjectName(QStringLiteral("le_passewd"));
        le_passewd->setMinimumSize(QSize(149, 31));
        le_passewd->setMaximumSize(QSize(200, 60));
        le_passewd->setStyleSheet(QLatin1String("font:24px \"Microsoft JhengHei\";\n"
"border-color: rgba(151, 151, 151, 1);\n"
"background-color: rgba(255,255,255);\n"
"color:rgb(0,0,0)"));
        le_passewd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(le_passewd, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        widget = new QWidget(Login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setStyleSheet(QStringLiteral("background:transparent;"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setMinimumSize(QSize(186, 80));
        btn_login->setStyleSheet(QLatin1String("QPushButton#btn_login{\n"
"background-image: url(:/41.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_login:pressed{\n"
"background-image: url(:/42.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_login);

        btn_fast_login = new QPushButton(widget);
        btn_fast_login->setObjectName(QStringLiteral("btn_fast_login"));
        btn_fast_login->setMinimumSize(QSize(250, 80));
        btn_fast_login->setStyleSheet(QLatin1String("\n"
"border:5px solid rgb(44,86,191);\n"
"    border-top-left-radius:15px;\n"
"    border-top-right-radius:15px;\n"
"    border-bottom-left-radius:15px;\n"
"    border-bottom-right-radius:15px;\n"
"font: 25pt \"Microsoft YaHei UI\";\n"
"color:rgb(44, 89, 191);\n"
"background-color:rgb(0,0,0)\n"
""));

        horizontalLayout->addWidget(btn_fast_login);

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


        gridLayout_2->addWidget(widget, 3, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", 0));
        label_tubiao->setText(QString());
        label_name->setText(QApplication::translate("Login", "\350\276\223\345\205\245\345\205\255\344\275\215\347\224\250\346\210\267\345\220\215", 0));
        label_passwd->setText(QApplication::translate("Login", "\350\276\223\345\205\245\345\205\255\344\275\215\345\257\206\347\240\201", 0));
        btn_login->setText(QString());
        btn_fast_login->setText(QApplication::translate("Login", "\351\200\211\346\213\251\345\267\262\346\234\211\347\224\250\346\210\267", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
