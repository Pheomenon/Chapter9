// Chapter9.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include "golf.cpp"
using namespace std;
int main() {
	cout << "non-interactive version: " << endl;
	golf ann;
	char annName[Len] = "Ann Bridfree";
	int annHandicap = 24;
	setgolf(ann, annName, annHandicap);
	
	cout << "interactive version: " << endl;
	setgolf(ann);

	cout << "reset handicap value: " << endl;
	cout << "Enter new hanicap: " << endl;
	int hc;
	cin >> hc;
	setgolf(ann,hc);

	cout << "displays contents of golf structure: " << endl;
	showgolf(ann);


	/*char tempName[Len];
	int tempHandicap;
	char firstName[Len];
	cout << "Enter your first name: " << endl;
	cin >> firstName;
	*/
	}	
void setgolf(golf& g, const char* name, int hc) {
	*g.fullname = *name;  // 这个问题周末解决
	g.handicap = hc;
	cout << g.fullname << endl;
	cout << g.handicap << endl;
}	

int setgolf(golf& g) {
	cout << "Enter your name: " << endl;
	cin >> g.fullname;
	cout << "Enter your handicap: " << endl;
	cin >> g.handicap;
	cout << "Name: " << g.fullname<<endl;
	cout << "Handicap: " << g.handicap << endl;
	if (g.fullname != '\0' && g.handicap != '\0')
		return 1;
	else
		return 0;
}

int setgolf(golf& g, int hc){
	g.handicap = hc;
	return hc;
	cout << "Now Handicap are change to " << g.handicap << endl;
}

void showgolf(const golf& g) {
	cout <<"Name: "<< g.fullname << endl;
	cout <<"Handicap: "<< g.handicap << endl;
}

/*while (cin >> tempName && cin >> tempHandicap)
		{
			*gf[count].fullname = *tempName;
			gf[count].handicap = tempHandicap;
			count++;
			cout << "Enter your name: " << endl;
			cin >> tempName;
			cout << "Enter your handicap: " << endl;
			cin >> tempHandicap;
		}*/
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
