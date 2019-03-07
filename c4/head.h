//c4.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//第一个文件是一个头文件，其中包含名称空间；第二个文件是一个源代码文件，
//它对这个名称空间进行扩展，以提供三个函数的定义；第三个文件声明两个Sales对象，
//并使用setSales()对象，并使用setSales()的交互式版本为一个结构提供值，
//并使用setSales()的非交互式版本为另一个结构提供值。
//另外它还使用showSale()来显示这两个结构的内容。

#include <iostream>

namespace SALES {
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	//copies the lesser of 4 or n items from the array ar
	//to the sales member of s and computers and stores the 
	//average,maximum,and minimum values of the entered items;
	//remaining elements of sales, if any, set to 0
	void setSales(Sales& s, const double ar[], int n);
	//gathers sales for 4 quarters interactively,stores them
	//in the sales munber of s and computers and stores the
	//average,maximum,and minimum values
	void setSales(Sales& s);
	//display all information in structre s
	void showSales(const Sales& s);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
