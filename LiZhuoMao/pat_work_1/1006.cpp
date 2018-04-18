#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char num[3];
	scanf("%s", &num);
	int len = strlen(num);
	//cout << len;
	if (len == 3)
	{
		for (int i = 0; i < num[0] - '0'; i++)
			printf("B");
		for (int i = 0; i < num[1] - '0'; i++)
			printf("S");
		for (int i = 0; i < num[2] - '0'; i++)
			printf("%d", i + 1);
	}
	else if (len == 2)
	{
		for (int i = 0; i < num[0] - '0'; i++)
			printf("S");
		for (int i = 0; i < num[1] - '0'; i++)
			printf("%d", i + 1);
	}
	else if (len == 1)
	{
		for (int i = 0; i < num[0] - '0'; i++)
			printf("%d", i + 1);
	}
	return 0;
}
