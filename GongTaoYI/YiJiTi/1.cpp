#include<stdio.h>
int main()
{
	int n, i=0;
	scanf("%d", &n);
	while(n != 1)
	{
		if(n%2==0)
		{
			n=n/2;
			i++;
			
		}
		else
		{
			n = 3*n+1;
		}
    }
	printf("%d", i);
	return 0;
}