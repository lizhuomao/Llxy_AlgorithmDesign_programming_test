#include<stdio.h>
#include<string.h>
int judge(int a, char c[]);
int main()
{
	char a[82], b[82];
	char c[82];
	int i, j=0, k=0, l;
	int len, len1;
	scanf("%s %s", a, b);
	len = strlen(a);
	len1 = strlen(b);
	for(i=0; i<len; i++)
	{
		if(a[i]==b[j]&&j<len1)
		{
			j++;
		}
		else
		{
			if(a[i]<='z' && a[i]>='a')
			{
				a[i]=a[i]-32;
			}
			if(judge(a[i], c))
			continue;
			else
			c[k++]=a[i];
		}
	}
	for(i=0; i<k; i++)
	printf("%c", c[i]);
	return 0;
}
int judge(int a, char c[])
{
	int i;
	int len;
	len = strlen(c); 
	for(i=0; i<len; i++)
	{
		if(a==c[i])
		{
			return 1;
		}
	}
	return 0;
}