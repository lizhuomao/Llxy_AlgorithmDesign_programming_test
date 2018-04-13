#include<stdio.h>
void fun(int a[]);
int main()
{
	int n, m;
	int i, j;
	int len;
	int a[200];
	scanf("%d %d", &n, &m);
	m=m%n;//确保m小于n 这是这道提的难点 
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		a[n+i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		a[i] = a[n-m+i];
	}
	for(i=0; i<n; i++)
	{
		if(i == n-1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d ", a[i]);
	}
	return 0;
}