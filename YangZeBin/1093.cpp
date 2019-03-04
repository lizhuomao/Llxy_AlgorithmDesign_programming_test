#include <stdio.h>
#include <math.h>

int main(){
	char c;
	int ascii[127] = {0};
	
	int flag = 0;
	while(1){
		if(flag >= 2){
			break;
		}
		c = getchar();
		if(c == '\n'){
			flag++;
			continue;
		}
		
		int i;
		
		if(ascii[(int)c] == 1){
			continue;
		}  
		else{
			printf("%c",c);
			ascii[(int)c] = 1;
		}
	
		
	}
	
	
	return 0;
} 
