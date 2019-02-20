#include <stdio.h>
#include <string.h>

int main(){
	int number,day;
	float e;
	scanf("%d%f%d",&number,&e,&day);
//	printf("%d %f %d",number,e,day);
	int i;
	int kenengzhikong = 0, zhikong = 0;
	char data[number][6000];
	for(i = 0; i < number; i++){
		int diancount = 0;
		int daynumber,j;
		scanf("%d",&daynumber);
		float a[daynumber];
		for(j = 0 ; j < daynumber; j++){
			scanf("%f",&a[j]);
		}
		if(daynumber <= day){
			for(j = 0; j < daynumber; j++){
				if(a[j] < e){
					diancount++;
				}
			}
			if(diancount * 2  > daynumber){
				kenengzhikong++;
			}
		}else if(daynumber > day){
			for(j = 0; j < daynumber; j++){
				if(a[j] < e){
					diancount++;
				}
			}
			if(diancount * 2  > daynumber){
				zhikong++;
			}
		}
		
	}
	
	printf("%2.1f%% %2.1f%%",(float)kenengzhikong/number*100,(float)zhikong/number*100);
	
	return 0;
} 
