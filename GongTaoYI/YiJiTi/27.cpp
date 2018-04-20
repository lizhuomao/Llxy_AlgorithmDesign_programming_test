#include<stdio.h>
int main()
{
	int n, m;
	char a;
	int i, j, k, l;
	int sum=3, sum1=3;
	int delect=0;
	scanf("%d %c", &n, &a);
	m=(n-1)/2;
	for(i=0;i<1000;i++)
	{
		if(sum > m)
		{
			break;
		}
		sum1=sum1+2;
		sum=sum+sum1;
	}
	delect = n-((sum-sum1)*2+1);
	for(j=i,l=0; j>=0; j--,l++)
	{
		for(k=l; k>0; k--)
		{
			printf(" ");
		}
		for(k=sum1-2; k>0; k--)
		{
			printf("%c", a);
		}
		printf("\n");
		sum1=sum1-2;
	}
	for(j=--i,l=l-2; j>=0; j--,l--)
	{
		for(k=l; k>0; k--)
		{
			printf(" ");
		}
		for(k=sum1+2; k>0; k--)
		{
			printf("%c", a);
		}
		printf("\n");
		sum1=sum1+2;
	}
	printf("%d", delect);
	return 0;
 } 