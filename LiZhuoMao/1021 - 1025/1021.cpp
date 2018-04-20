#include <iostream>
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
项目名称 ： 个位数统计
作者     ： 李卓茂
日期     ： 2018.1.29 
*/
using namespace std;

int main(int argc, char** argv) 
{
	string N;
	cin >> N;
	int arr[10] {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < N.size(); i++)
	{
		arr[(int)N[i] - '0']++;
	}
	for(int i = 0; i < 10; i++)
	{
		if(arr[i] == 0)
			continue;
		else
			cout << i << ':' << arr[i] << endl;
	}
	return 0;
}
