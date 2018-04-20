#include<stdio.h>
int main()
{
	char a[1000];
	int i,j;
	int b[10]={0};
	scanf("%s", a);
	for(i=0; a[i]!='\0'; i++)
	{
		j=a[i]-'0';
		b[j]++;
	}
	for(i=0; i<10; i++)
	{
		if(b[i]!=0)
		{
			printf("%d:%d\n", i, b[i]);
		}
	}
	return 0;
}