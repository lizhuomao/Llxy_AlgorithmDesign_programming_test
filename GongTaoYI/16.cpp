#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], b[100];
	int n, m;
	int i, j=0, k=0;
	int len1, len2;
	char c=0, d=0;
	scanf("%s%d%s%d", a, &n, b, &m);
	len1 = strlen(a);
	len2 = strlen(b);
	for(i=0; i<len1; i++)
	{
		if(a[i]==(n+'0'))
		{
			c=c*10+n;
		}
	}
	for(i=0; i<len2; i++)
	{
		if(b[i]==(m+'0'))
		{
			d=d*10+m;
		}
	}
	printf("%d", c+d);
	return 0;
}