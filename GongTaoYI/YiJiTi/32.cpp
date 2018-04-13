#include<stdio.h>
int main()
{
	int n;
	int i;
	int number, score;
	int a[100000]={0};
	int max=0, num=1;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d%d", &number, &score);
		a[number]+=score;
		if(a[number]>max)
		{
			max=a[number];
			num=number;
		}
	}
	printf("%d %d", num, max);
	return 0;
}