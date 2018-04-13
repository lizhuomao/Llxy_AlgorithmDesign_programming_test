#include<stdio.h>
#include<math.h>
int judge(int n);
int main()
{
	int M, N;
	int i, j=0, k=1, x=0;
	scanf("%d%d", &M, &N);
	for(i=2; i<=1000000; i++)
	{
		if(judge(i))
		{
			j++;
			if(j >= M && j<N)
			{			
				if(k%10 == 0)
				{
					printf("%d\n", i);
					k++;
					continue;
				}
				else
				{
					printf("%d ", i);
				    k++;
				}
			}
			if(j==N)
			{
				printf("%d", i);
				break; 
			}			
		}
	}
	return 0;
}
int judge(int n)
{
	int i;
	for(i=2; i<=sqrt(n); i++)
	{
		if(n%i == 0)
		{
			break;
		}
	}
	if(i>sqrt(n))
	{
		return 1;
	}
	return 0;
}