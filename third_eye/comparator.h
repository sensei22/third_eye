#ifndef COMPARATOR_H
#define COMPARATOR_H
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
using namespace cv;
class comparator
{
    IplImage* im;
    IplImage* imm;
    IplImage* temp;
    int posx;
    int posy;
public:
    comparator();
    bool setimag();
    bool rez();
    int getx();
    int gety();
};

#endif // COMPARATOR_H
