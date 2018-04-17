#include<stdio.h>
int main()
{
  int n,count;
  scanf("%d",&n);
  count=0;
  while(n!=1)
  {
    if(n%2==0)
	{
	n=n/2;
    count++;
	}	  
	else
	{
	n=(n*3+1)/2;
    count++;
	}
  }
  printf("%d\n",count);
return 0; 
}
