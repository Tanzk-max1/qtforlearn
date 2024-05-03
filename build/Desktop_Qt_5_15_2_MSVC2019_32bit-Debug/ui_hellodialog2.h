/********************************************************************************
** Form generated from reading UI file 'hellodialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLODIALOG2_H
#define UI_HELLODIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_HelloDialog2
{
public:
    QLabel *label;

    void setupUi(QDialog *HelloDialog2)
    {
        if (HelloDialog2->objectName().isEmpty())
            HelloDialog2->setObjectName(QString::fromUtf8("HelloDialog2"));
        HelloDialog2->resize(400, 300);
        label = new QLabel(HelloDialog2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 100, 271, 61));

        retranslateUi(HelloDialog2);

        QMetaObject::connectSlotsByName(HelloDialog2);
    } // setupUi

    void retranslateUi(QDialog *HelloDialog2)
    {
        HelloDialog2->setWindowTitle(QCoreApplication::translate("HelloDialog2", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("HelloDialog2", "Hello World ! Hello Qt!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloDialog2: public Ui_HelloDialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLODIALOG2_H
