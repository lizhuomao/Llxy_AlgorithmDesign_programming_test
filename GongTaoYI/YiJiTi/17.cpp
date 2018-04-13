#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	char b[1000];
	int n, len;
	int i=0, j=0, k=0;
	int h=0, m=0;
	scanf("%s", a);
	scanf("%d", &n);
	len = strlen(a);
	if(a[i]>n)
	{
		b[j++] = (a[i]-'0')/n+'0';
		m = (a[i]-'0')%n;
	}
	else{
		m = a[i]-'0';
	}
	for(i=1; i<len; i++)
	{
		if((m*10+(a[i]-'0'))<n)
		{
			b[j++] = 48;
			m = (m*10+(a[i]-'0'))%n;
			continue;
		}
		b[j++] = (m*10+(a[i]-'0'))/n+'0';
		m = (m*10+(a[i]-'0'))%n;
	}
	b[j]='\0';
	len = strlen(b);
	j = 0;
	if(len==1&&b[0=='0'])
	{
		printf("0");
	}
	for(i=0; i<len; i++)
	{
		if(b[j]=='0' && k == 0)
		{
			j++;
			continue;
		}
		else
		{
			k++;
		}
		printf("%c", b[i]);
	}
	printf(" %d", m);
	return 0;
}