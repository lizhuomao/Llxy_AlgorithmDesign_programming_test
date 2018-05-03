#include<stdio.h>//lh 
int main()
{
	const int CLK_TCK=100;
	int t1,t2,h,m,a,t,s;

	scanf("%d %d",&t1,&t2);
	t=(t2-t1)/CLK_TCK;
	
	if(h=t/60/60!=0){
		h=t/60/60;
		if(h>10) printf("%2d",h);
		else printf("0%d",h);
	}
	else printf("00");
	if(m = t/60 - h*60!=0){
		m = t/60 - h*60;
		if(m>10) printf(":%2d",m);
		else printf(":0%d",m);
	}
	else printf(":00");	
	if(	s =t-h*60*60 -m*60!=0){
		s = t - h*60*60 -m*60;
		if(a=t%100>50)s+=1;
		if(s>10) printf(":%2d",s);
		else printf(":0%d",s);
	}
	else printf(":00");	
	return 0;
 } 
