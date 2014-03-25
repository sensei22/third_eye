#include "comparator.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QMessageBox>
#include <stdio.h>
using namespace cv;
comparator::comparator()
{
}
bool comparator::setimag()
{
    bool fin;
    im=cvLoadImage("curentimg.jpg",1);
    imm=cvLoadImage("1.jpg",1);

    if(!im)
    {
       QMessageBox::warning(0,"Warning", "Початковий фалй ");
       fin=false;
    }
    else if(!imm)
    {
        QMessageBox::warning(0,"Warning", "Останній файл для порівняння");
        fin=false;
    }
    else
    {
        fin=true;
        temp=cvCreateImage(cvSize(im->width - imm->width + 1,im->height - imm->height + 1),32,1);
    }

    return fin;
}
bool comparator::rez()
{
    bool rezall=false;
    if(setimag()==true)
    {
        cvMatchTemplate(im,imm,temp,3);
        //cvNormalize( temp, temp,1, 0, CV_MINMAX );
        double min,max;
        CvPoint minpos, maxpos;
        cvMinMaxLoc(temp,&min,&max,&minpos,&maxpos);
        if(maxpos.x!=minpos.x && minpos.y!=maxpos.y)
        {
            rezall=true;
        }
    }
    else
        rezall=false;
    return rezall;
    //return false;
}
