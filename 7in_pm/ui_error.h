/********************************************************************************
** Form generated from reading UI file 'error.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ERROR_H
#define UI_ERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Error
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *qTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_previous;
    QLabel *page_number;
    QPushButton *btn_next;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QPushButton *btn_back;

    void setupUi(QWidget *Error)
    {
        if (Error->objectName().isEmpty())
            Error->setObjectName(QStringLiteral("Error"));
        Error->resize(1154, 688);
        Error->setMinimumSize(QSize(674, 400));
        Error->setStyleSheet(QStringLiteral("background:transparent;"));
        verticalLayout = new QVBoxLayout(Error);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        qTableWidget = new QTableWidget(Error);
        qTableWidget->setObjectName(QStringLiteral("qTableWidget"));

        verticalLayout->addWidget(qTableWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(140);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, -1, 0, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btn_previous = new QPushButton(Error);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_previous->sizePolicy().hasHeightForWidth());
        btn_previous->setSizePolicy(sizePolicy);
        btn_previous->setMinimumSize(QSize(165, 60));
        btn_previous->setStyleSheet(QString::fromUtf8("QPushButton#btn_previous{\n"
"border-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\265.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_previous:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\265_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_previous);

        page_number = new QLabel(Error);
        page_number->setObjectName(QStringLiteral("page_number"));
        page_number->setStyleSheet(QLatin1String("background:transparent;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 30px;\n"
"color: #FFFFFF;"));
        page_number->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(page_number);

        btn_next = new QPushButton(Error);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        sizePolicy.setHeightForWidth(btn_next->sizePolicy().hasHeightForWidth());
        btn_next->setSizePolicy(sizePolicy);
        btn_next->setMinimumSize(QSize(165, 60));
        btn_next->setStyleSheet(QString::fromUtf8("QPushButton#btn_next{\n"
"border-image: url(:/\346\214\211\351\224\256_\344\270\213\344\270\200\351\241\265.png);\n"
"border:none;\n"
"}\n"
"QPushButton#btn_next:pressed{\n"
"border-image: url(:/\346\214\211\351\224\256_\344\270\213\344\270\200\351\241\265_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(btn_next);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        sign = new QLabel(Error);
        sign->setObjectName(QStringLiteral("sign"));
        sizePolicy.setHeightForWidth(sign->sizePolicy().hasHeightForWidth());
        sign->setSizePolicy(sizePolicy);
        sign->setMinimumSize(QSize(1000, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        btn_back = new QPushButton(Error);
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


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(Error);

        QMetaObject::connectSlotsByName(Error);
    } // setupUi

    void retranslateUi(QWidget *Error)
    {
        Error->setWindowTitle(QApplication::translate("Error", "Form", 0));
        btn_previous->setText(QString());
        page_number->setText(QApplication::translate("Error", "0/1", 0));
        btn_next->setText(QString());
        sign->setText(QApplication::translate("Error", "\346\225\205\351\232\234\344\277\241\346\201\257\346\237\245\350\257\242", 0));
        btn_back->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Error: public Ui_Error {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ERROR_H
