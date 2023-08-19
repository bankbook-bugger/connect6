/********************************************************************************
** Form generated from reading UI file 'infordialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORDIALOG_H
#define UI_INFORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InforDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *former;
    QLabel *label_2;
    QLineEdit *latter;
    QLabel *label_4;
    QComboBox *result;
    QLabel *label_3;
    QLineEdit *place;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InforDialog)
    {
        if (InforDialog->objectName().isEmpty())
            InforDialog->setObjectName("InforDialog");
        InforDialog->resize(201, 264);
        verticalLayout_2 = new QVBoxLayout(InforDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(InforDialog);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        former = new QLineEdit(InforDialog);
        former->setObjectName("former");

        verticalLayout->addWidget(former);

        label_2 = new QLabel(InforDialog);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        latter = new QLineEdit(InforDialog);
        latter->setObjectName("latter");

        verticalLayout->addWidget(latter);

        label_4 = new QLabel(InforDialog);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        result = new QComboBox(InforDialog);
        result->addItem(QString());
        result->addItem(QString());
        result->addItem(QString());
        result->setObjectName("result");

        verticalLayout->addWidget(result);

        label_3 = new QLabel(InforDialog);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        place = new QLineEdit(InforDialog);
        place->setObjectName("place");

        verticalLayout->addWidget(place);

        buttonBox = new QDialogButtonBox(InforDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(InforDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, InforDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, InforDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(InforDialog);
    } // setupUi

    void retranslateUi(QDialog *InforDialog)
    {
        InforDialog->setWindowTitle(QCoreApplication::translate("InforDialog", "\345\275\225\345\205\245\346\257\224\350\265\233\344\277\241\346\201\257", nullptr));
        label->setText(QCoreApplication::translate("InforDialog", "\345\205\210\346\211\213\351\230\237\344\274\215\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("InforDialog", "\345\220\216\346\211\213\351\230\237\344\274\215\345\220\215\347\247\260", nullptr));
        label_4->setText(QCoreApplication::translate("InforDialog", "\346\257\224\350\265\233\347\273\223\346\236\234", nullptr));
        result->setItemText(0, QCoreApplication::translate("InforDialog", "\345\205\210\346\211\213\350\203\234", nullptr));
        result->setItemText(1, QCoreApplication::translate("InforDialog", "\345\220\216\346\211\213\350\203\234", nullptr));
        result->setItemText(2, QCoreApplication::translate("InforDialog", "\345\271\263\345\261\200", nullptr));

        label_3->setText(QCoreApplication::translate("InforDialog", "\346\257\224\350\265\233\345\234\260\347\202\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InforDialog: public Ui_InforDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORDIALOG_H
