#include<stdio.h>
int main(){
	int n, i;
	long long int a, b, c;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%lld %lld %lld", &a, &b, &c);
		if(a+b>c){
			printf("Case #%d: true\n", i+1);
		}else{
			printf("Case #%d: false\n", i+1);
		}
	}
	return 0;
} 