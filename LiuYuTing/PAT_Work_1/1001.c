#include<stdio.h>
int main()
{
  int n,i=0;
  scanf("%d",&n);
    for(;n!=1;i++)
    {
     if(n%2==1)
       n=(n*3+1)/2;
     else
       n=n/2;
    }
  printf("%d",i);
  return 0;
}
