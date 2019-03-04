#include <stdio.h>
#include <math.h>

int main(){
	int mynumber,X,Y;
	scanf("%d%d%d",&mynumber,&X,&Y);
	int i = 0;
	int jia = 0,yi = 0;
	double bing = 0;
	for(jia = 99; jia >= 10; jia--){
		int yi1 = (jia%10)*10 + jia /10;
		double bing2 = (double)abs(jia-yi1)/X;
		if((double)yi1 == bing2*Y){
			yi = yi1;
			bing = bing2;
			break;	
		}
	}
	if(jia <= 9){
		printf("No Solution");
	}else{
		printf("%d",jia);
		if(mynumber == jia){
			printf(" Ping");
		}else if(mynumber < jia){
			printf(" Cong");
		}else if(mynumber > jia){
			printf(" Gai");
		}
		
		if(mynumber == yi){
			printf(" Ping");
		}else if(mynumber < yi){
			printf(" Cong");
		}else if(mynumber > yi){
			printf(" Gai");
		}
		
		if(mynumber == bing){
			printf(" Ping");
		}else if(mynumber < bing){
			printf(" Cong");
		}else if(mynumber > bing){
			printf(" Gai");
		}
	}
	
	printf("\n");
	
	
	return 0;

} 



