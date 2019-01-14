#include <stdio.h>
#include <math.h>

int main(){
	int count = 1;
	int M,N;
	scanf("%d%d",&M,&N);
	int a = 2, result = 0;
	while(count <= N){
		if((result = IsPrime(a)) == 1){
			
			if(count >= M){
				printf("%d",a);
				if((count + 1 -M) % 10 != 0 && count != N){
					printf(" ");
				}else if((count + 1 -M) % 10 == 0){
					printf("\n");
				}
			}
			
			count++;
		}
		
		a++;
	}
	
	return 0;
}

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


