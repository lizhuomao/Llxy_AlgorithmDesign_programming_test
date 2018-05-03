#include<stdio.h>//lh
int main()
{
  int n=0,i=0,j=0,k=0;
  scanf("%d",&n);
  if(n<1000){
    i=n/100;
    j=(n-i*100)/10;
    k=((n-i*100)-j*10);
  }
  for(int a=0;a<i;a++)
    printf("B");
  for(int a=0;a<j;a++)
    printf("S");
  for(int a=1;a<=k;a++)
    printf("%d",a);
  return 0;  
}
