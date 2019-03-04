#include <stdio.h>
#include <math.h>
int gcd(int a, int b){
	return b == 0 ? a : gcd(b,a%b) ;
}
void swap(int*a, int * b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n1,n2,m1,m2,k;
	scanf("%d/%d%d/%d%d",&n1,&m1,&n2,&m2,&k);
	if(n1 * m2 > n2 * m1){
		swap(&n1,&n2);
		swap(&m1,&m2);
	}
	
	int num = 1;
	int flag = 0;
	for(;n1*k >= m1*num;num++);
	while(m2 * num < n2 * k){
		if(gcd(num,k) == 1){
			printf("%s%d/%d",flag == 0 ? "" : " ",num,k);
			flag = 1;
		}
		num++;
	}
	
	; 
	
	return 0;
} 
