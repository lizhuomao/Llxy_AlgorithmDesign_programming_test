#include<stdio.h>
int main()
{
	int i, j, temp=1, a[1001],b[1001];
	for(i=0; i<1000; i++){
		scanf("%d %d", &a[i], &b[i]);
		if(b[i] == 0){
			break;
		}
	}
	if(i == 0){
		printf("0 0");
		return 0;
	}
	for(j=0; j<=i; j++){
		if(b[j] == 0 || a[j] == 0){
			continue;
		}
		if(temp == 1){
			printf("%d %d", a[j]*b[j], b[j]-1);
			temp=0;
		}else{
			printf(" %d %d", a[j]*b[j], b[j]-1);
		}
	}
	return 0;
}