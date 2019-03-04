#include <stdio.h>
#include <math.h>
int main(){
	int number;
	scanf("%d",&number);
	int i;
	for(i = 0; i < number; i++){
		int a;
		scanf("%d",&a);
		int result,result2;
		int j = 0;
		for(j = 1; j < 10; j++){
			result = pow(a,2) * j;
			result2 = result;
			if(a < 10){
				int result1 = result /10 * 10;
				result = result - result1;
			}else if(a < 100){
				int result1 = result /100 * 100;
				result = result - result1;
			}else if(a < 1000){
				int result1 = result /1000 * 1000;
				result = result - result1;
			}
			
			if((int)result == a){
				printf("%d %d\n",j,result2);
				break;
			}
		}
		if(j == 10){
			printf("No\n");
		}
		
	} 
	
	return 0;

} 



