#include "autor.h"
#include "ui_autor.h"

autor::autor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::autor)
{
    ui->setupUi(this);
}

autor::~autor()
{
    delete ui;
}
