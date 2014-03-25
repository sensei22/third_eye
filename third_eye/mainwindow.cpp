#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <qtimer.h>
#include <adminlogin.h>
#include <autor.h>
#include <comparator.h>
#include <windows.h>
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pcc;
    pcc.load("1.jpg");
    ui->graphicsView->setSizeIncrement(pcc.width(),pcc.height());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);//тут течь
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    QPixmap pcc;
    IplImage* frame=0;
    CvCapture* capture = cvCreateCameraCapture(-1);
    ui->graphicsView->setScene(scene);
    comparator h;
    while(1)
    {
        cvSaveImage("1.jpg",frame);
        frame = cvQueryFrame( capture );
        pcc.load("1.jpg");
        scene->addPixmap(pcc);
        ui->graphicsView->show();
        QEventLoop loop;
        QTimer::singleShot(1000, &loop, SLOT(quit()));loop.exec();
        scene->clear();
        if(h.rez()==true)
        {
            break;
        }
        else;
    }
  cvReleaseCapture( &capture );
}

void MainWindow::oneh()
{



}

void MainWindow::on_actionEXIT_triggered()
{
    exit(1);
}

void MainWindow::on_actionLogin_as_admin_triggered()
{
    adminlogin wind;
    wind.exec();
}

void MainWindow::on_actionAutor_triggered()
{
    autor winda;
    winda.exec();
}
