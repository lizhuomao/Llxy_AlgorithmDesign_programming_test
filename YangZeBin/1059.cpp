#include <stdio.h>
#include <string.h>
#include <math.h>
int IsPrime(int a);
int main(){
	int number;
	scanf("%d",&number);
	int data[10100] = {0};
	int i = 0,j= 0;
	for(; i < number; i++){
		int a;
		scanf("%d",&a); 
		data[a] = ++j;
	}
	
	int querynumber;
	scanf("%d",&querynumber);
	for(i = 0; i < querynumber; i++){
		int a;
		scanf("%d",&a);
		if(data[a] == 0){
			printf("%04d: Are you kidding?\n",a);
		}else if(data[a] == -1){
			printf("%04d: Checked\n",a);
		}
		
		if(data[a] == 1){
			printf("%04d: Mystery Award\n",a);
			data[a] = -1;
		}else if(data[a] > 1 && IsPrime(data[a]) == 1){
			printf("%04d: Minion\n",a);
			data[a] = -1;
		}else if(data[a] >1){
			printf("%04d: Chocolate\n",a);
			data[a] = -1;
		}
	}

	
	return 0;

} 

int IsPrime(int data){
	int i;
	for(i = 2; i <= (int)(sqrt(data))+1; i++){
		if(data % i == 0){
			return 0;
		}
	}
	return 1;
}

