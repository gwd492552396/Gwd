/********************************************************************************
** Form generated from reading UI file 'management.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEMENT_H
#define UI_MANAGEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Management
{
public:
    QGridLayout *gridLayout_2;
    QPushButton *btn_back;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLabel *label_2;
    QLabel *label_1;
    QLabel *label_8;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btn_del;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btn_add;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *btn_fast_login;

    void setupUi(QWidget *Management)
    {
        if (Management->objectName().isEmpty())
            Management->setObjectName(QStringLiteral("Management"));
        Management->resize(1154, 688);
        Management->setMinimumSize(QSize(674, 400));
        gridLayout_2 = new QGridLayout(Management);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        btn_back = new QPushButton(Management);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setLayoutDirection(Qt::RightToLeft);
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));
        btn_back->setAutoDefault(false);
        btn_back->setFlat(false);

        gridLayout_2->addWidget(btn_back, 4, 4, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(50);
        gridLayout->setVerticalSpacing(5);
        label_4 = new QLabel(Management);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 7, 1, 1);

        label_3 = new QLabel(Management);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 5, 1, 1);

        label_6 = new QLabel(Management);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 4, 3, 1, 1);

        label_7 = new QLabel(Management);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 5, 1, 1);

        label_5 = new QLabel(Management);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 4, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 0, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(Management);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setEnabled(true);
        pushButton_6->setMinimumSize(QSize(94, 94));
        pushButton_6->setMaximumSize(QSize(94, 94));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_6->setCheckable(true);
        pushButton_6->setChecked(false);

        gridLayout->addWidget(pushButton_6, 3, 3, 1, 1);

        pushButton_7 = new QPushButton(Management);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setEnabled(true);
        pushButton_7->setMinimumSize(QSize(94, 94));
        pushButton_7->setMaximumSize(QSize(94, 94));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_7->setCheckable(true);
        pushButton_7->setChecked(false);

        gridLayout->addWidget(pushButton_7, 3, 5, 1, 1);

        pushButton_8 = new QPushButton(Management);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setEnabled(true);
        pushButton_8->setMinimumSize(QSize(94, 94));
        pushButton_8->setMaximumSize(QSize(94, 94));
        pushButton_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_8->setCheckable(true);
        pushButton_8->setChecked(false);

        gridLayout->addWidget(pushButton_8, 3, 7, 1, 1);

        label_2 = new QLabel(Management);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 3, 1, 1);

        label_1 = new QLabel(Management);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setEnabled(true);
        label_1->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_1, 1, 1, 1, 1);

        label_8 = new QLabel(Management);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setStyleSheet(QLatin1String("\n"
"font: 16pt \"Ubuntu\" ;\n"
"color:rgb(255,255,255);\n"
"background:transparent;\n"
"border:none;"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 4, 7, 1, 1);

        pushButton_3 = new QPushButton(Management);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setEnabled(true);
        pushButton_3->setMinimumSize(QSize(94, 94));
        pushButton_3->setMaximumSize(QSize(94, 94));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_3->setCheckable(true);
        pushButton_3->setChecked(false);

        gridLayout->addWidget(pushButton_3, 0, 5, 1, 1);

        pushButton_4 = new QPushButton(Management);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(true);
        pushButton_4->setMinimumSize(QSize(94, 94));
        pushButton_4->setMaximumSize(QSize(94, 94));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_4->setCheckable(true);
        pushButton_4->setChecked(false);

        gridLayout->addWidget(pushButton_4, 0, 7, 1, 1);

        pushButton_5 = new QPushButton(Management);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setEnabled(true);
        pushButton_5->setMinimumSize(QSize(94, 94));
        pushButton_5->setMaximumSize(QSize(94, 94));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_5->setCheckable(true);
        pushButton_5->setChecked(false);

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_1 = new QPushButton(Management);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setEnabled(true);
        pushButton_1->setMinimumSize(QSize(94, 94));
        pushButton_1->setMaximumSize(QSize(94, 94));
        pushButton_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_1->setCheckable(true);
        pushButton_1->setChecked(false);

        gridLayout->addWidget(pushButton_1, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(Management);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(94, 94));
        pushButton_2->setMaximumSize(QSize(94, 94));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}\n"
"QPushButton:checked{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\231\256\351\200\232\347\224\250\346\210\267_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
"QPushButton:disabled{\n"
"background-image: url(:/\346\214\211\351\224\256_\346\234\252\345\256\232\344\271\211\347\224\250\346\210\267.png);\n"
"border:none;\n"
"}"));
        pushButton_2->setCheckable(true);
        pushButton_2->setChecked(false);

        gridLayout->addWidget(pushButton_2, 0, 3, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 4);

        verticalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer_4, 6, 1, 1, 1);

        btn_del = new QPushButton(Management);
        btn_del->setObjectName(QStringLiteral("btn_del"));
        btn_del->setMinimumSize(QSize(145, 60));
        btn_del->setStyleSheet(QString::fromUtf8("QPushButton#btn_del{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\210\240\351\231\244.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_del:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\210\240\351\231\244_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout_2->addWidget(btn_del, 4, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 4, 3, 1, 1);

        btn_add = new QPushButton(Management);
        btn_add->setObjectName(QStringLiteral("btn_add"));
        btn_add->setMinimumSize(QSize(145, 60));
        btn_add->setStyleSheet(QString::fromUtf8("QPushButton#btn_add{\n"
"border-image: url(:/\346\214\211\351\224\256_\345\210\233\345\273\272.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_add:pressed{\n"
"background-image: url(:/\346\214\211\351\224\256_\345\210\233\345\273\272_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}"));

        gridLayout_2->addWidget(btn_add, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 4, 5, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_8, 4, 0, 1, 1);

        btn_fast_login = new QPushButton(Management);
        btn_fast_login->setObjectName(QStringLiteral("btn_fast_login"));
        btn_fast_login->setMinimumSize(QSize(0, 60));
        btn_fast_login->setStyleSheet(QLatin1String("border:5px solid rgb(44,86,191);\n"
"    border-top-left-radius:15px;\n"
"    border-top-right-radius:15px;\n"
"    border-bottom-left-radius:15px;\n"
"    border-bottom-right-radius:15px;\n"
"font: 25pt \"Microsoft YaHei UI\";\n"
"color:rgb(44, 89, 191);\n"
"background-color:rgb(0,0,0)\n"
""));

        gridLayout_2->addWidget(btn_fast_login, 3, 1, 1, 2);

        btn_back->raise();
        btn_add->raise();
        btn_del->raise();
        btn_fast_login->raise();

        retranslateUi(Management);

        QMetaObject::connectSlotsByName(Management);
    } // setupUi

    void retranslateUi(QWidget *Management)
    {
        Management->setWindowTitle(QApplication::translate("Management", "Form", 0));
        btn_back->setText(QString());
        label_4->setText(QApplication::translate("Management", "LPSFG", 0));
        label_3->setText(QApplication::translate("Management", "888ZHU", 0));
        label_6->setText(QApplication::translate("Management", "XUXIN", 0));
        label_7->setText(QApplication::translate("Management", "\347\251\272\347\231\275", 0));
        label_5->setText(QApplication::translate("Management", "123456", 0));
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        label_2->setText(QApplication::translate("Management", "XIAOMING", 0));
        label_1->setText(QApplication::translate("Management", "XYZ123", 0));
        label_8->setText(QApplication::translate("Management", "\347\251\272\347\231\275", 0));
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_1->setText(QString());
        pushButton_2->setText(QString());
        btn_del->setText(QString());
        btn_add->setText(QString());
        btn_fast_login->setText(QApplication::translate("Management", "\345\277\253\351\200\237\347\231\273\345\275\225\350\257\245\347\224\250\346\210\267", 0));
    } // retranslateUi

};

namespace Ui {
    class Management: public Ui_Management {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEMENT_H
