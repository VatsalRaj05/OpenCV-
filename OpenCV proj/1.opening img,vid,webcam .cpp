#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace cv;
using namespace std;

///////////////IMAGES//////////
//
//void main()
//{
//	string path = "resources\\test.png";
//	Mat img = imread(path);
//	imshow("Image", img);
//	waitKey(0);
//
//}

/////////////VIDEOS/////////

//void main()
//{
//	string path = "resources\\test_video.mp4";
//	VideoCapture vid(path);
//	Mat img;
//
//	while (true)
//	{
//		vid.read(img);
//		imshow("hi", img);
//		int key = waitKey(20);
//
//		if (img.empty())
//		{
//			cout << "End of the video" << endl;
//			break;
//
//		}
//		if (key == 27)
//		{
//			cout << "Escape key pressed. Exiting..." << endl;
//			break;
//		}
//		
//	}
//}

///////////////Camera///////////

void main()
{
	VideoCapture vid(0);
	Mat img;

	while (true)
	{
		vid.read(img);
		imshow("hi", img);
		int key = waitKey(1);

		if (img.empty())
		{
			cout << "End of the video" << endl;
			break;

		}
		if (key == 27)
		{
			cout << "Escape key pressed. Exiting..." << endl;
			break;
		}

	}
}

