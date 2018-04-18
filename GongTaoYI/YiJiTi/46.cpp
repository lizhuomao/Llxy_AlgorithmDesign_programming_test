#include<stdio.h>
int main()
{
	int a[100], b[100], c[100], d[100];
	int n, i;
	int jia=0, yi=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
	}
	for(i=0; i<n; i++)
	{
		if(a[i]+c[i]==b[i])
		{
			if(a[i]+c[i]==d[i])
			continue;
			yi++;
		}
		if(a[i]+c[i]==d[i])
		{
			if(a[i]+c[i]==b[i])
			continue;
			jia++;
		}
	}
	printf("%d %d", jia, yi);
	return 0;
}