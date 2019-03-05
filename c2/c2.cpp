// c2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;
//function prototype
void strcount(string str);
int main()
{
	string input;

	cout << "Enter a line: \n";
	getline(cin, input);
	while (cin)
	{
		strcount(input);
		cout << "Enter next line(empty line to quit):\n";
		getline(cin, input);
		if (input == "")
		break;
	}
	cout << "Bye\n";
	return 0;
}

void strcount(string str) 
{
	static int total = 0;
	int count = 0;

	cout << "\"" << str << "\" contains ";
	count = str.length();
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
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
