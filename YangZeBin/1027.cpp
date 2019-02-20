#include <stdio.h>

int main(){
	int number;
	char c;
	scanf("%d %c",&number,&c);
	
	int i = 1, j = 0;
	int result;
	result = i;
	int ca,space;
	
	while((result +  2 * (i+=2)) <= number){
		result += 2 * (i);
//		printf("%d  %d\n",result,i);
	}
	
	ca = number - result;
	space = i -2;
	int flag = 0;
	while(result > 0){
		if(i == 1){
			flag = 1;
		}
		if(flag == 1){
			i += 2;
		}else if(flag == 0){
			i -= 2;
		}
		for(j = 0; j < (space - i) /2; j++){
			printf(" ");
		}
		
		for(j = 0; j < i; j++){
			printf("%c",c);
		}
		printf("\n");
		result -=  i;
	
	}
	printf("%d",ca);
	
	return 0;
}




