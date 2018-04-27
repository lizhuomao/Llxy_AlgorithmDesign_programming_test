#include<stdio.h> 
#include<math.h>//lh 
int main()
{
  int b=4;
  int i=0,a[6],j=0;
  int cout=0,c[2]={0,0};
  for(i=0;i<4;i++)
  scanf("%d",&a[i]);
  //每次数除十  取余十 为数的最后一位 
  for(int k=0;k<3;k=k+2)
  while(1){
  	
  	j=a[k]%10;
  	a[k]=a[k]/10;
  	
  	if(j==a[k+1])
  	cout++;
  
  	if(a[k]==0){
	  	a[b]=cout;
	 	 b++;cout=0;
	 	 
    	break;
  	}
  }
  
  
  for(int x=0,i=4;a[i]!=0;a[i]--){ 
    
	c[0]=c[0]+a[1]*pow(10,x++);
  }
   for(int x=0,i=5;a[i]!=0;a[i]--){ 
   
	c[1]=c[1]+a[3]*pow(10,x++);
  }
  printf("%d",c[0]+c[1]); 
  
  

  return 0;
}
