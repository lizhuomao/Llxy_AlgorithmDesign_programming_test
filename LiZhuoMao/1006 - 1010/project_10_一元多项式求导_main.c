#include <stdio.h>
#include <stdlib.h>

/*
项目名称 ： 一元多项式求导
作者    ： 李卓茂
日期    ： 2018.1.20 
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num1[1001],num2[1001];
	int i;
	for (i = 0; i < 1000; i++)
	{
		scanf("%d %d", &num1[i], &num2[i]);
		if(num2[i] == 0 || num1[i] == 0)
			break;
	}
	int j = 0;
	for (j = 0; j <= i; j++)
	{
		if (num1[j] != 0 && num2[j] != 0)
		{
			printf("%d %d", num2[j] * num1[j], num2[j] - 1);
			if (j != i - 1)
				printf(" ");
			else
				break;
		}
		else if (num1[j] == 0 || num2[j] == 0)
		{
			printf("0 0");
		}
		
	}
	return 0;
}
