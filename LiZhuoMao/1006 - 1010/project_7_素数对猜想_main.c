#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int num;
	int record[10000];
	scanf("%d", &num);
	if (num >= 100000 || num <= 0)
	{
		return 0;
	}
	int i = 0, j = 0, n = 0, m = 0, x = 0; 
	for (i = num; i > 2; i--)
	{
		n = 0;

			for (j = 2; j <= turnc(sqrt(i)); j++)
			{
				if (i % j == 0)
					{
						n++;
						break;
					}
			}
			if (n == 0)
			{
				record[m] = i;
				m++;
			}


	}
	for (i = 0; i < m - 1; i++)
	{
		if (record[i] - record[i + 1] == 2)
		{
			++x;
		}
	}

	printf("%d", x);
	return 0;
} 
