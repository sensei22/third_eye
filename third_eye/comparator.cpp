#include "comparator.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/core/core_c.h>
#include <opencv2/core/types_c.h>
#include <QMessageBox>
#include <stdio.h>
using namespace cv;
comparator::comparator()
{
}
void comparator::setimag()
{
    im=cvLoadImage("curentimg.jpg",1);
    imm=cvLoadImage("1.jpg",1);
    temp=cvCreateImage(cvSize(im->width - imm->width + 1,im->height - imm->height + 1),32,1);
    if(!im)
    {
       QMessageBox::warning(0,"Warning", "Пошкоджено файл для порівняння");
    }
    if(!imm)
    {
        QMessageBox::warning(0,"Warning", "Пошкоджено файл для порівняння");
    }
}
bool comparator::rez()
{
    setimag();
    bool rezall=false;
    cvMatchTemplate(im,imm,temp,0);
    //cvNormalize( temp, temp, 1, 0, CV_MINMAX );
    return rezall;
}
