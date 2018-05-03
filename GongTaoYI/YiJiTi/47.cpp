#include<stdio.h>
int main()
{
	int a[1000]={0};
	int n, i;
	int x, y, z;
	int max[2]={0};
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d-%d %d", &x, &y, &z);
		a[x]=a[x]+z;
	}
	for(i=0; i<1000; i++)
	{
		if(a[i]>max[0])
		{
			max[0]=a[i];
			max[1]=i;
		} 
	}
	printf("%d %d", max[1], max[0]);
	return 0;
}