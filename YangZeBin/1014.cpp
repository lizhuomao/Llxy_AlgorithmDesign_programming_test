#include <stdio.h>
#include <math.h>

int main(){
	char data[4][61]; 
	int i,j = 0,flag = 0;
	for(i = 0; i < 4; i++){
		j = 0;
		while((data[i][j++] = getchar()) != '\n');
		 
	}
	i = 0;
	char firstletter,secondletter;
	while(data[0][i] != '\n' && data[1][i] != '\n'){
		if( flag == 1 && ((data[0][i] >= 'A' && data[0][i] <= 'N') || (data[0][i] >= '0' && data[0][i] <= '9'))){
			if(data[0][i] == data[1][i] ){
				secondletter = data[0][i];
				break;
			}
		} 
		
		else if(data[0][i] >= 'A' && data[0][i] <= 'G'){
			
		    if(data[0][i] == data[1][i]){
				flag = 1;
				firstletter = data[0][i];
			}
		}
		i++;
	}
	
	
	int minute = 0;
	
	
	i = 0;
	while(data[2][i] != '\n' && data[3][i] != '\n'){
		if((data[2][i] >= 'A' && data[2][i] <= 'Z' )||(data[2][i] >= 'a' && data[2][i] <= 'z' ) ){
			if(data[2][i] == data[3][i]){
				minute = i;
			}
		}
		i++;
	}
	
//	printf("%c %c",firstletter,secondletter);
	
	switch(firstletter){
		case('A'): printf("MON");break;
		case('B'): printf("TUE");break;
		case('C'): printf("WED");break;
		case('D'): printf("THU");break;
		case('E'): printf("FRI");break;
		case('F'): printf("SAT");break;
		case('G'): printf("SUN");break;
	}
	
	if((secondletter >= 'A' && secondletter <= 'N')){
		printf(" %02d:",secondletter-'A'+10);
	}else if((secondletter >= '0' && secondletter <= '9' )){
		printf(" %02d:",secondletter-'0');
	}
	
	printf("%02d",minute);
	return 0;
}



