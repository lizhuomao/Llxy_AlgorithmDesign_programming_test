#include<stdio.h>
void main()
{
int a,b,cnt;
cnt=0;
printf("请输入一个小于1000的整数:");
scanf("%d",&a);
	while(a!=1)
	{
		if(a%2==0)
		{a=a/2.0;
		cnt++;}
		else
		a=(3*a+1)/2.0;
	}
printf("共需要%d步得到1\n",cnt);
}