#include <stdio.h>
int main(){
	int number;
	scanf("%d",&number);
	int data[number];
	int count[100000] = {0};
	int i,j,max = 0;
	for(i = 0; i < number; i++){
		scanf("%d",&data[i]);
		if(data[i] > max){
			max = data[i];
		}
	} 
	
	for(i = 0; i < number; i++){
		int a = data[i];
		while(a != 1){
			count[a]++;
			if(a % 2 == 0){
				a = a/2;
			}else{
				a = (a*3+1)/2;
			}
			
		}
		
	} 
	;
	int flag = 0;
	for(i = max; i >= 0 ; i--){
		for(j = 0; j < number; j++){
			if(data[j] == i && count[i] == 1){
				
				if(flag == 0){
					flag = 1;
				}else{
					printf(" ");
				}
				printf("%d",data[j]);
				break;
			}
		}
		
	}
	return 0;
}
