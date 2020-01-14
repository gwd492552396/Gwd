/********************************************************************************
** Form generated from reading UI file 'video.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEO_H
#define UI_VIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Video
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *mainlabel;

    void setupUi(QWidget *Video)
    {
        if (Video->objectName().isEmpty())
            Video->setObjectName(QStringLiteral("Video"));
        Video->resize(1080, 652);
        Video->setMinimumSize(QSize(1080, 652));
        verticalLayout = new QVBoxLayout(Video);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(Video);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        mainlabel = new QLabel(widget_2);
        mainlabel->setObjectName(QStringLiteral("mainlabel"));
        mainlabel->setMinimumSize(QSize(720, 576));
        mainlabel->setMaximumSize(QSize(720, 576));
        mainlabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_2->addWidget(mainlabel);


        verticalLayout->addWidget(widget_2);


        retranslateUi(Video);

        QMetaObject::connectSlotsByName(Video);
    } // setupUi

    void retranslateUi(QWidget *Video)
    {
        Video->setWindowTitle(QApplication::translate("Video", "Form", 0));
        mainlabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Video: public Ui_Video {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEO_H
