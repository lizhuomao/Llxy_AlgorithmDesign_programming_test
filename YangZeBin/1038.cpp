#include <stdio.h>
#include <math.h> 

int main(){
	int number,score[102];
	scanf("%d",&number);
	int i = 1;
	
	for(i = 0; i < 101; i++){
		score[i] = 0;
	}
	int a;
	for(i = 0; i < number; i++){
		scanf("%d",&a);
		score[a]++;
	}
	
	int selectnumber;
	scanf("%d",&selectnumber);
	
	for(i = 0; i < selectnumber; i++){
		scanf("%d",&a);
		printf("%d",score[a]);
		if(i < selectnumber-1){
			printf(" ");
		}
		
	}

	return 0;
}




