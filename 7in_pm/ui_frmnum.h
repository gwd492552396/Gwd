/********************************************************************************
** Form generated from reading UI file 'frmnum.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRMNUM_H
#define UI_FRMNUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmNum
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btn7;
    QPushButton *btn9;
    QPushButton *btn2;
    QPushButton *btn4;
    QPushButton *btnDelete;
    QPushButton *btnabc;
    QPushButton *btn00;
    QPushButton *btn8;
    QPushButton *btn1;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn3;

    void setupUi(QWidget *frmNum)
    {
        if (frmNum->objectName().isEmpty())
            frmNum->setObjectName(QStringLiteral("frmNum"));
        frmNum->resize(473, 300);
        frmNum->setMinimumSize(QSize(473, 300));
        frmNum->setMaximumSize(QSize(473, 300));
        frmNum->setStyleSheet(QLatin1String("background: rgba(0,0,0,0.60);\n"
"background: rgba(0,0,0,0.10);"));
        verticalLayout = new QVBoxLayout(frmNum);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 6, 0);
        btn7 = new QPushButton(frmNum);
        btn7->setObjectName(QStringLiteral("btn7"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn7->sizePolicy().hasHeightForWidth());
        btn7->setSizePolicy(sizePolicy);
        btn7->setMinimumSize(QSize(150, 65));
        btn7->setMaximumSize(QSize(150, 65));
        btn7->setFocusPolicy(Qt::NoFocus);
        btn7->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn7->setFlat(false);

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn9 = new QPushButton(frmNum);
        btn9->setObjectName(QStringLiteral("btn9"));
        sizePolicy.setHeightForWidth(btn9->sizePolicy().hasHeightForWidth());
        btn9->setSizePolicy(sizePolicy);
        btn9->setMinimumSize(QSize(150, 65));
        btn9->setMaximumSize(QSize(150, 65));
        btn9->setFocusPolicy(Qt::NoFocus);
        btn9->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn9->setText(QStringLiteral("9"));

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btn2 = new QPushButton(frmNum);
        btn2->setObjectName(QStringLiteral("btn2"));
        sizePolicy.setHeightForWidth(btn2->sizePolicy().hasHeightForWidth());
        btn2->setSizePolicy(sizePolicy);
        btn2->setMinimumSize(QSize(150, 65));
        btn2->setMaximumSize(QSize(150, 65));
        btn2->setFocusPolicy(Qt::NoFocus);
        btn2->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn2->setFlat(false);

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn4 = new QPushButton(frmNum);
        btn4->setObjectName(QStringLiteral("btn4"));
        sizePolicy.setHeightForWidth(btn4->sizePolicy().hasHeightForWidth());
        btn4->setSizePolicy(sizePolicy);
        btn4->setMinimumSize(QSize(150, 65));
        btn4->setMaximumSize(QSize(150, 65));
        btn4->setFocusPolicy(Qt::NoFocus);
        btn4->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn4->setFlat(false);

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btnDelete = new QPushButton(frmNum);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        sizePolicy.setHeightForWidth(btnDelete->sizePolicy().hasHeightForWidth());
        btnDelete->setSizePolicy(sizePolicy);
        btnDelete->setMinimumSize(QSize(150, 65));
        btnDelete->setMaximumSize(QSize(150, 65));
        btnDelete->setFocusPolicy(Qt::NoFocus);
        btnDelete->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));

        gridLayout->addWidget(btnDelete, 3, 2, 1, 1);

        btnabc = new QPushButton(frmNum);
        btnabc->setObjectName(QStringLiteral("btnabc"));
        sizePolicy.setHeightForWidth(btnabc->sizePolicy().hasHeightForWidth());
        btnabc->setSizePolicy(sizePolicy);
        btnabc->setMinimumSize(QSize(150, 65));
        btnabc->setMaximumSize(QSize(150, 65));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(26);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        btnabc->setFont(font);
        btnabc->setFocusPolicy(Qt::NoFocus);
        btnabc->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));

        gridLayout->addWidget(btnabc, 3, 0, 1, 1);

        btn00 = new QPushButton(frmNum);
        btn00->setObjectName(QStringLiteral("btn00"));
        sizePolicy.setHeightForWidth(btn00->sizePolicy().hasHeightForWidth());
        btn00->setSizePolicy(sizePolicy);
        btn00->setMinimumSize(QSize(150, 65));
        btn00->setMaximumSize(QSize(150, 65));
        btn00->setFocusPolicy(Qt::NoFocus);
        btn00->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));

        gridLayout->addWidget(btn00, 3, 1, 1, 1);

        btn8 = new QPushButton(frmNum);
        btn8->setObjectName(QStringLiteral("btn8"));
        sizePolicy.setHeightForWidth(btn8->sizePolicy().hasHeightForWidth());
        btn8->setSizePolicy(sizePolicy);
        btn8->setMinimumSize(QSize(150, 65));
        btn8->setMaximumSize(QSize(150, 65));
        btn8->setFocusPolicy(Qt::NoFocus);
        btn8->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn8->setFlat(false);

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn1 = new QPushButton(frmNum);
        btn1->setObjectName(QStringLiteral("btn1"));
        sizePolicy.setHeightForWidth(btn1->sizePolicy().hasHeightForWidth());
        btn1->setSizePolicy(sizePolicy);
        btn1->setMinimumSize(QSize(150, 65));
        btn1->setMaximumSize(QSize(150, 65));
        btn1->setFocusPolicy(Qt::NoFocus);
        btn1->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn1->setFlat(false);

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn5 = new QPushButton(frmNum);
        btn5->setObjectName(QStringLiteral("btn5"));
        sizePolicy.setHeightForWidth(btn5->sizePolicy().hasHeightForWidth());
        btn5->setSizePolicy(sizePolicy);
        btn5->setMinimumSize(QSize(150, 65));
        btn5->setMaximumSize(QSize(150, 65));
        btn5->setFocusPolicy(Qt::NoFocus);
        btn5->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));
        btn5->setFlat(false);

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn6 = new QPushButton(frmNum);
        btn6->setObjectName(QStringLiteral("btn6"));
        sizePolicy.setHeightForWidth(btn6->sizePolicy().hasHeightForWidth());
        btn6->setSizePolicy(sizePolicy);
        btn6->setMinimumSize(QSize(150, 65));
        btn6->setMaximumSize(QSize(150, 65));
        btn6->setFocusPolicy(Qt::NoFocus);
        btn6->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn3 = new QPushButton(frmNum);
        btn3->setObjectName(QStringLiteral("btn3"));
        sizePolicy.setHeightForWidth(btn3->sizePolicy().hasHeightForWidth());
        btn3->setSizePolicy(sizePolicy);
        btn3->setMinimumSize(QSize(150, 65));
        btn3->setMaximumSize(QSize(150, 65));
        btn3->setFocusPolicy(Qt::NoFocus);
        btn3->setStyleSheet(QLatin1String("QPushButton{background: #8B8B8C;\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
"QPushButton:pressed{background: rgba(255,255,255,0.30);\n"
"\n"
"border-radius: 5px;\n"
"font: 26pt \"Microsoft YaHei UI\";\n"
"color: #FFFFFF;\n"
"text-align: center;}\n"
""));

        gridLayout->addWidget(btn3, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        retranslateUi(frmNum);

        QMetaObject::connectSlotsByName(frmNum);
    } // setupUi

    void retranslateUi(QWidget *frmNum)
    {
        frmNum->setWindowTitle(QApplication::translate("frmNum", "\346\225\260\345\255\227\351\224\256\347\233\230", 0));
        btn7->setText(QApplication::translate("frmNum", "7", 0));
        btn2->setText(QApplication::translate("frmNum", "2", 0));
        btn4->setText(QApplication::translate("frmNum", "4", 0));
        btnDelete->setText(QApplication::translate("frmNum", "\342\206\220", 0));
        btnabc->setText(QApplication::translate("frmNum", "abc", 0));
        btn00->setText(QApplication::translate("frmNum", "0", 0));
        btn8->setText(QApplication::translate("frmNum", "8", 0));
        btn1->setText(QApplication::translate("frmNum", "1", 0));
        btn5->setText(QApplication::translate("frmNum", "5", 0));
        btn6->setText(QApplication::translate("frmNum", "6", 0));
        btn3->setText(QApplication::translate("frmNum", "3", 0));
    } // retranslateUi

};

namespace Ui {
    class frmNum: public Ui_frmNum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRMNUM_H
