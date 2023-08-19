/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Timer
{
public:
    QHBoxLayout *horizontalLayout;
    QLCDNumber *Time;
    QLabel *label;

    void setupUi(QWidget *Timer)
    {
        if (Timer->objectName().isEmpty())
            Timer->setObjectName("Timer");
        Timer->resize(94, 41);
        horizontalLayout = new QHBoxLayout(Timer);
        horizontalLayout->setObjectName("horizontalLayout");
        Time = new QLCDNumber(Timer);
        Time->setObjectName("Time");

        horizontalLayout->addWidget(Time);

        label = new QLabel(Timer);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(Timer);

        QMetaObject::connectSlotsByName(Timer);
    } // setupUi

    void retranslateUi(QWidget *Timer)
    {
        Timer->setWindowTitle(QCoreApplication::translate("Timer", "Form", nullptr));
        label->setText(QCoreApplication::translate("Timer", "s", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Timer: public Ui_Timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
