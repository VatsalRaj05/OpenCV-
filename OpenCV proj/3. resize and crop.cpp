///////////////////RESIZING AND CROPPING////////////
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

	Mat imgResize, imgResize1,imgCrop;

	//cout << img.size() << endl;

	resize(img, imgResize, Size(640, 480));

	//If we do not want to resize it so specifically , we can scale is down any number of time(0.5 -> 50%)

	resize(img, imgResize1, Size(), 0.7, 0.7);

	Rect roi(130, 10, 450, 400);
	imgCrop = img(roi);


	imshow("image", img);
	imshow("image resize", imgResize);
	//imshow("image resize1", imgResize1);
	imshow("img crop", imgCrop);

	waitKey(0);

}