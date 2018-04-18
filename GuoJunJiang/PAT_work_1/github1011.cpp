#include<stdio.h>
int main()
{
long int A,B,C;
int T,E;
scanf("%d",&E);
for(T=1;T<=E;T++)
{
scanf("%ld%ld%ld",&A,&B,&C);
if(A+B>C)
printf("Case #%d: true\n",T);
else
printf("Case #%d: false\n",T);
}
return 0;
}