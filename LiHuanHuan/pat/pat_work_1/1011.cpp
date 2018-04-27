#include<stdio.h>//lh 
int main()
{
  	int n,i;
  	scanf("%d",&n);
  
  	long a[n+1],b[n+1],c[n+1];
    for(i=0;i<n;i++){
	scanf("%ld" "%ld" "%ld",&a[i],&b[i],&c[i]);
	}
	
 	for(i=0;i<n;i++){
 		printf("Case #%d: %s\n",i+1,a[i]+b[i]>c[i]?"true":"false");
  	
 	 }
 	

	return 0;  
}
