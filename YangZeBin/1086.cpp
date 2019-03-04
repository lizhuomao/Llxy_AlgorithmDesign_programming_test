#include <stdio.h>
#include <math.h>



int main(){
	int number1,number2;
	scanf("%d%d",&number1,&number2);
	long number3;
	number3 = number1 * number2;
// 	printf("%d\n",number3);
	int arr[8] = {-1,-1,-1,-1,-1,-1,-1,-1},a = 0;
	
	while(number3 != 0){
	    arr[a++] = (number3 % 10);
	   // printf("%d ",arr[a-1]);
	    number3 /= 10;
	}
	long result = 0;
	a = 0;
	while(arr[a] != -1){
	    result = result * 10 + arr[a++];
	}
	
	printf("%d",result);
}


