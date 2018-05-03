#include<stdio.h>
int main()
{
long int a,b;
int da,db,pa=0,pb=0;
scanf("%ld%d%ld%d",&a,&da,&b,&db);
while(a!=0)
{
if(da==a%10)
pa=pa*10+da;
a=a/10;
}
while(b!=0)
{
if(db==b%10)
pb=pb*10+db;
b=b/10;
}
printf("%ld",pa+pb);
return 0;
}