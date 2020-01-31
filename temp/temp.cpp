// temp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/imgcodecs.hpp>
using namespace std;
using namespace cv;

int main(int argc,char**argv)
{//TODO:show image 1.argc1 is image address,
  
    Mat IMG = imread("D:\\DISPIMG\\77.1.jpg",IMREAD_COLOR);
    if(IMG.empty())
    {
        cout << "load img filed" << endl;
        return 0;
    }
    Mat chgIMG ;
    cvtColor(IMG, chgIMG, COLOR_RGB2GRAY);
    imwrite("D:\\DISPIMG\\gary2.jpg", chgIMG);

    
    namedWindow("Dispalied IMG", WINDOW_AUTOSIZE);
    namedWindow("changed IMG", WINDOW_AUTOSIZE);
    imshow("Dispalied IMG", IMG);
    imshow("changed IMG", chgIMG);
    waitKey();
    
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
