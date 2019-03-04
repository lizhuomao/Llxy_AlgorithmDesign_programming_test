#include <stdio.h>

int main(){
    int lines,i,j;
    scanf("%d",&lines);
	char data[lines][4][4];
	for(i = 0; i < lines; i++){
		for(j = 0; j < 4; j++){
			scanf("%s",&data[i][j]);
		}
	}
	
	for(i = 0; i < lines; i++){
		for(j = 0; j < 4; j++){
			if(data[i][j][2] == 'T'){
				switch(data[i][j][0]){
					case('A'): printf("1");break;
					case('B'): printf("2");break;
					case('C'): printf("3");break;
					case('D'): printf("4");break;
				}
			} 
		}
	}
	
	return 0; 
}


