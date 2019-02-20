#include <stdio.h>
#include <math.h> 

int main(){
	
	//0-9 a-z  A-Z
//	  0-9 10-35 36-61
//	*-'0';		*-a+10; *-A+36;
	int beadcount[63] = {0};
	int lackcount = 0;
	
	char a;
	while((a = getchar()) != '\n'){
		if((a >= '0') && (a <='9')){
			beadcount[a-'0']++;
		}else if((a >= 'a') && (a <= 'z')){
			beadcount[a-'a'+10]++;
		}else if((a >= 'A') && (a <="Z")){
			beadcount[a-'A'+36]++;
		}
	}
	
	while((a = getchar()) != '\n'){
		if((a >= '0') && (a <='9')){
			if(beadcount[a-'0'] == 0){
				lackcount++;
			}else{
				beadcount[a-'0']--;
			}
			
		}else if((a >= 'a') && (a <= 'z')){
			if(beadcount[a-'a'+10] == 0){
				lackcount++;
			}else{
				beadcount[a-'a'+10]--;
			}
		}else if((a >= 'A') && (a <="Z")){
			if(beadcount[a-'A'+36] == 0){
				lackcount++;
			}else{
				beadcount[a-'A'+36]--;
			}
		}
	}
	
	int pcount = 0,i;
	for(i = 0; i < 63; i++){
		pcount+=beadcount[i];
	}
	
	if(lackcount > 0){
		printf("No %d",lackcount);
	}else{
		printf("Yes %d",pcount);
	}
	
	;
}




