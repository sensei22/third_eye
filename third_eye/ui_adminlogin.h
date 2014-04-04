/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminlogin
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QDialog *adminlogin)
    {
        if (adminlogin->objectName().isEmpty())
            adminlogin->setObjectName(QStringLiteral("adminlogin"));
        adminlogin->resize(306, 136);
        lineEdit = new QLineEdit(adminlogin);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 40, 201, 20));
        lineEdit_2 = new QLineEdit(adminlogin);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(40, 70, 201, 20));
        label = new QLabel(adminlogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 40, 46, 13));
        label_2 = new QLabel(adminlogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(250, 70, 46, 13));
        pushButton = new QPushButton(adminlogin);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 100, 271, 23));

        retranslateUi(adminlogin);

        QMetaObject::connectSlotsByName(adminlogin);
    } // setupUi

    void retranslateUi(QDialog *adminlogin)
    {
        adminlogin->setWindowTitle(QApplication::translate("adminlogin", "Dialog", 0));
        label->setText(QApplication::translate("adminlogin", "Login", 0));
        label_2->setText(QApplication::translate("adminlogin", "password", 0));
        pushButton->setText(QApplication::translate("adminlogin", "Enter", 0));
    } // retranslateUi

};

namespace Ui {
    class adminlogin: public Ui_adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
