// c3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cstring>
#include <new>
using namespace std;
struct chaff
{
	char dross[20];
	int slag;
};
char buffer1[50];
char buffer2[500];
int main()
{
	chaff* p1;
	int* p2;

	p1 = new (buffer1) chaff;
	p2 = new (buffer2) int[20];
	

	chaff* pst = new chaff[2];
	strcpy_s(pst[0].dross, "DROSS1");
	pst[0].slag = 999;
	strcpy_s(pst[1].dross, "DROSS2");
	pst[1].slag = 1000;

	for (int i = 0; i < 2; i++) {
		cout << pst[i].dross <<" Address: "<<&pst[i].dross<< endl;
		cout << pst[i].slag << " Address: "<<&pst[i].slag << endl<<endl;
	}
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
