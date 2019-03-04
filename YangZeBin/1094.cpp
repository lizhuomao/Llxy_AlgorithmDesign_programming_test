#include <stdio.h>
#include <math.h>
int IsPrime(int data){
	int i;
	if(data == 2) return 1;
	for(i = 2; i <= (int)(sqrt(data))+1; i++){
		if(data % i == 0){
			return -1;
		}
	}
	return 1;
} 


int main(){
	int total,weishu;
	scanf("%d%d",&total,&weishu);
	char data[total];
	int i,j,digit = 0;
	scanf("%s",data);
	for(j = weishu-1; j < total; j++){
		int digit = 0;
		for(i = j-weishu+1; i <= j;i++){
			digit = digit * 10 + (data[i]-'0');
		}
		if(IsPrime(digit) == 1){
			printf("%0*d",weishu,digit);
			return 0;
		}
	}
	printf("%d",404);
	
	return 0;
} 
