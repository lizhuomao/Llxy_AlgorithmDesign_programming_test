#include<stdio.h>
int main()
{
	int a,b,c,n,i;
	scanf("%d",&n);
	a = n/100;
	b = (n%100)/10;
	c = n%10;
	for(i = 0;i < a;i++)
		printf("B");
	for(i = 0;i < b;i++)
		printf("S");
	for(i = 1;i <= c;i++)
		printf("%d",i);


	return 0;
}