#include<opencv2/imgcodecs.hpp>
#include<opencv2/imgproc.hpp>
#include<opencv2/highgui.hpp>

#include<iostream>

using namespace std;
using namespace cv;

void main()
{
	string path = "resources\\test.png";
	Mat img = imread(path);
	Mat imgGray,imgBlur,imgCanny;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur,Size(7,7),5,0);
	Canny(imgBlur, imgCanny, 10, 10);
	

	imshow("test", img);
	waitKey(0);
	//imshow("test1", imgGray);
	//waitKey(0);
	//imshow("test2", imgBlur);
	//waitKey(0);
	imshow("test3", imgCanny);
	
	waitKey(0);
}