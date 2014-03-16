#include "adminform.h"
#include "ui_adminform.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
adminform::adminform(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminform)
{
    ui->setupUi(this);
    QPixmap pcc;
    pcc.load("curentimg.jpg");
    ui->graphicsView->setSizeIncrement(pcc.width(),pcc.height());
}

adminform::~adminform()
{
    delete ui;
}

void adminform::on_pushButton_clicked()
{
    QPixmap pcc;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);//тут течь
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    ui->graphicsView->setScene(scene);
    pcc.load("curentimg.jpg");
    scene->addPixmap(pcc);
    ui->graphicsView->show();
}

void adminform::on_pushButton_2_clicked()
{
    cvSaveImage("temp.jpg",cvQueryFrame(cvCreateCameraCapture(-1)));
    QPixmap pcc;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);//тут течь
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    //cvReleaseCapture(&capt);
    ui->graphicsView->setScene(scene);
    pcc.load("temp.jpg");
    scene->addPixmap(pcc);
    ui->graphicsView->show();
}

void adminform::on_pushButton_5_clicked()
{
    close();
}

void adminform::on_pushButton_3_clicked()
{
    QPixmap pcc;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);//тут течь
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    QString filew=QFileDialog::getOpenFileName();
    if(filew.size()<=0)
    {
        QMessageBox::warning(0,"Warning", "ФАЙЛ  не вибрано");
    }
    else
    {
        filew.replace("\\\"","/"""); //шаманизм с эскейп последовательностью с форума он пашет

    }
    QFile::remove("temp.jpg");
    QFile::copy(filew, "temp.jpg");
    pcc.load("temp.jpg");
    ui->graphicsView->setScene(scene);
    scene->addPixmap(pcc);
    ui->graphicsView->show();
    ui->label->setText("temp.jpg");
}

void adminform::on_pushButton_4_clicked()
{   QFile::remove("curentimg.jpg");
    QFile::copy( "temp.jpg","curentimg.jpg");
}
