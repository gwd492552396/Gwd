/********************************************************************************
** Form generated from reading UI file 'driverpower.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRIVERPOWER_H
#define UI_DRIVERPOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DriverPower
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *sign;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_back;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_10;
    QLabel *driver_control_temp;
    QLabel *label_16;
    QWidget *widget;
    QVBoxLayout *verticalLayout_6;
    QLabel *direct_current;
    QLabel *label_12;
    QWidget *widget_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *driver_temper;
    QLabel *label_17;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *real_torque;
    QLabel *label_14;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *emc_input_v;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *real_rev;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_7;
    QFormLayout *formLayout;
    QLabel *Label;
    QLabel *work_mode;
    QLabel *Label2;
    QLabel *running_state;
    QLabel *Label3;
    QLabel *falut_state;
    QLabel *Label4;
    QLabel *em_direction;

    void setupUi(QWidget *DriverPower)
    {
        if (DriverPower->objectName().isEmpty())
            DriverPower->setObjectName(QStringLiteral("DriverPower"));
        DriverPower->resize(1080, 652);
        DriverPower->setMinimumSize(QSize(1080, 652));
        DriverPower->setMaximumSize(QSize(16777215, 652));
        DriverPower->setStyleSheet(QStringLiteral("background:transparent;"));
        gridLayout = new QGridLayout(DriverPower);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, -1, -1);
        sign = new QLabel(DriverPower);
        sign->setObjectName(QStringLiteral("sign"));
        sign->setMinimumSize(QSize(1000, 80));
        sign->setStyleSheet(QString::fromUtf8("background-image: url(:/\350\203\214\346\231\257_\346\240\207\351\242\2302.png);\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 28px;\n"
"color: #FFFFFF;"));
        sign->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(sign);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_back = new QPushButton(DriverPower);
        btn_back->setObjectName(QStringLiteral("btn_back"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btn_back->sizePolicy().hasHeightForWidth());
        btn_back->setSizePolicy(sizePolicy);
        btn_back->setMinimumSize(QSize(250, 80));
        btn_back->setStyleSheet(QString::fromUtf8("QPushButton#btn_back{\n"
"background-image: url(:/\346\214\211\351\224\256_\344\270\212\344\270\200\351\241\2652.png);\n"
"border:none;\n"
"}\n"
""));

        horizontalLayout->addWidget(btn_back);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 4);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        widget_5 = new QWidget(DriverPower);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        sizePolicy.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy);
        widget_5->setMinimumSize(QSize(210, 210));
        widget_5->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_10 = new QVBoxLayout(widget_5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        driver_control_temp = new QLabel(widget_5);
        driver_control_temp->setObjectName(QStringLiteral("driver_control_temp"));
        driver_control_temp->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        driver_control_temp->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(driver_control_temp);

        label_16 = new QLabel(widget_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_16->setAlignment(Qt::AlignCenter);

        verticalLayout_10->addWidget(label_16);


        gridLayout->addWidget(widget_5, 3, 1, 1, 1);

        widget = new QWidget(DriverPower);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(210, 210));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_6 = new QVBoxLayout(widget);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        direct_current = new QLabel(widget);
        direct_current->setObjectName(QStringLiteral("direct_current"));
        direct_current->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        direct_current->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(direct_current);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_6->addWidget(label_12);


        gridLayout->addWidget(widget, 1, 1, 1, 1);

        widget_6 = new QWidget(DriverPower);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        sizePolicy.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy);
        widget_6->setMinimumSize(QSize(210, 210));
        widget_6->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_11 = new QVBoxLayout(widget_6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        driver_temper = new QLabel(widget_6);
        driver_temper->setObjectName(QStringLiteral("driver_temper"));
        driver_temper->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        driver_temper->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(driver_temper);

        label_17 = new QLabel(widget_6);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_17->setAlignment(Qt::AlignCenter);

        verticalLayout_11->addWidget(label_17);


        gridLayout->addWidget(widget_6, 3, 2, 1, 1);

        widget_3 = new QWidget(DriverPower);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        widget_3->setMinimumSize(QSize(210, 210));
        widget_3->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_8 = new QVBoxLayout(widget_3);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        real_torque = new QLabel(widget_3);
        real_torque->setObjectName(QStringLiteral("real_torque"));
        real_torque->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        real_torque->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(real_torque);

        label_14 = new QLabel(widget_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_14->setAlignment(Qt::AlignCenter);

        verticalLayout_8->addWidget(label_14);


        gridLayout->addWidget(widget_3, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 2, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 2, 1, 1, 1);

        widget_4 = new QWidget(DriverPower);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(210, 210));
        widget_4->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_9 = new QVBoxLayout(widget_4);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        emc_input_v = new QLabel(widget_4);
        emc_input_v->setObjectName(QStringLiteral("emc_input_v"));
        emc_input_v->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        emc_input_v->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(emc_input_v);

        label_15 = new QLabel(widget_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_15->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(label_15);


        gridLayout->addWidget(widget_4, 1, 4, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 1, 5, 1, 1);

        widget_2 = new QWidget(DriverPower);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(210, 210));
        widget_2->setStyleSheet(QString::fromUtf8("background-image: url(:/\346\230\276\347\244\272_\345\217\202\346\225\2602.png);"));
        verticalLayout_7 = new QVBoxLayout(widget_2);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        real_rev = new QLabel(widget_2);
        real_rev->setObjectName(QStringLiteral("real_rev"));
        real_rev->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 60px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        real_rev->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(real_rev);

        label_13 = new QLabel(widget_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 25px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        label_13->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_13);


        gridLayout->addWidget(widget_2, 1, 2, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 0, 1, 1);

        widget_7 = new QWidget(DriverPower);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setMaximumSize(QSize(500, 16777215));
        formLayout = new QFormLayout(widget_7);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        Label = new QLabel(widget_7);
        Label->setObjectName(QStringLiteral("Label"));
        Label->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        Label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, Label);

        work_mode = new QLabel(widget_7);
        work_mode->setObjectName(QStringLiteral("work_mode"));
        work_mode->setMaximumSize(QSize(300, 16777215));
        work_mode->setLayoutDirection(Qt::LeftToRight);
        work_mode->setStyleSheet(QLatin1String("border-color: #FFFFFF;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background-color: rgb(0, 0, 0);"));
        work_mode->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, work_mode);

        Label2 = new QLabel(widget_7);
        Label2->setObjectName(QStringLiteral("Label2"));
        Label2->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        Label2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, Label2);

        running_state = new QLabel(widget_7);
        running_state->setObjectName(QStringLiteral("running_state"));
        running_state->setMaximumSize(QSize(300, 16777215));
        running_state->setStyleSheet(QLatin1String("border-color: #FFFFFF;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background-color: rgb(0, 0, 0);"));
        running_state->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, running_state);

        Label3 = new QLabel(widget_7);
        Label3->setObjectName(QStringLiteral("Label3"));
        Label3->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        Label3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, Label3);

        falut_state = new QLabel(widget_7);
        falut_state->setObjectName(QStringLiteral("falut_state"));
        falut_state->setMaximumSize(QSize(300, 16777215));
        falut_state->setStyleSheet(QLatin1String("border-color: #FFFFFF;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background-color: rgb(0, 0, 0);"));
        falut_state->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, falut_state);

        Label4 = new QLabel(widget_7);
        Label4->setObjectName(QStringLiteral("Label4"));
        Label4->setStyleSheet(QLatin1String("font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background:transparent;"));
        Label4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, Label4);

        em_direction = new QLabel(widget_7);
        em_direction->setObjectName(QStringLiteral("em_direction"));
        em_direction->setMaximumSize(QSize(300, 16777215));
        em_direction->setStyleSheet(QLatin1String("border-color: #FFFFFF;\n"
"font: 75 9pt \"Microsoft YaHei UI\";\n"
"font-size: 35px;\n"
"color: #FFFFFF;\n"
"background-color: rgb(0, 0, 0);"));
        em_direction->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, em_direction);


        gridLayout->addWidget(widget_7, 3, 3, 1, 2);


        retranslateUi(DriverPower);

        QMetaObject::connectSlotsByName(DriverPower);
    } // setupUi

    void retranslateUi(QWidget *DriverPower)
    {
        DriverPower->setWindowTitle(QApplication::translate("DriverPower", "Form", 0));
        sign->setText(QApplication::translate("DriverPower", "\351\251\261\345\212\250\347\224\265\346\234\272", 0));
        btn_back->setText(QString());
        driver_control_temp->setText(QApplication::translate("DriverPower", "0000", 0));
        label_16->setText(QApplication::translate("DriverPower", "\351\251\261\345\212\250\347\224\265\346\234\272\346\216\247\345\210\266\n"
"\345\231\250\346\270\251\345\272\246(\346\221\204\346\260\217\345\272\246)", 0));
        direct_current->setText(QApplication::translate("DriverPower", "0000", 0));
        label_12->setText(QApplication::translate("DriverPower", "\347\233\264\346\265\201\347\224\265\346\265\201(A)", 0));
        driver_temper->setText(QApplication::translate("DriverPower", "0000", 0));
        label_17->setText(QApplication::translate("DriverPower", "\351\251\261\345\212\250\347\224\265\346\234\272\346\270\251\345\272\246\n"
"(\346\221\204\346\260\217\345\272\246)", 0));
        real_torque->setText(QApplication::translate("DriverPower", "0000", 0));
        label_14->setText(QApplication::translate("DriverPower", "\345\256\236\351\231\205\350\275\254\347\237\251(Nm)", 0));
        emc_input_v->setText(QApplication::translate("DriverPower", "0000", 0));
        label_15->setText(QApplication::translate("DriverPower", "\347\224\265\346\234\272\346\216\247\345\210\266\345\231\250\n"
"\350\276\223\345\205\245\347\224\265\345\216\213(V)", 0));
        real_rev->setText(QApplication::translate("DriverPower", "0000", 0));
        label_13->setText(QApplication::translate("DriverPower", "\345\256\236\351\231\205\350\275\254\351\200\237(rpm)", 0));
        Label->setText(QApplication::translate("DriverPower", "\345\267\245\344\275\234\346\250\241\345\274\217", 0));
        work_mode->setText(QApplication::translate("DriverPower", "TextLabel", 0));
        Label2->setText(QApplication::translate("DriverPower", "\350\277\220\350\241\214\347\212\266\346\200\201", 0));
        running_state->setText(QApplication::translate("DriverPower", "TextLabel", 0));
        Label3->setText(QApplication::translate("DriverPower", "\346\225\205\351\232\234\347\212\266\346\200\201", 0));
        falut_state->setText(QApplication::translate("DriverPower", "TextLabel", 0));
        Label4->setText(QApplication::translate("DriverPower", "\347\224\265\346\234\272\350\275\254\345\220\221", 0));
        em_direction->setText(QApplication::translate("DriverPower", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class DriverPower: public Ui_DriverPower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRIVERPOWER_H
