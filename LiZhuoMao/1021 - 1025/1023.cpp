#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
项目名称 ： 组个最小数
姓名     ： 李卓茂
日期     ： 2018.1.29 
*/

using namespace std;

int main(int argc, char** argv) 
{
	int input[10] = {0};
	for (int i = 0; i < 10; i++)
		cin >> input[i];
	for (int i = 1; i < 10; i++)
		if(input[i] != 0)
		{
			cout << i;
			input[i]--;
			break;
		}
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < input[i]; j++)
		cout << i;
	cout << endl;
	return 0;
}
