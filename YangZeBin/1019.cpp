#include <stdio.h>

int main(){
	int number;
	scanf("%d",&number);
	int arr[4],positivearr[4],negativearr[4];
	int maxnumber,minnumber,result;
	
	arr[0] = number / 1000;
	arr[1] = number / 100 % 10;
	arr[2] = number / 10 % 10;
	arr[3] = number % 10;
	while(1){\
		
		
		int i,j,t;
		for(i = 0; i < 4; i++){
			positivearr[i] = arr[i];
		}
		
		for(i = 0; i < 4; i++){
			for(j = i; j < 4; j++){
				if(positivearr[j] > positivearr[i]){
					t = positivearr[i];
					positivearr[i] = positivearr[j];
					positivearr[j] = t;
				}
				
			}
		}
		
		for(i = 0; i < 4; i++){
			negativearr[3-i] = positivearr[i];
		}
	
		maxnumber = positivearr[0]*1000 + positivearr[1]*100 +positivearr[2]*10 +positivearr[3];
		minnumber = negativearr[0]*1000 + negativearr[1]*100 +negativearr[2]*10 +negativearr[3];
	
		result = maxnumber - minnumber;
		 
	
		printf("%04d - %04d = %04d\n",maxnumber,minnumber,result);
		if(result == 6174 || result == 0) break;
		
		arr[0] = result / 1000;
		arr[1] = result / 100 % 10;
		arr[2] = result / 10 % 10;
		arr[3] = result % 10;
		
	}
	
	return 0;
} 
