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
    im=cvLoadImage("sample.jpg",1);
    imm=cvLoadImage("1.jpg",1);

    if(!im)
    {
       //QMessageBox::warning(0,"Warning", "Початковий файл ");
       fin=false;
    }
    else if(!imm)
    {
        //QMessageBox::warning(0,"Warning", "Останній файл для порівняння");
        fin=false;
    }
    else
    {
        fin=true;
        temp=cvCreateImage(cvSize( imm->width - im->width + 1,imm->height - im->height + 1),32,1);
    }

    return fin;
}
bool comparator::rez()
{
    bool rezall=false;
    if(setimag()==true)
    {
        double min,max;
        CvPoint minpos, maxpos;
        cvMatchTemplate(imm,im,temp,CV_TM_CCOEFF_NORMED);
        cvMinMaxLoc(temp,&min,&max,&minpos,&maxpos);
        if(max >= 0.7)
        {
            rezall=true;
            posx=maxpos.x;
            posy=maxpos.y;
        }
        else
        rezall=false;
    }
    else
    rezall=false;
    return rezall;
}
int comparator::getx()
{
    return posx;
}
int comparator::gety()
{
    return posy;
}
void comparator::dcomparator()
{
    if(setimag())
    {
    cvReleaseImage(&im);
    cvReleaseImage(&imm);
    cvReleaseImage(&temp);
    im = NULL;
    imm = NULL;
    temp = NULL;
    //tempImgMask = NULL;
    //temp;
    }
}
