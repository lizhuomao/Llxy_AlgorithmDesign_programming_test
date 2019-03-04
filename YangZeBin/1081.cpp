#include <stdio.h>

int main(){
    int lines,i,j = 0,number = 0,letter = 0,dot = 0;
    scanf("%d",&lines);
    getchar();
	char data[lines][81];
	for(i = 0; i < lines; i++){
		j = 0;
		while((data[i][j++] = getchar()) != '\n');
	}
	int count = 0;
	for(i = 0; i < lines; i++){
		j = 0;
		while(data[i][j] != '\n'){
			count++;
			if(data[i][j] <= '9' && data[i][j] >= '0'){
				number++;
			}else if((data[i][j] <= 'Z' && data[i][j] >= 'A')|| (data[i][j] <= 'z' && data[i][j] >= 'a')){
				letter++;
			}else if(data[i][j] == '.'){
				dot++;
			}
			j++;
		}
		
		if(count < 6){
			printf("Your password is tai duan le.\n");
		}else if(number + dot == count && number != 0 ){
			printf("Your password needs zi mu.\n");
		}else if(letter + dot == count && letter != 0 ){
			printf("Your password needs shu zi.\n");
		}else if(letter + number + dot == count && letter != 0 && number != 0){
			printf("Your password is wan mei.\n");
		}else{
			printf("Your password is tai luan le.\n");
		}
		count = 0;number = 0;letter = 0;dot = 0;
		
	}
	
	return 0; 
}


