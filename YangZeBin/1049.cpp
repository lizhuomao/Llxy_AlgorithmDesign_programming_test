#include <stdio.h>

int main(){
	int number;
	scanf("%d",&number);
	int i;
	double a,sum = 0.0;
	for(i = 0; i < number; i++){
		scanf("%lf",&a);
		sum += a*(i+1)*(number-i);
	} 
	
	printf("%.2lf",sum);
	return 0;
} 
