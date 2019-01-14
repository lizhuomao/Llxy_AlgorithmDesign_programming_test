#include <stdio.h>
#include <string.h>

int main(){
	long long number1,number2,jinzhi;
	int arr[10000] = {-1};
	long i = 0;
	scanf("%d%d%d",&number1,&number2,&jinzhi);
	long long result = number1 + number2;

	long long yushu,shang;
	
	while(result >= jinzhi){
		shang = result / jinzhi;
		yushu = result % (jinzhi * shang);
		arr[i++] = yushu;
		result = shang; 
	} 
	arr[i++] = result;
	
	while(--i >= 0){
		printf("%d",arr[i]);
	}
	
	return 0;
}




