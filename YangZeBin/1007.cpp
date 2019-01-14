#include <stdio.h>
#include <math.h>

int main(){
	 int a,i,q;
	 scanf("%d",&q);
	int count = 0, preprime = 2;
	 for(i = 2; i <= q; i++){
	 	a = IsPrime(i);
		if(a == 1){
			if(i - preprime == 2){
				count++;
			}
			preprime = i;
	 		
	 	}
	 }
	 printf("%d",count);
	return 0;
}

int IsPrime(int data){
	int i;
	for(i = 2; i <= (int)(sqrt(data))+1; i++){
		if(data % i == 0){
			return -1;
		}
	}
	return 1;
} 


