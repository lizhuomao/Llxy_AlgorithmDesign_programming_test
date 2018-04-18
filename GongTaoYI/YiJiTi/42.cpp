#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int len, i, max;
	int b[26]={0};
	gets(a);
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		if(a[i]>='a' && a[i]<='z')
		{
			b[a[i]-'a']++;
		}
	}
	max = 0;
	for(i=0; i<26; i++)
	{
		if(b[i]>max)
		{
			max=b[i];
		}
	}
	for(i=0; i<26; i++)
	{
		if(b[i]==max)
		{
			printf("%c %d\n", i+'a', max);
			break;
		}
	}
	return 0;
}