#include <stdio.h>
#include <math.h> 

int main(){
	
	//0-9 a-z  A-Z
//	  0-9 10-35 36-61
//	*-'0';		*-a+10; *-A+36;
	int beadcount[28] = {0,};	
	int maxcount=0,i = 0;
	char a,b;
	
	while((a = getchar()) != '\n'){
		if((a >= 'a') && (a <= 'z')){
			beadcount[a-97]++;
			
		}else if((a >= 'A') && (a <='Z')){
			beadcount[a-65]++;
			
		}
	}
	for(i = 0; i < 26; i++){
		if(beadcount[i] > maxcount){
			maxcount = beadcount[i];
			b = 'a'+ i;
		}
	}
	
	
	if(maxcount != 0){
		printf("%c %d",b,maxcount);
	}
	
	
	return 0;
}




