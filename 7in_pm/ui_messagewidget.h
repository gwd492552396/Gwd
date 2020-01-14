/********************************************************************************
** Form generated from reading UI file 'messagewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGEWIDGET_H
#define UI_MESSAGEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MessageWidget
{
public:
    QLabel *label;
    QLabel *lb_message;
    QLabel *lb_error;
    QPushButton *close;

    void setupUi(QWidget *MessageWidget)
    {
        if (MessageWidget->objectName().isEmpty())
            MessageWidget->setObjectName(QStringLiteral("MessageWidget"));
        MessageWidget->resize(447, 310);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MessageWidget->sizePolicy().hasHeightForWidth());
        MessageWidget->setSizePolicy(sizePolicy);
        MessageWidget->setMinimumSize(QSize(447, 310));
        MessageWidget->setMaximumSize(QSize(447, 310));
        label = new QLabel(MessageWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 447, 310));
        label->setMinimumSize(QSize(447, 310));
        label->setMaximumSize(QSize(447, 310));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/\345\274\271\347\252\227.png);"));
        lb_message = new QLabel(MessageWidget);
        lb_message->setObjectName(QStringLiteral("lb_message"));
        lb_message->setGeometry(QRect(10, 40, 431, 91));
        lb_message->setStyleSheet(QLatin1String("font: 75 36pt \"Microsoft JhengHei UI\";\n"
"color: rgb(255, 255, 255);"));
        lb_message->setAlignment(Qt::AlignCenter);
        lb_error = new QLabel(MessageWidget);
        lb_error->setObjectName(QStringLiteral("lb_error"));
        lb_error->setGeometry(QRect(10, 140, 431, 81));
        lb_error->setStyleSheet(QLatin1String("font: 75 22pt \"Microsoft YaHei UI\";\n"
"color: rgb(255, 255, 255);"));
        lb_error->setAlignment(Qt::AlignCenter);
        close = new QPushButton(MessageWidget);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(391, 12, 40, 40));
        close->setMinimumSize(QSize(40, 40));
        close->setMaximumSize(QSize(40, 40));
        close->setStyleSheet(QString::fromUtf8("QPushButton#close{\n"
"\n"
"background-image:url(:/29.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"QPushButton#close:pressed{\n"
"background-image: url(:/\344\276\247\351\224\256_\345\205\263\351\227\255\345\274\271\347\252\227_\346\214\211\344\270\213.png);\n"
"border:none;\n"
"font: 75 14pt \"Microsoft YaHei UI\";\n"
"color:rgb(255, 255, 255);\n"
"}"));

        retranslateUi(MessageWidget);

        QMetaObject::connectSlotsByName(MessageWidget);
    } // setupUi

    void retranslateUi(QWidget *MessageWidget)
    {
        MessageWidget->setWindowTitle(QApplication::translate("MessageWidget", "Form", 0));
        label->setText(QString());
        lb_message->setText(QApplication::translate("MessageWidget", "\347\231\273\345\275\225\345\244\261\350\264\245", 0));
        lb_error->setText(QString());
        close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MessageWidget: public Ui_MessageWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGEWIDGET_H
