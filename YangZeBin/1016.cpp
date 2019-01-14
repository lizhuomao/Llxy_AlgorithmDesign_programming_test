#include <stdio.h>

int main(){
	long data1[2],data2[2];
	int i;
	for(i = 0; i < 2; i++){
	    scanf("%ld",&data1[i]);
	}
	for(i = 0; i < 2; i++){
	    scanf("%ld",&data2[i]);
	}
	
	long temp1 = data1[0],count1 = 0;
	long temp2 = data2[0],count2 = 0;
	while(temp1 != 0){
	   // count1 += (temp1 % 10);
	    if((temp1 % 10) == data1[1]){
	        count1 = count1 * 10 + (temp1 % 10);
	    }
	    temp1 /= 10;
	    
	   // printf("%d\n",temp1);
	}
	
	while(temp2 != 0){
	   // count1 += (temp1 % 10);
	    if((temp2 % 10) == data2[1]){
	        count2 = count2 * 10 + (temp2 % 10);
	    }
	    temp2 /= 10;
	    
	   // printf("%d\n",temp1);
	}
	
	printf("%d",count2 + count1);
	
	return 0;
}


