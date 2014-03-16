#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <qtimer.h>
using namespace cv;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QTimer *timer=new QTimer(0);//тут течь
    timer->start(1000);
    connect(timer, SIGNAL(timeout()), this, SLOT(oneh()));//имитация сигнала, по окончаниювремени обращаетьса к oneh
}

void MainWindow::oneh()
{
    QGraphicsScene *scene = new QGraphicsScene(ui->graphicsView);//тут течь
    ui->graphicsView->setAlignment(Qt::AlignLeft|Qt::AlignTop );
    QPixmap pcc;
    ui->graphicsView->setScene(scene);
    pcc.load("1.jpg");
    scene->addPixmap(pcc);
    cvSaveImage("1.jpg",cvQueryFrame(cvCreateCameraCapture(-1)));
    ui->graphicsView->show();
}
