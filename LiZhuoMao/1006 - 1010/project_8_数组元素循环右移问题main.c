#include <stdio.h>
#include <stdlib.h>
/*
项目名称 ： 数组元素循环右移问题
作者     ： 李卓茂
日期     ： 2018.1.20 
*/ 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{	
	int num, time;
	scanf("%d %d", &num, &time);
	if (num > 100 || num < 1 || time < 0)
	{
		return 0;
	}
	int data[num + 1];
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%d", &data[i]);
	} 
	int j;
	/*
	int j = time, rem, n = num;
	while (j)
	{
		rem = n % j;
		n = j;
		j = rem;
	}
	*/
	//printf("%d", n);
	for (i = 0; i < time; i++)
	{
	//	printf("%d", data[num - 1]);
		int temp = data[num - 1];
		for(j = num - 1; j >= 1; j--)
		{
			data[j] = data[j - 1];
		}
		data[0] = temp;
	}
	printf("%d", data[0]);
	for (i = 1; i < num; i++)
	{
		printf(" %d", data[i]);
	}
	return 0;
}
