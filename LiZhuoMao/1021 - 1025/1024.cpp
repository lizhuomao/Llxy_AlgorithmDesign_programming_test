#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
/*
项目名称 ：科学计数法
作者     ：李卓茂
日期     ：2018.1.30 
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	string str1,str2;
	cin >> str1;
	if (str1[0] == '-')
		cout << '-';
	int E = str1.find('E');
	str2  = str1[1];
	str2 += str1.substr(3, E - 3);
	string str3 = str1.substr(E + 1);
	int num2;
	stringstream ss;
	ss << str3;
	ss >> num2;
	//cout << "str1 = " << str1 << "\nstr2 = " << str2 << "\nstr3 = " << str3 << "\nnum2 = " << num2 << endl;
	if (num2 < 0)
	{
		cout << "0.";
		for (int i = 0; i < -num2 - 1; i++)
			cout << '0';
		cout << str2;
	}
	else if (num2 >= str2.size() - 1)
	{
		cout << str2;
		for (int i = 0; i < num2 - str2.size() + 1; i++)
			cout << '0';
	}
	else 
	{
		cout << str2.substr(0, num2 + 1);
		cout << '.';
		cout << str2.substr(num2 + 1);
	}
	return 0; 
}
