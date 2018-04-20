#include<stdio.h>
int main()
{
	int n, m;
	int i, j;
	char a;
	scanf("%d %c", &n, &a);
	for(i=0; i<n; i++)
	{
		printf("%c", a);
	}
	printf("\n");
	m = (n+1)/2;
	for(i=0; i<m-2; i++)
	{
		printf("%c", a);
		for(j=0; j<n-2; j++)
		printf(" ");
		printf("%c\n", a);
	}
	for(i=0; i<n; i++)
	{
		printf("%c", a);
	}
	return 0;
 } 