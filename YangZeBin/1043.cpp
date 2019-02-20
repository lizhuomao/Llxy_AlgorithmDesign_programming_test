#include <stdio.h>

int main(){
	
	//PATest 
	int beadcount[128] = {0,};	

	char a;
	
	while((a = getchar()) != '\n'){
		beadcount[a]++;
	}
	while(beadcount['P']>0 || beadcount['A']>0 || beadcount['T']>0 || beadcount['e']>0 || beadcount['s']>0 || beadcount['t']>0 ){
		if(beadcount['P']-- > 0) printf("P");
		if(beadcount['A']-- > 0) printf("A");
		if(beadcount['T']-- > 0) printf("T");
		if(beadcount['e']-- > 0) printf("e");
		if(beadcount['s']-- > 0) printf("s");
		if(beadcount['t']-- > 0) printf("t");		
		
	}
	
	return 0;
	
}




