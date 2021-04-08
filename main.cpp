#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
	Mat src =imread("D:/test.jpg");
	imshow("input", src);
	waitKey(0);

	destroyAllWindows();
	return 0;
}