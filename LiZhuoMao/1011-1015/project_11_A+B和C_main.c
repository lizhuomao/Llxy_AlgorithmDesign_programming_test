#include <stdio.h>
#include <stdlib.h>
//#include <limits.h>

/*
项目名称 ： A+B和C
作者     ： 李卓茂
日期     ： 2018.1.23 
*/

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	scanf("%d", &num);
	if (num > 10)
	{
		return 0;
	}
	long A[num + 1], B[num + 1], C[num + 1];
	int i;
	for (i = 0; i < num; i++)
	{
		scanf("%ld %ld %ld", &A[i], &B[i], &C[i]);
	}
	for (i = 0; i < num; i++)
	{
		printf("Case #%d: %s\n", i + 1, A[i] + B[i] > C[i] ? "true" :"false");
	}
	return 0;
}
