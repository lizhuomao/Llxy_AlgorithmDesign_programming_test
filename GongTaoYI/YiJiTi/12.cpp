当A2有的时候，但是结果却是0，就必须得判定A2到底有没有


#include<stdio.h>
#include<math.h>
int main() 
{
	int A1=0, A2=0, A3=0, A5=0;
	double A4=0;
	int a2=0, a4=0,a44=0;
	int a[1000];
	int n, i;
	scanf("%d", &n);	
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]%5 == 0 && a[i]%2 == 0)
		{
			A1+=a[i];
		}
		if(a[i]%5 == 1)
		{
			A2=A2+pow((-1),a2)*a[i];
			a2++;
		}
		if(a[i]%5 == 2)
		{
			A3++;
		}
		if(a[i]%5 == 3)
		{
			a4+=a[i];
			a44++;
			A4=a4/(double)a44;
		}
		if(a[i]%5 == 4)
		{
			if(A5<a[i])
			{
				A5=a[i];
			}
		}
	}
	if(A1==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", A1);
	}
	if(a2==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", A2);
	}
	if(A3==0)
	{
		printf("N ");
	}
	else
	{
		printf("%d ", A3);
	}
	if(A4==0)
	{
		printf("N ");
	}
	else
	{
		printf("%0.1lf ", A4);
	}
	if(A5==0)
	{
		printf("N");
	}
	else
	{
		printf("%d", A5);
	}
	return 0;
} 