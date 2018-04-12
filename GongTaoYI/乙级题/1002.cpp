#include<stdio.h>
int c[5];
int j=0;
int fun(int n);
int main()
{
	char a[100];
	int i, n=0;
	int m,k;
	char *b[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf("%s", a);
	for(i=0; i<100; i++)
	{
		if(a[i]=='\0')
		{
			break;
		}
		n = a[i]+n-'0';
	}
	if(n==0)
	{
		printf("ling");
	}
	fun(n);
	for(i=j;i<5;i++)
		 c[i]=-1;
	for(i=0; c[++i]!=-1; i++)
	{
		m=c[--i];
		printf("%s ", b[m]);
	}
	m=c[--i];
	printf("%s", b[m]);
	return 0;
}
int fun(int n)
{
	if(n/10==0)
	{
		c[j++]=n%10;	
		return n;
	}
    fun(n/10);
    c[j++]=n%10;
	
}