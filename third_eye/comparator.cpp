#include "comparator.h"
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QMessageBox>
#include <stdio.h>
using namespace cv;
comparator::comparator()
{
}
void comparator::setimag()
{

    im=cvLoadImage("sample.jpg");
    imm=cvLoadImage("1.jpg");

}
bool comparator::rez()
{
    setimag();
    bool rezall=false;
    if(imm && im)
    {
        temp=cvCreateImage(cvSize( imm->width - im->width + 1,imm->height - im->height + 1),32,1);
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
    if(im && imm)
    {
    cvReleaseImage(&im);
    cvReleaseImage(&imm);
    cvReleaseImage(&temp);
    delete im;
    delete imm;
    delete temp;
    }
}
