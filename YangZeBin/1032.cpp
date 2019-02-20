#include <stdio.h>

int main(){
	int number,bianhao,score,max = 0,flag = 0;
	scanf("%d",&number);
	int a[100001] = {0};
	while(number--){
		scanf("%d%d",&bianhao,&score);
		a[bianhao] += score;
	}
	int i,j;
	for(i = 0; i < 100000;i++){
		if(a[i] > max){
			max = a[i];
			j = i;
		}
	}
	
	printf("%d %d\n",j,max);
	return 0;
}




