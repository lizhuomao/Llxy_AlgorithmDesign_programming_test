#include <stdio.h>
#include <string.h>

int main(){
	char arr[1010];
	int chushu,yushu,temp = 0;
	scanf("%s",arr);
	scanf("%d",&chushu);
	int i = 0;
	//判断第一个数是不是大于除数
	//如果大于，直接用他除，得到余数*10+下个数、
	//如果小于，这个数*10 + 下个数。
	//如果这个
	if(strlen(arr) == 1 && (arr[i] - '0') < chushu){
		printf("%d",0);
	}
	
	if((arr[i] - '0') < chushu){
		temp = (arr[i] - '0');
		
	}else if(arr[i] - '0' >= chushu){
		printf("%d",(arr[i] - '0') / chushu);
		temp = (arr[i] - '0') % chushu;
	}
	for(i = 1;i < strlen(arr);i++){
		temp = temp * 10 +  (arr[i] - '0');
		if(temp < chushu) {
			printf("%d",0);continue;
		}
		printf("%d",temp / chushu);
		temp = temp % chushu;

	} 
	
	printf(" %d",temp);
	
	return 0;
}




