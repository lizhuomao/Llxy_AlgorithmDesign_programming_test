#include <stdio.h>
#include <math.h>
//1026	程序运行时间 
int main ()
{
	int c1, c2;
	scanf("%d%d", &c1, &c2);
	int sum = c2 - c1;
	if (sum % 100 >= 50)
		sum = sum / 100 + 1;
	else 
		sum = sum / 100;
	printf("%0.2d:%0.2d:%0.2d", sum / 3600, sum % 3600 / 60, sum % 3600 % 60);
	return 0;
}
