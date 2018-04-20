#include<stdio.h>
int main()
{
int a,b,cnt;
cnt=0;
scanf("%d",&a);
	while(a!=1)
	{
		if(a%2==0)
		a=a/2;
		else
		a=(3*a+1)/2.0;

		cnt++;
	}
printf("%d\n",cnt);
return 0;
}