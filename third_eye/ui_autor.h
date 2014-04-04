/********************************************************************************
** Form generated from reading UI file 'autor.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOR_H
#define UI_AUTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autor
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *autor)
    {
        if (autor->objectName().isEmpty())
            autor->setObjectName(QStringLiteral("autor"));
        autor->resize(531, 167);
        layoutWidget = new QWidget(autor);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 30, 441, 89));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        retranslateUi(autor);

        QMetaObject::connectSlotsByName(autor);
    } // setupUi

    void retranslateUi(QDialog *autor)
    {
        autor->setWindowTitle(QApplication::translate("autor", "Dialog", 0));
        label->setText(QApplication::translate("autor", "\320\232\320\260\320\275\320\264\320\270\320\261\320\260 \320\206\320\263\320\276\321\200  \320\236\320\273\320\265\320\272\321\201\320\260\320\275\320\264\321\200\320\276\320\262\320\270\321\202   -=KIO2145=-", 0));
        label_2->setText(QApplication::translate("autor", "\320\233\320\270\320\272\320\276\320\262 \320\240\320\276\320\274\320\260\320\275 \320\241\321\202\320\260\320\275\321\226\321\201\320\273\320\260\320\262\320\276\320\262\320\270\321\207    Merorh", 0));
        label_3->setText(QApplication::translate("autor", "\320\223\320\276\320\275\321\207\320\260\321\200\320\276\320\262 \320\224\320\265\320\275\320\270\321\201 \320\241\320\265\321\200\320\263\321\226\320\271\320\276\320\262\320\270\321\207  ", 0));
    } // retranslateUi

};

namespace Ui {
    class autor: public Ui_autor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOR_H
