/********************************************************************************
** Form generated from reading UI file 'adminform.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINFORM_H
#define UI_ADMINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adminform
{
public:
    QGraphicsView *graphicsView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_6;
    QLabel *label_3;

    void setupUi(QDialog *adminform)
    {
        if (adminform->objectName().isEmpty())
            adminform->setObjectName(QStringLiteral("adminform"));
        adminform->resize(835, 530);
        graphicsView = new QGraphicsView(adminform);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 640, 480));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pushButton = new QPushButton(adminform);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 20, 171, 21));
        pushButton_2 = new QPushButton(adminform);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(660, 50, 171, 23));
        pushButton_3 = new QPushButton(adminform);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(660, 80, 171, 23));
        pushButton_4 = new QPushButton(adminform);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(660, 110, 171, 23));
        label = new QLabel(adminform);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 500, 641, 16));
        pushButton_5 = new QPushButton(adminform);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(660, 490, 171, 23));
        lineEdit = new QLineEdit(adminform);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(680, 190, 61, 21));
        lineEdit_2 = new QLineEdit(adminform);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(750, 190, 61, 21));
        lineEdit_3 = new QLineEdit(adminform);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(680, 220, 61, 21));
        lineEdit_4 = new QLineEdit(adminform);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(750, 220, 61, 21));
        pushButton_6 = new QPushButton(adminform);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(700, 250, 101, 23));
        label_3 = new QLabel(adminform);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 170, 111, 20));

        retranslateUi(adminform);

        QMetaObject::connectSlotsByName(adminform);
    } // setupUi

    void retranslateUi(QDialog *adminform)
    {
        adminform->setWindowTitle(QApplication::translate("adminform", "Dialog", 0));
        pushButton->setText(QApplication::translate("adminform", "\320\237\320\265\321\200\320\265\320\263\320\273\321\217\320\264 \321\202\320\265\320\277\320\265\321\200\321\226\321\210\320\275\321\214\320\276\320\263\320\276 \320\267\321\200\320\260\320\267\320\272\321\203 ", 0));
        pushButton_2->setText(QApplication::translate("adminform", "\320\267\321\200\320\276\320\261\320\270\321\202\320\270 \320\267\320\275\321\226\320\274\320\276\320\272", 0));
        pushButton_3->setText(QApplication::translate("adminform", "\320\227\320\260\320\262\320\260\320\275\321\202\320\260\320\266\320\270\321\202\320\270 \320\267 \321\204\320\260\320\271\320\273\321\203", 0));
        pushButton_4->setText(QApplication::translate("adminform", "\320\227\320\261\320\265\321\200\320\265\320\263\321\202\320\270", 0));
        label->setText(QString());
        pushButton_5->setText(QApplication::translate("adminform", "\320\222\320\270\321\205\321\226\320\264", 0));
        lineEdit->setText(QApplication::translate("adminform", "100", 0));
        lineEdit_2->setText(QApplication::translate("adminform", "100", 0));
        lineEdit_3->setText(QApplication::translate("adminform", "200", 0));
        lineEdit_4->setText(QApplication::translate("adminform", "200", 0));
        pushButton_6->setText(QApplication::translate("adminform", "\320\267\320\260\320\264\320\260\321\202\320\270 \320\276\320\261\320\273\320\260\321\201\321\202\321\214", 0));
        label_3->setText(QApplication::translate("adminform", "\320\272\320\276\320\276\321\200\320\264\320\270\320\275\320\260\321\202\320\270 \321\210\320\260\320\261\320\273\320\276\320\275\321\203", 0));
    } // retranslateUi

};

namespace Ui {
    class adminform: public Ui_adminform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINFORM_H
