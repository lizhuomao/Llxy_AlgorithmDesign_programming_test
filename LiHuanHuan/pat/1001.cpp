#include<stdio.h> 
int main()
{
  long i=0;
  int cout=0;
  scanf("%ld",&i);
  {    while(i!=1)     
    {  
    if(i%2==0){
    i=i/2;
    cout++;
      }
    else
    {i=((3*i+1)/2);
    cout++;
    }
    } 
    printf("%d\n",cout);}
  return 0;
}	
