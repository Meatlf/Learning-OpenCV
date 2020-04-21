//--------------------------------------【程序说明】-------------------------------------------
//		程序说明：《OpenCV3编程入门》OpenCV2版书本配套示例程序17
//		程序描述：为程序界面添加滑动条
//		开发测试所用IDE版本：Visual Studio 2010
//		开发测试所用OpenCV版本：	2.4.9
//		2014年6月 Created by @浅墨_毛星云
//		2014年11月 Revised by @浅墨_毛星云
//------------------------------------------------------------------------------------------------

//---------------------------------【头文件、命名空间包含部分】-------------------------------
//		描述：包含程序所使用的头文件和命名空间
//-------------------------------------------------------------------------------------------------
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;

//绘制灰度直方图
int main()
{
    Mat src, gray;
    src = imread("1.jpg");
    cvtColor(src, gray, CV_RGB2GRAY);
    int bins = 256;
    int hist_size[] = {bins};
    float range[] = {0, 256};
    const float *ranges[] = {range};
    MatND hist;
    int channels[] = {0};

    calcHist(&gray, 1, channels, Mat(), // do not use mask
             hist, 1, hist_size, ranges,
             true, // the histogram is uniform
             false);

    double max_val;
    minMaxLoc(hist, 0, &max_val, 0, 0);
    int scale = 2;
    int hist_height = 256;
    Mat hist_img = Mat::zeros(hist_height, bins * scale, CV_8UC3);
    for (int i = 0; i < bins; i++)
    {
        float bin_val = hist.at<float>(i);
        int intensity = cvRound(bin_val * hist_height / max_val); //要绘制的高度
        rectangle(hist_img, Point(i * scale, hist_height - 1),
                  Point((i + 1) * scale - 1, hist_height - intensity),
                  CV_RGB(255, 255, 255));
    }
    imshow("Source", src);
    imshow("Gray Histogram", hist_img);
    waitKey(0);
    return 0;
}