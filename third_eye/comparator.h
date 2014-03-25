#ifndef COMPARATOR_H
#define COMPARATOR_H
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
int minHessian = 400;
using namespace cv;
class comparator
{
    IplImage* im;
    IplImage* imm;
    IplImage* temp;
public:
    comparator();
    void setimag();
    bool rez();
};

#endif // COMPARATOR_H
