#include<stdio.h>
int main()
{
	int a[1005],i = 0,j = 0,k = 0,h,y;
	long int N;
	scanf("%ld",&N);
	do
	{
		a[i] = N%10;
		N /= 10;
		i++;
	}while(N != 0);
	h = i;
	for(j;j < 10;j++)
	{
		for(i = h;i > 0;i--)
		{
			if(a[i-1] == j)
			{
				k++;
				y = i-1;
			}
		}
		if(k != 0)
			printf("%d : %d\n",a[y],k);
		k = 0;
			
	}
	
	
	return 0;
}  