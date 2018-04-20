#include <stdio.h>
#include <stdlib.h>

/*
项目名称 ： 换个格式输出整数
作者     ： 李卓茂
日期     ： 2018.1.19 
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int input; //读取输入
	int i; //循环变量 
	scanf("%d", &input);
	 
	if (input >= 1000 || input < 0)
	{	
	 	return 0;
	} 
	if (input >= 100)
	{
		for (i = 0; i < input / 100; i++)
		{
			printf("B");
		}
	}
	if (input >= 10)
	{
		for (i = 0; i < (input % 100) / 10; i++)
		{
			printf("S");
		}
	}
	if (input >= 0)
	{
		for (i = 0; i < (input % 100) % 10; i++)
		{
			printf("%d", i + 1);
		}
	}
	return 0;
}
