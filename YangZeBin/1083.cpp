#include <stdio.h>
#include <math.h>

int main(){
	int number;
	scanf("%d",&number);
	int ca[20010] = {0};
	int i = 0,a;
	for(i = 0; i < number; i++){
		scanf("%d",&a);
		ca[abs(a-(i+1))]++;
	} 
	
	for(i = 20009;i>=0;i--){
		if(ca[i] > 1){
			printf("%d %d\n",i,ca[i]);
		}
	}
	
	
	
	return 0;

} 



