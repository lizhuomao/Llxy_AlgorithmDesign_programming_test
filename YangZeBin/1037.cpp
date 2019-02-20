#include <stdio.h>
#include <math.h> 

int main(){
	int g1,g2,s1,s2,k1,k2;
	scanf("%d.%d.%d",&g1,&s1,&k1);
	scanf("%d.%d.%d",&g2,&s2,&k2);
	int r1,r2;
	r1 = g1*29*17 + s1*29 + k1;
	r2 = g2*29*17 + s2*29 + k2;
	
	int finalr;
	
	int g3,s3,k3;
	if(r2 - r1 < 0){
		printf("-");
		finalr = r1 - r2;
	}else{
		
		finalr = r2 - r1;
	}
	g3 = finalr / (29 * 17);
	s3 = (finalr - (29 * 17 * g3)) / 29;
	k3 =  (finalr - (29 * 17 * g3) - (29 * s3));
	printf("%d.%d.%d",g3,s3,k3);
	
	;
}




