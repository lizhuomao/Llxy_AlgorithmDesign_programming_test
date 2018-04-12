#include<stdio.h>
int main()
{
	int n, i, a, b, c;
	scanf("%d", &n);
	if(n>=100)
	{
		a = n/100;
		for(i=0;i<a;i++)
		{
			printf("B");
		}
		b = n%100/10;
		for(i=0;i<b;i++)
		{
			printf("S");
		}
		c = n%100%10;
		for(i=0;i<c;i++)
		{
			printf("%d", i+1);
		}
	}
	else if(n>=10)
	{
		b = n/10;
		for(i=0;i<b;i++)
		{
			printf("S");
		}
		c = n%10;
		for(i=0;i<c;i++)
		{
			printf("%d", i+1);
		}
	}
	else
	{
		c = n%10;
		for(i=0;i<c;i++)
		{
			printf("%d", i+1);
		}	
	}
	return 0;
}