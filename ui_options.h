/********************************************************************************
** Form generated from reading UI file 'options.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONS_H
#define UI_OPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "timer.h"

QT_BEGIN_NAMESPACE

class Ui_Options
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *undo;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *black;
    QRadioButton *white;
    QPushButton *start;
    Timer *timer;

    void setupUi(QWidget *Options)
    {
        if (Options->objectName().isEmpty())
            Options->setObjectName("Options");
        Options->resize(126, 134);
        verticalLayout_2 = new QVBoxLayout(Options);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        undo = new QPushButton(Options);
        undo->setObjectName("undo");
        undo->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(undo);


        verticalLayout->addLayout(horizontalLayout);

        label = new QLabel(Options);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        black = new QRadioButton(Options);
        black->setObjectName("black");

        horizontalLayout_2->addWidget(black);

        white = new QRadioButton(Options);
        white->setObjectName("white");
        white->setCheckable(true);
        white->setChecked(false);

        horizontalLayout_2->addWidget(white);


        verticalLayout->addLayout(horizontalLayout_2);

        start = new QPushButton(Options);
        start->setObjectName("start");
        start->setEnabled(false);
        start->setCheckable(false);

        verticalLayout->addWidget(start);

        timer = new Timer(Options);
        timer->setObjectName("timer");

        verticalLayout->addWidget(timer);

        verticalLayout->setStretch(0, 6);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 2);
        verticalLayout->setStretch(4, 2);

        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Options);

        QMetaObject::connectSlotsByName(Options);
    } // setupUi

    void retranslateUi(QWidget *Options)
    {
        Options->setWindowTitle(QCoreApplication::translate("Options", "Form", nullptr));
        undo->setText(QCoreApplication::translate("Options", "\346\222\244\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("Options", "\346\210\221\346\226\271\357\274\232", nullptr));
        black->setText(QCoreApplication::translate("Options", "\351\273\221\346\243\213", nullptr));
        white->setText(QCoreApplication::translate("Options", "\347\231\275\346\243\213", nullptr));
        start->setText(QCoreApplication::translate("Options", "\345\274\200\345\247\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Options: public Ui_Options {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONS_H
