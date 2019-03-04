#include <stdio.h>
#include <string.h>

int main(){
	int number;
	scanf("%d",&number);
	int penyou[50] = {0};
	int i = 0;
	int acount = 0;
	for(;i < number; i++){
		char a[5];
		scanf("%s",a);
		int count = 0;
		int j = 0;
		while(a[j] != '\0'){
			count += a[j] - '0';
			j++;
		}
		penyou[count] = 1;
		
	}
	
	int j = 0;
	int b[41] = {0};
	
	
	for(i = 0 ; i < 41;i++){
		if(penyou[i] == 1){
			b[j++] = i;
			acount++;
		}
	}
	
	printf("%d\n",acount);
	for(i = 0 ; i < j;i++){
		
		printf("%d",b[i]);
		if(i < j-1){
			printf(" ");
		}
	}
	return 0;
} 
