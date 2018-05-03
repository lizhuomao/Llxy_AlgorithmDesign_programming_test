#include <stdio.h>
#include <math.h>

//1036 和奥巴马一起编程 
int main ()
{
	int N;
	char ct;
	scanf("%d%*c%c", &N, &ct);
	int i, j; 
	int M = round(N / 2.0);
	for (i = 0; i < N; i++)
	{
		printf("%c", ct);
	}
	for (i = 2; i < M; i++)
	{
		printf("\n%c", ct);
		for (j = 2; j < N; j++)
		{
			printf(" ");
		}
		printf("%c", ct);
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		printf("%c", ct);
	}
	
	return 0;
}
