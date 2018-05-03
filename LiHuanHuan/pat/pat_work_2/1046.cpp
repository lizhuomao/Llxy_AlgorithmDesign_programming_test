#include<stdio.h>//lh
int main()
{
	int a,i,a3=0,b3=0;
	scanf("%d",&a);
	int a1[a],a2[a],b1[a],b2[a];
	for(i=0;i<a;i++){
		scanf("%d" "%d" "%d" "%d",&a1[i],&a2[i],&b1[i],&b2[i]);
	
	}	
	for(i=0;i<a;i++){
		
		if(a1[i]+b1[i]==a2[i]&&a1[i]+b1[i]==b2[i])
		continue;
		if(a1[i]+b1[i]==a2[i]) b3++;		
		if(a1[i]+b1[i]==b2[i]) a3++;
	}
	printf("%d %d",a3,b3);
	return 0;
}
