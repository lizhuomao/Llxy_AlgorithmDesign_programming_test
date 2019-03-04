#include <stdio.h>
#include <math.h>

int main(){
	int number;
	scanf("%d",&number);
	int i = 1;
	int count[20100] = {0};
	for(i = 1; i <= number; i++){
		int n2 = 0; 
		n2 = floor(i/2);
		int n3 = 0;
		n3 = floor(i/3);
		int n5 = 0;
		n5 = floor(i/5);

		count[n2+n3+n5] = 1;
	} 
	int countnumber = 0;
	for(i = 0; i < 20010; i++){
		if(count[i] == 1){
		 	countnumber++;
		}	
	}
	printf("%d",countnumber);
	
	
	
	
	return 0;

} 



