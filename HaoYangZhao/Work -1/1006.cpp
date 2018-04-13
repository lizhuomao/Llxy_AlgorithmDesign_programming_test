/*
时间:2018年4月12日20:48:59
功能：将一个三位数，用B代表百，S代表十，1...n代表个位，输出
*/
# include <stdio.h>
int main(void)
{
	int n,unit,decade,hundred,i;

	scanf("%d",&n);

	unit = n % 10;
	decade = n / 10 % 10;
	hundred = n / 100 % 100;

	if(n >= 100)
		for(i = 0 ; i < hundred ; i++)
			printf("B");
	if(n >= 10)
		for(i = 0 ; i < decade ; i++)
			printf("S");
	for(i = 1 ;i <= unit ; i++)
		printf("%d",i);
	printf("\n");

	return 0;
}