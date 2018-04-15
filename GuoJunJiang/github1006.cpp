#include<stdio.h>
int main()
{
int a,b,s,c,i;
printf("请输入一个三位整数");
scanf("%d",&a);
b=a/100;
s=a%100/10;
c=a%100%10;
	for(i=1;i<=b;i++)
	{printf("B");}
		for(i=1;i<=s;i++)
		{printf("S");}
			for(i=1;i<=c;i++)
			{printf("%d",i);}
				printf("\n");
	return 0;
}
