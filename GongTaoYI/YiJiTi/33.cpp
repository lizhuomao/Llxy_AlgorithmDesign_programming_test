#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000], b[200];
	int i, j, count=0, sum=0, sum1=0;
	int len, len1;
	gets(b);
	scanf("%s", a);
	len = strlen(a);
	len1 = strlen(b);
	for(j=0; j<len1; j++)
	{
		if(b[j]=='+')
		{
			count = 1;
		}
	}
	if(count)
	{
		for(i=0; i<len; i++)
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				continue;
			}
			for(j=0;j<len1; j++)
			{
				if(a[i]==b[j])
				{
					sum = 1;
					break;
				}
				if(a[i]==b[j]+32)
				{
					sum=1;
					break;
				}
			}
			if(sum)
			{
				sum=0;
				continue;
			}
			else
			{
				sum1=1;
				printf("%c", a[i]);
			}
		}
	}
	else
	{
		for(i=0; i<len; i++)
		{
			for(j=0;j<len1; j++)
			{
				if(a[i]==b[j])
				{
					sum=1;
					break;
				}
				if(a[i]>='a' && a[i]<='z' && a[i]==b[j]+32)
				{
					sum=1;
					break;
				}
			}
			if(sum)
			{
				sum=0;
				continue;
			}
			else
			{
				sum1=1;
				printf("%c", a[i]);
			}
		}
	}
	if(sum1 == 0)
	{
		printf("\n");
	}
	return 0;
}