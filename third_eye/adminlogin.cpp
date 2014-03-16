#include "adminlogin.h"
#include "ui_adminlogin.h"
#include <adminform.h>
#include <QString>
#include <QMessageBox>
adminlogin::adminlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);
}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_pushButton_clicked()
{
    QString login;
    QString password;
    login=ui->lineEdit->text();
    password=ui->lineEdit_2->text();
    if(login=="god" && password=="1")
    {
        adminform winfo;
        winfo.exec();
        close();
    }
    else
    QMessageBox::warning(0,"Warning", "Бажаю успіху! Грайте далі");
}
