/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

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

class Ui_AddUser
{
public:
    QGridLayout *gridLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btn_create;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_back;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_name;
    QSpacerItem *horizontalSpacer;
    QLineEdit *le_passwd2;
    QLabel *label_passwd;
    QLineEdit *le_passwd;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *le_name;
    QSpacerItem *verticalSpacer;
    QLabel *label_tubiao;
    QLabel *label_passwd2;

    void setupUi(QWidget *AddUser)
    {
        if (AddUser->objectName().isEmpty())
            AddUser->setObjectName(QStringLiteral("AddUser"));
        AddUser->resize(1080, 652);
        AddUser->setMinimumSize(QSize(1080, 400));
        AddUser->setMaximumSize(QSize(1110, 16777215));
        gridLayout = new QGridLayout(AddUser);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        widget = new QWidget(AddUser);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(1080, 0));
        widget->setMaximumSize(QSize(1080, 16777215));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btn_create = new QPushButton(widget);
        btn_create->setObjectName(QStringLiteral("btn_create"));
        btn_create->setMinimumSize(QSize(186, 80));
        btn_create->setStyleSheet(QLatin1String("QPushButton#btn_create{\n"
"background-image: url(:/36.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_create:pressed{\n"
"\n"
"background-image: url(:/37.png);\n"
"}"));

        horizontalLayout->addWidget(btn_create);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        btn_back = new QPushButton(widget);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);


        gridLayout->addWidget(widget, 1, 0, 1, 1);

        widget_2 = new QWidget(AddUser);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMinimumSize(QSize(1080, 0));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        label_name = new QLabel(widget_2);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setMinimumSize(QSize(250, 38));
        label_name->setMaximumSize(QSize(250, 100));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft JhengHei UI"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        label_name->setFont(font);
        label_name->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 75 26pt \"Microsoft JhengHei UI\";"));
        label_name->setTextFormat(Qt::AutoText);
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_name->setWordWrap(true);

        gridLayout_2->addWidget(label_name, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 4, 1, 1);

        le_passwd2 = new QLineEdit(widget_2);
        le_passwd2->setObjectName(QStringLiteral("le_passwd2"));
        le_passwd2->setMinimumSize(QSize(149, 31));
        le_passwd2->setMaximumSize(QSize(149, 31));
        le_passwd2->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"font: 75 16pt \"Microsoft JhengHei UI\";\n"
""));

        gridLayout_2->addWidget(le_passwd2, 3, 3, 1, 1);

        label_passwd = new QLabel(widget_2);
        label_passwd->setObjectName(QStringLiteral("label_passwd"));
        label_passwd->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 75 26pt \"Microsoft JhengHei UI\";"));
        label_passwd->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_passwd, 2, 2, 1, 1);

        le_passwd = new QLineEdit(widget_2);
        le_passwd->setObjectName(QStringLiteral("le_passwd"));
        le_passwd->setMinimumSize(QSize(149, 31));
        le_passwd->setMaximumSize(QSize(149, 31));
        le_passwd->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"font: 75 16pt \"Microsoft JhengHei UI\";\n"
""));

        gridLayout_2->addWidget(le_passwd, 2, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_2, 0, 2, 1, 1);

        le_name = new QLineEdit(widget_2);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setMinimumSize(QSize(149, 31));
        le_name->setMaximumSize(QSize(149, 31));
        le_name->setContextMenuPolicy(Qt::NoContextMenu);
        le_name->setLayoutDirection(Qt::LeftToRight);
        le_name->setStyleSheet(QLatin1String("color: rgb(0,0,0);\n"
"font: 75 16pt \"Microsoft JhengHei UI\";\n"
""));

        gridLayout_2->addWidget(le_name, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 4, 2, 1, 1);

        label_tubiao = new QLabel(widget_2);
        label_tubiao->setObjectName(QStringLiteral("label_tubiao"));
        label_tubiao->setMinimumSize(QSize(94, 94));
        label_tubiao->setMaximumSize(QSize(94, 94));
        label_tubiao->setStyleSheet(QString::fromUtf8("background-image: url(:/\345\233\276\346\240\207_\346\231\256\351\200\232\347\224\250\346\210\267.png);"));

        gridLayout_2->addWidget(label_tubiao, 1, 1, 3, 1);

        label_passwd2 = new QLabel(widget_2);
        label_passwd2->setObjectName(QStringLiteral("label_passwd2"));
        label_passwd2->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"background:transparent;\n"
"font: 75 26pt \"Microsoft JhengHei UI\";"));
        label_passwd2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_passwd2, 3, 2, 1, 1);


        gridLayout->addWidget(widget_2, 0, 0, 1, 3);


        retranslateUi(AddUser);

        QMetaObject::connectSlotsByName(AddUser);
    } // setupUi

    void retranslateUi(QWidget *AddUser)
    {
        AddUser->setWindowTitle(QApplication::translate("AddUser", "Form", 0));
        btn_create->setText(QString());
        btn_back->setText(QString());
        label_name->setText(QApplication::translate("AddUser", "\350\276\223\345\205\245\345\205\255\344\275\215\347\224\250\346\210\267\345\220\215", 0));
        label_passwd->setText(QApplication::translate("AddUser", "\350\256\276\347\275\256\345\205\255\344\275\215\345\257\206\347\240\201", 0));
        le_passwd->setText(QString());
        le_name->setText(QString());
        label_tubiao->setText(QString());
        label_passwd2->setText(QApplication::translate("AddUser", "\347\241\256\350\256\244\345\205\255\344\275\215\345\257\206\347\240\201", 0));
    } // retranslateUi

};

namespace Ui {
    class AddUser: public Ui_AddUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
