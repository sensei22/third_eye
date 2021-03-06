#include "adminform.h"
#include "ui_adminform.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
//#include <opencv/cv.hpp>
//#include <opencv/cv.h>
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
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    ui->graphicsView->setScene(scene);
    pcc.load("curentimg.jpg");
    scene->addPixmap(pcc);
    ui->graphicsView->show();
}

void adminform::on_pushButton_2_clicked()
{
    CvCapture* capture = cvCreateCameraCapture(CV_CAP_ANY);
    assert( capture );
    cvSaveImage("temp.jpg",cvQueryFrame(capture));
    cvSaveImage("temp.jpg",cvQueryFrame(capture));
    cvReleaseCapture( &capture );
    QPixmap pcc;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
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
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
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

void adminform::on_pushButton_6_clicked()
{
    int startx=ui->lineEdit->text().toInt();
    int starty=ui->lineEdit_2->text().toInt();
    int endy=ui->lineEdit_3->text().toInt();
    int endx=ui->lineEdit_4->text().toInt();
    QPixmap pcc;
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    ui->graphicsView->setScene(scene);
    pcc.load("curentimg.jpg");
    scene->addPixmap(pcc);
    scene->addRect(startx,starty,endx,endy);
    IplImage* image = 0;
    IplImage* imagee = 0;
    image = cvLoadImage("curentimg.jpg");
    cvSetImageROI(image,cvRect(startx,starty,endx,endy));
    cvSaveImage("sample.jpg", image);
    ui->graphicsView->show();
}
