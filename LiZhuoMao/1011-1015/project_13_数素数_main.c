#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
项目名称  ： 数素数
作者      ： 李卓茂
日期      ： 2018.1.24 
*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int M, N, num = 2, i, count1 = 0, count2 = 0, count3 = 0;
	scanf("%d%d", &M, &N);
	while (M <= N)
	{
		count1 = 0;
		for (i = 2; i <= (int)sqrt(num); i++)
		{
			if (num % i == 0)
			{
				count1++;
				break;
			}
		}
		if (count1 == 0)
		{
			count2++;
			if (count2 >= M && count2 <= N)
			{
				count3++;
				if (count3 % 10 != 0)
				{
					if (count3 % 10 == 1)
					{
						printf("%d", num);
					}
					else
					{
						printf(" %d", num);
					}
				}
				else
				{
					printf(" %d\n", num);
				}
			}
			else if (count2 > N)
			{
				break;
			}
		}
		num++;
	}
	return 0;
}
